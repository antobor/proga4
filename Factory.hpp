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
#include "CIntN1.hpp"


using namespace std;
class Factory{
public:
    virtual CIntN* Create(int l, string num, string f)=0;
    virtual ~Factory(){}
};
