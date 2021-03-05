#ifndef FILETYPE_H
#define FILETYPE_H

typedef enum
{
    /* The default when we don't know or can't determine the file type*/
	
    ft_unknown,

    /* Not related to file types, but these are required since they give 
	information when something goes wrong */
	
    ft_fileIssues,
    ft_bufferIssues,
    ft_internalIssues,
    ft_licenseExpired,
    ft_passwordProtectedOpcFile,
    ft_nullPointerArgument,

    /* The file types that we support */
	
    ft_pdf = 0x10,
    ft_doc,
    ft_docx,
    ft_ppt,
    ft_pptx,
    ft_xls,
    ft_xlsx,
    ft_png,
    ft_jpeg,
    ft_gif,
    ft_emf,
    ft_wmf,
    ft_rtf,
    ft_bmp,
    ft_tiff,
    ft_pe,
    ft_macho,
    ft_elf,
    ft_mp4,
    ft_mp3,
    ft_mp2,
    ft_wav,
    ft_mpg,
	ft_coff,
    ft_json,
    ft_vbamacros,

    /* Supported by our archive manager */
	
    ft_zip = 0x100,
    ft_gzip,
    ft_bzip2,
    ft_7zip,
    ft_rar,
    ft_tar,

    /* Required since they can be embedded within other files */
	
    ft_ooxml = 0x200,
    ft_office,
    ft_bin,
    ft_xml,

    /* Required for OOXML files wrapped in CFB packages */
	
    ft_docxPackageInCfb = 0x300,
    ft_xlsxPackageInCfb,
    ft_pptxPackageInCfb,
	

	
    ft_xlscore, 			/* ExcelCoreStreams - our internal construct */
    ft_doccore, 			/* WordCoreStreams - our internal construct */
    ft_pptcore, 			/* PowerPointCoreStreams - our internal construct */
    ft_picturestream, 		/* PowerPoint Picture Streams - our internal construct */
    ft_printersettings, 	/* Printer Settings Streams */
    ft_equationnative,  	/* Equation Native Streams */
    ft_compobj,         	/* CompObj streams */
    ft_docsummary,      	/* Document Summary Streams */

    /* Part of Structured File support. These are underlying mechanisms */
    ft_opc,					/* OOXML/Open Packaging Conventions (OPC) */
    ft_cfb,					/* Compound File Binary */
    ft_interchangePackage, 	/* The package used to store exported content in Glasswall */
    ft_pdf_core2,  			/* Required for "hybrid" PDF camera where a wrapper/dummy is required for calls to classic camera before Core2 camera */
    ft_fi,					/* File Identification Camera */
    ft_pdfContentStream
} ft_t;



#endif /* FILETYPE_H */
