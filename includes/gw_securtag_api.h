#ifndef GW_SECURTAG_API_H
#define GW_SECURTAG_API_H

#include "gw_securtag_global.h"
#  ifdef _WIN32
#    define GW_DECL_EXPORT     __declspec(dllexport)
#    define GW_DECL_IMPORT     __declspec(dllimport)
#  else
#    define GW_DECL_EXPORT     __attribute__((visibility("default")))
#    define GW_DECL_IMPORT     __attribute__((visibility("default")))
#  endif

#if defined(GW_SECURTAG_LIBRARY)
#  define GW_SECURTAGSHARED_EXPORT GW_DECL_EXPORT
#else
#  define GW_SECURTAGSHARED_EXPORT GW_DECL_IMPORT
#endif

#ifdef __cplusplus
#    define externlinkage extern "C"
#else
#    define externlinkage extern
#endif
/* This function Loads a file for Tagging */
externlinkage GW_SECURTAGSHARED_EXPORT bool GWSecuTag_TagFile(const char *sourcefilepath, const char *tagsinfilepath, const char *destfilepath);

/* This function Loads a file for Retreiving tags found */
externlinkage GW_SECURTAGSHARED_EXPORT bool GWSecuTag_RetrieveTagFile(const char *sourcefilepath, const char *tagsoutfilepath);

#endif // GW_SECURTAG_API_H
