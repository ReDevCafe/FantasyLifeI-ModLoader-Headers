
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InteractiveToolsFramework
/// dependency: ModelingComponents
/// dependency: ModelingOperators

#pragma pack(push, 0x1)

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeEdgeDirectionMode
/// Size: 0x04 (4 bytes)
enum class EPolyEditExtrudeEdgeDirectionMode : uint32_t
{
	EPolyEditExtrudeEdgeDirectionMode__LocalExtrudeFrames                            = 0,
	EPolyEditExtrudeEdgeDirectionMode__SingleDirection                               = 1
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeEdgeDistanceMode
/// Size: 0x04 (4 bytes)
enum class EPolyEditExtrudeEdgeDistanceMode : uint32_t
{
	EPolyEditExtrudeEdgeDistanceMode__Fixed                                          = 0,
	EPolyEditExtrudeEdgeDistanceMode__Gizmo                                          = 1
};

/// Enum /Script/MeshModelingTools.EMakeMeshPlacementType
/// Size: 0x01 (1 bytes)
enum class EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__GroundPlane                                              = 0,
	EMakeMeshPlacementType__OnScene                                                  = 1,
	EMakeMeshPlacementType__AtOrigin                                                 = 2
};

/// Enum /Script/MeshModelingTools.EMakeMeshPivotLocation
/// Size: 0x01 (1 bytes)
enum class EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base                                                     = 0,
	EMakeMeshPivotLocation__Centered                                                 = 1,
	EMakeMeshPivotLocation__Top                                                      = 2
};

/// Enum /Script/MeshModelingTools.EMakeMeshPolygroupMode
/// Size: 0x01 (1 bytes)
enum class EMakeMeshPolygroupMode : uint8_t
{
	EMakeMeshPolygroupMode__PerShape                                                 = 0,
	EMakeMeshPolygroupMode__PerFace                                                  = 1,
	EMakeMeshPolygroupMode__PerQuad                                                  = 2
};

/// Enum /Script/MeshModelingTools.EProceduralRectType
/// Size: 0x04 (4 bytes)
enum class EProceduralRectType : uint32_t
{
	EProceduralRectType__Rectangle                                                   = 0,
	EProceduralRectType__RoundedRectangle                                            = 1
};

/// Enum /Script/MeshModelingTools.EProceduralDiscType
/// Size: 0x04 (4 bytes)
enum class EProceduralDiscType : uint32_t
{
	EProceduralDiscType__Disc                                                        = 0,
	EProceduralDiscType__PuncturedDisc                                               = 1
};

/// Enum /Script/MeshModelingTools.EProceduralSphereType
/// Size: 0x04 (4 bytes)
enum class EProceduralSphereType : uint32_t
{
	EProceduralSphereType__LatLong                                                   = 0,
	EProceduralSphereType__Box                                                       = 1
};

/// Enum /Script/MeshModelingTools.EProceduralStairsType
/// Size: 0x04 (4 bytes)
enum class EProceduralStairsType : uint32_t
{
	EProceduralStairsType__Linear                                                    = 0,
	EProceduralStairsType__Floating                                                  = 1,
	EProceduralStairsType__Curved                                                    = 2,
	EProceduralStairsType__Spiral                                                    = 3
};

/// Enum /Script/MeshModelingTools.EDrawPolygonDrawMode
/// Size: 0x01 (1 bytes)
enum class EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand                                                   = 0,
	EDrawPolygonDrawMode__Circle                                                     = 1,
	EDrawPolygonDrawMode__Square                                                     = 2,
	EDrawPolygonDrawMode__Rectangle                                                  = 3,
	EDrawPolygonDrawMode__RoundedRectangle                                           = 4,
	EDrawPolygonDrawMode__Ring                                                       = 5
};

/// Enum /Script/MeshModelingTools.EDrawPolygonExtrudeMode
/// Size: 0x01 (1 bytes)
enum class EDrawPolygonExtrudeMode : uint8_t
{
	EDrawPolygonExtrudeMode__Flat                                                    = 0,
	EDrawPolygonExtrudeMode__Fixed                                                   = 1,
	EDrawPolygonExtrudeMode__Interactive                                             = 2
};

/// Enum /Script/MeshModelingTools.ELocalFrameMode
/// Size: 0x04 (4 bytes)
enum class ELocalFrameMode : uint32_t
{
	ELocalFrameMode__FromObject                                                      = 0,
	ELocalFrameMode__FromGeometry                                                    = 1
};

/// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolActions
/// Size: 0x01 (1 bytes)
enum class EEditMeshPolygonsToolActions : uint8_t
{
	EEditMeshPolygonsToolActions__NoAction                                           = 0,
	EEditMeshPolygonsToolActions__AcceptCurrent                                      = 1,
	EEditMeshPolygonsToolActions__CancelCurrent                                      = 2,
	EEditMeshPolygonsToolActions__Extrude                                            = 3,
	EEditMeshPolygonsToolActions__PushPull                                           = 4,
	EEditMeshPolygonsToolActions__Offset                                             = 5,
	EEditMeshPolygonsToolActions__Inset                                              = 6,
	EEditMeshPolygonsToolActions__Outset                                             = 7,
	EEditMeshPolygonsToolActions__BevelFaces                                         = 8,
	EEditMeshPolygonsToolActions__InsertEdge                                         = 9,
	EEditMeshPolygonsToolActions__InsertEdgeLoop                                     = 10,
	EEditMeshPolygonsToolActions__Complete                                           = 11,
	EEditMeshPolygonsToolActions__PlaneCut                                           = 12,
	EEditMeshPolygonsToolActions__Merge                                              = 13,
	EEditMeshPolygonsToolActions__Delete                                             = 14,
	EEditMeshPolygonsToolActions__CutFaces                                           = 15,
	EEditMeshPolygonsToolActions__RecalculateNormals                                 = 16,
	EEditMeshPolygonsToolActions__FlipNormals                                        = 17,
	EEditMeshPolygonsToolActions__Retriangulate                                      = 18,
	EEditMeshPolygonsToolActions__Decompose                                          = 19,
	EEditMeshPolygonsToolActions__Disconnect                                         = 20,
	EEditMeshPolygonsToolActions__Duplicate                                          = 21,
	EEditMeshPolygonsToolActions__CollapseEdge                                       = 22,
	EEditMeshPolygonsToolActions__WeldEdges                                          = 23,
	EEditMeshPolygonsToolActions__StraightenEdge                                     = 24,
	EEditMeshPolygonsToolActions__FillHole                                           = 25,
	EEditMeshPolygonsToolActions__BridgeEdges                                        = 26,
	EEditMeshPolygonsToolActions__ExtrudeEdges                                       = 27,
	EEditMeshPolygonsToolActions__BevelEdges                                         = 28,
	EEditMeshPolygonsToolActions__SimplifyAlongEdges                                 = 29,
	EEditMeshPolygonsToolActions__PlanarProjectionUV                                 = 30,
	EEditMeshPolygonsToolActions__SimplifyByGroups                                   = 31,
	EEditMeshPolygonsToolActions__RegenerateExtraCorners                             = 32,
	EEditMeshPolygonsToolActions__PokeSingleFace                                     = 33,
	EEditMeshPolygonsToolActions__SplitSingleEdge                                    = 34,
	EEditMeshPolygonsToolActions__FlipSingleEdge                                     = 35,
	EEditMeshPolygonsToolActions__CollapseSingleEdge                                 = 36,
	EEditMeshPolygonsToolActions__BevelAuto                                          = 37
};

/// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolSelectionMode
/// Size: 0x01 (1 bytes)
enum class EEditMeshPolygonsToolSelectionMode : uint8_t
{
	EEditMeshPolygonsToolSelectionMode__Faces                                        = 0,
	EEditMeshPolygonsToolSelectionMode__Edges                                        = 1,
	EEditMeshPolygonsToolSelectionMode__Vertices                                     = 2,
	EEditMeshPolygonsToolSelectionMode__Loops                                        = 3,
	EEditMeshPolygonsToolSelectionMode__Rings                                        = 4,
	EEditMeshPolygonsToolSelectionMode__FacesEdgesVertices                           = 5
};

/// Enum /Script/MeshModelingTools.ESetMeshMaterialMode
/// Size: 0x01 (1 bytes)
enum class ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__Original                                                   = 0,
	ESetMeshMaterialMode__Checkerboard                                               = 1,
	ESetMeshMaterialMode__Override                                                   = 2
};

/// Enum /Script/MeshModelingTools.EMeshEditingMaterialModes
/// Size: 0x04 (4 bytes)
enum class EMeshEditingMaterialModes : uint32_t
{
	EMeshEditingMaterialModes__ExistingMaterial                                      = 0,
	EMeshEditingMaterialModes__Diffuse                                               = 1,
	EMeshEditingMaterialModes__Grey                                                  = 2,
	EMeshEditingMaterialModes__Soft                                                  = 3,
	EMeshEditingMaterialModes__Transparent                                           = 4,
	EMeshEditingMaterialModes__TangentNormal                                         = 5,
	EMeshEditingMaterialModes__VertexColor                                           = 6,
	EMeshEditingMaterialModes__CustomImage                                           = 7,
	EMeshEditingMaterialModes__Custom                                                = 8
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesCapFillMode
/// Size: 0x01 (1 bytes)
enum class ERevolvePropertiesCapFillMode : uint8_t
{
	ERevolvePropertiesCapFillMode__None                                              = 0,
	ERevolvePropertiesCapFillMode__CenterFan                                         = 1,
	ERevolvePropertiesCapFillMode__Delaunay                                          = 2,
	ERevolvePropertiesCapFillMode__EarClipping                                       = 3
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesPolygroupMode
/// Size: 0x01 (1 bytes)
enum class ERevolvePropertiesPolygroupMode : uint8_t
{
	ERevolvePropertiesPolygroupMode__PerShape                                        = 0,
	ERevolvePropertiesPolygroupMode__PerFace                                         = 1,
	ERevolvePropertiesPolygroupMode__PerRevolveStep                                  = 2,
	ERevolvePropertiesPolygroupMode__PerPathSegment                                  = 3
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesQuadSplit
/// Size: 0x01 (1 bytes)
enum class ERevolvePropertiesQuadSplit : uint8_t
{
	ERevolvePropertiesQuadSplit__Uniform                                             = 0,
	ERevolvePropertiesQuadSplit__Compact                                             = 1
};

/// Enum /Script/MeshModelingTools.EPolyEditCutPlaneOrientation
/// Size: 0x04 (4 bytes)
enum class EPolyEditCutPlaneOrientation : uint32_t
{
	EPolyEditCutPlaneOrientation__FaceNormals                                        = 0,
	EPolyEditCutPlaneOrientation__ViewDirection                                      = 1
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeDirection
/// Size: 0x04 (4 bytes)
enum class EPolyEditExtrudeDirection : uint32_t
{
	EPolyEditExtrudeDirection__SelectionNormal                                       = 0,
	EPolyEditExtrudeDirection__WorldX                                                = 1,
	EPolyEditExtrudeDirection__WorldY                                                = 2,
	EPolyEditExtrudeDirection__WorldZ                                                = 3,
	EPolyEditExtrudeDirection__LocalX                                                = 4,
	EPolyEditExtrudeDirection__LocalY                                                = 5,
	EPolyEditExtrudeDirection__LocalZ                                                = 6
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeDistanceMode
/// Size: 0x04 (4 bytes)
enum class EPolyEditExtrudeDistanceMode : uint32_t
{
	EPolyEditExtrudeDistanceMode__ClickInViewport                                    = 0,
	EPolyEditExtrudeDistanceMode__Fixed                                              = 1
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeModeOptions
/// Size: 0x04 (4 bytes)
enum class EPolyEditExtrudeModeOptions : uint32_t
{
	EPolyEditExtrudeModeOptions__SingleDirection                                     = 3,
	EPolyEditExtrudeModeOptions__SelectedTriangleNormals                             = 0,
	EPolyEditExtrudeModeOptions__SelectedTriangleNormalsEven                         = 1
};

/// Enum /Script/MeshModelingTools.EPolyEditOffsetModeOptions
/// Size: 0x04 (4 bytes)
enum class EPolyEditOffsetModeOptions : uint32_t
{
	EPolyEditOffsetModeOptions__VertexNormals                                        = 2,
	EPolyEditOffsetModeOptions__SelectedTriangleNormals                              = 0,
	EPolyEditOffsetModeOptions__SelectedTriangleNormalsEven                          = 1
};

/// Enum /Script/MeshModelingTools.EPolyEditPushPullModeOptions
/// Size: 0x04 (4 bytes)
enum class EPolyEditPushPullModeOptions : uint32_t
{
	EPolyEditPushPullModeOptions__SelectedTriangleNormals                            = 0,
	EPolyEditPushPullModeOptions__SelectedTriangleNormalsEven                        = 1,
	EPolyEditPushPullModeOptions__SingleDirection                                    = 3,
	EPolyEditPushPullModeOptions__VertexNormals                                      = 2
};

/// Enum /Script/MeshModelingTools.EGroupEdgeInsertionMode
/// Size: 0x04 (4 bytes)
enum class EGroupEdgeInsertionMode : uint32_t
{
	EGroupEdgeInsertionMode__Retriangulate                                           = 0,
	EGroupEdgeInsertionMode__PlaneCut                                                = 1
};

/// Enum /Script/MeshModelingTools.EEdgeLoopPositioningMode
/// Size: 0x04 (4 bytes)
enum class EEdgeLoopPositioningMode : uint32_t
{
	EEdgeLoopPositioningMode__Even                                                   = 0,
	EEdgeLoopPositioningMode__ProportionOffset                                       = 1,
	EEdgeLoopPositioningMode__DistanceOffset                                         = 2
};

/// Enum /Script/MeshModelingTools.EEdgeLoopInsertionMode
/// Size: 0x04 (4 bytes)
enum class EEdgeLoopInsertionMode : uint32_t
{
	EEdgeLoopInsertionMode__Retriangulate                                            = 0,
	EEdgeLoopInsertionMode__PlaneCut                                                 = 1
};

/// Enum /Script/MeshModelingTools.EUVProjectionToolActions
/// Size: 0x01 (1 bytes)
enum class EUVProjectionToolActions : uint8_t
{
	EUVProjectionToolActions__NoAction                                               = 0,
	EUVProjectionToolActions__AutoFit                                                = 1,
	EUVProjectionToolActions__AutoFitAlign                                           = 2,
	EUVProjectionToolActions__Reset                                                  = 3
};

/// Enum /Script/MeshModelingTools.EUVProjectionToolInitializationMode
/// Size: 0x04 (4 bytes)
enum class EUVProjectionToolInitializationMode : uint32_t
{
	EUVProjectionToolInitializationMode__Default                                     = 0,
	EUVProjectionToolInitializationMode__UsePrevious                                 = 1,
	EUVProjectionToolInitializationMode__AutoFit                                     = 2,
	EUVProjectionToolInitializationMode__AutoFitAlign                                = 3
};

/// Class /Script/MeshModelingTools.PolyEditActivityContext
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 16 MaxSize: 0x0120
class UPolyEditActivityContext : public UObject
{ 
public:
	class UPolyEditCommonProperties*                   CommonProperties;                                           // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_7[0xA8];                                      // 0x0078   (0x00A8)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeEdgeActivityProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolyEditExtrudeEdgeActivityProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditExtrudeEdgeDirectionMode                  DirectionMode;                                              // 0x00A8   (0x0004)  
	EPolyEditExtrudeEdgeDistanceMode                   DistanceMode;                                               // 0x00AC   (0x0004)  
	double                                             Distance;                                                   // 0x00B0   (0x0008)  
	bool                                               bUseUnselectedForFrames;                                    // 0x00B8   (0x0001)  
	bool                                               bAdjustToExtrudeEvenly;                                     // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeEdgeActivity
/// Size: 0x02D0 (720 bytes) (0x000030 - 0x0002D0) align 16 MaxSize: 0x02D0
class UPolyEditExtrudeEdgeActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UPolyEditExtrudeEdgeActivityProperties*      Settings;                                                   // 0x0038   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0040   (0x0008)  
	class UTransformProxy*                             ExtrudeFrameProxy;                                          // 0x0048   (0x0008)  
	class UCombinedTransformGizmo*                     ExtrudeFrameGizmo;                                          // 0x0050   (0x0008)  
	class UTransformProxy*                             SingleDirectionProxy;                                       // 0x0058   (0x0008)  
	class UCombinedTransformGizmo*                     SingleDirectionGizmo;                                       // 0x0060   (0x0008)  
	class UPreviewGeometry*                            PreviewGeometry;                                            // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_7[0x260];                                     // 0x0070   (0x0260)  MISSED
};

/// Class /Script/MeshModelingTools.AddPrimitiveToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralShapeToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMakeMeshPolygroupMode                             PolygroupMode;                                              // 0x00A8   (0x0001)  
	EMakeMeshPlacementType                             TargetSurface;                                              // 0x00A9   (0x0001)  
	EMakeMeshPivotLocation                             PivotLocation;                                              // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              Rotation;                                                   // 0x00AC   (0x0004)  
	bool                                               bAlignToNormal;                                             // 0x00B0   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x00B1   (0x0001)  
	bool                                               bShowGizmoOptions;                                          // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x00B3   (0x0005)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralBoxToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Width;                                                      // 0x00B8   (0x0004)  
	float                                              Depth;                                                      // 0x00BC   (0x0004)  
	float                                              Height;                                                     // 0x00C0   (0x0004)  
	int32_t                                            WidthSubdivisions;                                          // 0x00C4   (0x0004)  
	int32_t                                            DepthSubdivisions;                                          // 0x00C8   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x00CC   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralRectangleToolProperties
/// Size: 0x00D8 (216 bytes) (0x0000B8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{ 
public:
	EProceduralRectType                                RectangleType;                                              // 0x00B8   (0x0004)  
	float                                              Width;                                                      // 0x00BC   (0x0004)  
	float                                              Depth;                                                      // 0x00C0   (0x0004)  
	int32_t                                            WidthSubdivisions;                                          // 0x00C4   (0x0004)  
	int32_t                                            DepthSubdivisions;                                          // 0x00C8   (0x0004)  
	bool                                               bMaintainDimension;                                         // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              CornerRadius;                                               // 0x00D0   (0x0004)  
	int32_t                                            CornerSlices;                                               // 0x00D4   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralDiscToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{ 
public:
	EProceduralDiscType                                DiscType;                                                   // 0x00B8   (0x0004)  
	float                                              Radius;                                                     // 0x00BC   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00C0   (0x0004)  
	int32_t                                            RadialSubdivisions;                                         // 0x00C4   (0x0004)  
	float                                              HoleRadius;                                                 // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralTorusToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              MajorRadius;                                                // 0x00B8   (0x0004)  
	float                                              MinorRadius;                                                // 0x00BC   (0x0004)  
	int32_t                                            MajorSlices;                                                // 0x00C0   (0x0004)  
	int32_t                                            MinorSlices;                                                // 0x00C4   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralCylinderToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x00B8   (0x0004)  
	float                                              Height;                                                     // 0x00BC   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00C0   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x00C4   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralConeToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x00B8   (0x0004)  
	float                                              Height;                                                     // 0x00BC   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00C0   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x00C4   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralArrowToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              ShaftRadius;                                                // 0x00B8   (0x0004)  
	float                                              ShaftHeight;                                                // 0x00BC   (0x0004)  
	float                                              HeadRadius;                                                 // 0x00C0   (0x0004)  
	float                                              HeadHeight;                                                 // 0x00C4   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00C8   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x00CC   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralSphereToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x00B8   (0x0004)  
	EProceduralSphereType                              SubdivisionType;                                            // 0x00BC   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x00C0   (0x0004)  
	int32_t                                            HorizontalSlices;                                           // 0x00C4   (0x0004)  
	int32_t                                            VerticalSlices;                                             // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralStairsToolProperties
/// Size: 0x00D8 (216 bytes) (0x0000B8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{ 
public:
	EProceduralStairsType                              StairsType;                                                 // 0x00B8   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x00BC   (0x0004)  
	float                                              StepWidth;                                                  // 0x00C0   (0x0004)  
	float                                              StepHeight;                                                 // 0x00C4   (0x0004)  
	float                                              StepDepth;                                                  // 0x00C8   (0x0004)  
	float                                              CurveAngle;                                                 // 0x00CC   (0x0004)  
	float                                              SpiralAngle;                                                // 0x00D0   (0x0004)  
	float                                              InnerRadius;                                                // 0x00D4   (0x0004)  
};

/// Class /Script/MeshModelingTools.AddPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x0000A0 - 0x000138) align 8 MaxSize: 0x0138
class UAddPrimitiveTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B8   (0x0008)  
	class UProceduralShapeToolProperties*              ShapeSettings;                                              // 0x00C0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00C8   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00D0   (0x0008)  
	class UCombinedTransformGizmo*                     Gizmo;                                                      // 0x00D8   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x00E0   (0x0008)  
	FString                                            AssetName;                                                  // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x00F8   (0x0040)  MISSED
};

/// Class /Script/MeshModelingTools.AddBoxPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddCylinderPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddConePrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddConePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddRectanglePrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddDiscPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddTorusPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddArrowPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddSpherePrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddStairsPrimitiveTool
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.CombineMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.CombineMeshesToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsDuplicateMode;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	EBaseCreateFromSelectedTargetType                  OutputWriteTo;                                              // 0x00AC   (0x0004)  
	FString                                            OutputNewName;                                              // 0x00B0   (0x0010)  
	FString                                            OutputExistingName;                                         // 0x00C0   (0x0010)  
};

/// Class /Script/MeshModelingTools.CombineMeshesTool
/// Size: 0x00E0 (224 bytes) (0x0000B8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UCombineMeshesToolProperties*                BasicProperties;                                            // 0x00C0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C8   (0x0008)  
	class UOnAcceptHandleSourcesPropertiesBase*        HandleSourceProperties;                                     // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DeleteGeometrySelectionCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.DisconnectGeometrySelectionCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Invert
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Expand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModifyGeometrySelectionCommand_Expand : public UModifyGeometrySelectionCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Contract
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.RetriangulateGeometrySelectionCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
public:
};

/// Class /Script/MeshModelingTools.CSGMeshesToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ECSGOperation                                      Operation;                                                  // 0x00A8   (0x0001)  
	bool                                               bTryFixHoles;                                               // 0x00A9   (0x0001)  
	bool                                               bTryCollapseEdges;                                          // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              WindingThreshold;                                           // 0x00AC   (0x0004)  
	bool                                               bShowNewBoundaries;                                         // 0x00B0   (0x0001)  
	bool                                               bShowSubtractedMesh;                                        // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              SubtractedMeshOpacity;                                      // 0x00B4   (0x0004)  
	FLinearColor                                       SubtractedMeshColor;                                        // 0x00B8   (0x0010)  
	bool                                               bUseFirstMeshMaterials;                                     // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.TrimMeshesToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ETrimOperation                                     WhichMesh;                                                  // 0x00A8   (0x0001)  
	ETrimSide                                          TrimSide;                                                   // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              WindingThreshold;                                           // 0x00AC   (0x0004)  
	bool                                               bShowTrimmingMesh;                                          // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              OpacityOfTrimmingMesh;                                      // 0x00B4   (0x0004)  
	FLinearColor                                       ColorOfTrimmingMesh;                                        // 0x00B8   (0x0010)  
};

/// Class /Script/MeshModelingTools.CSGMeshesTool
/// Size: 0x0160 (352 bytes) (0x000108 - 0x000160) align 8 MaxSize: 0x0160
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	class UCSGMeshesToolProperties*                    CSGProperties;                                              // 0x0108   (0x0008)  
	class UTrimMeshesToolProperties*                   TrimProperties;                                             // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0118   (0x0010)  MISSED
	TArray<class UPreviewMesh*>                        OriginalMeshPreviews;                                       // 0x0128   (0x0010)  
	class UMaterialInstanceDynamic*                    PreviewsGhostMaterial;                                      // 0x0138   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x0140   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0148   (0x0018)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.CutMeshWithMeshToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTryFixHoles;                                               // 0x00A8   (0x0001)  
	bool                                               bTryCollapseEdges;                                          // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              WindingThreshold;                                           // 0x00AC   (0x0004)  
	bool                                               bShowNewBoundaries;                                         // 0x00B0   (0x0001)  
	bool                                               bUseFirstMeshMaterials;                                     // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.CutMeshWithMeshTool
/// Size: 0x0380 (896 bytes) (0x000108 - 0x000380) align 8 MaxSize: 0x0380
class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{ 
public:
	class UCutMeshWithMeshToolProperties*              CutProperties;                                              // 0x0108   (0x0008)  
	class UPreviewMesh*                                IntersectPreviewMesh;                                       // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0118   (0x0020)  MISSED
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_7[0x240];                                     // 0x0140   (0x0240)  MISSED
};

/// Class /Script/MeshModelingTools.CutMeshWithMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DrawAndRevolveToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.RevolveProperties
/// Size: 0x0118 (280 bytes) (0x0000A8 - 0x000118) align 8 MaxSize: 0x0118
class URevolveProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             RevolveDegreesClamped;                                      // 0x00A8   (0x0008)  
	double                                             RevolveDegrees;                                             // 0x00B0   (0x0008)  
	double                                             RevolveDegreesOffset;                                       // 0x00B8   (0x0008)  
	double                                             StepsMaxDegrees;                                            // 0x00C0   (0x0008)  
	bool                                               bExplicitSteps;                                             // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	int32_t                                            NumExplicitSteps;                                           // 0x00CC   (0x0004)  
	double                                             HeightOffsetPerDegree;                                      // 0x00D0   (0x0008)  
	bool                                               bReverseRevolutionDirection;                                // 0x00D8   (0x0001)  
	bool                                               bFlipMesh;                                                  // 0x00D9   (0x0001)  
	bool                                               bSharpNormals;                                              // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00DB   (0x0005)  MISSED
	double                                             SharpNormalsDegreeThreshold;                                // 0x00E0   (0x0008)  
	bool                                               bPathAtMidpointOfStep;                                      // 0x00E8   (0x0001)  
	ERevolvePropertiesPolygroupMode                    PolygroupMode;                                              // 0x00E9   (0x0001)  
	ERevolvePropertiesQuadSplit                        QuadSplitMode;                                              // 0x00EA   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2D];                                      // 0x00EB   (0x002D)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveToolProperties
/// Size: 0x0158 (344 bytes) (0x000118 - 0x000158) align 8 MaxSize: 0x0158
class URevolveToolProperties : public URevolveProperties
{ 
public:
	ERevolvePropertiesCapFillMode                      CapFillMode;                                                // 0x0118   (0x0001)  
	bool                                               bClosePathToAxis;                                           // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x011A   (0x0006)  MISSED
	FVector                                            DrawPlaneOrigin;                                            // 0x0120   (0x0018)  
	FRotator                                           DrawPlaneOrientation;                                       // 0x0138   (0x0018)  
	bool                                               bEnableSnapping;                                            // 0x0150   (0x0001)  
	bool                                               bAllowedToEditDrawPlane;                                    // 0x0151   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0152   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URevolveOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UDrawAndRevolveTool*                         RevolveTool;                                                // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.DrawAndRevolveTool
/// Size: 0x0160 (352 bytes) (0x000098 - 0x000160) align 16 MaxSize: 0x0160
class UDrawAndRevolveTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0098   (0x0090)  MISSED
	class UCurveControlPointsMechanic*                 ControlPointsMechanic;                                      // 0x0128   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0130   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x0138   (0x0008)  
	class URevolveToolProperties*                      Settings;                                                   // 0x0140   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0148   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DrawPolygonToolStandardProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolygonDrawMode                               PolygonDrawMode;                                            // 0x00A8   (0x0001)  
	bool                                               bAllowSelfIntersections;                                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              FeatureSizeRatio;                                           // 0x00AC   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00B0   (0x0004)  
	float                                              Distance;                                                   // 0x00B4   (0x0004)  
	bool                                               bShowGridGizmo;                                             // 0x00B8   (0x0001)  
	EDrawPolygonExtrudeMode                            ExtrudeMode;                                                // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00BA   (0x0002)  MISSED
	float                                              ExtrudeHeight;                                              // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingTools.DrawPolygonToolSnapProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSnapping;                                            // 0x00A8   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x00A9   (0x0001)  
	bool                                               bSnapToVertices;                                            // 0x00AA   (0x0001)  
	bool                                               bSnapToEdges;                                               // 0x00AB   (0x0001)  
	bool                                               bSnapToAxes;                                                // 0x00AC   (0x0001)  
	bool                                               bSnapToLengths;                                             // 0x00AD   (0x0001)  
	bool                                               bSnapToSurfaces;                                            // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AF   (0x0001)  MISSED
	float                                              SnapToSurfacesOffset;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonTool
/// Size: 0x0550 (1360 bytes) (0x000098 - 0x000550) align 16 MaxSize: 0x0550
class UDrawPolygonTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00A0   (0x0008)  
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                          // 0x00A8   (0x0008)  
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                             // 0x00B0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x00C0   (0x0090)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_6[0x3D0];                                     // 0x0158   (0x03D0)  MISSED
	class UPlaneDistanceFromHitMechanic*               HeightMechanic;                                             // 0x0528   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x0530   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0538   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0540   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCommonProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x00A8   (0x0001)  
	bool                                               bShowSelectableCorners;                                     // 0x00A9   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AB   (0x0001)  MISSED
	ELocalFrameMode                                    LocalFrameMode;                                             // 0x00AC   (0x0004)  
	bool                                               bLockRotation;                                              // 0x00B0   (0x0001)  
	bool                                               bLocalCoordSystem;                                          // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditTopologyProperties
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{ 
public:
	bool                                               bAddExtraCorners;                                           // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
	double                                             ExtraCornerAngleThresholdDegrees;                           // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingTools.PolyEditTopologyProperties.RegenerateExtraCorners
	// void RegenerateExtraCorners();                                                                                           // [0x7c235f0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.SimplifyByGroups
	// void SimplifyByGroups();                                                                                                 // [0x7c23710] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	// void Retriangulate();                                                                                                    // [0x7c23650] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	// void RecalcNormals();                                                                                                    // [0x7c23590] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.PushPull
	// void PushPull();                                                                                                         // [0x7c23530] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Outset
	// void Outset();                                                                                                           // [0x7c23410] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Offset
	// void Offset();                                                                                                           // [0x7c233b0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Merge
	// void Merge();                                                                                                            // [0x7c23350] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Inset
	// void Inset();                                                                                                            // [0x7c232f0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.InsertEdgeLoop
	// void InsertEdgeLoop();                                                                                                   // [0x7c23290] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.InsertEdge
	// void InsertEdge();                                                                                                       // [0x7c23230] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Flip
	// void Flip();                                                                                                             // [0x7c23110] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	// void Extrude();                                                                                                          // [0x7c22ff0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Duplicate
	// void Duplicate();                                                                                                        // [0x7c22f90] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	// void Disconnect();                                                                                                       // [0x7c22f30] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Delete
	// void Delete();                                                                                                           // [0x7c22ed0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	// void Decompose();                                                                                                        // [0x7c22e70] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
	// void CutFaces();                                                                                                         // [0x7c22e10] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Bevel
	// void Bevel();                                                                                                            // [0x7c22c90] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	// void RecalcNormals();                                                                                                    // [0x7c23590] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.PushPull
	// void PushPull();                                                                                                         // [0x7c23530] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	// void Poke();                                                                                                             // [0x7c234d0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	// void Outset();                                                                                                           // [0x7c23410] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	// void Offset();                                                                                                           // [0x7c233b0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	// void Inset();                                                                                                            // [0x7c232f0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	// void Flip();                                                                                                             // [0x7c23110] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	// void Extrude();                                                                                                          // [0x7c22ff0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Duplicate
	// void Duplicate();                                                                                                        // [0x7c22f90] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	// void Disconnect();                                                                                                       // [0x7c22f30] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	// void Delete();                                                                                                           // [0x7c22ed0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
	// void CutFaces();                                                                                                         // [0x7c22e10] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolUVActions
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
	// void PlanarProjection();                                                                                                 // [0x7c23470] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	// void Weld();                                                                                                             // [0x7c23830] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	// void Straighten();                                                                                                       // [0x7c237d0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Simplify
	// void Simplify();                                                                                                         // [0x7c236b0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
	// void FillHole();                                                                                                         // [0x7c230b0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Extrude
	// void Extrude();                                                                                                          // [0x7c23050] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.DeleteEdge
	// void DeleteEdge();                                                                                                       // [0x7c22ed0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bridge
	// void Bridge();                                                                                                           // [0x7c22d50] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bevel
	// void Bevel();                                                                                                            // [0x7c22cf0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	// void Weld();                                                                                                             // [0x7c23830] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	// void Split();                                                                                                            // [0x7c23770] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	// void Flip();                                                                                                             // [0x7c23170] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	// void FillHole();                                                                                                         // [0x7c230b0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Extrude
	// void Extrude();                                                                                                          // [0x7c23050] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
	// void Collapse();                                                                                                         // [0x7c22db0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Bridge
	// void Bridge();                                                                                                           // [0x7c22d50] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsTool
/// Size: 0x0900 (2304 bytes) (0x000120 - 0x000900) align 16 MaxSize: 0x0900
class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0120   (0x0020)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0140   (0x0008)  
	class UPolyEditCommonProperties*                   CommonProps;                                                // 0x0148   (0x0008)  
	class UEditMeshPolygonsToolActions*                EditActions;                                                // 0x0150   (0x0008)  
	class UEditMeshPolygonsToolActions_Triangles*      EditActions_Triangles;                                      // 0x0158   (0x0008)  
	class UEditMeshPolygonsToolEdgeActions*            EditEdgeActions;                                            // 0x0160   (0x0008)  
	class UEditMeshPolygonsToolEdgeActions_Triangles*  EditEdgeActions_Triangles;                                  // 0x0168   (0x0008)  
	class UEditMeshPolygonsToolUVActions*              EditUVActions;                                              // 0x0170   (0x0008)  
	class UPolyEditTopologyProperties*                 TopologyProperties;                                         // 0x0178   (0x0008)  
	class UPolyEditExtrudeActivity*                    ExtrudeActivity;                                            // 0x0180   (0x0008)  
	class UPolyEditInsetOutsetActivity*                InsetOutsetActivity;                                        // 0x0188   (0x0008)  
	class UPolyEditCutFacesActivity*                   CutFacesActivity;                                           // 0x0190   (0x0008)  
	class UPolyEditPlanarProjectionUVActivity*         PlanarProjectionUVActivity;                                 // 0x0198   (0x0008)  
	class UPolyEditInsertEdgeActivity*                 InsertEdgeActivity;                                         // 0x01A0   (0x0008)  
	class UPolyEditInsertEdgeLoopActivity*             InsertEdgeLoopActivity;                                     // 0x01A8   (0x0008)  
	class UPolyEditBevelEdgeActivity*                  BevelEdgeActivity;                                          // 0x01B0   (0x0008)  
	class UPolyEditExtrudeEdgeActivity*                ExtrudeEdgeActivity;                                        // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD8];                                      // 0x01C0   (0x00D8)  MISSED
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0298   (0x0008)  
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x02A0   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x02A8   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x02B0   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x640];                                     // 0x02C0   (0x0640)  MISSED
};

/// Class /Script/MeshModelingTools.NewMeshMaterialProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	TWeakObjectPtr<class UMaterialInterface*>          Material;                                                   // 0x00A8   (0x0008)  
	float                                              UVScale;                                                    // 0x00B0   (0x0004)  
	bool                                               bWorldSpaceUVScale;                                         // 0x00B4   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00B5   (0x0001)  
	bool                                               bShowExtendedOptions;                                       // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.ExistingMeshMaterialProperties
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	ESetMeshMaterialMode                               MaterialMode;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              CheckerDensity;                                             // 0x00AC   (0x0004)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x00B0   (0x0008)  
	FString                                            UVChannel;                                                  // 0x00B8   (0x0010)  
	TArray<FString>                                    UVChannelNamesList;                                         // 0x00C8   (0x0010)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                                 // [0x7c231d0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingTools.MeshEditingViewProperties
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	EMeshEditingMaterialModes                          MaterialMode;                                               // 0x00AC   (0x0004)  
	bool                                               bFlatShading;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00B4   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UTexture2D*                                  Image;                                                      // 0x00C8   (0x0008)  
	double                                             Opacity;                                                    // 0x00D0   (0x0008)  
	FLinearColor                                       TransparentMaterialColor;                                   // 0x00D8   (0x0010)  
	bool                                               bTwoSided;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	TWeakObjectPtr<class UMaterialInterface*>          CustomMaterial;                                             // 0x00EC   (0x0008)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.MeshUVChannelProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            UVChannel;                                                  // 0x00A8   (0x0010)  
	TArray<FString>                                    UVChannelNamesList;                                         // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                                 // [0x7c23200] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingTools.RecomputeUVsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.RecomputeUVsTool
/// Size: 0x0118 (280 bytes) (0x0000B0 - 0x000118) align 8 MaxSize: 0x0118
class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B0   (0x0008)  MISSED
	class UMeshUVChannelProperties*                    UVChannelProperties;                                        // 0x00B8   (0x0008)  
	class URecomputeUVsToolProperties*                 Settings;                                                   // 0x00C0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00C8   (0x0008)  
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x00D0   (0x0008)  
	bool                                               bCreateUVLayoutViewOnSetup;                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	class UUVLayoutPreview*                            UVLayoutView;                                               // 0x00E0   (0x0008)  
	class URecomputeUVsOpFactory*                      RecomputeUVsOpFactory;                                      // 0x00E8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00F8   (0x0020)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditBevelEdgeProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             BevelDistance;                                              // 0x00A8   (0x0008)  
	int32_t                                            Subdivisions;                                               // 0x00B0   (0x0004)  
	float                                              RoundWeight;                                                // 0x00B4   (0x0004)  
	bool                                               bInferMaterialID;                                           // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingTools.PolyEditBevelEdgeActivity
/// Size: 0x0140 (320 bytes) (0x000030 - 0x000140) align 8 MaxSize: 0x0140
class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UPolyEditBevelEdgeProperties*                BevelProperties;                                            // 0x0038   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0xF8];                                      // 0x0048   (0x00F8)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCutProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditCutPlaneOrientation                       Orientation;                                                // 0x00A8   (0x0004)  
	bool                                               bSnapToVertices;                                            // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCutFacesActivity
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 16 MaxSize: 0x00C0
class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UPolyEditCutProperties*                      CutProperties;                                              // 0x0040   (0x0008)  
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x0048   (0x0008)  
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                        // 0x0050   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0060   (0x0060)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditExtrudeDistanceMode                       DistanceMode;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	double                                             Distance;                                                   // 0x00B0   (0x0008)  
	EPolyEditExtrudeModeOptions                        DirectionMode;                                              // 0x00B8   (0x0004)  
	EPolyEditExtrudeDirection                          Direction;                                                  // 0x00BC   (0x0004)  
	double                                             MaxDistanceScaleFactor;                                     // 0x00C0   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	EPolyEditExtrudeDirection                          MeasureDirection;                                           // 0x00CC   (0x0004)  
	bool                                               bUseColinearityForSettingBorderGroups;                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditOffsetProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditExtrudeDistanceMode                       DistanceMode;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	double                                             Distance;                                                   // 0x00B0   (0x0008)  
	EPolyEditOffsetModeOptions                         DirectionMode;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	double                                             MaxDistanceScaleFactor;                                     // 0x00C0   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	EPolyEditExtrudeDirection                          MeasureDirection;                                           // 0x00CC   (0x0004)  
	bool                                               bUseColinearityForSettingBorderGroups;                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditPushPullProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{ 
public:
	EPolyEditExtrudeDistanceMode                       DistanceMode;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	double                                             Distance;                                                   // 0x00B0   (0x0008)  
	EPolyEditPushPullModeOptions                       DirectionMode;                                              // 0x00B8   (0x0004)  
	EPolyEditExtrudeDirection                          SingleDirection;                                            // 0x00BC   (0x0004)  
	double                                             MaxDistanceScaleFactor;                                     // 0x00C0   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	EPolyEditExtrudeDirection                          MeasureDirection;                                           // 0x00CC   (0x0004)  
	bool                                               bUseColinearityForSettingBorderGroups;                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeActivity
/// Size: 0x01D0 (464 bytes) (0x000030 - 0x0001D0) align 8 MaxSize: 0x01D0
class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UPolyEditExtrudeProperties*                  ExtrudeProperties;                                          // 0x0050   (0x0008)  
	class UPolyEditOffsetProperties*                   OffsetProperties;                                           // 0x0058   (0x0008)  
	class UPolyEditPushPullProperties*                 PushPullProperties;                                         // 0x0060   (0x0008)  
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                      // 0x0068   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x158];                                     // 0x0078   (0x0158)  MISSED
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{ 
public:
	EGroupEdgeInsertionMode                            InsertionMode;                                              // 0x00A8   (0x0004)  
	bool                                               bContinuousInsertion;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	double                                             VertexTolerance;                                            // 0x00B0   (0x0008)  
};

/// Class /Script/MeshModelingTools.PolyEditInsertEdgeActivity
/// Size: 0x0470 (1136 bytes) (0x000030 - 0x000470) align 16 MaxSize: 0x0470
class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	class UGroupEdgeInsertionProperties*               Settings;                                                   // 0x0048   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x418];                                     // 0x0058   (0x0418)  MISSED
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{ 
public:
	EEdgeLoopPositioningMode                           PositionMode;                                               // 0x00A8   (0x0004)  
	EEdgeLoopInsertionMode                             InsertionMode;                                              // 0x00AC   (0x0004)  
	int32_t                                            NumLoops;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	double                                             ProportionOffset;                                           // 0x00B8   (0x0008)  
	double                                             DistanceOffset;                                             // 0x00C0   (0x0008)  
	bool                                               bInteractive;                                               // 0x00C8   (0x0001)  
	bool                                               bFlipOffsetDirection;                                       // 0x00C9   (0x0001)  
	bool                                               bHighlightProblemGroups;                                    // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00CB   (0x0005)  MISSED
	double                                             VertexTolerance;                                            // 0x00D0   (0x0008)  
};

/// Class /Script/MeshModelingTools.PolyEditInsertEdgeLoopActivity
/// Size: 0x0400 (1024 bytes) (0x000030 - 0x000400) align 16 MaxSize: 0x0400
class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	class UEdgeLoopInsertionProperties*                Settings;                                                   // 0x0048   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x3A8];                                     // 0x0058   (0x03A8)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditInsetOutsetProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Softness;                                                   // 0x00A8   (0x0004)  
	bool                                               bBoundaryOnly;                                              // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              AreaScale;                                                  // 0x00B0   (0x0004)  
	bool                                               bReproject;                                                 // 0x00B4   (0x0001)  
	bool                                               bOutset;                                                    // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00B6   (0x0002)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditInsetOutsetActivity
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UPolyEditInsetOutsetProperties*              Settings;                                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x0050   (0x0008)  
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                          // 0x0058   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditSetUVProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowMaterial;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditPlanarProjectionUVActivity
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 16 MaxSize: 0x00F0
class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UPolyEditSetUVProperties*                    SetUVProperties;                                            // 0x0040   (0x0008)  
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x0048   (0x0008)  
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                        // 0x0050   (0x0008)  
	class UPolyEditActivityContext*                    ActivityContext;                                            // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x90];                                      // 0x0060   (0x0090)  MISSED
};

/// Class /Script/MeshModelingTools.UVLayoutToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.UVLayoutTool
/// Size: 0x0170 (368 bytes) (0x0000B8 - 0x000170) align 16 MaxSize: 0x0170
class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UMeshUVChannelProperties*                    UVChannelProperties;                                        // 0x00C0   (0x0008)  
	class UUVLayoutProperties*                         BasicProperties;                                            // 0x00C8   (0x0008)  
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x00D0   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00D8   (0x0010)  
	TArray<class UUVLayoutOperatorFactory*>            Factories;                                                  // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x00F8   (0x0068)  MISSED
	class UUVLayoutPreview*                            UVLayoutView;                                               // 0x0160   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.UVProjectionToolEditActions
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.UVProjectionToolEditActions.Reset
	// void Reset();                                                                                                            // [0x7c22ff0] Final|Native|Public  
	// Function /Script/MeshModelingTools.UVProjectionToolEditActions.AutoFitAlign
	// void AutoFitAlign();                                                                                                     // [0x7c22c30] Final|Native|Public  
	// Function /Script/MeshModelingTools.UVProjectionToolEditActions.AutoFit
	// void AutoFit();                                                                                                          // [0x7c22bd0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.UVProjectionToolProperties
/// Size: 0x0190 (400 bytes) (0x0000A8 - 0x000190) align 16 MaxSize: 0x0190
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EUVProjectionMethod                                ProjectionType;                                             // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FVector                                            Dimensions;                                                 // 0x00B0   (0x0018)  
	bool                                               bProportionalDimensions;                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	EUVProjectionToolInitializationMode                Initialization;                                             // 0x00CC   (0x0004)  
	float                                              CylinderSplitAngle;                                         // 0x00D0   (0x0004)  
	float                                              ExpMapNormalBlending;                                       // 0x00D4   (0x0004)  
	int32_t                                            ExpMapSmoothingSteps;                                       // 0x00D8   (0x0004)  
	float                                              ExpMapSmoothingAlpha;                                       // 0x00DC   (0x0004)  
	float                                              Rotation;                                                   // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FVector2D                                          Scale;                                                      // 0x00E8   (0x0010)  
	FVector2D                                          Translation;                                                // 0x00F8   (0x0010)  
	FVector                                            SavedDimensions;                                            // 0x0108   (0x0018)  
	bool                                               bSavedProportionalDimensions;                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0121   (0x000F)  MISSED
	FTransform                                         SavedTransform;                                             // 0x0130   (0x0060)  
};

/// Class /Script/MeshModelingTools.UVProjectionOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UUVProjectionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UUVProjectionTool*                           Tool;                                                       // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.UVProjectionTool
/// Size: 0x04D0 (1232 bytes) (0x000120 - 0x0004D0) align 16 MaxSize: 0x04D0
class UUVProjectionTool : public USingleTargetWithSelectionTool
{ 
public:
	class UMeshUVChannelProperties*                    UVChannelProperties;                                        // 0x0120   (0x0008)  
	class UUVProjectionToolProperties*                 BasicProperties;                                            // 0x0128   (0x0008)  
	class UUVProjectionToolEditActions*                EditActions;                                                // 0x0130   (0x0008)  
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x0138   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0140   (0x0008)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x0148   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0150   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0158   (0x0008)  
	class UUVProjectionOperatorFactory*                OperatorFactory;                                            // 0x0160   (0x0008)  
	class UPreviewGeometry*                            EdgeRenderer;                                               // 0x0168   (0x0008)  
	unsigned char                                      UnknownData00_6[0x348];                                     // 0x0170   (0x0348)  MISSED
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                    // 0x04B8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x04C0   (0x0010)  MISSED
};

#pragma pack(pop)


