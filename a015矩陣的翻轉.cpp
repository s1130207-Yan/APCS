//============================================================================
// Name        : apcs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :多維陣列，函式建構
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int r, c;
	int a[100][100];
	while (cin >> r>> c){
		for (int i=0; i<c; i++){
			for (int j=0; j<c; j++){
				cin>>a[i][j];
			}
		}
		for (int int  i=0; i<c; i++){
					for (int j=0; j<c; j++){
						cout<< a[i][j]<<" ";
	    }
					cout << "\n";
	}
}
	return 0;
}
