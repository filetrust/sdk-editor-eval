# Glasswall Editor SDK - Changelog
All notable changes to this project will be documented in this file.

## Key Known Issues

### Defects
- 106424  Editor: DOC files produce error while post-processing CFB nodes.
- 106710  Editor: Some files fail in export mode in XLSX filetype.
- 105736  Editor: XLSX - Repair pop up displayed when DDE has been sanitised.
- 105743  Editor: Unable to open some embedded files when content managament switch is set to allow.
- 105744  Editor: DOC - Unable to run macro in regenerated file when content managament switch is set to Allow.
- 105745  Editor: PPT - Repair pop up displayed upon opening regenerated in a file with review comments when content managament switch set to sanitise.
- 106642  Editor: Export mode failures in PPTX files.
- 106675  Editor: Export mode failures in XLS filetype.
- 107832  Editor: Some embedded charts not viewable after regeneration
- 106671  WordSearch: Occasionally spaces before and after search term is also redacted.
- 106705  WordSearch: Occasionally unable to open embedded file which has been redacted inside a PPTX.

### Limitations

- Performance of the engine not optimised for large file processing. 
- Restriction applied on permitted redaction characters (See table below)

**_Redaction characters that are not permitted_**

| Special character |   |
|-------------------|---|
| Ampersand         | & |
| Less-than         | < |
| Greater-than      | > |
| Quotes            | " |

## 2021-06-01

### Editor v2.142
- Pre-release

#### Documentation
No Change.

#### Other Improvements
- various import/export fixes.
- Corrected XSD for analysis report.
- Better determination of EMF and WMF images.

### Wrod Search 1.3

#### Other Improvements
- Replace regex engine.
- Improved unicode spport 

## 2020-11-12

### Editor v2.126
- Pre-release

#### Documentation
No Change.

#### Other Improvements
- Configuration option to pre-process with rebuild added.

- Increased support for Alternate Content XML tags 
in Office files (Increases regeneration rates)


## 2020-08-06

### Editor v2.91
- Interim Release

#### Bug Fixes
- 107970: Fix for XLS validation failure during import.
- 107963: Fix for issue found where characters are incorrectly escaped.
- 107499: Fix for issue in processing of XLS files with chart.

#### Documentation
No Change.

#### Other Improvements
None

## 2020-07-31

### Editor v2.88
- Interim Release

#### Bug Fixes
- 106670: Control characters not escaped on XML export.
- 106686: Handling unicode text in Editor Export/Import.
- 106968: Fix for correct handling of review comments.
- 107805: Updated code with fix for PNG gIFx and gIFg.
- 107477: Fixes for memory leaks for param block and CameraIF during import.
- 107478: Fix memory leak in serialisation.
- 107477: Fix for memory leak in param block.
- 107479: Fix for a memory leak from function generating random numbers.
- 106938: Correct handling of whitespace during import.

#### Documentation
No Change.

#### Other Improvements
None
    

## 2020-07-19

### Archive Manager v0.9

#### Bug Fixes

- 106964:  Segfault when running wordsearch with valgrind

#### Documentation
No Change.

#### Other Improvements
- Slight performance improvements - Editor no longer loaded in archive manager when running in word search mode as it is not required in this mode.

## 2020-07-17

### Editor v2.61

#### Bug Fixes

