#ifndef GLASSWALL_CORE2_API_H
#define GLASSWALL_CORE2_API_H



#  ifdef _WIN32
#    define GW_DECL_EXPORT     __declspec(dllexport)
#    define GW_DECL_IMPORT     __declspec(dllimport)
#  else
#    define GW_DECL_EXPORT     __attribute__((visibility("default")))
#    define GW_DECL_IMPORT     __attribute__((visibility("default")))
#  endif



#if defined(GLASSWALL_CORE2_LIBRARY)
#  define GLASSWALL_CORE2SHARED_EXPORT GW_DECL_EXPORT
#else
#  define GLASSWALL_CORE2SHARED_EXPORT GW_DECL_IMPORT
#endif


#include "session.h"
#include "filetype.h"

#ifdef __cplusplus
#    define externlinkage extern "C"
#else
#    define externlinkage extern
#endif


/* This function determines the file type for a given file provided it is supported by Glasswall. Notice this is not related to a session */
externlinkage GLASSWALL_CORE2SHARED_EXPORT ft_t GW2DetermineFileTypeFromFile(const char *path);

/* This function determines the file type for a given file in memory. Notice this is not related to a session */
externlinkage GLASSWALL_CORE2SHARED_EXPORT ft_t GW2DetermineFileTypeFromMemory(const char *inputFileBuffer, size_t inputLength);

/* This function determines the file type for a given file given and produces a report. Notice this is not related to a session */
externlinkage GLASSWALL_CORE2SHARED_EXPORT ft_t GW2DetermineFileTypeAndReport(const char *inputFileBuffer, size_t inputLength, const char *report);

/* This function retrieves the version string of the Glasswall Library */
externlinkage GLASSWALL_CORE2SHARED_EXPORT const char * GW2LibVersion(void );

/* Ask for a new file processing session. Handle to the session returned or NULL if none available. */
externlinkage GLASSWALL_CORE2SHARED_EXPORT Session_Handle GW2OpenSession(void );

/* Request close of a session. Return zero if successful, non zero if fails. */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2CloseSession(Session_Handle session);

/* Load the policy settings for this session from a file */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterPoliciesFile(Session_Handle session, const char *filename, Policy_Format format);

/* Load the policy settings for this session from memory */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterPoliciesMemory(Session_Handle session, char *policies, size_t policiesLength, Policy_Format format);

/* Get current policy sessions for this session */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2GetPolicySettings(Session_Handle session, char **policiesBuffer, size_t *policiesLength, Policy_Format format);

/* Identify file for processing */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterInputFile(Session_Handle session, const char *inputFilePath);

/* Identify file image for processing */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterInputMemory(Session_Handle session, const char *inputFileBuffer, size_t inputLength);

/* Identify filepath for managed output */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterOutFile(Session_Handle session, const char *outputFilePath);

/* Identify memory for managed output */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterOutputMemory(Session_Handle session, char **outputBuffer, size_t *outputLength);

/* Identify filepath for analysis output */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterAnalysisFile(Session_Handle session, const char *analysisFilePathName, Analysis_Format format);

/* Identify memory for analysis output */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterAnalysisMemory(Session_Handle session, char **analysisFileBuffer, size_t *analysisoutputLength, Analysis_Format format);

/* Identify filepath for Interchange File for import */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterImportFile(Session_Handle session, const char *importFilePath);

/* Identify memory for Interchange File for import */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterImportMemory(Session_Handle session, char *importFileBuffer, size_t importLength);

/* Identify filepath for Interchange File for export */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterExportFile(Session_Handle session, const char *exportFilePath);

/* Identify memory for Interchange File for export */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterExportMemory(Session_Handle session, char **exportFileBuffer, size_t *exportLength);

/* Identify filepath for Report output */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterReportFile(Session_Handle session, const char *reportFilePathName);

/* Run the session based on the registered inputs and outputs */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2RunSession(Session_Handle session);

/* Retrieves the group description for the given Issue ID */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2GetIdInfo(Session_Handle session, size_t issueId, size_t *bufferLength, char **outputBuffer);

/* Retrieves the XML containing all the Issue ID ranges with their group descriptions. */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2GetAllIdInfo(Session_Handle session, size_t *bufferLength, char **outputBuffer);

/* This function retrieves the Glasswall Session Status. This also gives a high level indication of the processing that was carried out on the last document processed by the library */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2FileSessionStatus(Session_Handle session, int *glasswallSessionStatus, char **statusMsgBuffer, size_t *statusbufferLength);

/* This function retrieves the Glasswall Session Process error message.  */
externlinkage GLASSWALL_CORE2SHARED_EXPORT int GW2FileErrorMsg(Session_Handle session, char **errorMsgBuffer, size_t *errorMsgBufferLength);

#endif
