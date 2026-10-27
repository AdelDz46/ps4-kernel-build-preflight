# Port Summary
Original base: 22a65a956e3421b55ad3451f58c053c6467f729f (ps4-linux-6.15.y)
Updated target: feeRnt/ps4-linux-12xx @ e155734653784d5be2495a4c5d6b00f5c4c4db5a (6.15.4-aeolia-belize-crashniels)
Original experimental diff: original_experimental_diff.patch (sha256 3e8ae3e6c80b2bd7c75e60ed56780b6f94795703dced996824eb0cd2c7a00507)
Changed files: amdgpu_atombios.c, atombios_crtc.c, atombios_encoders.c, dce_v8_0.c, ps4_bridge.c

Patches ported: 0005-0008 with manifests in patch_hashes.txt
Includes: 1080p60/120/144 modes, non_cea_mode, dp_extclk clobber (Gladius+Liverpool), dp_clock floor, diagnostics, TX controls preserved.
