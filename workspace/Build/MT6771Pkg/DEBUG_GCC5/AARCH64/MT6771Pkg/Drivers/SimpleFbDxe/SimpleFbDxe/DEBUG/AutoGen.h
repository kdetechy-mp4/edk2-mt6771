/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_dcfd1e6d_788d_4ffc_8e1b_ca2f75651a92
#define _AUTOGENH_dcfd1e6d_788d_4ffc_8e1b_ca2f75651a92

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xdcfd1e6d, 0x788d, 0x4ffc, {0x8e, 0x1b, 0xca, 0x2f, 0x75, 0x65, 0x1a, 0x92}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x28f1a3bf, 0x193a, 0x47e3, {0xa7, 0xb9, 0x5a, 0x43, 0x5e, 0xaa, 0xb2, 0xee}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gMT6771PkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdMipiFrameBufferAddress  0U
#define _PCD_SIZE_PcdMipiFrameBufferAddress 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferAddress  _PCD_SIZE_PcdMipiFrameBufferAddress 
#define _PCD_VALUE_PcdMipiFrameBufferAddress  0x76610000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferAddress  _gPcd_FixedAtBuild_PcdMipiFrameBufferAddress
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferWidth  0U
#define _PCD_SIZE_PcdMipiFrameBufferWidth 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferWidth  _PCD_SIZE_PcdMipiFrameBufferWidth 
#define _PCD_VALUE_PcdMipiFrameBufferWidth  1088U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferWidth  _gPcd_FixedAtBuild_PcdMipiFrameBufferWidth
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMipiFrameBufferHeight  0U
#define _PCD_SIZE_PcdMipiFrameBufferHeight 4
#define _PCD_GET_MODE_SIZE_PcdMipiFrameBufferHeight  _PCD_SIZE_PcdMipiFrameBufferHeight 
#define _PCD_VALUE_PcdMipiFrameBufferHeight  2340U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight;
#define _PCD_GET_MODE_32_PcdMipiFrameBufferHeight  _gPcd_FixedAtBuild_PcdMipiFrameBufferHeight
//#define _PCD_SET_MODE_32_PcdMipiFrameBufferHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVideoHorizontalResolution  8U
#define _PCD_GET_MODE_32_PcdVideoHorizontalResolution  LibPcdGet32(_PCD_TOKEN_PcdVideoHorizontalResolution)
#define _PCD_GET_MODE_SIZE_PcdVideoHorizontalResolution  LibPcdGetSize(_PCD_TOKEN_PcdVideoHorizontalResolution)
#define _PCD_SET_MODE_32_PcdVideoHorizontalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdVideoHorizontalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdVideoHorizontalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdVideoHorizontalResolution, (Value))

#define _PCD_TOKEN_PcdVideoVerticalResolution  9U
#define _PCD_GET_MODE_32_PcdVideoVerticalResolution  LibPcdGet32(_PCD_TOKEN_PcdVideoVerticalResolution)
#define _PCD_GET_MODE_SIZE_PcdVideoVerticalResolution  LibPcdGetSize(_PCD_TOKEN_PcdVideoVerticalResolution)
#define _PCD_SET_MODE_32_PcdVideoVerticalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdVideoVerticalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdVideoVerticalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdVideoVerticalResolution, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SimpleFbDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
