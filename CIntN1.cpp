#pragma once 
#include "CIntN1.hpp"
using namespace std;

int CIntN1::output(){
    ofstream out;
    out.open(file.c_str());
    for (int i=0;i<len+1;i++){
        out << k[i]<<'\n';

    }
    out.close();
    return 0;
}
