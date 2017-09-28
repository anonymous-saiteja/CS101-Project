#include <iostream>
#include <cmath>
#include "bigint.h"
#include <map>
using namespace std;
bool rabinMiller(bigint n){
     bigint s = n-1;
     bigint t = 0;
     while (s%2 == 0)
     {
         s = s/2;
         t=t+1;
     }
     int k= 0;
     while (k<128){
         bigint v = expo(random.randrange(2,n-1),s,n) ;
         if (v!=1)
         {
             bigint i=0;
             while (v != (n-1))
             {
                 if (i == t-1)
                     return false;
                 else
                 {
                     i = i+1;
                     v = (v**2)%n;
              	 }
             } 
     	 }
     	 k+=2;
     	}
     return true;
}