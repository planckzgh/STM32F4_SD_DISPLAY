///-----------------------------------------------------------------------------
#ifndef _SD_STORAGE
#define _SD_STORAGE
///-----------------------------------------------------------------------------
#ifdef __cplusplus
 extern "C" {
#endif
///-----------------------------------------------------------------------------
#include <stdbool.h>
///-----------------------------------------------------------------------------
#include "../fat/ff_gen_drv.h"
#include "../fat/sd_diskio.h"
///-----------------------------------------------------------------------------
extern bool SD_Connect(void);
extern bool SD_Disconnect(void);
extern bool SD_WriteLn(const char* file_name,char* buffer,uint32_t length);
///-----------------------------------------------------------------------------
#ifdef __cplusplus
}
#endif
///-----------------------------------------------------------------------------
#endif
///-----------------------------------------------------------------------------
