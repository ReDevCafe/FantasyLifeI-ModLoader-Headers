
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryFramework

#pragma pack(push, 0x1)

/// Enum /Script/GeometryScriptingCore.EGeometryScriptOutcomePins
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptOutcomePins : uint8_t
{
	EGeometryScriptOutcomePins__Failure                                              = 0,
	EGeometryScriptOutcomePins__Success                                              = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSearchOutcomePins
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptSearchOutcomePins : uint8_t
{
	EGeometryScriptSearchOutcomePins__Found                                          = 0,
	EGeometryScriptSearchOutcomePins__NotFound                                       = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptContainmentOutcomePins : uint8_t
{
	EGeometryScriptContainmentOutcomePins__Inside                                    = 0,
	EGeometryScriptContainmentOutcomePins__Outside                                   = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptLODType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptLODType : uint8_t
{
	EGeometryScriptLODType__MaxAvailable                                             = 0,
	EGeometryScriptLODType__HiResSourceModel                                         = 1,
	EGeometryScriptLODType__SourceModel                                              = 2,
	EGeometryScriptLODType__RenderData                                               = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptAxis
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptAxis : uint8_t
{
	EGeometryScriptAxis__X                                                           = 0,
	EGeometryScriptAxis__Y                                                           = 1,
	EGeometryScriptAxis__Z                                                           = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptCoordinateSpace : uint8_t
{
	EGeometryScriptCoordinateSpace__Local                                            = 0,
	EGeometryScriptCoordinateSpace__World                                            = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptIndexType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptIndexType : uint8_t
{
	EGeometryScriptIndexType__Any                                                    = 0,
	EGeometryScriptIndexType__Triangle                                               = 1,
	EGeometryScriptIndexType__Vertex                                                 = 2,
	EGeometryScriptIndexType__MaterialID                                             = 3,
	EGeometryScriptIndexType__PolygroupID                                            = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptDebugMessageType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptDebugMessageType : uint8_t
{
	EGeometryScriptDebugMessageType__ErrorMessage                                    = 0,
	EGeometryScriptDebugMessageType__WarningMessage                                  = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptErrorType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptErrorType : uint8_t
{
	EGeometryScriptErrorType__NoError                                                = 0,
	EGeometryScriptErrorType__UnknownError                                           = 1,
	EGeometryScriptErrorType__InvalidInputs                                          = 2,
	EGeometryScriptErrorType__OperationFailed                                        = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptCollisionGenerationMethod : uint8_t
{
	EGeometryScriptCollisionGenerationMethod__AlignedBoxes                           = 0,
	EGeometryScriptCollisionGenerationMethod__OrientedBoxes                          = 1,
	EGeometryScriptCollisionGenerationMethod__MinimalSpheres                         = 2,
	EGeometryScriptCollisionGenerationMethod__Capsules                               = 3,
	EGeometryScriptCollisionGenerationMethod__ConvexHulls                            = 4,
	EGeometryScriptCollisionGenerationMethod__SweptHulls                             = 5,
	EGeometryScriptCollisionGenerationMethod__MinVolumeShapes                        = 6,
	EGeometryScriptCollisionGenerationMethod__LevelSets                              = 7
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSweptHullAxis
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptSweptHullAxis : uint8_t
{
	EGeometryScriptSweptHullAxis__X                                                  = 0,
	EGeometryScriptSweptHullAxis__Y                                                  = 1,
	EGeometryScriptSweptHullAxis__Z                                                  = 2,
	EGeometryScriptSweptHullAxis__SmallestBoxDimension                               = 3,
	EGeometryScriptSweptHullAxis__SmallestVolume                                     = 4
};

/// Enum /Script/GeometryScriptingCore.ENegativeSpaceSampleMethod
/// Size: 0x01 (1 bytes)
enum class ENegativeSpaceSampleMethod : uint8_t
{
	ENegativeSpaceSampleMethod__Uniform                                              = 0,
	ENegativeSpaceSampleMethod__VoxelSearch                                          = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptConvexHullSimplifyMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptConvexHullSimplifyMethod : uint8_t
{
	EGeometryScriptConvexHullSimplifyMethod__MeshQSlim                               = 0,
	EGeometryScriptConvexHullSimplifyMethod__AngleTolerance                          = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshSelectionType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptMeshSelectionType : uint8_t
{
	EGeometryScriptMeshSelectionType__Vertices                                       = 0,
	EGeometryScriptMeshSelectionType__Triangles                                      = 1,
	EGeometryScriptMeshSelectionType__Polygroups                                     = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptMeshSelectionConversionType : uint8_t
{
	EGeometryScriptMeshSelectionConversionType__NoConversion                         = 0,
	EGeometryScriptMeshSelectionConversionType__ToVertices                           = 1,
	EGeometryScriptMeshSelectionConversionType__ToTriangles                          = 2,
	EGeometryScriptMeshSelectionConversionType__ToPolygroups                         = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCombineSelectionMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptCombineSelectionMode : uint8_t
{
	EGeometryScriptCombineSelectionMode__Add                                         = 0,
	EGeometryScriptCombineSelectionMode__Subtract                                    = 1,
	EGeometryScriptCombineSelectionMode__Intersection                                = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptEmptySelectionBehavior : uint8_t
{
	EGeometryScriptEmptySelectionBehavior__FullMeshSelection                         = 0,
	EGeometryScriptEmptySelectionBehavior__EmptySelection                            = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeResolution
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeResolution : uint8_t
{
	EGeometryScriptBakeResolution__Resolution16                                      = 0,
	EGeometryScriptBakeResolution__Resolution32                                      = 1,
	EGeometryScriptBakeResolution__Resolution64                                      = 2,
	EGeometryScriptBakeResolution__Resolution128                                     = 3,
	EGeometryScriptBakeResolution__Resolution256                                     = 4,
	EGeometryScriptBakeResolution__Resolution512                                     = 5,
	EGeometryScriptBakeResolution__Resolution1024                                    = 6,
	EGeometryScriptBakeResolution__Resolution2048                                    = 7,
	EGeometryScriptBakeResolution__Resolution4096                                    = 8,
	EGeometryScriptBakeResolution__Resolution8192                                    = 9
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeBitDepth
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeBitDepth : uint8_t
{
	EGeometryScriptBakeBitDepth__ChannelBits8                                        = 0,
	EGeometryScriptBakeBitDepth__ChannelBits16                                       = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeSamplesPerPixel : uint8_t
{
	EGeometryScriptBakeSamplesPerPixel__Sample1                                      = 0,
	EGeometryScriptBakeSamplesPerPixel__Sample4                                      = 1,
	EGeometryScriptBakeSamplesPerPixel__Sample16                                     = 2,
	EGeometryScriptBakeSamplesPerPixel__Sample64                                     = 3,
	EGeometryScriptBakeSamplesPerPixel__Samples256                                   = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeFilteringType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeFilteringType : uint8_t
{
	EGeometryScriptBakeFilteringType__BSpline                                        = 0,
	EGeometryScriptBakeFilteringType__Box                                            = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeTypes
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeTypes : uint8_t
{
	EGeometryScriptBakeTypes__None                                                   = 0,
	EGeometryScriptBakeTypes__TangentSpaceNormal                                     = 1,
	EGeometryScriptBakeTypes__ObjectSpaceNormal                                      = 2,
	EGeometryScriptBakeTypes__FaceNormal                                             = 3,
	EGeometryScriptBakeTypes__BentNormal                                             = 4,
	EGeometryScriptBakeTypes__Position                                               = 5,
	EGeometryScriptBakeTypes__Curvature                                              = 6,
	EGeometryScriptBakeTypes__AmbientOcclusion                                       = 7,
	EGeometryScriptBakeTypes__Texture                                                = 8,
	EGeometryScriptBakeTypes__MultiTexture                                           = 9,
	EGeometryScriptBakeTypes__VertexColor                                            = 10,
	EGeometryScriptBakeTypes__MaterialID                                             = 11,
	EGeometryScriptBakeTypes__Constant                                               = 12
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeOutputMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeOutputMode : uint8_t
{
	EGeometryScriptBakeOutputMode__RGBA                                              = 0,
	EGeometryScriptBakeOutputMode__PerChannel                                        = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeNormalSpace
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeNormalSpace : uint8_t
{
	EGeometryScriptBakeNormalSpace__Tangent                                          = 0,
	EGeometryScriptBakeNormalSpace__Object                                           = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeCurvatureTypeMode : uint8_t
{
	EGeometryScriptBakeCurvatureTypeMode__Mean                                       = 0,
	EGeometryScriptBakeCurvatureTypeMode__Max                                        = 1,
	EGeometryScriptBakeCurvatureTypeMode__Min                                        = 2,
	EGeometryScriptBakeCurvatureTypeMode__Gaussian                                   = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeCurvatureColorMode : uint8_t
{
	EGeometryScriptBakeCurvatureColorMode__Grayscale                                 = 0,
	EGeometryScriptBakeCurvatureColorMode__RedBlue                                   = 1,
	EGeometryScriptBakeCurvatureColorMode__RedGreenBlue                              = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBakeCurvatureClampMode : uint8_t
{
	EGeometryScriptBakeCurvatureClampMode__None                                      = 0,
	EGeometryScriptBakeCurvatureClampMode__OnlyPositive                              = 1,
	EGeometryScriptBakeCurvatureClampMode__OnlyNegative                              = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptCombineAttributesMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptCombineAttributesMode : uint8_t
{
	EGeometryScriptCombineAttributesMode__EnableAllMatching                          = 0,
	EGeometryScriptCombineAttributesMode__UseTarget                                  = 1,
	EGeometryScriptCombineAttributesMode__UseSource                                  = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSmoothBoneWeightsType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptSmoothBoneWeightsType : uint8_t
{
	EGeometryScriptSmoothBoneWeightsType__DirectDistance                             = 0,
	EGeometryScriptSmoothBoneWeightsType__GeodesicVoxel                              = 1
};

/// Enum /Script/GeometryScriptingCore.ETransferBoneWeightsMethod
/// Size: 0x01 (1 bytes)
enum class ETransferBoneWeightsMethod : uint8_t
{
	ETransferBoneWeightsMethod__ClosestPointOnSurface                                = 0,
	ETransferBoneWeightsMethod__InpaintWeights                                       = 1
};

/// Enum /Script/GeometryScriptingCore.EOutputTargetMeshBones
/// Size: 0x01 (1 bytes)
enum class EOutputTargetMeshBones : uint8_t
{
	EOutputTargetMeshBones__SourceBones                                              = 0,
	EOutputTargetMeshBones__TargetBones                                              = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBooleanOperation
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBooleanOperation : uint8_t
{
	EGeometryScriptBooleanOperation__Union                                           = 0,
	EGeometryScriptBooleanOperation__Intersection                                    = 1,
	EGeometryScriptBooleanOperation__Subtract                                        = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptFlareType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptFlareType : uint8_t
{
	EGeometryScriptFlareType__SinMode                                                = 0,
	EGeometryScriptFlareType__SinSquaredMode                                         = 1,
	EGeometryScriptFlareType__TriangleMode                                           = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMathWarpType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptMathWarpType : uint8_t
{
	EGeometryScriptMathWarpType__SinWave1D                                           = 0,
	EGeometryScriptMathWarpType__SinWave2D                                           = 1,
	EGeometryScriptMathWarpType__SinWave3D                                           = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptMeshEditPolygroupMode : uint8_t
{
	EGeometryScriptMeshEditPolygroupMode__PreserveExisting                           = 0,
	EGeometryScriptMeshEditPolygroupMode__AutoGenerateNew                            = 1,
	EGeometryScriptMeshEditPolygroupMode__SetConstant                                = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPolyOperationArea
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPolyOperationArea : uint8_t
{
	EGeometryScriptPolyOperationArea__EntireSelection                                = 0,
	EGeometryScriptPolyOperationArea__PerPolygroup                                   = 1,
	EGeometryScriptPolyOperationArea__PerTriangle                                    = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptLinearExtrudeDirection : uint8_t
{
	EGeometryScriptLinearExtrudeDirection__FixedDirection                            = 0,
	EGeometryScriptLinearExtrudeDirection__AverageFaceNormal                         = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptOffsetFacesType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptOffsetFacesType : uint8_t
{
	EGeometryScriptOffsetFacesType__VertexNormal                                     = 0,
	EGeometryScriptOffsetFacesType__FaceNormal                                       = 1,
	EGeometryScriptOffsetFacesType__ParallelFaceOffset                               = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptMeshBevelSelectionMode : uint8_t
{
	EGeometryScriptMeshBevelSelectionMode__TriangleArea                              = 0,
	EGeometryScriptMeshBevelSelectionMode__AllPolygroupEdges                         = 1,
	EGeometryScriptMeshBevelSelectionMode__SharedPolygroupEdges                      = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptTangentTypes
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptTangentTypes : uint8_t
{
	EGeometryScriptTangentTypes__FastMikkT                                           = 0,
	EGeometryScriptTangentTypes__PerTriangle                                         = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPrimitivePolygroupMode : uint8_t
{
	EGeometryScriptPrimitivePolygroupMode__SingleGroup                               = 0,
	EGeometryScriptPrimitivePolygroupMode__PerFace                                   = 1,
	EGeometryScriptPrimitivePolygroupMode__PerQuad                                   = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPrimitiveOriginMode : uint8_t
{
	EGeometryScriptPrimitiveOriginMode__Center                                       = 0,
	EGeometryScriptPrimitiveOriginMode__Base                                         = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPrimitiveUVMode : uint8_t
{
	EGeometryScriptPrimitiveUVMode__Uniform                                          = 0,
	EGeometryScriptPrimitiveUVMode__ScaleToFill                                      = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPolygonFillMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPolygonFillMode : uint8_t
{
	EGeometryScriptPolygonFillMode__All                                              = 0,
	EGeometryScriptPolygonFillMode__Solid                                            = 1,
	EGeometryScriptPolygonFillMode__PositiveWinding                                  = 2,
	EGeometryScriptPolygonFillMode__NonZeroWinding                                   = 3,
	EGeometryScriptPolygonFillMode__NegativeWinding                                  = 4,
	EGeometryScriptPolygonFillMode__OddWinding                                       = 5
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptUniformRemeshTargetType : uint8_t
{
	EGeometryScriptUniformRemeshTargetType__TriangleCount                            = 0,
	EGeometryScriptUniformRemeshTargetType__TargetEdgeLength                         = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptRemeshEdgeConstraintType : uint8_t
{
	EGeometryScriptRemeshEdgeConstraintType__Fixed                                   = 0,
	EGeometryScriptRemeshEdgeConstraintType__Refine                                  = 1,
	EGeometryScriptRemeshEdgeConstraintType__Free                                    = 2,
	EGeometryScriptRemeshEdgeConstraintType__Ignore                                  = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptRemeshSmoothingType : uint8_t
{
	EGeometryScriptRemeshSmoothingType__Uniform                                      = 0,
	EGeometryScriptRemeshSmoothingType__UVPreserving                                 = 1,
	EGeometryScriptRemeshSmoothingType__Mixed                                        = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptFillHolesMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptFillHolesMethod : uint8_t
{
	EGeometryScriptFillHolesMethod__Automatic                                        = 0,
	EGeometryScriptFillHolesMethod__MinimalFill                                      = 1,
	EGeometryScriptFillHolesMethod__PolygonTriangulation                             = 2,
	EGeometryScriptFillHolesMethod__TriangleFan                                      = 3,
	EGeometryScriptFillHolesMethod__PlanarProjection                                 = 4
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8_t
{
	EGeometryScriptRemoveHiddenTrianglesMethod__FastWindingNumber                    = 0,
	EGeometryScriptRemoveHiddenTrianglesMethod__RaycastOcclusionTest                 = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRepairMeshMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptRepairMeshMode : uint8_t
{
	EGeometryScriptRepairMeshMode__DeleteOnly                                        = 0,
	EGeometryScriptRepairMeshMode__RepairOrDelete                                    = 1,
	EGeometryScriptRepairMeshMode__RepairOrSkip                                      = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSamplingWeightMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptSamplingWeightMode : uint8_t
{
	EGeometryScriptSamplingWeightMode__WeightToRadius                                = 0,
	EGeometryScriptSamplingWeightMode__FilledWeightToRadius                          = 1,
	EGeometryScriptSamplingWeightMode__WeightedRandom                                = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSamplingDistributionMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptSamplingDistributionMode : uint8_t
{
	EGeometryScriptSamplingDistributionMode__Uniform                                 = 0,
	EGeometryScriptSamplingDistributionMode__Smaller                                 = 1,
	EGeometryScriptSamplingDistributionMode__Larger                                  = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptTopologyConnectionType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptTopologyConnectionType : uint8_t
{
	EGeometryScriptTopologyConnectionType__Geometric                                 = 0,
	EGeometryScriptTopologyConnectionType__Polygroup                                 = 1,
	EGeometryScriptTopologyConnectionType__MaterialID                                = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptRemoveMeshSimplificationType : uint8_t
{
	EGeometryScriptRemoveMeshSimplificationType__StandardQEM                         = 0,
	EGeometryScriptRemoveMeshSimplificationType__VolumePreserving                    = 1,
	EGeometryScriptRemoveMeshSimplificationType__AttributeAware                      = 2
};

/// Enum /Script/GeometryScriptingCore.ESelectiveTessellatePatternType
/// Size: 0x01 (1 bytes)
enum class ESelectiveTessellatePatternType : uint8_t
{
	ESelectiveTessellatePatternType__ConcentricRings                                 = 0
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptUVFlattenMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptUVFlattenMethod : uint8_t
{
	EGeometryScriptUVFlattenMethod__ExpMap                                           = 0,
	EGeometryScriptUVFlattenMethod__Conformal                                        = 1,
	EGeometryScriptUVFlattenMethod__SpectralConformal                                = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptUVIslandSource
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptUVIslandSource : uint8_t
{
	EGeometryScriptUVIslandSource__PolyGroups                                        = 0,
	EGeometryScriptUVIslandSource__UVIslands                                         = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptBlurColorMode
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptBlurColorMode : uint8_t
{
	EGeometryScriptBlurColorMode__Uniform                                            = 0,
	EGeometryScriptBlurColorMode__EdgeLength                                         = 1,
	EGeometryScriptBlurColorMode__CotanWeights                                       = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptGridSizingMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptGridSizingMethod : uint8_t
{
	EGeometryScriptGridSizingMethod__GridCellSize                                    = 0,
	EGeometryScriptGridSizingMethod__GridResolution                                  = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptMorphologicalOpType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptMorphologicalOpType : uint8_t
{
	EGeometryScriptMorphologicalOpType__Dilate                                       = 0,
	EGeometryScriptMorphologicalOpType__Contract                                     = 1,
	EGeometryScriptMorphologicalOpType__Close                                        = 2,
	EGeometryScriptMorphologicalOpType__Open                                         = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptInitKMeansMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptInitKMeansMethod : uint8_t
{
	EGeometryScriptInitKMeansMethod__Random                                          = 0,
	EGeometryScriptInitKMeansMethod__UniformSpacing                                  = 1
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPolyOffsetJoinType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPolyOffsetJoinType : uint8_t
{
	EGeometryScriptPolyOffsetJoinType__Square                                        = 0,
	EGeometryScriptPolyOffsetJoinType__Round                                         = 1,
	EGeometryScriptPolyOffsetJoinType__Miter                                         = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPathOffsetEndType
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPathOffsetEndType : uint8_t
{
	EGeometryScriptPathOffsetEndType__Butt                                           = 0,
	EGeometryScriptPathOffsetEndType__Square                                         = 1,
	EGeometryScriptPathOffsetEndType__Round                                          = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptSampleSpacing
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptSampleSpacing : uint8_t
{
	EGeometryScriptSampleSpacing__UniformDistance                                    = 0,
	EGeometryScriptSampleSpacing__UniformTime                                        = 1,
	EGeometryScriptSampleSpacing__ErrorTolerance                                     = 2
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptEvaluateSplineRange
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptEvaluateSplineRange : uint8_t
{
	EGeometryScriptEvaluateSplineRange__FullSpline                                   = 0,
	EGeometryScriptEvaluateSplineRange__DistanceRange                                = 1,
	EGeometryScriptEvaluateSplineRange__TimeRange_ConstantSpeed                      = 2,
	EGeometryScriptEvaluateSplineRange__TimeRange_VariableSpeed                      = 3
};

/// Enum /Script/GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
/// Size: 0x01 (1 bytes)
enum class EGeometryScriptPixelSamplingMethod : uint8_t
{
	EGeometryScriptPixelSamplingMethod__Bilinear                                     = 0,
	EGeometryScriptPixelSamplingMethod__Nearest                                      = 1
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDebugMessage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptDebugMessage
{ 
	EGeometryScriptDebugMessageType                    MessageType;                                                // 0x0000   (0x0001)  
	EGeometryScriptErrorType                           ErrorType;                                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FText                                              Message;                                                    // 0x0008   (0x0018)  
};

/// Class /Script/GeometryScriptingCore.GeometryScriptDebug
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGeometryScriptDebug : public UObject
{ 
public:
	TArray<FGeometryScriptDebugMessage>                Messages;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.TransformSimpleCollisionShapes
	// FGeometryScriptSimpleCollision TransformSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, class UGeometryScriptDebug* Debug); // [0x7b33fd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.StaticMeshHasCustomizedCollision
	// bool StaticMeshHasCustomizedCollision(class UStaticMesh* StaticMeshAsset);                                               // [0x7b33c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SimplifyConvexHulls
	// void SimplifyConvexHulls(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, class UGeometryScriptDebug* Debug); // [0x7b338c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
	// class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions OPTIONS, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug); // [0x7b32d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
	// void SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, FGeometryScriptSetSimpleCollisionOptions OPTIONS, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug); // [0x7b32ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetSimpleCollisionOfStaticMesh
	// void SetSimpleCollisionOfStaticMesh(FGeometryScriptSimpleCollision& SimpleCollision, class UStaticMesh* StaticMesh, FGeometryScriptSetSimpleCollisionOptions OPTIONS, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug); // [0x7b32760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetSimpleCollisionOfDynamicMeshComponent
	// void SetSimpleCollisionOfDynamicMeshComponent(FGeometryScriptSimpleCollision& SimpleCollision, class UDynamicMeshComponent* DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b32380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
	// class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b31a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
	// void ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug); // [0x7b31000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.MergeSimpleCollisionShapes
	// FGeometryScriptSimpleCollision MergeSimpleCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, class UGeometryScriptDebug* Debug); // [0x7b30870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.GetSimpleCollisionShapeCount
	// int32_t GetSimpleCollisionShapeCount(FGeometryScriptSimpleCollision& SimpleCollision);                                   // [0x7b2efc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.GetSimpleCollisionFromStaticMesh
	// FGeometryScriptSimpleCollision GetSimpleCollisionFromStaticMesh(class UStaticMesh* StaticMesh, class UGeometryScriptDebug* Debug); // [0x7b2eb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.GetSimpleCollisionFromComponent
	// FGeometryScriptSimpleCollision GetSimpleCollisionFromComponent(class UPrimitiveComponent* Component, class UGeometryScriptDebug* Debug); // [0x7b2e720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.Conv_SphereArrayToGeometryScriptSphereCovering
	// FGeometryScriptSphereCovering Conv_SphereArrayToGeometryScriptSphereCovering(TArray<FSphere>& Spheres);                  // [0x7b27eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.Conv_GeometryScriptSphereCoveringToSphereArray
	// TArray<FSphere> Conv_GeometryScriptSphereCoveringToSphereArray(FGeometryScriptSphereCovering& SphereCovering);           // [0x7b27da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ComputeNegativeSpace
	// FGeometryScriptSphereCovering ComputeNegativeSpace(FGeometryScriptDynamicMeshBVH& MeshBVH, FComputeNegativeSpaceOptions& NegativeSpaceOptions, class UGeometryScriptDebug* Debug); // [0x7b276b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.CombineSimpleCollision
	// void CombineSimpleCollision(FGeometryScriptSimpleCollision& CollisionToUpdate, FGeometryScriptSimpleCollision& AppendCollision, class UGeometryScriptDebug* Debug); // [0x7b264f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ApproximateConvexHullsWithSimplerCollisionShapes
	// void ApproximateConvexHullsWithSimplerCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, class UGeometryScriptDebug* Debug); // [0x7b24110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
	// class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FTransform ProjectionFrame, FGeometryScriptSweptHullOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b27140] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
	// class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FGeometryScriptMeshSelection Selection, FGeometryScriptConvexHullOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b26ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
	// class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FGeometryScriptConvexDecompositionOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b26a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
	// void SetVectorListItem(FGeometryScriptVectorList& VectorList, int32_t Index, FVector NewValue, bool& bIsValidIndex);     // [0x7b332c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
	// void SetUVListItem(FGeometryScriptUVList& UVList, int32_t Index, FVector2D NewUV, bool& bIsValidIndex);                  // [0x7b318d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
	// void SetScalarListItem(FGeometryScriptScalarList& ScalarList, int32_t Index, double NewValue, bool& bIsValidIndex);      // [0x7b321b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
	// void SetIndexListItem(FGeometryScriptIndexList& IndexList, int32_t Index, int32_t NewValue, bool& bIsValidIndex);        // [0x7b31fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
	// void SetColorListItem(FGeometryScriptColorList& ColorList, int32_t Index, FLinearColor NewColor, bool& bIsValidIndex);   // [0x7b318d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
	// int32_t GetVectorListLength(FGeometryScriptVectorList VectorList);                                                       // [0x7b2d440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
	// int32_t GetVectorListLastIndex(FGeometryScriptVectorList VectorList);                                                    // [0x7b2d320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
	// FVector GetVectorListItem(FGeometryScriptVectorList VectorList, int32_t Index, bool& bIsValidIndex);                     // [0x7b2f730] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
	// int32_t GetUVListLength(FGeometryScriptUVList UVList);                                                                   // [0x7b2d440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
	// int32_t GetUVListLastIndex(FGeometryScriptUVList UVList);                                                                // [0x7b2d320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
	// FVector2D GetUVListItem(FGeometryScriptUVList UVList, int32_t Index, bool& bIsValidIndex);                               // [0x7b2f570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
	// int32_t GetTriangleListLength(FGeometryScriptTriangleList TriangleList);                                                 // [0x7b2d440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
	// int32_t GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList);                                           // [0x7b2f450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
	// FIntVector GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32_t Triangle, bool& bIsValidTriangle);      // [0x7b2f270] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
	// int32_t GetScalarListLength(FGeometryScriptScalarList ScalarList);                                                       // [0x7b2d440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
	// int32_t GetScalarListLastIndex(FGeometryScriptScalarList ScalarList);                                                    // [0x7b2d320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
	// double GetScalarListItem(FGeometryScriptScalarList ScalarList, int32_t Index, bool& bIsValidIndex);                      // [0x7b2e0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
	// int32_t GetIndexListLength(FGeometryScriptIndexList IndexList);                                                          // [0x7b2d880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
	// int32_t GetIndexListLastIndex(FGeometryScriptIndexList IndexList);                                                       // [0x7b2d760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
	// int32_t GetIndexListItem(FGeometryScriptIndexList IndexList, int32_t Index, bool& bIsValidIndex);                        // [0x7b2d560] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
	// int32_t GetColorListLength(FGeometryScriptColorList ColorList);                                                          // [0x7b2d440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
	// int32_t GetColorListLastIndex(FGeometryScriptColorList ColorList);                                                       // [0x7b2d320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
	// FLinearColor GetColorListItem(FGeometryScriptColorList ColorList, int32_t Index, bool& bIsValidIndex);                   // [0x7b2d160] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
	// void ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32_t XChannelIndex, int32_t YChannelIndex, int32_t ZChannelIndex); // [0x7b2c0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
	// void ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32_t ChannelIndex); // [0x7b2bce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
	// void DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList);                // [0x7b2bb40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
	// void DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList);                                // [0x7b2b9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
	// void DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList);                // [0x7b2b7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
	// void DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList);                    // [0x7b2b600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
	// void DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList);                    // [0x7b2b460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
	// void ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray<FVector>& VectorArray);                       // [0x7b29090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
	// void ConvertUVListToArray(FGeometryScriptUVList UVList, TArray<FVector2D>& UVArray);                                     // [0x7b28f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
	// void ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray<FIntVector>& TriangleArray);            // [0x7b28d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
	// void ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray<double>& ScalarArray);                        // [0x7b28be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
	// void ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray<int32_t>& IndexArray);                           // [0x7b28a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
	// void ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray<FLinearColor>& ColorArray);                      // [0x7b288b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
	// void ConvertArrayToVectorList(TArray<FVector>& VectorArray, FGeometryScriptVectorList& VectorList);                      // [0x7b286d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
	// void ConvertArrayToUVList(TArray<FVector2D>& UVArray, FGeometryScriptUVList& UVList);                                    // [0x7b28580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
	// void ConvertArrayToTriangleList(TArray<FIntVector>& TriangleArray, FGeometryScriptTriangleList& TriangleList);           // [0x7b28440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
	// void ConvertArrayToScalarList(TArray<double>& VectorArray, FGeometryScriptScalarList& ScalarList);                       // [0x7b282f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
	// void ConvertArrayToIndexList(TArray<int32_t>& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType); // [0x7b28150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
	// void ConvertArrayToColorList(TArray<FLinearColor>& ColorArray, FGeometryScriptColorList& ColorList);                     // [0x7b28000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
	// void ClearVectorList(FGeometryScriptVectorList& VectorList, FVector ClearValue);                                         // [0x7b26310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
	// void ClearUVList(FGeometryScriptUVList& UVList, FVector2D ClearUV);                                                      // [0x7b26150] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
	// void ClearScalarList(FGeometryScriptScalarList& ScalarList, double ClearValue);                                          // [0x7b25fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
	// void ClearIndexList(FGeometryScriptIndexList& IndexList, int32_t ClearValue);                                            // [0x7b25e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
	// void ClearColorList(FGeometryScriptColorList& ColorList, FLinearColor ClearColor);                                       // [0x7b25c80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
	// void GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& materialList, TArray<int32_t>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b2e2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetNumStaticMeshLODsOfType
	// int32_t GetNumStaticMeshLODsOfType(class UStaticMesh* StaticMeshAsset, EGeometryScriptLODType LODType);                  // [0x7b2dde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
	// class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions OPTIONS, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b2a250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
	// class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions OPTIONS, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b29c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
	// class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b29930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
	// class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b294c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CheckStaticMeshHasAvailableLOD
	// bool CheckStaticMeshHasAvailableLOD(class UStaticMesh* StaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b25a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
	// FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();                                                                // [0x7b307c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
	// FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32_t SourceUVLayer);              // [0x7b30690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();                                                              // [0x7b305e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
	// FGeometryScriptBakeTypeOptions MakeBakeTypePosition();                                                                   // [0x7b30530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();                                                               // [0x7b30480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
	// FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<UTexture2D*>& MaterialIDSourceTextures, int32_t SourceUVLayer); // [0x7b30320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
	// FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();                                                                 // [0x7b30270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();                                                                 // [0x7b301c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
	// FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping); // [0x7b2ffb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeConstant
	// FGeometryScriptBakeTypeOptions MakeBakeTypeConstant(float Value);                                                        // [0x7b2fec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
	// FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32_t OcclusionRays, float MaxDistance, float SpreadAngle);      // [0x7b2fd40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
	// FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32_t OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle); // [0x7b2fb70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.ConvertBakeResolutionToInt
	// int32_t ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution);                                        // [0x7b28820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
	// class UDynamicMesh* BakeVertex(class UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, class UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, class UGeometryScriptDebug* Debug); // [0x7b24f90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
	// FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, TArray<AActor*> SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, class UGeometryScriptDebug* Debug); // [0x7b24b90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
	// TArray<UTexture2D*> BakeTexture(class UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, class UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, TArray<FGeometryScriptBakeTypeOptions>& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, class UGeometryScriptDebug* Debug); // [0x7b24480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
	// class UDynamicMesh* SetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, FVector newPosition, bool& bIsValidVertex, bool bDeferChangeNotifications); // [0x7b336e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
	// class UDynamicMesh* SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList PositionList, class UGeometryScriptDebug* Debug); // [0x7b311b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
	// class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications);               // [0x7b2b370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
	// class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList VertexList, int32_t& NumDeleted, bool bDeferChangeNotifications); // [0x7b2af40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
	// class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32_t VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications); // [0x7b2adb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
	// class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleList, int32_t& NumDeleted, bool bDeferChangeNotifications); // [0x7b2ab60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
	// class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications); // [0x7b2a9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
	// class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t& NumDeleted, bool bDeferChangeNotifications); // [0x7b2a7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
	// class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug); // [0x7b23b60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
	// class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, FTransform AppendTransform, int32_t RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug); // [0x7b23600] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
	// class UDynamicMesh* AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug); // [0x7b231d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
	// class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b22d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
	// class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications); // [0x7b22ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
	// class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* TargetMesh, FVector newPosition, int32_t& NewVertexIndex, bool bDeferChangeNotifications); // [0x7b22920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
	// class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* TargetMesh, FIntVector NewTriangle, int32_t& NewTriangleIndex, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b21e10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
	// class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b222b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.TransferBoneWeightsFromMesh
	// class UDynamicMesh* TransferBoneWeightsFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, FGeometryScriptTransferBoneWeightsOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b33cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
	// class UDynamicMesh* SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile); // [0x7b33490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
	// class UDynamicMesh* SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneWeight>& BoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0x7b31560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
	// class UDynamicMesh* MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0x7b30e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
	// class UDynamicMesh* MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile); // [0x7b30cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
	// class UDynamicMesh* GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0x7b2f930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetRootBoneName
	// class UDynamicMesh* GetRootBoneName(class UDynamicMesh* TargetMesh, FName& BoneName, class UGeometryScriptDebug* Debug); // [0x7b2ded0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
	// class UDynamicMesh* GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool& bHasBoneWeights, int32_t& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile); // [0x7b2dbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
	// class UDynamicMesh* GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32_t VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile); // [0x7b2d9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneInfo
	// class UDynamicMesh* GetBoneInfo(class UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, class UGeometryScriptDebug* Debug); // [0x7b2ce00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneIndex
	// class UDynamicMesh* GetBoneIndex(class UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, int32_t& BoneIndex, class UGeometryScriptDebug* Debug); // [0x7b2cb50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetBoneChildren
	// class UDynamicMesh* GetBoneChildren(class UDynamicMesh* TargetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray<FGeometryScriptBoneInfo>& childrenInfo, class UGeometryScriptDebug* Debug); // [0x7b2c850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetAllBonesInfo
	// class UDynamicMesh* GetAllBonesInfo(class UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneInfo>& BonesInfo, class UGeometryScriptDebug* Debug); // [0x7b2c610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.DiscardBonesFromMesh
	// class UDynamicMesh* DiscardBonesFromMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);             // [0x7b2b190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.CopyBonesFromMesh
	// class UDynamicMesh* CopyBonesFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug); // [0x7b29220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
	// class UDynamicMesh* ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, FGeometryScriptSmoothBoneWeightsOptions OPTIONS, FGeometryScriptBoneWeightProfile Profile, class UGeometryScriptDebug* Debug); // [0x7b27a50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
	// class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelfUnionOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b83fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
	// class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneSliceOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b839b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
	// class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneCutOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b83650] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
	// class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* TargetMesh, FTransform MirrorFrame, FGeometryScriptMeshMirrorOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b82e40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
	// class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* TargetMesh, FTransform TargetTransform, class UDynamicMesh* ToolMesh, FTransform ToolTransform, EGeometryScriptBooleanOperation Operation, FGeometryScriptMeshBooleanOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b81b80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
	// class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, FGeometryScriptMeasureMeshDistanceOptions OPTIONS, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, class UGeometryScriptDebug* Debug); // [0x7b972c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
	// class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, FGeometryScriptIsSameMeshOptions OPTIONS, bool& bIsSameMesh, class UGeometryScriptDebug* Debug); // [0x7b96dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
	// class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* TargetMesh, FTransform TargetTransform, class UDynamicMesh* OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, class UGeometryScriptDebug* Debug); // [0x7b96610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
	// class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32_t>& ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug); // [0x7ba0030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
	// class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32_t>& ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug); // [0x7b9fc20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
	// class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug); // [0x7b9f8b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
	// class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, FGeometryScriptIndexList TriangleList, class UDynamicMesh*& StoreToSubmeshOut, class UGeometryScriptDebug* Debug); // [0x7b93ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
	// class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, class UGeometryScriptDebug* Debug); // [0x7b8b690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
	// class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, FGeometryScriptMeshSelection Selection, class UDynamicMesh*& StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug); // [0x7b8b3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
	// class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptTwistWarpOptions OPTIONS, FTransform TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug); // [0x7b85580] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
	// class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptPerlinNoiseOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b84580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
	// class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, FTransform WarpOrientation, EGeometryScriptMathWarpType WarpType, FGeometryScriptMathWarpOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b81530] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
	// class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIterativeMeshSmoothingOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b81240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
	// class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptFlareWarpOptions OPTIONS, FTransform FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug); // [0x7b80ea0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
	// class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, FGeometryScriptMeshSelection Selection, FGeometryScriptDisplaceFromTextureOptions OPTIONS, int32_t UVLayer, class UGeometryScriptDebug* Debug); // [0x7b807f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
	// class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug); // [0x7b804a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
	// class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, FGeometryScriptBendWarpOptions OPTIONS, FTransform BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug); // [0x7b80160] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshGeodesicFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestVertexPath
	// class UDynamicMesh* GetShortestVertexPath(class UDynamicMesh* TargetMesh, int32_t StartVertexID, int32_t EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0x7b93a50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.GetShortestSurfacePath
	// class UDynamicMesh* GetShortestSurfacePath(class UDynamicMesh* TargetMesh, int32_t StartTriangleID, FVector StartBaryCoords, int32_t EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0x7b93770] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions.CreateSurfacePath
	// class UDynamicMesh* CreateSurfacePath(class UDynamicMesh* TargetMesh, FVector Direction, int32_t StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0x7b8c6d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
	// class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, int32_t MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0x7b9f4f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
	// class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b9f270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
	// class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b9c480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
	// class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b9c190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
	// class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b9be10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapToNewMaterialIDsByMaterial
	// class UDynamicMesh* RemapToNewMaterialIDsByMaterial(class UDynamicMesh* TargetMesh, TArray<UMaterialInterface*>& FromMaterialList, TArray<UMaterialInterface*>& ToMaterialList, int32_t MissingMaterialID, class UGeometryScriptDebug* Debug); // [0x7b98470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
	// class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32_t FromMaterialID, int32_t ToMaterialID, class UGeometryScriptDebug* Debug); // [0x7b98260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
	// class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug* Debug); // [0x7b95460] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
	// int32_t GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle);               // [0x7b94400] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
	// int32_t GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool& bHasMaterialIDs);                                         // [0x7b90950] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
	// class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, FGeometryScriptIndexList& MaterialIDList, class UGeometryScriptDebug* Debug); // [0x7b90750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
	// class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs); // [0x7b8ec60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
	// class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                // [0x7b8d360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
	// class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, int32_t& NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b8cdd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
	// class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* TargetMesh, TArray<UMaterialInterface*> SourceMaterialList, TArray<UMaterialInterface*>& CompactedMaterialList, class UGeometryScriptDebug* Debug); // [0x7b870c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
	// class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32_t ClearValue, class UGeometryScriptDebug* Debug); // [0x7b86a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
	// class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b841e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
	// class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, FGeometryScriptMeshBevelOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b83d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
	// class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetFacesOptions OPTIONS, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b83360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
	// class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b831a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
	// class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshLinearExtrudeOptions OPTIONS, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b82b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
	// class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshInsetOutsetFacesOptions OPTIONS, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b82820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
	// class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, FGeometryScriptMeshExtrudeOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b82540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
	// class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewTriangles, FGeometryScriptMeshEditPolygroupOptions GroupOptions, class UGeometryScriptDebug* Debug); // [0x7b821d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
	// class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug); // [0x7b81f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
	// class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, FGeometryScriptMeshBevelSelectionOptions BevelOptions, class UGeometryScriptDebug* Debug); // [0x7b81850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
	// class UDynamicMesh* UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32_t VertexID, bool bUpdateNormal, FVector NewNormal, bool bUpdateTangents, FVector NewTangentX, FVector NewTangentY, bool& bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications); // [0x7ba1460] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
	// class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);              // [0x7b9ee00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
	// class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                // [0x7b9eca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
	// class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, FGeometryScriptTriangle Normals, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0x7b9d7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
	// class UDynamicMesh* SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList TangentXList, FGeometryScriptVectorList TangentYList, class UGeometryScriptDebug* Debug); // [0x7b9d060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
	// class UDynamicMesh* SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList VertexNormalList, class UGeometryScriptDebug* Debug); // [0x7b9cd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormalsForMeshSelection
	// class UDynamicMesh* RecomputeNormalsForMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b97f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
	// class UDynamicMesh* RecomputeNormals(class UDynamicMesh* TargetMesh, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b97d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
	// class UDynamicMesh* GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList& TangentXList, FGeometryScriptVectorList& TangentYList, bool& bIsValidTangentSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // [0x7b91490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
	// class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList& NormalList, bool& bIsValidNormalSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues); // [0x7b91250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
	// class UDynamicMesh* GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool& bHasTangents, class UGeometryScriptDebug* Debug); // [0x7b90cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
	// class UDynamicMesh* FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                      // [0x7b8e4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
	// class UDynamicMesh* DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                  // [0x7b8d200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
	// class UDynamicMesh* ComputeTangents(class UDynamicMesh* TargetMesh, FGeometryScriptTangentsOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b88fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
	// class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* TargetMesh, FGeometryScriptSplitNormalsOptions SplitOptions, FGeometryScriptCalculateNormalsOptions CalculateOptions, class UGeometryScriptDebug* Debug); // [0x7b88de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
	// class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                // [0x7b861b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
	// class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32_t& SetPolygroupIDOut, int32_t SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications); // [0x7b9ef60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
	// class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32_t NumLayers, class UGeometryScriptDebug* Debug); // [0x7b9e8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
	// class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, FGeometryScriptIndexList& TriangleIDsOut); // [0x7b95740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
	// int32_t GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t TriangleID, bool& bIsValidTriangle); // [0x7b94b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
	// class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // [0x7b934c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
	// class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut); // [0x7b8ee30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
	// class UDynamicMesh* EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                 // [0x7b8d4e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
	// class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t PolygroupID, int32_t& NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug); // [0x7b8cfc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
	// class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, class UGeometryScriptDebug* Debug); // [0x7b8c120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
	// class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t UVLayer, class UGeometryScriptDebug* Debug); // [0x7b8b200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
	// class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, class UGeometryScriptDebug* Debug); // [0x7b89c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
	// class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32_t MaxSearchRounds, class UGeometryScriptDebug* Debug); // [0x7b886f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
	// class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32_t MinGroupSize, class UGeometryScriptDebug* Debug); // [0x7b884c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
	// class UDynamicMesh* ClearPolygroups(class UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32_t ClearValue, class UGeometryScriptDebug* Debug); // [0x7b86c00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
	// class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, class UGeometryScriptDebug* Debug); // [0x7b7f7d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon3D
	// class UDynamicMesh* AppendTriangulatedPolygon3D(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector>& PolygonVertices3D, class UGeometryScriptDebug* Debug); // [0x7b7f290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
	// class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug); // [0x7b7f510] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
	// class UDynamicMesh* AppendTorus(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32_t MajorSteps, int32_t MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b7eeb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
	// class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolylineVertices, TArray<FTransform>& SweepPath, TArray<float>& PolylineTexParamU, TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug); // [0x7b7e9d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
	// class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, TArray<FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug); // [0x7b7e580] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
	// class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug); // [0x7b7e1c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
	// class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsPhi, int32_t StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b7dbc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereCovering
	// class UDynamicMesh* AppendSphereCovering(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSphereCovering& SphereCovering, int32_t StepsX, int32_t StepsY, int32_t StepsZ, class UGeometryScriptDebug* Debug); // [0x7b7d850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
	// class UDynamicMesh* AppendSphereBox(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b7d290] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
	// class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, TArray<FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug); // [0x7b7ce90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
	// class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, float Height, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b7cb00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleCollisionShapes
	// class UDynamicMesh* AppendSimpleCollisionShapes(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, class UGeometryScriptDebug* Debug); // [0x7b7c500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
	// class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug); // [0x7b7b8a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5
	// class UDynamicMesh* AppendRoundRectangle_Compatibility_5(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug); // [0x7b7bec0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
	// class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32_t Steps, class UGeometryScriptDebug* Debug); // [0x7b7b520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
	// class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32_t Steps, bool bCapped, class UGeometryScriptDebug* Debug); // [0x7b7b1b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
	// class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug); // [0x7b7a6f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5
	// class UDynamicMesh* AppendRectangle_Compatibility_5(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug); // [0x7b7ac40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendPolygonListTriangulation
	// class UDynamicMesh* AppendPolygonListTriangulation(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, class UGeometryScriptDebug* Debug); // [0x7b7a3a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
	// class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug); // [0x7b79e50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
	// class UDynamicMesh* AppendDisc(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32_t AngleSteps, int32_t SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug); // [0x7b79770] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDelaunayTriangulation2D
	// class UDynamicMesh* AppendDelaunayTriangulation2D(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, TArray<FVector2D>& VertexPositions, TArray<FIntPoint>& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray<int32_t>& PositionsToVertexIDs, bool& bHasDuplicateVertices, class UGeometryScriptDebug* Debug); // [0x7b79370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
	// class UDynamicMesh* AppendCylinder(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b78fc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
	// class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug); // [0x7b78a40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
	// class UDynamicMesh* AppendCone(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b78650] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
	// class UDynamicMesh* AppendCapsule(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32_t HemisphereSteps, int32_t CircleSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b78010] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
	// class UDynamicMesh* AppendBox(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug); // [0x7b778a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBoundingBox
	// class UDynamicMesh* AppendBoundingBox(class UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32_t StepsX, int32_t StepsY, int32_t StepsZ, class UGeometryScriptDebug* Debug); // [0x7b771d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
	// bool IsValidVertexID(class UDynamicMesh* TargetMesh, int32_t VertexID);                                                  // [0x7b97180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
	// bool IsValidTriangleID(class UDynamicMesh* TargetMesh, int32_t TriangleID);                                              // [0x7b97040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
	// FVector GetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, bool& bIsValidVertex);                       // [0x7b95f40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
	// int32_t GetVertexCount(class UDynamicMesh* TargetMesh);                                                                  // [0x7b95e50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedVertices
	// class UDynamicMesh* GetVertexConnectedVertices(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<int32_t>& Vertices); // [0x7b95cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexConnectedTriangles
	// class UDynamicMesh* GetVertexConnectedTriangles(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<int32_t>& Triangles); // [0x7b95b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
	// FBox2D GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty); // [0x7b95960] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
	// class UDynamicMesh* GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32_t TriangleID, FLinearColor& color1, FLinearColor& color2, FLinearColor& color3, bool& bTriHasValidVertexColors); // [0x7b951f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
	// void GetTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs); // [0x7b94f30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
	// void GetTrianglePositions(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3); // [0x7b94cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
	// class UDynamicMesh* GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents); // [0x7b94580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
	// class UDynamicMesh* GetTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals); // [0x7b94890] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
	// FIntVector GetTriangleIndices(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle);               // [0x7b94280] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
	// FVector GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle);               // [0x7b94100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
	// int32_t GetNumVertexIDs(class UDynamicMesh* TargetMesh);                                                                 // [0x7b933d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
	// int32_t GetNumUVSets(class UDynamicMesh* TargetMesh);                                                                    // [0x7b932e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
	// int32_t GetNumTriangleIDs(class UDynamicMesh* TargetMesh);                                                               // [0x7b931f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
	// int32_t GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool& bAmbiguousTopologyFound);                            // [0x7b930a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
	// int32_t GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh);                                                           // [0x7b92fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
	// int32_t GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh);                                                   // [0x7b92ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
	// int32_t GetNumConnectedComponents(class UDynamicMesh* TargetMesh);                                                       // [0x7b92dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeAreaCenter
	// void GetMeshVolumeAreaCenter(class UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass);  // [0x7b92bf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
	// void GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume);                               // [0x7b92a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
	// FString GetMeshInfoString(class UDynamicMesh* TargetMesh);                                                               // [0x7b90e80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
	// bool GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh);                                                             // [0x7b90be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
	// FBox GetMeshBoundingBox(class UDynamicMesh* TargetMesh);                                                                 // [0x7b90aa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
	// bool GetIsDenseMesh(class UDynamicMesh* TargetMesh);                                                                     // [0x7b90660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
	// bool GetIsClosedMesh(class UDynamicMesh* TargetMesh);                                                                    // [0x7b90570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
	// class UDynamicMesh* GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor); // [0x7b90300] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
	// class UDynamicMesh* GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV); // [0x7b90090] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
	// class UDynamicMesh* GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition); // [0x7b8fe70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
	// class UDynamicMesh* GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent); // [0x7b8fba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
	// class UDynamicMesh* GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal); // [0x7b8f960] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
	// bool GetHasVertexIDGaps(class UDynamicMesh* TargetMesh);                                                                 // [0x7b8f870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
	// bool GetHasVertexColors(class UDynamicMesh* TargetMesh);                                                                 // [0x7b8f780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
	// bool GetHasTriangleNormals(class UDynamicMesh* TargetMesh);                                                              // [0x7b8f690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
	// bool GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh);                                                               // [0x7b8f5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
	// bool GetHasPolygroups(class UDynamicMesh* TargetMesh);                                                                   // [0x7b8f4b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
	// bool GetHasMaterialIDs(class UDynamicMesh* TargetMesh);                                                                  // [0x7b8f3c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
	// class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* TargetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps); // [0x7b8f1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
	// class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps); // [0x7b8f010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
	// class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* TargetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps); // [0x7b8eab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
	// class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps); // [0x7b8e8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllSplitUVsAtVertex
	// class UDynamicMesh* GetAllSplitUVsAtVertex(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t VertexID, TArray<int32_t>& ElementIDs, TArray<FVector2D>& ElementUVs, bool& bHaveValidUVs); // [0x7b8e650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
	// class UDynamicMesh* ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords); // [0x7b89180] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
	// class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* TargetMesh, FGeometryScriptRemeshOptions RemeshOptions, FGeometryScriptUniformRemeshOptions UniformOptions, class UGeometryScriptDebug* Debug); // [0x7b858c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
	// class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* TargetMesh, FGeometryScriptWeldEdgesOptions WeldOptions, class UGeometryScriptDebug* Debug); // [0x7ba18b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
	// class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug); // [0x7b9f6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
	// class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, FGeometryScriptResolveTJunctionOptions ResolveOptions, class UGeometryScriptDebug* Debug); // [0x7b99300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
	// class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, FGeometryScriptDegenerateTriangleOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b98f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveUnusedVertices
	// class UDynamicMesh* RemoveUnusedVertices(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);             // [0x7b98b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
	// class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* TargetMesh, FGeometryScriptRemoveSmallComponentOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b989d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
	// class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, FGeometryScriptRemoveHiddenTrianglesOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b98810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
	// class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* TargetMesh, FGeometryScriptFillHolesOptions FillOptions, int32_t& NumFilledHoles, int32_t& NumFailedHoleFills, class UGeometryScriptDebug* Debug); // [0x7b8dad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
	// class UDynamicMesh* CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);                      // [0x7b87310] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
	// class UDynamicMesh* ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions OPTIONS, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug); // [0x7b894e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeRenderCapturePointSampling
	// void ComputeRenderCapturePointSampling(TArray<FTransform>& Samples, TArray<AActor*>& Actors, TArray<FGeometryScriptRenderCaptureCamera>& Cameras, class UGeometryScriptDebug* Debug); // [0x7b88c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeRenderCaptureCamerasForBox
	// void ComputeRenderCaptureCamerasForBox(TArray<FGeometryScriptRenderCaptureCamera>& Cameras, FBox Box, FGeometryScriptRenderCaptureCamerasForBoxOptions& OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b88a40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
	// class UDynamicMesh* ComputePointSampling(class UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions OPTIONS, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug); // [0x7b87ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
	// class UDynamicMesh* ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions OPTIONS, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug); // [0x7b878a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
	// class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0x7b9bae0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
	// class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0x7b9b130] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
	// class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32_t MinNumTrianglePoints); // [0x7b9b400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
	// class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0x7b9aab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
	// class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints); // [0x7b9a770] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
	// class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected); // [0x7b960c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
	// void GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32_t& NumSelected); // [0x7b920d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
	// class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType); // [0x7b8d8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
	// class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32_t Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours); // [0x7b8d640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
	// void DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable);                                     // [0x7b8cc60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
	// class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType); // [0x7b8c520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
	// class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType); // [0x7b8abe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
	// class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<int32_t>& IndexArray, EGeometryScriptMeshSelectionType& SelectionType); // [0x7b8a950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
	// class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion); // [0x7b8a720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
	// class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32_t>& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // [0x7b8a4b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
	// class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // [0x7b89ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
	// class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32_t>& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection); // [0x7b89e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
	// void CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode); // [0x7b86de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
	// class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FBox& SelectionBounds, bool& bIsEmpty, class UGeometryScriptDebug* Debug); // [0x7b91e90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
	// class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<FGeometryScriptIndexList>& IndexLoops, TArray<FGeometryScriptPolyPath>& PathLoops, int32_t& NumLoops, bool& bFoundErrors, class UGeometryScriptDebug* Debug); // [0x7b91a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
	// class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32_t VertexCount, FGeometryScriptSimplifyMeshOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b85390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
	// class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32_t TriangleCount, FGeometryScriptSimplifyMeshOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b851a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
	// class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, FGeometryScriptSimplifyMeshOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b84fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
	// class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, FGeometryScriptPolygroupSimplifyOptions OPTIONS, FGeometryScriptGroupLayer GroupLayer, class UGeometryScriptDebug* Debug); // [0x7b84db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
	// class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, FGeometryScriptPlanarSimplifyOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b84bf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.SelectMeshElementsInBoxWithBVH
	// class UDynamicMesh* SelectMeshElementsInBoxWithBVH(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions OPTIONS, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32_t MinNumTrianglePoints, class UGeometryScriptDebug* Debug); // [0x7b9ada0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
	// void ResetBVH(FGeometryScriptDynamicMeshBVH& ResetBVH);                                                                  // [0x7b99100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
	// class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug); // [0x7b97650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
	// class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions OPTIONS, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b96a20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
	// class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, class UGeometryScriptDebug* Debug); // [0x7b963c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
	// class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions OPTIONS, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b8e0a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
	// class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions OPTIONS, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7b8dca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
	// class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug* Debug); // [0x7b86730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
	// class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32_t TessellationLevel, class UGeometryScriptDebug* Debug); // [0x7b85b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
	// class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptSelectiveTessellateOptions OPTIONS, int32_t TessellationLevel, ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug); // [0x7b84880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
	// class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* TargetMesh, FGeometryScriptPNTessellateOptions OPTIONS, int32_t TessellationLevel, class UGeometryScriptDebug* Debug); // [0x7b843a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
	// class UDynamicMesh* TranslatePivotToLocation(class UDynamicMesh* TargetMesh, FVector PivotLocation, class UGeometryScriptDebug* Debug); // [0x7ba12c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
	// class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Translation, class UGeometryScriptDebug* Debug); // [0x7ba0c60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
	// class UDynamicMesh* TranslateMesh(class UDynamicMesh* TargetMesh, FVector Translation, class UGeometryScriptDebug* Debug); // [0x7ba0a90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
	// class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, class UGeometryScriptDebug* Debug); // [0x7ba0720] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
	// class UDynamicMesh* TransformMesh(class UDynamicMesh* TargetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug); // [0x7ba04a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
	// class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Scale, FVector ScaleOrigin, class UGeometryScriptDebug* Debug); // [0x7b9a010] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
	// class UDynamicMesh* ScaleMesh(class UDynamicMesh* TargetMesh, FVector Scale, FVector ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug); // [0x7b99dd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
	// class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FRotator Rotation, FVector RotationOrigin, class UGeometryScriptDebug* Debug); // [0x7b99680] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
	// class UDynamicMesh* RotateMesh(class UDynamicMesh* TargetMesh, FRotator Rotation, FVector RotationOrigin, class UGeometryScriptDebug* Debug); // [0x7b99490] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
	// class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7ba0f30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
	// class UDynamicMesh* SetNumUVSets(class UDynamicMesh* TargetMesh, int32_t NumUVSets, class UGeometryScriptDebug* Debug);  // [0x7b9eaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
	// class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b9e650] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
	// class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, class UGeometryScriptDebug* Debug); // [0x7b9e370] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
	// class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32_t MinIslandTriCount, class UGeometryScriptDebug* Debug); // [0x7b9e0a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVElementPosition
	// class UDynamicMesh* SetMeshUVElementPosition(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications); // [0x7b9de80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
	// class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0x7b9dc40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVElementIDs
	// class UDynamicMesh* SetMeshTriangleUVElementIDs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications); // [0x7b9da10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
	// class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b9a340] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
	// class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b999b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
	// class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, class UGeometryScriptDebug* Debug); // [0x7b98ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
	// class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptRecomputeUVsOptions OPTIONS, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug); // [0x7b979b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
	// class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug); // [0x7b92650] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVElementPosition
	// class UDynamicMesh* GetMeshUVElementPosition(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t ElementID, FVector2D& uvPosition, bool& bIsValidElementID); // [0x7b92470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshTriangleUVElementIDs
	// class UDynamicMesh* GetMeshTriangleUVElementIDs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, int32_t TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs); // [0x7b92290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
	// class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, class UGeometryScriptDebug* Debug); // [0x7b91780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
	// class UDynamicMesh* CopyUVSet(class UDynamicMesh* TargetMesh, int32_t FromUVSet, int32_t ToUVSet, class UGeometryScriptDebug* Debug); // [0x7b8c300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
	// class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32_t UvSetIndex, class UDynamicMesh*& CopyToUVMesh, class UDynamicMesh*& CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, class UGeometryScriptDebug* Debug); // [0x7b8bd00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
	// class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32_t ToUVSetIndex, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug); // [0x7b8b930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ComputeMeshLocalUVParam
	// class UDynamicMesh* ComputeMeshLocalUVParam(class UDynamicMesh* TargetMesh, FVector CenterPoint, int32_t CenterPointTriangleID, TArray<int32_t>& VertexIDs, TArray<FVector2D>& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, class UGeometryScriptDebug* Debug); // [0x7b87470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
	// class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptXAtlasOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b85f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
	// class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FGeometryScriptPatchBuilderOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b85ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AddUVElementToMesh
	// class UDynamicMesh* AddUVElementToMesh(class UDynamicMesh* TargetMesh, int32_t UvSetIndex, FVector2D NewUVPosition, int32_t& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications); // [0x7b76f90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
	// class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug); // [0x7b9d490] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
	// class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, FGeometryScriptColorList VertexColorList, class UGeometryScriptDebug* Debug); // [0x7b9caa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
	// class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, class UGeometryScriptDebug* Debug); // [0x7b9c870] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
	// class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues); // [0x7b91010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
	// class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug); // [0x7b8b0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
	// class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug); // [0x7b8af40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.BlurMeshVertexColors
	// class UDynamicMesh* BlurMeshVertexColors(class UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32_t NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7b86310] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
	// class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* TargetMesh, FGeometryScriptSolidifyOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7bafbe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
	// class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* TargetMesh, FGeometryScriptMorphologyOptions OPTIONS, class UGeometryScriptDebug* Debug); // [0x7bafa00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_PointSetSamplingFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.UnflattenPoints
	// void UnflattenPoints(TArray<FVector2D>& PointsIn2D, TArray<FVector>& PointsIn3D, FGeometryScriptPointFlatteningOptions& OPTIONS, double Height); // [0x7bc0ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.TransformsToPoints
	// void TransformsToPoints(TArray<FTransform>& Transforms, TArray<FVector>& Points);                                        // [0x7bc0950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.OffsetTransforms
	// void OffsetTransforms(TArray<FTransform>& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space); // [0x7bbbbe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.MakeBoundingBoxFromPoints
	// FBox MakeBoundingBoxFromPoints(TArray<FVector>& Points, double ExpandBy);                                                // [0x7bbafd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.KMeansClusterToIDs
	// void KMeansClusterToIDs(TArray<FVector>& Points, FGeometryScriptPointClusteringOptions& OPTIONS, TArray<int32_t>& PointClusterIndices); // [0x7bbade0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.KMeansClusterToArrays
	// void KMeansClusterToArrays(TArray<FVector>& Points, FGeometryScriptPointClusteringOptions& OPTIONS, TArray<FGeometryScriptIndexList>& ClusterIDToLists); // [0x7bbabf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.GetPointsFromIndexList
	// void GetPointsFromIndexList(TArray<FVector>& AllPoints, FGeometryScriptIndexList& Indices, TArray<FVector>& SelectedPoints); // [0x7bb5ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.FlattenPoints
	// void FlattenPoints(TArray<FVector>& PointsIn3D, TArray<FVector2D>& PointsIn2D, FGeometryScriptPointFlatteningOptions& OPTIONS); // [0x7bb4bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions.DownsamplePoints
	// void DownsamplePoints(TArray<FVector>& Points, FGeometryScriptPointPriorityOptions& OPTIONS, FGeometryScriptIndexList& DownsampledIndices, int32_t KeepNumPoints, class UGeometryScriptDebug* Debug); // [0x7bb44a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_SimplePolygonFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.SetPolygonVertex
	// void SetPolygonVertex(FGeometryScriptSimplePolygon& Polygon, int32_t VertexIndex, FVector2D Position, bool& bPolygonIsEmpty); // [0x7bc0310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertexCount
	// int32_t GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon);                                                     // [0x7bb8360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonVertex
	// FVector2D GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty);            // [0x7bb7f80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonTangent
	// FVector2D GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32_t VertexIndex, bool& bPolygonIsEmpty);           // [0x7bb7ac0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonBounds
	// FBox2D GetPolygonBounds(FGeometryScriptSimplePolygon Polygon);                                                           // [0x7bb6f90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArea
	// double GetPolygonArea(FGeometryScriptSimplePolygon Polygon);                                                             // [0x7bb6a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.GetPolygonArcLength
	// double GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon);                                                        // [0x7bb6a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.ConvertSplineToPolygon
	// void ConvertSplineToPolygon(class USplineComponent* Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis); // [0x7bb1da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArrayOfVector2D
	// TArray<FVector2D> Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon);               // [0x7bb1310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_GeometryScriptSimplePolygonToArray
	// TArray<FVector> Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon);                           // [0x7bb1120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayToGeometryScriptSimplePolygon
	// FGeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(TArray<FVector>& PathVertices);                     // [0x7bb0ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.Conv_ArrayOfVector2DToGeometryScriptSimplePolygon
	// FGeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(TArray<FVector2D>& PathVertices);         // [0x7bb0810] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions.AddPolygonVertex
	// int32_t AddPolygonVertex(FGeometryScriptSimplePolygon& Polygon, FVector2D Position);                                     // [0x7baf590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_PolygonListFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsUnion
	// FGeometryScriptGeneralPolygonList PolygonsUnion(FGeometryScriptGeneralPolygonList PolygonList, bool bCopyInputOnFailure); // [0x7bbd4d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffsets
	// FGeometryScriptGeneralPolygonList PolygonsOffsets(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double FirstOffset, double SecondOffset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0x7bbd110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsOffset
	// FGeometryScriptGeneralPolygonList PolygonsOffset(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0x7bbcdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyOpen
	// FGeometryScriptGeneralPolygonList PolygonsMorphologyOpen(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0x7bbca00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsMorphologyClose
	// FGeometryScriptGeneralPolygonList PolygonsMorphologyClose(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0x7bbc650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsIntersection
	// FGeometryScriptGeneralPolygonList PolygonsIntersection(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToIntersect); // [0x7bbc3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsExclusiveOr
	// FGeometryScriptGeneralPolygonList PolygonsExclusiveOr(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr); // [0x7bbc130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.PolygonsDifference
	// FGeometryScriptGeneralPolygonList PolygonsDifference(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToSubtract); // [0x7bbbd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetSimplePolygon
	// FGeometryScriptSimplePolygon GetSimplePolygon(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // [0x7bb9d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertices
	// void GetPolygonVertices(FGeometryScriptGeneralPolygonList PolygonList, TArray<FVector2D>& OutVertices, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // [0x7bb84c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertexCount
	// int32_t GetPolygonVertexCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32_t PolygonIndex, int32_t HoleIndex); // [0x7bb8150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonVertex
	// FVector2D GetPolygonVertex(FGeometryScriptGeneralPolygonList PolygonList, bool& bIsValidVertex, int32_t VertexIndex, int32_t PolygonIndex, int32_t HoleIndex); // [0x7bb7d20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListBounds
	// FBox2D GetPolygonListBounds(FGeometryScriptGeneralPolygonList PolygonList);                                              // [0x7bb75c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonListArea
	// double GetPolygonListArea(FGeometryScriptGeneralPolygonList PolygonList);                                                // [0x7bb7380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonHoleCount
	// int32_t GetPolygonHoleCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex);     // [0x7bb71d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonCount
	// int32_t GetPolygonCount(FGeometryScriptGeneralPolygonList PolygonList);                                                  // [0x7b2d440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonBounds
	// FBox2D GetPolygonBounds(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex);         // [0x7bb6d70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.GetPolygonArea
	// double GetPolygonArea(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32_t PolygonIndex);           // [0x7bb6b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromPathOffset
	// FGeometryScriptGeneralPolygonList CreatePolygonsFromPathOffset(TArray<FVector2D> Path, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0x7bb3d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonsFromOpenPolyPathsOffset
	// FGeometryScriptGeneralPolygonList CreatePolygonsFromOpenPolyPathsOffset(TArray<FGeometryScriptPolyPath> PolyPaths, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure); // [0x7bb3a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSinglePolygon
	// FGeometryScriptGeneralPolygonList CreatePolygonListFromSinglePolygon(FGeometryScriptSimplePolygon OuterPolygon, TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations); // [0x7bb37b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.CreatePolygonListFromSimplePolygons
	// FGeometryScriptGeneralPolygonList CreatePolygonListFromSimplePolygons(TArray<FGeometryScriptSimplePolygon>& OuterPolygons); // [0x7bb34e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AppendPolygonList
	// void AppendPolygonList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptGeneralPolygonList PolygonsToAppend); // [0x7baf760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions.AddPolygonToList
	// int32_t AddPolygonToList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptSimplePolygon OuterPolygon, TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations); // [0x7baf2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
	// bool SampleSplineToTransforms(class USplineComponent* Spline, TArray<FTransform>& Frames, TArray<double>& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale); // [0x7bbd6d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
	// FVector GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex);                         // [0x7bb6860] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
	// FVector GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32_t Index, bool& bIsValidIndex);                        // [0x7bb64e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
	// int32_t GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath);                                                        // [0x7bb63c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
	// int32_t GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath);                                                          // [0x7bb62a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
	// double GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath);                                                           // [0x7bb6120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
	// int32_t GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point);                                          // [0x7bb5d00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
	// FGeometryScriptPolyPath FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis);               // [0x7bb4d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
	// FGeometryScriptPolyPath CreateCirclePath3D(FTransform Transform, float Radius, int32_t NumPoints);                       // [0x7bb3110] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
	// FGeometryScriptPolyPath CreateCirclePath2D(FVector2D Center, float Radius, int32_t NumPoints);                           // [0x7bb2e90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
	// FGeometryScriptPolyPath CreateArcPath3D(FTransform Transform, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // [0x7bb2af0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
	// FGeometryScriptPolyPath CreateArcPath2D(FVector2D Center, float Radius, int32_t NumPoints, float StartAngle, float EndAngle); // [0x7bb27f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
	// void ConvertSplineToPolyPath(class USplineComponent* Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions); // [0x7bb1b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
	// void ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray<FVector2D>& VertexArray);                 // [0x7bb1920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
	// void ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray<FVector>& VertexArray);                             // [0x7bb1780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
	// void ConvertArrayToPolyPath(TArray<FVector>& VertexArray, FGeometryScriptPolyPath& PolyPath);                            // [0x7bb1630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
	// void ConvertArrayOfVector2DToPolyPath(TArray<FVector2D>& VertexArray, FGeometryScriptPolyPath& PolyPath);                // [0x7bb14f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
	// TArray<FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath);                        // [0x7bb0ed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
	// TArray<FVector> Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath);                                    // [0x7bb0ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
	// FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray<FVector>& PathVertices);                               // [0x7bb0940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
	// FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<FVector2D>& PathVertices);                   // [0x7bb06e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
	// void SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<UMaterialInterface*>& materialList, class UGeometryScriptDebug* Debug); // [0x7bc0170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.DetermineMeshOcclusion
	// void DetermineMeshOcclusion(TArray<UDynamicMesh*>& SourceMeshes, TArray<FTransform>& SourceMeshTransforms, TArray<bool>& OutMeshIsHidden, TArray<UDynamicMesh*>& TransparentMeshes, TArray<FTransform>& TransparentMeshTransforms, TArray<bool>& OutTransparentMeshIsHidden, TArray<UDynamicMesh*>& OccludeMeshes, TArray<FTransform>& OccludeMeshTransforms, FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, class UGeometryScriptDebug* Debug); // [0x7bb4060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
	// class UDynamicMeshPool* CreateDynamicMeshPool();                                                                         // [0x7bb3420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
	// class UDynamicMesh* CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions OPTIONS, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug); // [0x7bb2520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
	// class UDynamicMesh* CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32_t SphereResolution, class UGeometryScriptDebug* Debug); // [0x7bb2230] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
	// FTransform MakeTransformFromZAxis(FVector Location, FVector ZAxis);                                                      // [0x7bbba70] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
	// FTransform MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX);                // [0x7bbb760] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
	// FVector GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis);                                          // [0x7bba2b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
	// FRay GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis);                                                // [0x7bba130] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
	// FPlane GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis);                                            // [0x7bb9fb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
	// FRay MakeRayFromPoints(FVector A, FVector B);                                                                            // [0x7bbb5e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
	// FRay MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized);                          // [0x7bbb420] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
	// FRay GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert);                                                    // [0x7bba9e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
	// void GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& EndPoint);         // [0x7bb9a80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
	// bool GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2); // [0x7bb9790] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
	// double GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint); // [0x7bb9420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
	// double GetRayPointDistance(FRay Ray, FVector Point);                                                                     // [0x7bb9230] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
	// FVector GetRayPoint(FRay Ray, double Distance);                                                                          // [0x7bb9100] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
	// bool GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance);                                               // [0x7bb8f20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
	// double GetRayParameter(FRay Ray, FVector Point);                                                                         // [0x7bb8e00] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
	// double GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint); // [0x7bb8ab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
	// FVector GetRayClosestPoint(FRay Ray, FVector Point);                                                                     // [0x7bb8930] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
	// bool GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance);                                                     // [0x7bb8720] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
	// bool TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside);                                           // [0x7bc07e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
	// bool TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius);                                     // [0x7bc0640] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
	// bool TestBoxBoxIntersection(FBox Box1, FBox Box2);                                                                       // [0x7bc0510] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
	// FBox MakeBoxFromCenterSize(FVector Center, FVector Dimensions);                                                          // [0x7bbb2a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
	// FBox MakeBoxFromCenterExtents(FVector Center, FVector Extents);                                                          // [0x7bbb150] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
	// FBox GetTransformedBox(FBox Box, FTransform Transform);                                                                  // [0x7bba560] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
	// FBox GetExpandedBox(FBox Box, FVector ExpandBy);                                                                         // [0x7bb5b30] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
	// void GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea);                                                    // [0x7bb5990] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
	// double GetBoxPointDistance(FBox Box, FVector Point);                                                                     // [0x7bb5850] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
	// FVector GetBoxFaceCenter(FBox Box, int32_t FaceIndex, FVector& FaceNormal);                                              // [0x7bb55b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
	// FVector GetBoxCorner(FBox Box, int32_t CornerIndex);                                                                     // [0x7bb53e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
	// void GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions);                                                   // [0x7bb5240] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
	// double GetBoxBoxDistance(FBox Box1, FBox Box2);                                                                          // [0x7bb5020] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
	// FVector FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside);                                                 // [0x7bb49b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
	// FBox FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting);                                                // [0x7bb46d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
	// void SampleTextureRenderTarget2DAtUVPositions(FGeometryScriptUVList UVList, class UTextureRenderTarget2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug); // [0x7bbdd10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
	// void SampleTexture2DAtUVPositions(FGeometryScriptUVList UVList, class UTexture2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug); // [0x7bbd9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
	// FGeometryScriptScalarList VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ); // [0x7bc2620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
	// void VectorNormalizeInPlace(FGeometryScriptVectorList& VectorList, FVector SetOnFailure);                                // [0x7bc23d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
	// FGeometryScriptScalarList VectorLength(FGeometryScriptVectorList VectorList);                                            // [0x7bc20a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
	// FGeometryScriptScalarList VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);       // [0x7bc1c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
	// FGeometryScriptVectorList VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);     // [0x7bc1710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
	// void VectorBlendInPlace(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB); // [0x7bc1290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
	// FGeometryScriptVectorList VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB); // [0x7bc0d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
	// void ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList& VectorList, double ScalarMultiplier); // [0x7bbfe40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
	// FGeometryScriptVectorList ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier); // [0x7bbfa00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
	// void ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier); // [0x7bbf640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
	// FGeometryScriptScalarList ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier); // [0x7bbf150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
	// void ScalarInvertInPlace(FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);  // [0x7bbef80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
	// FGeometryScriptScalarList ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon); // [0x7bbebd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
	// void ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB); // [0x7bbe730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
	// FGeometryScriptScalarList ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB); // [0x7bbe180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
	// void ConstantVectorMultiplyInPlace(double Constant, FGeometryScriptVectorList& VectorList);                              // [0x7bb05c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
	// FGeometryScriptVectorList ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList);                 // [0x7bb0280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
	// void ConstantScalarMultiplyInPlace(double Constant, FGeometryScriptScalarList& ScalarList);                              // [0x7bb0160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
	// FGeometryScriptScalarList ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList);                 // [0x7bafdc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshReadLOD
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptMeshReadLOD
{ 
	EGeometryScriptLODType                             LODType;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            LODIndex;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshWriteLOD
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptMeshWriteLOD
{ 
	bool                                               bWriteHiResSource;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            LODIndex;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimpleCollision
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGeometryScriptSimpleCollision
{ 
	FKAggregateGeom                                    AggGeom;                                                    // 0x0000   (0x0080)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSphereCovering
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptSphereCovering
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimpleCollisionTriangulationOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGeometryScriptSimpleCollisionTriangulationOptions
{ 
	int32_t                                            SphereStepsPerSide;                                         // 0x0000   (0x0004)  
	int32_t                                            CapsuleHemisphereSteps;                                     // 0x0004   (0x0004)  
	int32_t                                            CapsuleCircleSteps;                                         // 0x0008   (0x0004)  
	bool                                               bApproximateLevelSetsWithCubes;                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTriangle
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGeometryScriptTriangle
{ 
	FVector                                            Vector0;                                                    // 0x0000   (0x0018)  
	FVector                                            Vector1;                                                    // 0x0018   (0x0018)  
	FVector                                            Vector2;                                                    // 0x0030   (0x0018)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTrianglePoint
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGeometryScriptTrianglePoint
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            TriangleID;                                                 // 0x0004   (0x0004)  
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FVector                                            BaryCoords;                                                 // 0x0020   (0x0018)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptUVTriangle
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGeometryScriptUVTriangle
{ 
	FVector2D                                          UV0;                                                        // 0x0000   (0x0010)  
	FVector2D                                          UV1;                                                        // 0x0010   (0x0010)  
	FVector2D                                          UV2;                                                        // 0x0020   (0x0010)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptColorFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FGeometryScriptColorFlags
{ 
	bool                                               bRed;                                                       // 0x0000   (0x0001)  
	bool                                               bGreen;                                                     // 0x0001   (0x0001)  
	bool                                               bBlue;                                                      // 0x0002   (0x0001)  
	bool                                               bAlpha;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptGroupLayer
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptGroupLayer
{ 
	bool                                               bDefaultLayer;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ExtendedLayerIndex;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptIndexList
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptIndexList
{ 
	EGeometryScriptIndexType                           IndexType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0001   (0x0017)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTriangleList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptTriangleList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptScalarList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptScalarList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptVectorList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptVectorList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptUVList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptUVList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptColorList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptColorList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolyPath
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptPolyPath
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bClosedLoop;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimplePolygon
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptSimplePolygon
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptGeneralPolygonList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptGeneralPolygonList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDynamicMeshBVH
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGeometryScriptDynamicMeshBVH
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRenderCaptureCamera
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGeometryScriptRenderCaptureCamera
{ 
	int32_t                                            Resolution;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             FieldOfViewDegrees;                                         // 0x0008   (0x0008)  
	FVector                                            ViewPosition;                                               // 0x0010   (0x0018)  
	FVector                                            ViewDirection;                                              // 0x0028   (0x0018)  
	double                                             NearPlaneDist;                                              // 0x0040   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRenderCaptureCamerasForBoxOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptRenderCaptureCamerasForBoxOptions
{ 
	int32_t                                            Resolution;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             FieldOfViewDegrees;                                         // 0x0008   (0x0008)  
	bool                                               bViewFromBoxFaces;                                          // 0x0010   (0x0001)  
	bool                                               bViewFromUpperCorners;                                      // 0x0011   (0x0001)  
	bool                                               bViewFromLowerCorners;                                      // 0x0012   (0x0001)  
	bool                                               bViewFromUpperEdges;                                        // 0x0013   (0x0001)  
	bool                                               bViewFromLowerEdges;                                        // 0x0014   (0x0001)  
	bool                                               bViewFromSideEdges;                                         // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	TArray<FVector>                                    ExtraViewFromPositions;                                     // 0x0018   (0x0010)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FGeometryScriptCollisionFromMeshOptions
{ 
	bool                                               bEmitTransaction;                                           // 0x0000   (0x0001)  
	EGeometryScriptCollisionGenerationMethod           Method;                                                     // 0x0001   (0x0001)  
	bool                                               bAutoDetectSpheres;                                         // 0x0002   (0x0001)  
	bool                                               bAutoDetectBoxes;                                           // 0x0003   (0x0001)  
	bool                                               bAutoDetectCapsules;                                        // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              MinThickness;                                               // 0x0008   (0x0004)  
	bool                                               bSimplifyHulls;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            ConvexHullTargetFaceCount;                                  // 0x0010   (0x0004)  
	int32_t                                            MaxConvexHullsPerMesh;                                      // 0x0014   (0x0004)  
	float                                              ConvexDecompositionSearchFactor;                            // 0x0018   (0x0004)  
	float                                              ConvexDecompositionErrorTolerance;                          // 0x001C   (0x0004)  
	float                                              ConvexDecompositionMinPartThickness;                        // 0x0020   (0x0004)  
	float                                              SweptHullSimplifyTolerance;                                 // 0x0024   (0x0004)  
	EGeometryScriptSweptHullAxis                       SweptHullAxis;                                              // 0x0028   (0x0001)  
	bool                                               bRemoveFullyContainedShapes;                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            MaxShapeCount;                                              // 0x002C   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptSetSimpleCollisionOptions
{ 
	bool                                               bEmitTransaction;                                           // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSetStaticMeshCollisionOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptSetStaticMeshCollisionOptions
{ 
	bool                                               bMarkAsCustomized;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.ComputeNegativeSpaceOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FComputeNegativeSpaceOptions
{ 
	ENegativeSpaceSampleMethod                         SampleMethod;                                               // 0x0000   (0x0001)  
	bool                                               bRequireSearchSampleCoverage;                               // 0x0001   (0x0001)  
	bool                                               bOnlyConnectedToHull;                                       // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            MaxVoxelsPerDim;                                            // 0x0004   (0x0004)  
	int32_t                                            TargetNumSamples;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             MinSampleSpacing;                                           // 0x0010   (0x0008)  
	double                                             NegativeSpaceTolerance;                                     // 0x0018   (0x0008)  
	double                                             MinRadius;                                                  // 0x0020   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMergeSimpleCollisionOptions
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FGeometryScriptMergeSimpleCollisionOptions
{ 
	int32_t                                            MaxShapeCount;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             ErrorTolerance;                                             // 0x0008   (0x0008)  
	double                                             MinThicknessTolerance;                                      // 0x0010   (0x0008)  
	bool                                               bConsiderAllPossibleMerges;                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FGeometryScriptSphereCovering                      PrecomputedNegativeSpace;                                   // 0x0020   (0x0010)  
	bool                                               bComputeNegativeSpace;                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FComputeNegativeSpaceOptions                       ComputeNegativeSpaceOptions;                                // 0x0038   (0x0028)  
	FGeometryScriptSimpleCollisionTriangulationOptions ShapeToHullTriangulation;                                   // 0x0060   (0x0010)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexHullSimplificationOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGeometryScriptConvexHullSimplificationOptions
{ 
	EGeometryScriptConvexHullSimplifyMethod            SimplificationMethod;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SimplificationDistanceThreshold;                            // 0x0004   (0x0004)  
	float                                              SimplificationAngleThreshold;                               // 0x0008   (0x0004)  
	int32_t                                            MinTargetFaceCount;                                         // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexHullApproximationOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptConvexHullApproximationOptions
{ 
	bool                                               bFitSpheres;                                                // 0x0000   (0x0001)  
	bool                                               bFitBoxes;                                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              DistanceThreshold;                                          // 0x0004   (0x0004)  
	float                                              VolumeDiffThreshold_Fraction;                               // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTransformCollisionOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FGeometryScriptTransformCollisionOptions
{ 
	bool                                               bWarnOnInvalidTransforms;                                   // 0x0000   (0x0001)  
	bool                                               bCenterTransformPivotPerShape;                              // 0x0001   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexHullOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptConvexHullOptions
{ 
	bool                                               bPrefilterVertices;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PrefilterGridResolution;                                    // 0x0004   (0x0004)  
	int32_t                                            SimplifyToFaceCount;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSweptHullOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FGeometryScriptSweptHullOptions
{ 
	bool                                               bPrefilterVertices;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PrefilterGridResolution;                                    // 0x0004   (0x0004)  
	float                                              MinThickness;                                               // 0x0008   (0x0004)  
	bool                                               bSimplify;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MinEdgeLength;                                              // 0x0010   (0x0004)  
	float                                              SimplifyTolerance;                                          // 0x0014   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptConvexDecompositionOptions
{ 
	int32_t                                            NumHulls;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             SearchFactor;                                               // 0x0008   (0x0008)  
	double                                             ErrorTolerance;                                             // 0x0010   (0x0008)  
	double                                             MinPartThickness;                                           // 0x0018   (0x0008)  
	int32_t                                            SimplifyToFaceCount;                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshSelection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptMeshSelection
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FGeometryScriptCopyMeshFromAssetOptions
{ 
	bool                                               bApplyBuildSettings;                                        // 0x0000   (0x0001)  
	bool                                               bRequestTangents;                                           // 0x0001   (0x0001)  
	bool                                               bIgnoreRemoveDegenerates;                                   // 0x0002   (0x0001)  
	bool                                               bUseBuildScale;                                             // 0x0003   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptNaniteOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptNaniteOptions
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FallbackPercentTriangles;                                   // 0x0004   (0x0004)  
	float                                              FallbackRelativeError;                                      // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGeometryScriptCopyMeshToAssetOptions
{ 
	bool                                               bEnableRecomputeNormals;                                    // 0x0000   (0x0001)  
	bool                                               bEnableRecomputeTangents;                                   // 0x0001   (0x0001)  
	bool                                               bEnableRemoveDegenerates;                                   // 0x0002   (0x0001)  
	bool                                               bUseBuildScale;                                             // 0x0003   (0x0001)  
	bool                                               bReplaceMaterials;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<class UMaterialInterface*>                  NewMaterials;                                               // 0x0008   (0x0010)  
	TArray<FName>                                      NewMaterialSlotNames;                                       // 0x0018   (0x0010)  
	bool                                               bApplyNaniteSettings;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGeometryScriptNaniteOptions                       NaniteSettings;                                             // 0x002C   (0x000C)  
	FMeshNaniteSettings                                NewNaniteSettings;                                          // 0x0038   (0x0040)  
	bool                                               bEmitTransaction;                                           // 0x0078   (0x0001)  
	bool                                               bDeferMeshPostEditChange;                                   // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x007A   (0x0006)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeTypeOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptBakeTypeOptions
{ 
	EGeometryScriptBakeTypes                           BakeType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0001   (0x0017)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeTextureOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGeometryScriptBakeTextureOptions
{ 
	EGeometryScriptBakeResolution                      Resolution;                                                 // 0x0000   (0x0001)  
	EGeometryScriptBakeBitDepth                        BitDepth;                                                   // 0x0001   (0x0001)  
	EGeometryScriptBakeSamplesPerPixel                 SamplesPerPixel;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0003   (0x0005)  MISSED
	class UTexture2D*                                  SampleFilterMask;                                           // 0x0008   (0x0008)  
	EGeometryScriptBakeFilteringType                   FilteringType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              ProjectionDistance;                                         // 0x0014   (0x0004)  
	bool                                               bProjectionInWorldSpace;                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeVertexOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptBakeVertexOptions
{ 
	bool                                               bSplitAtNormalSeams;                                        // 0x0000   (0x0001)  
	bool                                               bSplitAtUVSeams;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ProjectionDistance;                                         // 0x0004   (0x0004)  
	bool                                               bProjectionInWorldSpace;                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeOutputType
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGeometryScriptBakeOutputType
{ 
	EGeometryScriptBakeOutputMode                      OutputMode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FGeometryScriptBakeTypeOptions                     RGBA;                                                       // 0x0008   (0x0018)  
	FGeometryScriptBakeTypeOptions                     R;                                                          // 0x0020   (0x0018)  
	FGeometryScriptBakeTypeOptions                     G;                                                          // 0x0038   (0x0018)  
	FGeometryScriptBakeTypeOptions                     B;                                                          // 0x0050   (0x0018)  
	FGeometryScriptBakeTypeOptions                     A;                                                          // 0x0068   (0x0018)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGeometryScriptBakeTargetMeshOptions
{ 
	int32_t                                            TargetUVLayer;                                              // 0x0000   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptBakeSourceMeshOptions
{ 
	class UTexture2D*                                  SourceNormalMap;                                            // 0x0000   (0x0008)  
	int32_t                                            SourceNormalUVLayer;                                        // 0x0008   (0x0004)  
	EGeometryScriptBakeNormalSpace                     SourceNormalSpace;                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGeometryScriptBakeRenderCaptureOptions
{ 
	TArray<FGeometryScriptRenderCaptureCamera>         Cameras;                                                    // 0x0000   (0x0010)  
	EGeometryScriptBakeResolution                      RenderCaptureResolution;                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	double                                             FieldOfViewDegrees;                                         // 0x0018   (0x0008)  
	double                                             NearPlaneDist;                                              // 0x0020   (0x0008)  
	EGeometryScriptBakeResolution                      Resolution;                                                 // 0x0028   (0x0001)  
	EGeometryScriptBakeSamplesPerPixel                 SamplesPerPixel;                                            // 0x0029   (0x0001)  
	bool                                               bRenderCaptureAntiAliasing;                                 // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              CleanupTolerance;                                           // 0x002C   (0x0004)  
	bool                                               bBaseColorMap;                                              // 0x0030   (0x0001)  
	bool                                               bNormalMap;                                                 // 0x0031   (0x0001)  
	bool                                               bPackedMRSMap;                                              // 0x0032   (0x0001)  
	bool                                               bMetallicMap;                                               // 0x0033   (0x0001)  
	bool                                               bRoughnessMap;                                              // 0x0034   (0x0001)  
	bool                                               bSpecularMap;                                               // 0x0035   (0x0001)  
	bool                                               bEmissiveMap;                                               // 0x0036   (0x0001)  
	bool                                               bOpacityMap;                                                // 0x0037   (0x0001)  
	bool                                               bSubsurfaceColorMap;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRenderCaptureTextures
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FGeometryScriptRenderCaptureTextures
{ 
	class UTexture2D*                                  BaseColorMap;                                               // 0x0000   (0x0008)  
	bool                                               bHasBaseColorMap;                                           // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UTexture2D*                                  NormalMap;                                                  // 0x0010   (0x0008)  
	bool                                               bHasNormalMap;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UTexture2D*                                  PackedMRSMap;                                               // 0x0020   (0x0008)  
	bool                                               bHasPackedMRSMap;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UTexture2D*                                  MetallicMap;                                                // 0x0030   (0x0008)  
	bool                                               bHasMetallicMap;                                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UTexture2D*                                  RoughnessMap;                                               // 0x0040   (0x0008)  
	bool                                               bHasRoughnessMap;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	class UTexture2D*                                  SpecularMap;                                                // 0x0050   (0x0008)  
	bool                                               bHasSpecularMap;                                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	class UTexture2D*                                  EmissiveMap;                                                // 0x0060   (0x0008)  
	bool                                               bHasEmissiveMap;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	class UTexture2D*                                  OpacityMap;                                                 // 0x0070   (0x0008)  
	bool                                               bHasOpacityMap;                                             // 0x0078   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	class UTexture2D*                                  SubsurfaceColorMap;                                         // 0x0080   (0x0008)  
	bool                                               bHasSubsurfaceColorMap;                                     // 0x0088   (0x0001)  
	unsigned char                                      UnknownData08_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FGeometryScriptSimpleMeshBuffers
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0010   (0x0010)  
	TArray<FVector2D>                                  UV0;                                                        // 0x0020   (0x0010)  
	TArray<FVector2D>                                  UV1;                                                        // 0x0030   (0x0010)  
	TArray<FVector2D>                                  UV2;                                                        // 0x0040   (0x0010)  
	TArray<FVector2D>                                  UV3;                                                        // 0x0050   (0x0010)  
	TArray<FVector2D>                                  UV4;                                                        // 0x0060   (0x0010)  
	TArray<FVector2D>                                  UV5;                                                        // 0x0070   (0x0010)  
	TArray<FVector2D>                                  UV6;                                                        // 0x0080   (0x0010)  
	TArray<FVector2D>                                  UV7;                                                        // 0x0090   (0x0010)  
	TArray<FLinearColor>                               VertexColors;                                               // 0x00A0   (0x0010)  
	TArray<FIntVector>                                 Triangles;                                                  // 0x00B0   (0x0010)  
	TArray<int32_t>                                    TriGroupIDs;                                                // 0x00C0   (0x0010)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptAppendMeshOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptAppendMeshOptions
{ 
	EGeometryScriptCombineAttributesMode               CombineMode;                                                // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBoneWeight
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptBoneWeight
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBoneWeightProfile
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptBoneWeightProfile
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGeometryScriptSmoothBoneWeightsOptions
{ 
	EGeometryScriptSmoothBoneWeightsType               DistanceWeighingType;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Stiffness;                                                  // 0x0004   (0x0004)  
	int32_t                                            MaxInfluences;                                              // 0x0008   (0x0004)  
	int32_t                                            VoxelResolution;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTransferBoneWeightsOptions
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGeometryScriptTransferBoneWeightsOptions
{ 
	ETransferBoneWeightsMethod                         TransferMethod;                                             // 0x0000   (0x0001)  
	EOutputTargetMeshBones                             OutputTargetMeshBones;                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGeometryScriptBoneWeightProfile                   SourceProfile;                                              // 0x0004   (0x0008)  
	FGeometryScriptBoneWeightProfile                   TargetProfile;                                              // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	double                                             RadiusPercentage;                                           // 0x0018   (0x0008)  
	double                                             NormalThreshold;                                            // 0x0020   (0x0008)  
	bool                                               LayeredMeshSupport;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            NumSmoothingIterations;                                     // 0x002C   (0x0004)  
	float                                              SmoothingStrength;                                          // 0x0030   (0x0004)  
	FName                                              InpaintMask;                                                // 0x0034   (0x0008)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBoneInfo
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FGeometryScriptBoneInfo
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x000C   (0x0004)  
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0060)  
	FTransform                                         WorldTransform;                                             // 0x0070   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x00D0   (0x0010)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshBooleanOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptMeshBooleanOptions
{ 
	bool                                               bFillHoles;                                                 // 0x0000   (0x0001)  
	bool                                               bSimplifyOutput;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              SimplifyPlanarTolerance;                                    // 0x0004   (0x0004)  
	bool                                               bAllowEmptyResult;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptMeshSelfUnionOptions
{ 
	bool                                               bFillHoles;                                                 // 0x0000   (0x0001)  
	bool                                               bTrimFlaps;                                                 // 0x0001   (0x0001)  
	bool                                               bSimplifyOutput;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              SimplifyPlanarTolerance;                                    // 0x0004   (0x0004)  
	float                                              WindingThreshold;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptMeshPlaneCutOptions
{ 
	bool                                               bFillHoles;                                                 // 0x0000   (0x0001)  
	bool                                               bFillSpans;                                                 // 0x0001   (0x0001)  
	bool                                               bFlipCutSide;                                               // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              UVWorldDimension;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptMeshPlaneSliceOptions
{ 
	bool                                               bFillHoles;                                                 // 0x0000   (0x0001)  
	bool                                               bFillSpans;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              GapWidth;                                                   // 0x0004   (0x0004)  
	float                                              UVWorldDimension;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshMirrorOptions
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FGeometryScriptMeshMirrorOptions
{ 
	bool                                               bApplyPlaneCut;                                             // 0x0000   (0x0001)  
	bool                                               bFlipCutSide;                                               // 0x0001   (0x0001)  
	bool                                               bWeldAlongPlane;                                            // 0x0002   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptIsSameMeshOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptIsSameMeshOptions
{ 
	bool                                               bCheckConnectivity;                                         // 0x0000   (0x0001)  
	bool                                               bCheckEdgeIDs;                                              // 0x0001   (0x0001)  
	bool                                               bCheckNormals;                                              // 0x0002   (0x0001)  
	bool                                               bCheckColors;                                               // 0x0003   (0x0001)  
	bool                                               bCheckUVs;                                                  // 0x0004   (0x0001)  
	bool                                               bCheckGroups;                                               // 0x0005   (0x0001)  
	bool                                               bCheckAttributes;                                           // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              Epsilon;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptMeasureMeshDistanceOptions
{ 
	bool                                               bSymmetric;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBendWarpOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptBendWarpOptions
{ 
	bool                                               bSymmetricExtents;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LowerExtent;                                                // 0x0004   (0x0004)  
	bool                                               bBidirectional;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTwistWarpOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptTwistWarpOptions
{ 
	bool                                               bSymmetricExtents;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LowerExtent;                                                // 0x0004   (0x0004)  
	bool                                               bBidirectional;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptFlareWarpOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptFlareWarpOptions
{ 
	bool                                               bSymmetricExtents;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LowerExtent;                                                // 0x0004   (0x0004)  
	EGeometryScriptFlareType                           FlareType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptPerlinNoiseLayerOptions
{ 
	float                                              Magnitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	FVector                                            FrequencyShift;                                             // 0x0008   (0x0018)  
	int32_t                                            RandomSeed;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMathWarpOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptMathWarpOptions
{ 
	float                                              Magnitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              FrequencyShift;                                             // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGeometryScriptPerlinNoiseOptions
{ 
	FGeometryScriptPerlinNoiseLayerOptions             BaseLayer;                                                  // 0x0000   (0x0028)  
	bool                                               bApplyAlongNormal;                                          // 0x0028   (0x0001)  
	EGeometryScriptEmptySelectionBehavior              EmptyBehavior;                                              // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptIterativeMeshSmoothingOptions
{ 
	int32_t                                            NumIterations;                                              // 0x0000   (0x0004)  
	float                                              Alpha;                                                      // 0x0004   (0x0004)  
	EGeometryScriptEmptySelectionBehavior              EmptyBehavior;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGeometryScriptDisplaceFromTextureOptions
{ 
	float                                              Magnitude;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          UVScale;                                                    // 0x0008   (0x0010)  
	FVector2D                                          UVOffset;                                                   // 0x0018   (0x0010)  
	float                                              Center;                                                     // 0x0028   (0x0004)  
	int32_t                                            ImageChannel;                                               // 0x002C   (0x0004)  
	EGeometryScriptEmptySelectionBehavior              EmptyBehavior;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptMeshEditPolygroupOptions
{ 
	EGeometryScriptMeshEditPolygroupMode               GroupMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ConstantGroup;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshOffsetOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FGeometryScriptMeshOffsetOptions
{ 
	float                                              offsetDistance;                                             // 0x0000   (0x0004)  
	bool                                               bFixedBoundary;                                             // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            SolveSteps;                                                 // 0x0008   (0x0004)  
	float                                              SmoothAlpha;                                                // 0x000C   (0x0004)  
	bool                                               bReprojectDuringSmoothing;                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              BoundaryAlpha;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptMeshExtrudeOptions
{ 
	float                                              ExtrudeDistance;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            ExtrudeDirection;                                           // 0x0008   (0x0018)  
	float                                              UVScale;                                                    // 0x0020   (0x0004)  
	bool                                               bSolidsToShells;                                            // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGeometryScriptMeshLinearExtrudeOptions
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	EGeometryScriptLinearExtrudeDirection              DirectionMode;                                              // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FVector                                            Direction;                                                  // 0x0008   (0x0018)  
	EGeometryScriptPolyOperationArea                   AreaMode;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FGeometryScriptMeshEditPolygroupOptions            GroupOptions;                                               // 0x0024   (0x0008)  
	float                                              UVScale;                                                    // 0x002C   (0x0004)  
	bool                                               bSolidsToShells;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FGeometryScriptMeshOffsetFacesOptions
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	EGeometryScriptOffsetFacesType                     OffsetType;                                                 // 0x0004   (0x0001)  
	EGeometryScriptPolyOperationArea                   AreaMode;                                                   // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FGeometryScriptMeshEditPolygroupOptions            GroupOptions;                                               // 0x0008   (0x0008)  
	float                                              UVScale;                                                    // 0x0010   (0x0004)  
	bool                                               bSolidsToShells;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FGeometryScriptMeshInsetOutsetFacesOptions
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	bool                                               bReproject;                                                 // 0x0004   (0x0001)  
	bool                                               bBoundaryOnly;                                              // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	float                                              Softness;                                                   // 0x0008   (0x0004)  
	float                                              AreaScale;                                                  // 0x000C   (0x0004)  
	EGeometryScriptPolyOperationArea                   AreaMode;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGeometryScriptMeshEditPolygroupOptions            GroupOptions;                                               // 0x0014   (0x0008)  
	float                                              UVScale;                                                    // 0x001C   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshBevelOptions
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FGeometryScriptMeshBevelOptions
{ 
	float                                              BevelDistance;                                              // 0x0000   (0x0004)  
	bool                                               bInferMaterialID;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x0008   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x000C   (0x0004)  
	float                                              RoundWeight;                                                // 0x0010   (0x0004)  
	bool                                               bApplyFilterBox;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FBox                                               FilterBox;                                                  // 0x0018   (0x0038)  
	FTransform                                         FilterBoxTransform;                                         // 0x0050   (0x0060)  
	bool                                               bFullyContained;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGeometryScriptMeshBevelSelectionOptions
{ 
	float                                              BevelDistance;                                              // 0x0000   (0x0004)  
	bool                                               bInferMaterialID;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x0008   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x000C   (0x0004)  
	float                                              RoundWeight;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FGeometryScriptCalculateNormalsOptions
{ 
	bool                                               bAngleWeighted;                                             // 0x0000   (0x0001)  
	bool                                               bAreaWeighted;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSplitNormalsOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGeometryScriptSplitNormalsOptions
{ 
	bool                                               bSplitByOpeningAngle;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              OpeningAngleDeg;                                            // 0x0004   (0x0004)  
	bool                                               bSplitByFaceGroup;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FGeometryScriptGroupLayer                          GroupLayer;                                                 // 0x000C   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptTangentsOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptTangentsOptions
{ 
	EGeometryScriptTangentTypes                        Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            UVLayer;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPrimitiveOptions
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FGeometryScriptPrimitiveOptions
{ 
	EGeometryScriptPrimitivePolygroupMode              PolygroupMode;                                              // 0x0000   (0x0001)  
	bool                                               bFlipOrientation;                                           // 0x0001   (0x0001)  
	EGeometryScriptPrimitiveUVMode                     UVMode;                                                     // 0x0002   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRevolveOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGeometryScriptRevolveOptions
{ 
	float                                              RevolveDegrees;                                             // 0x0000   (0x0004)  
	float                                              DegreeOffset;                                               // 0x0004   (0x0004)  
	bool                                               bReverseDirection;                                          // 0x0008   (0x0001)  
	bool                                               bHardNormals;                                               // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	float                                              HardNormalAngle;                                            // 0x000C   (0x0004)  
	bool                                               bProfileAtMidpoint;                                         // 0x0010   (0x0001)  
	bool                                               bFillPartialRevolveEndcaps;                                 // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptVoronoiOptions
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGeometryScriptVoronoiOptions
{ 
	float                                              BoundsExpand;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FBox                                               Bounds;                                                     // 0x0008   (0x0038)  
	TArray<int32_t>                                    CreateCells;                                                // 0x0040   (0x0010)  
	bool                                               bIncludeBoundary;                                           // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptConstrainedDelaunayTriangulationOptions
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FGeometryScriptConstrainedDelaunayTriangulationOptions
{ 
	EGeometryScriptPolygonFillMode                     ConstrainedEdgesFillMode;                                   // 0x0000   (0x0001)  
	bool                                               bValidateEdgesInResult;                                     // 0x0001   (0x0001)  
	bool                                               bRemoveDuplicateVertices;                                   // 0x0002   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolygonsTriangulationOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptPolygonsTriangulationOptions
{ 
	bool                                               bStillAppendOnTriangulationError;                           // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRemeshOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FGeometryScriptRemeshOptions
{ 
	bool                                               bDiscardAttributes;                                         // 0x0000   (0x0001)  
	bool                                               bReprojectToInputMesh;                                      // 0x0001   (0x0001)  
	EGeometryScriptRemeshSmoothingType                 SmoothingType;                                              // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              SmoothingRate;                                              // 0x0004   (0x0004)  
	EGeometryScriptRemeshEdgeConstraintType            MeshBoundaryConstraint;                                     // 0x0008   (0x0001)  
	EGeometryScriptRemeshEdgeConstraintType            GroupBoundaryConstraint;                                    // 0x0009   (0x0001)  
	EGeometryScriptRemeshEdgeConstraintType            MaterialBoundaryConstraint;                                 // 0x000A   (0x0001)  
	bool                                               bAllowFlips;                                                // 0x000B   (0x0001)  
	bool                                               bAllowSplits;                                               // 0x000C   (0x0001)  
	bool                                               bAllowCollapses;                                            // 0x000D   (0x0001)  
	bool                                               bPreventNormalFlips;                                        // 0x000E   (0x0001)  
	bool                                               bPreventTinyTriangles;                                      // 0x000F   (0x0001)  
	bool                                               bUseFullRemeshPasses;                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            RemeshIterations;                                           // 0x0014   (0x0004)  
	bool                                               bAutoCompact;                                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptUniformRemeshOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptUniformRemeshOptions
{ 
	EGeometryScriptUniformRemeshTargetType             TargetType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            TargetTriangleCount;                                        // 0x0004   (0x0004)  
	float                                              TargetEdgeLength;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptWeldEdgesOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptWeldEdgesOptions
{ 
	float                                              Tolerance;                                                  // 0x0000   (0x0004)  
	bool                                               bOnlyUniquePairs;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGeometryScriptResolveTJunctionOptions
{ 
	float                                              Tolerance;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptFillHolesOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FGeometryScriptFillHolesOptions
{ 
	EGeometryScriptFillHolesMethod                     FillMethod;                                                 // 0x0000   (0x0001)  
	bool                                               bDeleteIsolatedTriangles;                                   // 0x0001   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptRemoveSmallComponentOptions
{ 
	float                                              MinVolume;                                                  // 0x0000   (0x0004)  
	float                                              MinArea;                                                    // 0x0004   (0x0004)  
	int32_t                                            MinTriangleCount;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FGeometryScriptRemoveHiddenTrianglesOptions
{ 
	EGeometryScriptRemoveHiddenTrianglesMethod         Method;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SamplesPerTriangle;                                         // 0x0004   (0x0004)  
	int32_t                                            ShrinkSelection;                                            // 0x0008   (0x0004)  
	float                                              WindingIsoValue;                                            // 0x000C   (0x0004)  
	int32_t                                            RaysPerSample;                                              // 0x0010   (0x0004)  
	float                                              NormalOffset;                                               // 0x0014   (0x0004)  
	bool                                               bCompactResult;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGeometryScriptDegenerateTriangleOptions
{ 
	EGeometryScriptRepairMeshMode                      Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             MinTriangleArea;                                            // 0x0008   (0x0008)  
	double                                             MinEdgeLength;                                              // 0x0010   (0x0008)  
	bool                                               bCompactOnCompletion;                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptMeshPointSamplingOptions
{ 
	float                                              SamplingRadius;                                             // 0x0000   (0x0004)  
	int32_t                                            MaxNumSamples;                                              // 0x0004   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             SubSampleDensity;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptNonUniformPointSamplingOptions
{ 
	float                                              MaxSamplingRadius;                                          // 0x0000   (0x0004)  
	EGeometryScriptSamplingDistributionMode            SizeDistribution;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	double                                             SizeDistributionPower;                                      // 0x0008   (0x0008)  
	EGeometryScriptSamplingWeightMode                  WeightMode;                                                 // 0x0010   (0x0001)  
	bool                                               bInvertWeights;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptPlanarSimplifyOptions
{ 
	float                                              AngleThreshold;                                             // 0x0000   (0x0004)  
	bool                                               bAutoCompact;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptPolygroupSimplifyOptions
{ 
	float                                              AngleThreshold;                                             // 0x0000   (0x0004)  
	bool                                               bAutoCompact;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
/// Size: 0x0007 (7 bytes) (0x000000 - 0x000007) align 1 MaxSize: 0x0007
struct FGeometryScriptSimplifyMeshOptions
{ 
	EGeometryScriptRemoveMeshSimplificationType        Method;                                                     // 0x0000   (0x0001)  
	bool                                               bAllowSeamCollapse;                                         // 0x0001   (0x0001)  
	bool                                               bAllowSeamSmoothing;                                        // 0x0002   (0x0001)  
	bool                                               bAllowSeamSplits;                                           // 0x0003   (0x0001)  
	bool                                               bPreserveVertexPositions;                                   // 0x0004   (0x0001)  
	bool                                               bRetainQuadricMemory;                                       // 0x0005   (0x0001)  
	bool                                               bAutoCompact;                                               // 0x0006   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSpatialQueryOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptSpatialQueryOptions
{ 
	float                                              MaxDistance;                                                // 0x0000   (0x0004)  
	bool                                               bAllowUnsafeModifiedQueries;                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              WindingIsoThreshold;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRayHitResult
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGeometryScriptRayHitResult
{ 
	bool                                               bHit;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              RayParameter;                                               // 0x0004   (0x0004)  
	int32_t                                            HitTriangleID;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            HitPosition;                                                // 0x0010   (0x0018)  
	FVector                                            HitBaryCoords;                                              // 0x0028   (0x0018)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPNTessellateOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptPNTessellateOptions
{ 
	bool                                               bRecomputeNormals;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FGeometryScriptSelectiveTessellateOptions
{ 
	bool                                               bEnableMultithreading;                                      // 0x0000   (0x0001)  
	EGeometryScriptEmptySelectionBehavior              EmptyBehavior;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRepackUVsOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptRepackUVsOptions
{ 
	int32_t                                            TargetImageWidth;                                           // 0x0000   (0x0004)  
	bool                                               bOptimizeIslandRotation;                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptExpMapUVOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryScriptExpMapUVOptions
{ 
	int32_t                                            NormalSmoothingRounds;                                      // 0x0000   (0x0004)  
	float                                              NormalSmoothingAlpha;                                       // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryScriptSpectralConformalUVOptions
{ 
	bool                                               bPreserveIrregularity;                                      // 0x0000   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FGeometryScriptRecomputeUVsOptions
{ 
	EGeometryScriptUVFlattenMethod                     Method;                                                     // 0x0000   (0x0001)  
	EGeometryScriptUVIslandSource                      IslandSource;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGeometryScriptExpMapUVOptions                     ExpMapOptions;                                              // 0x0004   (0x0008)  
	FGeometryScriptSpectralConformalUVOptions          SpectralConformalOptions;                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FGeometryScriptGroupLayer                          GroupLayer;                                                 // 0x0010   (0x0008)  
	bool                                               bAutoAlignIslandsWithAxes;                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPatchBuilderOptions
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FGeometryScriptPatchBuilderOptions
{ 
	int32_t                                            InitialPatchCount;                                          // 0x0000   (0x0004)  
	int32_t                                            MinPatchSize;                                               // 0x0004   (0x0004)  
	float                                              PatchCurvatureAlignmentWeight;                              // 0x0008   (0x0004)  
	float                                              PatchMergingMetricThresh;                                   // 0x000C   (0x0004)  
	float                                              PatchMergingAngleThresh;                                    // 0x0010   (0x0004)  
	FGeometryScriptExpMapUVOptions                     ExpMapOptions;                                              // 0x0014   (0x0008)  
	bool                                               bRespectInputGroups;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FGeometryScriptGroupLayer                          GroupLayer;                                                 // 0x0020   (0x0008)  
	bool                                               bAutoPack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGeometryScriptRepackUVsOptions                    PackingOptions;                                             // 0x002C   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptXAtlasOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGeometryScriptXAtlasOptions
{ 
	int32_t                                            MaxIterations;                                              // 0x0000   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptBlurMeshVertexColorsOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FGeometryScriptBlurMeshVertexColorsOptions
{ 
	bool                                               Red;                                                        // 0x0000   (0x0001)  
	bool                                               Green;                                                      // 0x0001   (0x0001)  
	bool                                               Blue;                                                       // 0x0002   (0x0001)  
	bool                                               Alpha;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScript3DGridParameters
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScript3DGridParameters
{ 
	EGeometryScriptGridSizingMethod                    SizeMethod;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              GridCellSize;                                               // 0x0004   (0x0004)  
	int32_t                                            GridResolution;                                             // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSolidifyOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptSolidifyOptions
{ 
	FGeometryScript3DGridParameters                    GridParameters;                                             // 0x0000   (0x000C)  
	float                                              WindingThreshold;                                           // 0x000C   (0x0004)  
	bool                                               bSolidAtBoundaries;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              ExtendBounds;                                               // 0x0014   (0x0004)  
	int32_t                                            SurfaceSearchSteps;                                         // 0x0018   (0x0004)  
	bool                                               bThickenShells;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	double                                             ShellThickness;                                             // 0x0020   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptMorphologyOptions
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FGeometryScriptMorphologyOptions
{ 
	FGeometryScript3DGridParameters                    SDFGridParameters;                                          // 0x0000   (0x000C)  
	bool                                               bUseSeparateMeshGrid;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FGeometryScript3DGridParameters                    MeshGridParameters;                                         // 0x0010   (0x000C)  
	EGeometryScriptMorphologicalOpType                 Operation;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x0020   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPointClusteringOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGeometryScriptPointClusteringOptions
{ 
	TArray<FVector>                                    InitialClusterCenters;                                      // 0x0000   (0x0010)  
	int32_t                                            TargetNumClusters;                                          // 0x0010   (0x0004)  
	EGeometryScriptInitKMeansMethod                    InitializeMethod;                                           // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x0018   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x001C   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPointPriorityOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryScriptPointPriorityOptions
{ 
	TArray<float>                                      OptionalPriorityWeights;                                    // 0x0000   (0x0010)  
	bool                                               bUniformSpacing;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPointFlatteningOptions
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FGeometryScriptPointFlatteningOptions
{ 
	FTransform                                         Frame;                                                      // 0x0000   (0x0060)  
	EGeometryScriptAxis                                DropAxis;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0061   (0x000F)  MISSED
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptPolygonOffsetOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptPolygonOffsetOptions
{ 
	EGeometryScriptPolyOffsetJoinType                  JoinType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             MiterLimit;                                                 // 0x0008   (0x0008)  
	bool                                               bOffsetBothSides;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	double                                             StepsPerRadianScale;                                        // 0x0018   (0x0008)  
	double                                             MaximumStepsPerRadian;                                      // 0x0020   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptOpenPathOffsetOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptOpenPathOffsetOptions
{ 
	EGeometryScriptPolyOffsetJoinType                  JoinType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             MiterLimit;                                                 // 0x0008   (0x0008)  
	EGeometryScriptPathOffsetEndType                   EndType;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	double                                             StepsPerRadianScale;                                        // 0x0018   (0x0008)  
	double                                             MaximumStepsPerRadian;                                      // 0x0020   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSplineSamplingOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGeometryScriptSplineSamplingOptions
{ 
	int32_t                                            NumSamples;                                                 // 0x0000   (0x0004)  
	float                                              ErrorTolerance;                                             // 0x0004   (0x0004)  
	EGeometryScriptSampleSpacing                       SampleSpacing;                                              // 0x0008   (0x0001)  
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                            // 0x0009   (0x0001)  
	EGeometryScriptEvaluateSplineRange                 RangeMethod;                                                // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000B   (0x0001)  MISSED
	float                                              RangeStart;                                                 // 0x000C   (0x0004)  
	float                                              RangeEnd;                                                   // 0x0010   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryScriptCopyMeshFromComponentOptions
{ 
	bool                                               bWantNormals;                                               // 0x0000   (0x0001)  
	bool                                               bWantTangents;                                              // 0x0001   (0x0001)  
	bool                                               bWantInstanceColors;                                        // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	FGeometryScriptMeshReadLOD                         RequestedLOD;                                               // 0x0004   (0x0008)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptDetermineMeshOcclusionOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGeometryScriptDetermineMeshOcclusionOptions
{ 
	double                                             SamplingDensity;                                            // 0x0000   (0x0008)  
	bool                                               bDoubleSided;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            NumSearchDirections;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryScriptingCore.GeometryScriptSampleTextureOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryScriptSampleTextureOptions
{ 
	EGeometryScriptPixelSamplingMethod                 SamplingMethod;                                             // 0x0000   (0x0001)  
	bool                                               bWrap;                                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FVector2D                                          UVScale;                                                    // 0x0008   (0x0010)  
	FVector2D                                          UVOffset;                                                   // 0x0018   (0x0010)  
};

#pragma pack(pop)


