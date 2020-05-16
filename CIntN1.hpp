#pragma once 
#include <fstream>
//#include <math.h>
#include <cstring>
#include <cstdlib>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <sstream>
#include "CIntN0.hpp"
using namespace std;

class CIntN1: public CIntN{
    public:
        using CIntN::operator=;
        int output();
        CIntN1 (int l,string number,string f="") : CIntN(l,number,f){};
        CIntN1 (int l) : CIntN(l){};
        CIntN1 (const CIntN& other) : CIntN(other){};
};
