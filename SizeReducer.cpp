#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    string fileName;

    // list .mp4 files in list.txt
    system("(for %a in (*.mp4) do @echo %a) > list.txt");

    // make folder to store compressed files from output
    system("mkdir compressed");
    // open file list.txt to read .mp4 files
    ifstream fin("list.txt");

    // Reduce size of files listed in list.txt
    while (getline(fin, fileName))
    {

        string sizeReduceCommandString = "ffmpeg -i \"" + fileName + "\" -vcodec libx264 -crf 30 \".\\compressed\\" + fileName + "\"";
        char *sizeReduceCommand = (char *)sizeReduceCommandString.data();
        system(sizeReduceCommand);
    }

    fin.close();

    cout << "\n \n Completed! Press any key to exit..." << endl;
    getch();

    // Delete the temporary file list.txt
    system("del list.txt");

    return 0;
}
