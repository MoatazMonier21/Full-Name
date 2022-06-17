#include<iostream>
using namespace std;

struct userinfo {
	string fName;
	string lName;
};
userinfo readInfo() {
	userinfo user_1;
	cout << "Please Enter your first name" << endl;
	getline(cin, user_1.fName);
	cout << "Please Enter your last name" << endl;
	getline(cin, user_1.lName);
	return user_1;
}
string fullName(userinfo user_1){
	string fullName;
	fullName = user_1.fName +" "+ user_1.lName;
	return fullName;
}
void displayInfo(string fullName) {
	cout << "Your full name is: "<<fullName << endl;
}


int main() {
	displayInfo(fullName(readInfo()));
}