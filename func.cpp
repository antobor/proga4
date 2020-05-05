#pragma once 
#include "func.hpp"
using namespace std;



vector<CIntN*> F (string File) {
    Factory0 Hori;
    Factory1 Vert;
    map<string, Factory*> factories_ ;
    factories_["Hori"]= &Hori;
    factories_["Vert"]= &Vert;

    ifstream in(File.c_str());
	vector<CIntN*> arr;
    if (!in) {
        cout << "file error" << endl;
        return arr;
    }
    
    string I="", fname="", l="", num="";
    arr.reserve(256);
    while (!in.eof()) {
        in >> I;
        in >> fname;
        in >> l;
        in >> num;
        //Factory* resFactory = factories_[I];
        CIntN* newVector = factories_[I]->Create(atoi(l.c_str()),num,fname);
        arr.push_back(newVector);
    }
    factories_.clear();
    return arr;
}


void autotest1()
{
    char str1[256]="25160",str2[256]="11111";
    cout << "TEST 1 OUTPUT: ";
    CIntN0 a(5,str1),b(5,str2),c(5);
    c=a+b;
    if (c.k[0]==0 && c.k[1]==3 && c.k[2]==6 && c.k[3]==2 && c.k[4]==7 && c.k[5]==1) cout << "OK!" << endl;
    else cout << "FAIL!!!!!!!!!!!!!!";
}

void autotest3()
{
    char str1[256]="-25160",str2[256]="11111";
    cout << "TEST 3 OUTPUT: ";
    CIntN0 a(5,str1),b(5,str2),c(5);
    c=a+b;
    if (c.k[0]==1 && c.k[1]==1 && c.k[2]==4 && c.k[3]==0 && c.k[4]==4 && c.k[5]==9) cout << "OK!" << endl;
    else cout << "FAIL!!!!!!!!!!!!!!!";
}
void autotest4(){
    vector <CIntN*> data;
    data = F("input.txt");
    for (size_t i=0;i<data.size();i++){
        data[i]->output();
    }

    ifstream ifs("output2.txt");
    string str;
    getline(ifs, str);

    stringstream ss(str);
    string check="";
    ss>>check;
    cout << "TEST 4 OUTPUT: ";
    if(check=="05555"){
        cout << "OK!" << endl;
    }
    else cout << "FAIL!!!!!!!!!!!!!!!";
    ifs.close();
    for (size_t j=0;j<data.size();j++){
            delete data[j];
    }
}
void autotest5(){
    vector <CIntN*> data;
    data = F("input.txt");
    for (size_t i=0;i<data.size();i++){
        data[i]->output();
    }

    vector <string> vec;
    ifstream ifs("output1.txt");

    string str;
    while(getline(ifs, str)){
        vec.push_back(str);
    }
    cout << "TEST 5 OUTPUT: ";
    if (vec[0]=="0" && vec[1]=="7" && vec[2]=="7" && vec[3]=="7" && vec[4]=="7") cout << "OK!" << endl;
    else cout << "FAIL!!!!!!!!!!!!!!!";
    for (size_t j=0;j<data.size();j++){
            delete data[j];
        }
}


void autotestopenmp() {

	string FileName = "output5.txt";

	string p;
	string q;

	for (int i = 0; i < 20000000; i++) {
		p.push_back('1');
		q.push_back('1');
	}
	CIntN0 a(20000000,p, FileName);
	CIntN0 b(20000000,q, FileName);
	CIntN0 c = a+b;








}
