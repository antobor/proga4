#pragma once
#include "func.hpp"
using namespace std;

int main()
{
    vector <CIntN*> data;
    data = F("input.txt");
    for (size_t i=0;i<data.size();i++){
        data[i]->output();
    }
    CIntN0 a(3,"123","output4.txt");
    CIntN1 b(3,"456");
    CIntN0 c = a+b;
    c.output();
    autotest1();
    autotest3();
    autotest4();
    autotest5();
	autotestopenmp();
    for (size_t j=0;j<data.size();j++){
            delete data[j];
    }
	string aaa;
	cin >> aaa;

    return 0;
}
