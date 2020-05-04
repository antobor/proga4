#pragma once 
#include <cstring>
#include "CInt.hpp"
#include <cstdlib>
using namespace std;

CIntN::CIntN(int l)
{
    len=l;
    k = new int [len+1];
    for(int i=0;i<len+1;i++)
    {
        k[i]=0;
    }
    file="";
}

CIntN::CIntN(const CIntN& other) {
    len=other.len;
    k =  new int [len+1];
    for (int i=0; i<len+1; i++)
    {
        k[i]=other.k[i];
    }
    file=other.file;
}


CIntN::CIntN(int l,string number,string f)
{
    int i=0;
    if ((isdigit(number[0]))||(number[0]=='+')) {

            len=l;
            k = new int [len+1] ;
            k[0]=0;
            for(i=1;i<len+1;i++)
            {
                k[i]=number[i-1]-'0';
            }
            }
    else{
            if(number[0]=='-'){
            len=l;
            k = new int [len+1];
            k[0]=1;
            for(i=1;i<len+1;i++)
            {
                k[i]=number[i]-'0';
            }}
            else{
                 len=l;
                 k = new int [len+1];
                 k[0]=0;
                 for(i=1;i<len+1;i++)
                    {
                        k[i]=number[i]-'0';
                 }}
    }
    file=f;
}


CIntN::~CIntN()
{
    delete[] k;
}

/*

CIntN CIntN::operator- (const CIntN& other)
{
    int i,t=0;
    CIntN sum(other.len);

    if ((k[0]==1 && other.k[0]==0)||(k[0]==0 && other.k[0]==1)){


    for(i=0;i<len;i++)
    {
        sum.k[len-i]=k[len-i]+other.k[len-i];
    }
    for(i=0;i<len-1;i++)
    {
        if (sum.k[len-i]>9)
        {
            sum.k[len-i]=sum.k[len-i]-10;
            sum.k[len-1-i]=sum.k[len-1-i]+1;
        }
    }
    if(sum.k[1]>9 || sum.k[1]<1)
    {
        for(i=0;i<len+1;i++)
        {
            sum.k[i]=0;
        }
        cout << "minus ERROR, CANCELED " << endl;
    }
    if(k[0]==0){
        sum.k[0]=0;
    }
    else{
        sum.k[0]=1;
    }

    return sum;
    }



    else{
            for(i=0;i<len;i++)
    {
        sum.k[len-i]=k[len-i]-other.k[len-i];
    }
    for(i=0;i<len-1;i++)
    {
        if (sum.k[len-i]<0)
        {
            sum.k[len-i]=sum.k[len-i]+10;
            sum.k[len-1-i]=sum.k[len-1-i]-1;
        }
    }
    if(sum.k[1]>9 || sum.k[1]<-9)
    {
        for(i=0;i<len+1;i++)
        {
            sum.k[i]=0;
        }
        cout << "SUM ERROR, CANCELED " << endl;
    }
    if(sum.k[1]<0){
        sum.k[1]=abs(sum.k[1]);
        t=1;
    }

    if(k[0]==0){
            if(t==1){
                sum.k[0]=1;
            }
        else{sum.k[0]=0;}
    }
    else{
            if(t==1){
                sum.k[0]=0;
            }
        else{sum.k[0]=1;}
    }

    return sum;
    }
}*/

CIntN& CIntN::operator= (const CIntN& other)
{
    int i;
    len=other.len;
    for(i=0;i<len+1;i++)
    {
        k[len-i]=other.k[len-i];
    }
    return *this;
}

/*void CIntN::show()
{
    int i;
    if (k[0]==1){
        cout << '-';
    }
    for(i=1;i<len+1;i++)
    {
        cout << k[i];
    }
    cout << endl;
}*/


