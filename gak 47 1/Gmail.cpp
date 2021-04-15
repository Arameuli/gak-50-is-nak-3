#include "Gmail.h"
#include<iostream>
#include<String>
using namespace std;
Gmail::Gmail() {
}
Gmail::Gmail(string fname, string lname, string mail, string password) {
	this->fname = fname;
	this->lname = lname;
	this->mail = mail;
	this->password = password;
}
 void Gmail :: print() {

	 cout << endl << "You are registered successfully!" << endl;
	 cout << "saxeli: " << fname << endl << "gvari: " << lname << endl << "gmail: " << mail << endl << "password: " << password << endl;
}