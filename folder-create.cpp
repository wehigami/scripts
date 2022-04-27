#include <iostream>
#include <direct.h>

using namespace std;

int main()
{
    char path[100];
    int numOfFiles;
    cout << "How many files would you like to make? ";
    cin >> numOfFiles;
    for (int x = 0; x < numOfFiles; x++)
    {
        cout << "Enter the path: ";
        cin >> path;
        if (mkdir(path) == 0)
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