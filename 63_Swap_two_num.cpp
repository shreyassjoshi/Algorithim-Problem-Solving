#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a=0;
   int b=-21;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<a<<" "<<b<<endl;


   a=a^b;
   b=a^b;
   a=a^b;
   cout<<a<<" "<<b;

}