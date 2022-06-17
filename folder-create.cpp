#include <iostream>
#include <direct.h>
#include <sstream>

using namespace std;

int main()
{
    std::string path;
    std::string name;
    int numOfFiles;
    char fullPath[200];
    cout << "How many files would you like to make? ";
    cin >> numOfFiles;

    cout << "Enter the path: ";
    cin >> path;
    cout << "Enter file name: ";
    cin >> name;

    for (int x = 1; x < numOfFiles; x++)
    {
        std::string fullPathString = path + "\\" + name + std::to_string(x);
        strcpy(fullPath, fullPathString.c_str());

        if (mkdir(fullPath) == 0)
        {
            cout << "Directory created successfully" << endl;
        }
        else
        {
            cout << "Failed to create directory" << endl;
        }
    }

    return 0;
}