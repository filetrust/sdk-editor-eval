#ifndef SESSION_H
#define SESSION_H

#ifdef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif

typedef size_t Session; // TODO Change to SessionHandle

typedef enum Policy_format {
    PF_XML = 0 // Default
} Policy;

typedef enum Analysis_format {
    AF_XML = 0 // Default
} Analysis;

typedef enum SerializationFormat {
    SF_XML = 0, // Default
    SF_SISL = 1
} Serialization;

typedef enum SessionRunMode {
    SM_EDITORONLY = 0, // Default
    SM_REBUILDONLY = 1,
    SM_REBUILD_EDITOR = 2,
    SM_UNDEFINED = 0xff // used to mark it not yet been assigned to a copy.
} SessionRun;


typedef enum SessionFileTypes {
    SessionConfig,
    SessionInput,
    SessionOutput,
    SessionAnalysis,
    SessionReport,
    SessionImport,
    SessionExport,
    SessionIssueInfo,
    SessionProcessStatus,
    SessionFileErrorMsg
} SessionRegTypes_t;

#endif // SESSION_H
