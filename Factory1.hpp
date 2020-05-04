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
#include "Factory0.hpp"
using namespace std;
class Factory1 : public Factory{
public:
    CIntN* Create(int l, string num, string f){
        CIntN *p=new CIntN1 (l,num,f);
        return p;
    }
};
