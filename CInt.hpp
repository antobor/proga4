#pragma once 
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
//#include <math.h>
#include <cstring>
#include <cstdlib>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <sstream>
#include <map>

using namespace std;

class CIntN
{
    public:
        CIntN(int l);
        CIntN(int l,string number,string f="");
        CIntN(const CIntN &other);
        virtual ~CIntN();
        CIntN& operator= (const CIntN& other);
        //void show();
        int* k;
        int len;
        string file;

        virtual int output()=0;

};


