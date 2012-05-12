//
//  SyncFileAPI.cpp
//  SyncProject
//
//  Created by Arjun Karthik Venugopal on 5/11/12.
//  Copyright (c) 2012 AMD. All rights reserved.
//

#include <iostream>
#include "SyncProject.h"
#include <fstream>
#include <boost/filesystem.hpp>
using namespace boost::filesystem;
using namespace std;

namespace fs = boost::filesystem;


namespace SyncFileAPINameSpace 
{
    //File Exists
    bool SyncFile::fileExists(string &filePath)
    {
        bool tempBool = false;
 
        if(fs::exists(filePath))
        {
            tempBool = true;
        }
        return tempBool;
    }
    
    //File count for Dir
    int SyncFile::fileCount(string &dirPath)
    {
        int ret = 0;
        if(fileExists(dirPath) && fs::is_directory(dirPath))
        {
            vector<fs::path> pathV;
            fs::path path(dirPath);
            copy(directory_iterator(path),directory_iterator(), back_inserter(pathV));
            for(vector<fs::path>::const_iterator pIt = pathV.begin();pIt != pathV.end();++pIt)
            {
                if(fs::is_directory(*pIt))
                {
                    cout << "Dir  : " << fs::basename(*pIt) << endl;
                }
                else
                {
                    cout << "File : " << fs::basename(*pIt) << endl;                    
                }
                    ret++;
            }
        }
            
        return ret;
    }
}


