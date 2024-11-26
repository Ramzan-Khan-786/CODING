#include<iostream>
using namespace std;

int main(){
    int sq=786;
    int sqt=sq*sq;
    int same_sq=sq,same_sqt=sqt;
    int remsqt=0,remrealsqt=0;
    int valsq=0,valsqt=0;
    int realvalsq=sq,realvalsqt=0;
    int countsq=0,countsqt=0;
    while(sq>0){
        // remsq=sq%10;
        // valsq=valsq*10+remsq;
        sq=sq/10;
        countsq++;
    }
    
    while(sqt>0){
        if(countsqt<countsq){
            remsqt=sqt%10;
            valsqt=valsqt*10+remsqt;
            sqt=sqt/10;
            countsqt++;
        }
        else break;
    }
    while(valsqt!=0){
        remrealsqt=valsqt%10;
        realvalsqt=realvalsqt*10+remrealsqt;
        valsqt=valsqt/10;
    }
    if(realvalsqt==realvalsq){
        cout<<"The last digit of "<<same_sqt
        <<" is "<<realvalsqt<<" which is equal to "
        <<realvalsq<<" therefore automorphic number"
        <<endl;
    }
    else{
        cout<<"The last digit of "<<same_sqt<<" is "
        <<realvalsqt<<" which is not  equal to "<<realvalsq
        <<" therefore not automorphic number"<<endl;
    }


return 0;
}

