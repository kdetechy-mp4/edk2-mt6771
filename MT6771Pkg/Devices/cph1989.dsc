[Defines]
  PLATFORM_NAME                  = MT6771Pkg
  PLATFORM_GUID                  = 28f1a3bf-193a-47e3-a7b9-5a435eaab2ee
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010019
  OUTPUT_DIRECTORY               = Build/$(PLATFORM_NAME)
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = MT6771Pkg/MT6771Pkg.fdf

!include MT6771Pkg/MT6771Pkg.dsc

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x40000000
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x20000000 # 8GB
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x40C00000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000
  gMT6771PkgTokenSpaceGuid.PcdUefiMemPoolBase|0x40C50000
  gMT6771PkgTokenSpaceGuid.PcdUefiMemPoolSize|0x075b0000
  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x40C40000
  gMT6771PkgTokenSpaceGuid.PcdMipiFrameBufferAddress|0x76610000
  gMT6771PkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1088
  gMT6771PkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2340
  gMT6771PkgTokenSpaceGuid.PcdMipiFrameBufferVisibleWidth|1080
  gMT6771PkgTokenSpaceGuid.PcdMipiFrameBufferVisibleHeight|2340
  gMT6771PkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32
