#ifndef GW_SECURTAG_API_H
#define GW_SECURTAG_API_H

#include "gw_securtag_global.h"
#include <QtCore/qglobal.h>

#if defined(GW_SECURTAG_LIBRARY)
#  define GW_SECURTAGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define GW_SECURTAGSHARED_EXPORT Q_DECL_IMPORT
#endif

/* This function Loads a file for Tagging */
extern "C" GW_SECURTAGSHARED_EXPORT bool GWSecuTag_TagFile(const char *sourcefilepath, const char *tagsinfilepath, const char *destfilepath);

/* This function Loads a file for Retreiving tags found */
extern "C" GW_SECURTAGSHARED_EXPORT bool GWSecuTag_RetrieveTagFile(const char *sourcefilepath, const char *tagsoutfilepath);

#endif // GW_SECURTAG_API_H
