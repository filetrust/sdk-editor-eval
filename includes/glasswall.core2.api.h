#ifndef GLASSWALL_CORE2_API_H
#define GLASSWALL_CORE2_API_H

#include <QtCore/qglobal.h>

#if defined(GLASSWALL_CORE2_LIBRARY)
#  define GLASSWALL_CORE2SHARED_EXPORT Q_DECL_EXPORT
#else
#  define GLASSWALL_CORE2SHARED_EXPORT Q_DECL_IMPORT
#endif

#include "session.h"
#include "filetype.h"

/* This function determines the file type for a given file provided it is supported by Glasswall. Notice this is not related to a session */
extern "C" GLASSWALL_CORE2SHARED_EXPORT ft_t GW2DetermineFileTypeFromFile(const char *path);

/* This function determines the file type for a given file in memory. Notice this is not related to a session */
extern "C" GLASSWALL_CORE2SHARED_EXPORT ft_t GW2DetermineFileTypeFromMemory(const char *inputFileBuffer, size_t inputLength);

/* This function determines the file type for a given file given and produces a report. Notice this is not related to a session */
extern "C" GLASSWALL_CORE2SHARED_EXPORT ft_t GW2DetermineFileTypeAndReport(const char *inputFileBuffer, size_t inputLength, const char *report);

/* This function retrieves the version string of the Glasswall Library */
extern "C" GLASSWALL_CORE2SHARED_EXPORT const char * GW2LibVersion(void );

/* Ask for a new file processing session. Handle to the session returned or NULL if none available. */
extern "C" GLASSWALL_CORE2SHARED_EXPORT Session GW2OpenSession(void );

/* Request close of a session. Return zero if successful, non zero if fails. */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2CloseSession(Session session);

/* Load the policy settings for this session from a file */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterPoliciesFile(Session session, const char *filename, Policy_format format);

/* Load the policy settings for this session from memory */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterPoliciesMemory(Session session, char *policies, size_t policiesLength, Policy_format format);

/* Get current policy sessions for this session */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2GetPolicySettings(Session session, char **policiesBuffer, size_t *policiesLength, Policy_format format);

/* Identify file for processing */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterInputFile(Session session, const char *inputFilePath);

/* Identify file image for processing */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterInputMemory(Session session, const char *inputFileBuffer, size_t inputLength);

/* Identify filepath for managed output */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterOutFile(Session session, const char *outputFilePath);

/* Identify memory for managed output */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterOutputMemory(Session session, char **outputBuffer, size_t *outputLength);

/* Identify filepath for analysis output */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterAnalysisFile(Session session, const char *analysisFilePathName, Analysis_format format);

/* Identify memory for analysis output */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterAnalysisMemory(Session session, char **analysisFileBuffer, size_t *analysisoutputLength, Analysis_format format);

/* Identify filepath for Interchange File for import */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterImportFile(Session session, const char *importFilePath);

/* Identify memory for Interchange File for import */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterImportMemory(Session session, char *importFileBuffer, size_t importLength);

/* Identify filepath for Interchange File for export */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterExportFile(Session session, const char *exportFilePath);

/* Identify memory for Interchange File for export */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterExportMemory(Session session, char **exportFileBuffer, size_t *exportLength);

/* Identify filepath for Report output */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RegisterReportFile(Session session, const char *reportFilePathName);

/* Run the session based on the registered inputs and outputs */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2RunSession(Session session);

/* Retrieves the group description for the given Issue ID */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2GetIdInfo(Session session, size_t issueId, size_t *bufferLength, char **outputBuffer);

/* Retrieves the XML containing all the Issue ID ranges with their group descriptions. */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2GetAllIdInfo(Session session, size_t *bufferLength, char **outputBuffer);

/* This function retrieves the Glasswall Session Status. This also gives a high level indication of the processing that was carried out on the last document processed by the library */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2FileSessionStatus(Session session, int *glasswallSessionStatus, char **statusMsgBuffer, size_t *statusbufferLength);

/* This function retrieves the Glasswall Session Process error message.  */
extern "C" GLASSWALL_CORE2SHARED_EXPORT int GW2FileErrorMsg(Session session, char **errorMsgBuffer, size_t *errorMsgBufferLength);

#endif
