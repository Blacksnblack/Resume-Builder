//
//  main.cpp
//  ResumeBuilder
//
//  Created by Terry Black on 9/17/15.


#include <iostream>
#include <string>
using std::string;
using namespace std;


int NumOfGoals;
int NumOfSkills;
int NumOfAwards;
int NumOfJobs;
string Age;
string PhoneNumber;
string SchoolName;
string Degree;
string Major;
string Concentration;
string Minor;
string GradDate;
string CommunityInvolvement;
string Name;
string Address;
string Email;
string Credentials;




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
    
    
    
    
    return 0;
}

