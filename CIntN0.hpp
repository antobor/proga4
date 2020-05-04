#pragma once 
#include <fstream>
//#include <math.h>
#include <cstring>
#include <cstdlib>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <sstream>
#include "CInt.hpp"
using namespace std;

class CIntN0: public CIntN{
    public:
        using CIntN::operator=;
        friend CIntN0 operator+(CIntN& first, CIntN& second);
        int output ();
        CIntN0 (int l,string number,string f="") : CIntN(l,number,f){};
        CIntN0 (int l) : CIntN(l){};
        CIntN0 (const CIntN0& other) : CIntN(other){};
};
