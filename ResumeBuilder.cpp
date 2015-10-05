//
//  main.cpp
//  ResumeBuilder
//
//  Created by Terry Black on 9/17/15.


#include <iostream>
using namespace std;


int numOfGoals;
int numOfSkills;
int numOfAwards;
int numOfJobs;
int numOfDegrees;
string age;
string phoneNumber;
string schoolName;
string major;
string concentration;
string minor;
string gradDate;
string communityInvolvement;
string name;
string address;
string email;
string credentials;
bool majorBool;
bool minorBool;
bool gradDateBool;




int main() {
    
    cout << "Hello, Welcome to Resume Builder!\n";
    cout << "Input your name:\n";
    getline (cin, Name);
    cout << "How old are you?\n";
    getline (cin, Age);
    cout << "What is your Address?\n";
    getline (cin, Address);
    cout << "What is your Phone Number?\n";
    getline (cin, PhoneNumber);
    cout << "What is your email?\n";
    getline (cin, Email);
    cout << "What is the name of your School?\n";
    getline (cin, SchoolName);
    cout << "What is your Major? If you don't have one, type: 'none'\n";
    getline (cin, Major);
    if (Major == "none") {
        MajorBool = false;
    }else {
        MajorBool = true;
    }
    cout << "What is your Minor? If you don't have one, type 'none'\n";
    getline (cin, Minor);
    if (Minor == "none") {
        MinorBool = false;
    } else {
        MinorBool = true;
    }
    cout << "What is your graduation date? If you are still enrolled or something, type: 'none'\n";
    getline (cin, GradDate);
    if (GradDate == "none") {
        GradDateBool = false;
    } else {
        GradDateBool = true;
    }
    cout << "How many degrees do you have?\n";
     cin >> numOfDegrees;
    
    
    
    
    
    return 0;
}

