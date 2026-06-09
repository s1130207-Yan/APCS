//============================================================================
// Name        : apcs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void hanoi(int ring, char start, char temp, char target){
	if (ring > 0){
		hanoi(ring-1, start, target, temp);
		cout << "Move ring" << ring <<"from"<< start <<"to"<<target<<"\n";
		hanoi(ring-1, temp, start, target);
	}
}

int main() {
	int n;
	while (cin>> n){
		hanoi(n, "A","B","C");
		cout<<"\n";
	}
	return 0;
}
