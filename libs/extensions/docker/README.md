# Glasswall Editor - Docker

## Docker
### Windows
To build the image open a PowerShell window in the dockerfile directory. Run the following command:
docker build -t *imageName*:0.2 .     (include the white space and trailing period)
This will produce a docker image with the configured *imageName*.

Before we run a container of the image lets create an input directory and an output directory, for instance:

•	C:\data\input – Place files to be processed here.

•	C:\data\output – Note that your output directory must be empty or Glasswall will fail to produce an output and will destroy any data present in there.

Now let’s mount the input and output directories and run a container of our image, using the following command:
docker run -it -v C:\data\input:/input -v C:\data\output:/output *imageName*:0.2

This command will build the container and mount "C:\data\input" to "/input" on the container and "C:\data\output" to "/output" and then immediately process the contents of "/input" and place the regenerated files and analysis reports in "/output".

## NOTES

- The Content Management switches are set to the default behaviour which is to Sanitise all Active Content.

### The following changes can be made to the dockerfile to give additional functionality:
- line 15 can be changed and suffixed "-r" to give the ability to recursively scan input directories note that this will work with the default mode and with the following edits.

- line 15 can be changed to "CMD /home/glasswall/GWQtCLI -i /input -o /output -x export" to produce export packages instead of analysis reports and regenerated files, please note that the streams for the export package are currently only available in the SISL format.

- line 15 can be changed to "CMD /home/glasswall/GWQtCLI -i /input -o /output -x import" to reimport exported archives and produce regenerated files and analysis reports.

This is also available in a pre-built docker image which can be found at the following location: https://hub.docker.com/repository/docker/glasswallsolutions/evaluationsdk

### Tags
- :1 is Glasswall Rebuild SDK. The Rebuild SDK can be found [here.](https://github.com/filetrust/sdk-rebuild-eval)
- :2 is Glasswall Editor SDK 
