#include<iostream>
#include<list>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
   #pragma region 1   

        list<int> ls;
 void reOrderArray(vector<int> &array) {
        list<int>::iterator it;

        it=ls.begin();
        for(auto a:array)
        {
            if(a%2==1)
            {
                ls.push_front(a);
               // it++;
            }
            else
            {
                ls.push_back(a);
            }
            
        }
    }
     vector<int> printMatrix(vector<vector<int> > matrix) {
        int row=matrix.size();
        int con=matrix[0].size();
        int num=row*con;
        int index=0;
        vector<int> resMatrix;
        while(num>0)
        {
            for(int i=0+index;i<con-index&&num>0;i++)
            {
               resMatrix.push_back(matrix[index][i]);
                num--;
            }
            for(int j=1+index;j<row-index&&num>0;j++)
            {
                resMatrix.push_back(matrix[j][con-index-1]);
                num--;
            }
            for(int m=con-index-2;m>=0+index&&num>0;m--)
            {
                resMatrix.push_back(matrix[row-index-1][m]);
                num--;
            }
            for(int n=row-2-index;n>0+index&&num>0;n--)
            {
                resMatrix.push_back(matrix[n][index]);
                num--;
            }
            index++;


        }
        return resMatrix;

    }
    /**long f(void* p)
    {
        //cout<<sizeof(p);
        long n=reinterpret_cast<long>(p);
        return n;
    }*/
    #pragma endregion

template< typename T> 
T Tmin(T x,T y)
{
   return x<y?x:y;
}
int main()
{
   /* int a[3]={0,1,2};
    long x=f(a); 
    cout<<x<<endl;*/
    int AA= Tmin<int>(4,8);
    cout<<AA;
   /* vector<int> arr;
    list<int>my_ls;
    int num=30;
    int seed=time(0);
    srand(seed);
    while(num--)
    {
        int a=rand()%20+1;
        arr.push_back(a);
        my_ls.push_back(a);
        cout<<a<<",";
    }
    cout<<endl;
   // reOrderArray(arr);
   //sort(arr.begin(),arr.end());
   my_ls.sort(greater_equal<int>());
    for(auto i:my_ls)
    {
      cout<<i<<endl;
    }*/
  /*  int n=1;
    for (size_t i = 0; i <5; i++)
    {
         vector<int>aa;
        for (size_t j = 0; j <2; j++)
        {
           
            aa.push_back(n++);
        }
        arr.push_back(aa);
        aa.clear();
        
    }
    vector<int> res=printMatrix(arr);
    for(auto a:res)
    {
        cout<<a<<",";
    }*/
    system("pause");
}