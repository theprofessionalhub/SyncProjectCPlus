//
//  main.cpp
//  SyncProject
//
//  Created by Arjun Karthik Venugopal on 5/11/12.
//  Copyright (c) 2012 AMD. All rights reserved.
//

#include <iostream>
#include <SyncProject.hpp>
using namespace std;
using namespace SyncFileAPINameSpace;


int main (int argc, const char * argv[])
{
    SyncFile fileOperation;
    string filePath;
    filePath = "/Users/MacArjun/Documents/ProgProjects/SyncProjectCPlus/SyncProject/SyncProject/test.txt";
    if(fileOperation.fileExists(filePath))
    {
        cout << "File : \"" << filePath << "\" exists" << endl;
    }
    
    filePath = "/Users/MacArjun/Downloads/Music";
    int fCount = fileOperation.fileCount(filePath);
    if(fCount != -1)
    {
        cout << "Numer of files in dir is : " << fCount << endl;
    }
    
    
    return 0;
}

