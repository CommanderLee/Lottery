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

const int MAX_RED = 33;
const int MAX_BLUE = 16;
const int REDNUM = 6;
const int BLUENUM = 1;

bool red[MAX_RED + 1];
bool blue[MAX_BLUE + 1];

int main()
{
	while(1) {
		srand(time(0));
		memset(red, 0, sizeof(red));
		memset(blue, 0, sizeof(blue));
		int r = 0, b = 0;
	    while (r < REDNUM || b < BLUENUM) {
			if (r < REDNUM) {
				int tempR = rand() % MAX_RED + 1;
				if (!red[tempR]) {
					red[tempR] = 1;
					++r;
				}
			}
			else {
				int tempB = rand() % MAX_BLUE + 1;
				if (!blue[tempB]) {
					blue[tempB] = 1;
					++b;
				}
			}
		}
		
		cout << endl << "ºìÇòÊÇ£º" << endl << "The red ball(s) are(is):" << endl;
	    for (int i = 0; i <= MAX_RED; ++i) {
			if (red[i]) {
				cout << i << "   ";
			}
		}
		cout << endl;
		
		cout << endl << "À¶ÇòÊÇ£º" << endl << "The blue ball(s) are(is):" << endl;
		for (int i = 0; i <= MAX_BLUE; ++i) {
			if (blue[i]) {
				cout << i << "   ";
			}
		}
		cout << endl;
		
	    system("pause");
	}
    return 0;
}
