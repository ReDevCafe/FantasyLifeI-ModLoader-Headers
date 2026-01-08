#ifndef ASYNC_REGISTRY_BINDER_HPP
#define ASYNC_REGISTRY_BINDER_HPP

#include "API/Registry/RegistrySource.hpp"
#include <future>
#include <memory>

template<typename Value>
class AsyncRegistryBinder 
{
  public:
  using BindCallback = std::function<void(std::shared_ptr<RegistrySource<Value>>)>;
  
  std::future<std::shared_ptr<RegistrySource<Value>>> BindAsync
  (
    std::function<std::shared_ptr<RegistrySource<Value>>()> bindFunc,
    BindCallback onComplete = nullptr)
    {
      return std::async(std::launch::async, [bindFunc, onComplete]() 
      {
        auto source = bindFunc();
        if (onComplete) onComplete(source);

        return source;
      });
    }
    
    template<typename Rep, typename Period>
    std::shared_ptr<RegistrySource<Value>> WaitFor
    (
      std::future<std::shared_ptr<RegistrySource<Value>>>& future,
      const std::chrono::duration<Rep, Period>& timeout)
      {
        if (future.wait_for(timeout) == std::future_status::ready) return future.get();

        return nullptr;
      }
    };
    
#endif 