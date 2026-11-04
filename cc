PART A – File and Folder Management
1.
Get-Location
Use: Displays the current working location.

2.
Get-ChildItem
Use: Displays files and folders in the current location.

3.
New-Item -Path "C:\CloudLab" -ItemType Directory
Use: Creates a folder named CloudLab.

4.
Get-ChildItem C:\
Use: Displays files and folders in the C drive.

5.
New-Item -Path "C:\CloudLab\student.txt" -ItemType File
Use: Creates a file named student.txt.

6.
"Cloud Computing Practical" | Out-File "C:\CloudLab\student.txt"
Use: Writes text into student.txt.

7.
Get-Content "C:\CloudLab\student.txt"
Use: Displays the content of student.txt.

8.
New-Item -Path "C:\CloudLab\Backup" -ItemType Directory
Use: Creates a Backup folder inside CloudLab.

9.
New-Item -Path "C:\CloudLab\Backup" -ItemType Directory
Use: Creates the Backup folder (repeated in the practical document).

10.
Copy-Item "C:\CloudLab\student.txt" "C:\CloudLab\Backup\student.txt"
Use: Copies student.txt into the Backup folder.

11.
Rename-Item "C:\CloudLab\student.txt" "cloud.txt"
Use: Renames student.txt to cloud.txt.

12.
Move-Item "C:\CloudLab\cloud.txt" "C:\CloudLab\Backup\"
Use: Moves cloud.txt into the Backup folder.

13.
Remove-Item "C:\CloudLab\Backup\cloud.txt"
Use: Deletes cloud.txt from the Backup folder.

PART B – Process Management
1.
Get-Process
Use: Displays all running processes.

2.
Start-Process notepad
Use: Opens the Notepad application.

3.
Get-Process notepad
Use: Displays the Notepad process.

4.
Stop-Process -Name notepad
Use: Closes the Notepad application.

5.
Get-Process notepad
Use: Checks whether the Notepad process is running.


PART D – File Backup Using PowerShell
1.
New-Item "C:\CloudLab\Backup" -ItemType Directory -Force
Use: Creates the Backup folder if it does not exist.

2.
"Important student data" | Out-File "C:\CloudLab\data.txt"
Use: Creates data.txt and writes text into it.

3.
Copy-Item "C:\CloudLab\data.txt" "C:\CloudLab\Backup\" -Force
Use: Copies data.txt into the Backup folder.

4.
New-Item "C:\CloudLab\Backup" -ItemType Directory -Force
Use: Ensures that the Backup folder exists.

5.
Copy-Item "C:\CloudLab\*.txt" "C:\CloudLab\Backup\" -Force
Use: Copies all text files from CloudLab into the Backup folder.

6.
Write-Host "Backup completed successfully."
Use: Displays the backup completion message.



function doPost(e)
{
  var sheet=SpreadsheetApp.getActiveSheet();
  sheet.appendRow([
    e.parameter.name,
  ]);
  return ContentService.createTextOutput("Data submitted successfully");
}