|   ID   |                                                Title                                               |
|:------:|:--------------------------------------------------------------------------------------------------:|
| 105727 | Editor:   Analysis report does not contain the content management policy                           |
| 106481 | WordSearch:   Appears to be hanging when processing docx file.                                     |
| 106586 | Wordsearch   not counting hits correctly                                                           |
| 106587 | Wordsearch:   Search matching partial words                                                        |
| 106620 | WordSearch:   Unexpected end of json file error when not using homoglyphs                          |
| 106622 | Editor:   Export failures in DOC camera (Functional Set)                                           |
| 106623 | Corrupt   files after word search (& and < as redact character)                                    |
| 106625 | Editor:   Import failures in DOCX camera (Functional Set) - CORE DUMP SET                          |
| 106640 | Editor:   Import failures in XLS camera (Functional Set)                                           |
| 106641 | Editor:   Import failures in XLSX camera (Functional Set)                                          |
| 106643 | Editor:   Import failures in PPTX camera (Functional Set) - CORE DUMP SET                          |
| 106662 | Editor:   Export failures in PPT camera (Random Set 1 Premature Termination)                       |
| 106665 | Wordsearch:   unable to redact from internal hyperlink in DOCX                                     |
| 106668 | Wordsearch:   unable to redact single phrase multiple times in DOCX                                |
| 106676 | wordsearch;   complicated regex causing core dump                                                  |
| 106681 | Editor:   Import failures in PPTX camera (Random Set 1) CORE DUMP                                  |
| 106689 | Editor:   Export failures in DOCX camera (Random Set 1) - CORE DUMP SET                            |
| 106692 | Editor:   Import failures in DOCX camera (Random Set 1) - CORE DUMP SET                            |
| 106726 | Editor:   Export failures in XLS camera (Random Set 2)                                             |
| 106734 | Editor:   Import failures in XLS camera (Random Set 3)                                             |
| 106737 | Editor:   Export failures in XLS camera (Random Set 4)                                             |
| 106746 | Editor:   QLIST failure when trying to run GWQtCLI -i input -o output                              |
| 106761 | Editor:   Export failures in PPTX camera (Random Set 2)                                            |
| 106766 | Editor:   Import failures in PPTX camera (Random Set 2)                                            |
| 106767 | Wordsearch:   unable to redact a word within a chart                                               |
| 106789 | Editor:   Export failures in PPT camera (Random Set 2)                                             |
| 106791 | Editor:   Export failures in PPT camera (Random Set 2 Hanging Files)                               |
| 106797 | Editor:   Import failures in PPT camera (Random Set 2)                                             |
| 106804 | Editor:   DOCX - files need to be repaired after regenerating.                                     |
| 106825 | Editor:   OOXML - files with Comments, Numbered Styles need to be repaired after being   sanitised |
| 106848 | Editor:   Editor compatibility with word search library                                            |
| 106937 | Editor:   Latest editor does not work with word search                                             |
| 106664 | Editor:   unable to process DOCX files which contain embedded files.                               |
| 106677 | Editor:   Import failures in XLS camera (Random Set 1)                                             |
| 106682 | Editor:   Import failures in PPTX camera (Random Set 1)                                            |
| 106707 | Editor:   Export failures in XLSX camera (Random Set 1)                                            |
| 106709 | Editor:   Export failures in XLSX camera (Random Set 4)                                            |
| 106710 | Editor:   Export failures in XLSX camera (Random Set 5)                                            |
| 106740 | Editor:   Import failures in XLS camera (Random Set 4)                                             |
| 106872 | Editor:   Some PPTX files not regenerating                                                         |
| 106900 | Editor:   XLSX need repair after import                                                            |
| 106910 | Editor:   import of XLS failing due to CommentData missing.                                        |

#### Documentation

 - Supported File Types for Word Search has been updated

#### Other Improvements
No Change.

## 2020-07-16

### CLI v0.7

#### Bug Fixes
- 106678: Fix for QtCLi crash due to usage of qDebug()

#### Documentation
No Change.

#### Other Improvements
None

## 2020-07-14

### Editor v2.52
- Interim Release

#### Bug Fixes
- 106842: Fix for incorrect ooxml token enums
- 106766: Import failures in PPTX camera
- 106662: Export failures in PPT camera (Premature Termination)
- 106612: Word Search - Applied read only attribute to fields that cannot be redacted (PPTX)

#### Documentation
No Change.

#### Other Improvements
None

## 2020-07-10

### Word Search v0.14
Experimental Release

#### Bug Fixes
- 106853: Running with libraries not stored in current working directory

#### Documentation
No Change.

#### Other Improvements
None


## 2020-07-06

### Editor v2.47
- Interim Release

#### Bug Fixes
- 106692: Crash when processing DOCX files in Glasswall Editor
- 106663: Editor Export failures in PPT camera (Hanging File)
- 106692: Editor Import failures in DOCX camera (Crash)
- 106726: Editor Export failures in XLS camera (Crash)
- 106643: Editor Import failures in PPTX camera (Crash)

#### Documentation
No Change.

#### Other Improvements
- 106708: Editor performance improvements when running Export (Observed improvements of up to 90% on some files)
- 106786: Content management improvements
    - Prevents potential use of previous runs content managament settings 
    - Observed increased throughput for XLS 
    - Resolves intermittent crashes.
- 106537: Office XML updates to validate against the latest version of the OOXML specifications
    - Increases throughput for OOXML file types.
    
#### Key Known Issues
- 106804: Editor - Slight issue when regenerating a subset of OOXML files (misnamed attribute in XML structure).
    - Results in repair dialog on some office applications when opening.
    
### Word Search v0.13

#### Bug Fixes
- 106623: Corruptions whe redacting with '&' and '<'

#### Documentation
No Change.

#### Other Improvements
- 106802: Readonly applied to text that is part of structure and not content of the document
   - Prevent file corruptions by NOT redacting text that applications rely on when parsing the file.
- Implemented Issue Item reporting in output analysis report.
- Performance improvements (Observed up to 16% performance improvement on some files).

#### Changes
- Restriction applied on permitted redaction characters (See table below)

**_Redaction characters that are not permitted_**

| Special character |   |
|-------------------|---|
| Ampersand         | & |
| Less-than         | < |
| Greater-than      | > |
| Quotes            | " |


## 2020-07-01

### Editor v2.42

#### Bug Fixes
- 106679: Crash on Editor Export when processing PPTX files.
- 106625: Crash on Editor Import when processing PPTX files.
- 106643: Crash on Editor Import when processing DOCX files.


#### Documentation
No Change.

#### Other Improvements
None

### Word Search v0.12

#### Bug Fixes
- 106587: Incorrectly matching substring.

#### Documentation
No Change.

#### Other Improvements
None
