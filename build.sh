#!/bin/bash
# based on the instructions from edk2-platform
set -e
. build_common.sh
./build_bootshim.sh
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -j$(nproc) -s -n 0 -a AARCH64 -t GCC5 -p MT6771Pkg/Devices/cph1989.dsc
cat BootShim/BootShim.bin workspace/Build/MT6771Pkg/DEBUG_GCC5/FV/MT6771PKG_UEFI.fd > workspace/UEFI
mkbootimg \
	--cmdline "bootopt=64S3,32N2,64N2" \
	--kernel workspace/UEFI \
	--ramdisk blobs/ramdisk \
	--base 0x40078000 \
	--kernel_offset 0x00008000 \
	--ramdisk_offset 0x14f88000 \
	--second_offset 0xbff88000 \
	--tags_offset 0x13f88000 \
	--dtb_offset 0x13f88000 \
	--os_version 11.0.0 \
  	--pagesize 2048 \
  	--os_patch_level "2023-09" \
	--header_version 0 \
	--dtb blobs/dtb \
	-o boot-uefi.img
