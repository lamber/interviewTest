#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int JumpFloor(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        return JumpFloor(n - 1) + JumpFloor(n - 2);
    }
     int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return  (Fibonacci(n-1)+Fibonacci(n-2));

    }
      int  NumberOf1(int n) {
         if(n==0)
             return 0;
         int num=0;
         if(n>0)
         {
             while(n)
             {
                 int a=n%2;
                 if(a==1)
                     num++;
                 n=n/2;
             }
         }
         else if(n<0)
         {
            int b=n^0xffffffff;
             b++;
             while(b)
             {
                 int a=b%2;
                 if(a==1)
                     num++;
                 b=b/2;
             }
         }
         return num;
     }

void processOrder(char* ch,int &x,int &y)
{
    if(ch==NULL)
        return;
   if(strlen(ch)!=2&&strlen(ch)!=3)
        return;
    char* p=ch;
    char dir=p[0];
    p++;
    if(strspn(p,"0123456789")!=strlen(p))
       return;
    int num=atoi(p);
    if(num!=0)
    {
          switch(dir)
        {
              case 'A':
                  x-=num;
                  break;
              case 'D':
                  x+=num;
                  break;
              case 'W':
                  y+=num;
                  break;
              case 'S':
                  y-=num;
                  break;
              default:
                  break;      
        }
    }
    else
        return;
 
}
int main()
{

  /* int num=JumpFloor(9);
   cout<<num<<endl;
   int num1=JumpFloor(3);
   cout<<num1<<endl;
   cout<<"hello world";*/
 /*  int x=0xffffffff;
  int num= NumberOf1(x);
   cout<<Fibonacci(10)<<endl;*/
   char str[20000]={0};
    std::cin.get(str,20000);
    int x=0;int y=0;
    char* order=strtok(str, ";");
    int num=1;
    processOrder(order,x,y); 
    while(order!=NULL)
    {
           order=strtok(NULL, ";");
          processOrder(order,x,y); 
          num++;

    }
    cout<<x<<","<<y<<endl;
    cout<<num<<endl;
   system("pause");
}