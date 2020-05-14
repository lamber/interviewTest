int revInt(int a)
{
   const long long max=0x7fffffff;
   const long long min=0x80000000;
   int ans=0;
   while(ans!=0)
   {
       ans=10*ans+a%10;
       a/=a;
   }
   if (ans>max||ans<min)
   {
       return 0;
   }
   return ans;
}