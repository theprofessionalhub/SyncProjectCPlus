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


namespace SyncFileAPINameSpace {
    
    bool SyncFile::fileIsThere()
    {
        bool tempBool = false;
 
        if(boost::filesystem::exists("/Users/MacArjun/Documents/ProgProjects/SyncProjectCPlus/SyncProject/SyncProject/test.txt"))
        {
            tempBool = true;
        }
        return tempBool;
    }
}


