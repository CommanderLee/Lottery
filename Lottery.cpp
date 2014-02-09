/*
ID: lizhen11
PROG: Lottery
LANG: C++
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	srand(time(0));
    for(int i = 1; i <= 6; ++i) {
		cout << rand() % 33 + 1 << endl;
	}
	
	cout << endl << rand() % 15 + 1 << endl;
    
    while(1);
    return 0;
}
