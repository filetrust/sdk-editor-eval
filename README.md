# Glasswall Editor SDK (Evaluation Version)

Evaluation versions of the Glasswall Editor SDK which expires after 30 days.

## Version

Table below contains the version numbers for the libraries and tools in this repository.

| Name                                                 | Current Version    |
|------------------------------------------------------|--------------------|
| Glasswall Editor (libglasswall_core2.so)             | 2.122 (Interim)    |
| Word Search And Redact (libglasswall.word.search.so) | 0.15               |
| Archive Manager (libglasswall.archive.manager.so)    | 0.10               |
| Glasswall Command Line Tool (GWQtCLI)                | 0.11               |

### Change Log
For changes applicable to each version [Click Here](https://github.com/filetrust/sdk-editor-eval/blob/master/Changelog.md)

## Glasswall Editor SDK Documentation

- For Glasswall Editor SDK documentation [Click Here](https://docs.glasswallsolutions.com/sdk/editor)
- For Glasswall Command Line Tool documentation [Click Here](https://docs.glasswallsolutions.com/sdk/editor/Content/CLI/CLI-Test-Tool.htm)
- For Glasswall Editor Word Search documentation [Click Here](https://github.com/filetrust/sdk-editor-eval/tree/master/libs/extensions/word.search)
- For Glasswall Editor Archive Manager documentation [Click Here](https://github.com/filetrust/sdk-editor-eval/tree/master/libs/extensions/archive.manager)
- For instructions on how to run Glasswall Editor in docker [Click Here](https://github.com/filetrust/sdk-editor-eval/tree/master/libs/extensions/docker)

**README** files within sub directories of the repository provide more information and guides for specific components and parts of the SDK.

**NOTE:** Documentation for SDK wrappers and extensions to Glasswall Editor can be found in the Extensions section of the [Glasswall Editor documentation](https://docs.glasswallsolutions.com/sdk/editor).

## Contents of the repository

- **/libs/editor** contains the Editor library files (.so)
- **/libs/extensions** contains libraries (.so) and wrappers that extend the Glasswall Editor capability. This includes:
    - Word Search And Redaction - Glasswall Word Search engine is built on top of Glasswall Editor and performs text searching and redaction in the content and metadata of a file.
    - Archive Manager - Provides support for archive file formats.
    - Wrappers - expose Glasswall Editor SDK functionality through **Python, C#, JavaScript** and **Java**
- **/tools/command.line.tool** contains the Glasswall Editor Command Line Tool
- **xsd/** contains XSD schema definitions for the following:
    - Glasswall Editor output XML report
    - Glasswall Editor XML content management configuration file
    - Archive Manager output XML report
    - Archive Manager XML configuration file
    - Word Search output XML report
    - Word Search XML configuration file
- **test.data/** contains sample test data and config files 
    - **word.search.data.sets/** Contains a number of test files and configuration files that highlight some of the key features of Word Search and Redact.

