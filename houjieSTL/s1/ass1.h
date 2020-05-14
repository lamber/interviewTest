#include<iostream>
using std::cin;
using std::cout;
using std::string;

long get_a_target_long()
{
    long target=0;
    cout<<"targrt(0~"<<RAND_MAX<<"):";
    cin>>target;
    return target;

}
string get_a_target_string()
{
    long target=0;
    char buf[10];
    cout<<"targrt(0~"<<RAND_MAX<<"):";
    snprintf(buf,10,"%d",target);
    return string(buf);
}
int compareLongs(const void* a,const void* b)
{
    return (*(long*)a-*(long*)b);
}
int comparaString(const void* a,const void* b)
{
    if(*(string*)a>*(string*)b)
      return 1;
    else if(*(string*)a<*(string*)b)
      return -1;
    else
    {
        return 0;
    }
    
}
