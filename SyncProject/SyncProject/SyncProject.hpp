//
//  SyncProject.h
//  SyncProject
//
//  Created by Arjun Karthik Venugopal on 5/11/12.
//  Copyright (c) 2012 AMD. All rights reserved.
//

#ifndef SyncProject_SyncProject_h
#define SyncProject_SyncProject_h
#include <iostream>
using namespace std;

namespace SyncFileAPINameSpace {
    
    class SyncFile
    {
    private:
        
    public:
        SyncFile()
        {
        }
        ~SyncFile()
        {
        }
        bool fileExists(string &filePath);
        int fileCount(string &dirPath);
    };
}

#endif
