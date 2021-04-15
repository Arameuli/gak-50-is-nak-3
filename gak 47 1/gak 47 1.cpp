#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Gmail.h"
using namespace std;
int main(){
	ifstream fin("users.txt");
	string fn, ln, ml, passw;
	fin >> fn >> ln >> ml >> passw;
	Gmail t;
	vector<Gmail> b;
	cin >> t.fname >> t.lname >> t.mail >> t.password;
		b.push_back(t);
  
	if (t.mail == ml) {
		cout << "aseti ukve arsebobs:" << endl;
	}
	else {
		t.print();
	}
}