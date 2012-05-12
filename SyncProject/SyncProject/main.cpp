//
//  main.cpp
//  SyncProject
//
//  Created by Arjun Karthik Venugopal on 5/11/12.
//  Copyright (c) 2012 AMD. All rights reserved.
//

#include <iostream>
#include "SyncProject.h"

using namespace std;

int main (int argc, const char * argv[])
{
    using namespace SyncFileAPINameSpace;
    // insert code here...
    SyncFile test;
    test.fileIsThere();
    cout << "Hello, World!\n";
    return 0;
}

