#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	 int myInt;
     long myLong;
     long long myllong;
     char myChar;
     float myFloat;
     double myDouble;

     scanf("%d %ld %lld %c %f %lf", &myInt, &myLong,&myllong, &myChar,&myFloat,&myDouble);

     printf("%d\n", myInt);
     printf("%ld\n", myLong);
     printf("%lld\n", myllong);
     printf("%c\n", myChar);
     printf("%f\n", myFloat);
     printf("%lf\n", myDouble);
     return 0;
}
