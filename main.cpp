#include <iostream>
#include <math.h>
int main() {
   double f,a,b;
   int c;
   int p =2;
   std::cin>>a;
   if (a>=0){
       c= a/p;
       b= a/p;
       a = (b-c)*p;
   }else{
       if(a<0){
        c =(-a)/p;
        a = (c+1)*p+a;
       }
   }
   f = pow(a,3)-5;
   std::cout << f << std::endl;
}
