# SizeReducer - Windows / C++ using ffmpeg

Reduce your high size .mp4 files to low size

# Steps to use the program:

Note : The below guide helps to install FFMPEG library faster with already provided binaries in repository. Alternatively, you can also install the FFMPEG library yourself (https://www.geeksforgeeks.org/how-to-install-ffmpeg-on-windows/) and proceed directly to Section 3 - 'Running the SizeReducer program'

# 1. Installing FFMPEG library

1. Download the 'PATH_ffmpeg' folder from the repository.
2. Paste the downloaded folder into C drive.
   ![360148484-6eaafa12-1af0-4d55-bf40-b306d0be40af](https://github.com/user-attachments/assets/bfd708ae-0271-4fde-8d39-9aa789c0eecc)

3. Set path into you system environment variable. Path URL should match the FFMPEG binaries location.
   ![360144261-977e354a-50ac-4a55-98a8-52d203f9a1f1](https://github.com/user-attachments/assets/7efcd51e-6171-423b-9485-206fb8d43eaa)

# 2.Verifying the FFMPEG installation

1. Open cmd and type 'ffmpeg'. If the library is detected, then it will display output as below. It shows basic info with version.
   ![image](https://github.com/user-attachments/assets/7bcc1d86-3211-4a19-8b12-9631e2099c97)

# 3.Running the SizeReducer program

1. Create a new folder where your .mp4 files are located.
2. Download & Paste the 'SizeReducer.exe' from the repository into the folder newly created. ( Alternatively, you can also download & compile the 'SizeReducer.cpp' program from the repository and create your '.exe' and paste that into folder )
3. Put your .mp4 video files into the new folder which need to be compressed.
4. Double click the 'SizeReducer.exe' to run the program.
5. After program completes, press any key to exit.
6. A folder named 'compressed' will be created which will contain all compressed files.

# Note: The program takes time to compress video. So be patient, else test the program for single video first time and use accordingly.
