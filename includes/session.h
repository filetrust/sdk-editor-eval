#ifndef SESSION_H
#define SESSION_H

#ifdef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif

typedef size_t Session_Handle;

typedef enum  {
    PF_XML = 0 // Default
} Policy_Format;

typedef enum  {
    AF_XML = 0 // Default
} Analysis_Format;

typedef enum  {
    SF_XML = 0, // Default
    SF_SISL = 1
} Serialization_Format;

typedef enum  {
    SM_EDITORONLY = 0, // Default
    SM_REBUILDONLY = 1,
    SM_REBUILD_EDITOR = 2,
    SM_UNDEFINED = 0xff // used to mark it not yet been assigned to a copy.
} Session_Run_Mode;


#endif // SESSION_H
