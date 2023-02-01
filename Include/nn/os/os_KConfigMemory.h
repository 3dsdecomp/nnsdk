#pragma once
#include "Types.h"

/* Info for this header file has been generated from https://www.3dbrew.org/wiki/Configuration_Memory */
namespace nn {
namespace os {

    /* ARM11 Kernel Configuration Memory - r-- */
    struct KConfigMemory {
        u8 kVersionUnk;
        u8 kVersionRev;
        u8 kVersionMinor;
        u8 kVersionMajor;
        u32 updateFlag;
        u64 nsTid;
        u32 sysCoreVer;
        u8 envInfo;
        u8 unitInfo;
        u8 prevFirm;
        u8 pad1;
        u32 kCtrSdkVer;
        u32 pad2;
        u32 firmLaunchFlags;
        u32 pad3[3];
        u32 appMemType;
        u32 pad4[3];
        u32 appMemAlloc;
        u32 sysMemAlloc;
        u32 baseMemAlloc;
        u32 pad5[5];
        u8 firmVerUnk;
        u8 firmVerRev;
        u8 firmVerMinor;
        u8 firmVerMajor;
        u32 firmSysCoreVer;
        u32 firmCtrSdkVer;
    };

    inline const KConfigMemory *GetKConfigMemory() {
        return reinterpret_cast<KConfigMemory*>(0x1FF80000);
    }

    #pragma no_inline
    u32 GetAppMemorySize() {
        return GetKConfigMemory()->appMemAlloc;
    }
}
}
