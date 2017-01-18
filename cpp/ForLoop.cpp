#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void getNumberName(int N){
	if(N == 1 ){
		cout << "one" << endl;
	}else if(N == 2){
		cout << "two" << endl;
	}else if(N == 3){
		cout << "three" << endl;
	}else if(N == 4){
		cout << "four" << endl;
	}else if(N == 5){
		cout << "five" << endl;
	}else if(N == 6){
		cout << "six" << endl;
	}else if(N == 7){
		cout << "seven" << endl;
	}else if(N == 8){
		cout << "eight" << endl;
	}else if(N == 9){
		cout << "nine" << endl;
	}else{
		if(N%2==0){
			cout << "even" << endl;
		}else{
			cout << "odd" << endl;
		}
	}
}

int main() {
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);

	for(int i=a; i<=b; i++){
		getNumberName(i);
	}
    return 0;
}
