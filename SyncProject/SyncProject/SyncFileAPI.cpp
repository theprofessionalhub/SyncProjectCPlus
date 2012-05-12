//
//  SyncFileAPI.cpp
//  SyncProject
//
//  Created by Arjun Karthik Venugopal on 5/11/12.
//  Copyright (c) 2012 AMD. All rights reserved.
//

#include <iostream>
#include "SyncProject.h"
using namespace std;


namespace SyncFileAPINameSpace {
    
    extern bool SyncFile::fileIsThere()
    {
        cout << "Testing if this" << endl;
        return true;
    }
}


