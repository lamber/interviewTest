 
    
#include<array>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<complex.h>
#include"./houjieSTL/s1/ass1.h"
const int ASIZE= 100000;
   using namespace std;
#pragma region 
    void test_array()
    {
        array<long,ASIZE> c;
        clock_t time_start=clock();
        for(auto i=0;i<ASIZE;i++)
         c[i]=rand();
         cout<<"millo-seconds:"<<(clock()-time_start)<<endl;
         cout<<"array.size()="<<c.size()<<endl;
         cout<<"array.front()="<<c.front()<<endl;
         cout<<"array.back()="<<c.back()<<endl;
         cout<<"array.data()="<<c.data()<<endl;
         long target=get_a_target_long();
         time_start=clock();
         qsort(c.data(),ASIZE,sizeof(long),compareLongs);
         long *pitem=(long*)bsearch(&target,(c.data()),ASIZE,sizeof(long),compareLongs);
        if(pitem!=NULL)
        cout<<"found,"<<*pitem<<endl;
        else
        {
            cout<<"not found"<<endl;
        }
        
         cout<<"qsort+bsearch(),milli-seconds"<<clock()-time_start<<endl;
    }
    #pragma endregion
 void complexTest()
 {
     complex<int>c1(12,45),c2(23,44);
     c1+c2=complex<int>(2,3);
     cout<<"c1="<<c1<<endl;
     cout<<"c2="<<c2<<endl;
 }
    int main()
    {
        
       // test_array();
        complexTest();
        system("pause");
        return 0;
    }
