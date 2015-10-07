#include <iostream>
using namespace std;

//Todo: Add documentation throughout the file 

// Variables
int numOfGoals = 0;
int numOfSkills = 0;
int numOfAwards = 0;
int numOfJobs = 0;
int numOfDegrees = 0;
string age;
string phoneNumber;
string schoolName;
string majorr;
string concentration;
string minorr;
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
    
    cout << "Hello, Welcome to Resume Builder!" << endl;
    cout << "Input your name:" << endl;
    getline (cin, name);
    cout << "How old are you?" << endl;
    getline (cin, age);
    cout << "What is your Address?" << endl;
    getline (cin, address);
    cout << "What is your Phone Number?" << endl;
    getline (cin, phoneNumber);
    cout << "What is your email?" << endl;
    getline (cin, email);
    cout << "What is the name of your School?" << endl;
    getline (cin, schoolName);
    cout << "What is your Major? If you don't have one, type: 'none'" << endl;
    getline (cin, majorr);
    if (majorr == "none") {
        majorBool = false;
    }else {
        majorBool = true;
    }
    cout << "What is your Minor? If you don't have one, type 'none'" << endl;
    getline (cin, minorr);
    if (minorr == "none") {
        minorBool = false;
    } else {
        minorBool = true;
    }
    cout << "What is your graduation date? If you are still enrolled or something, type: 'none'" << endl;
    getline (cin, gradDate);
    if (gradDate == "none") {
        gradDateBool = false;
    } else {
        gradDateBool = true;
    }
    cout << "How many degrees do you have?" << endl;
    cin >> numOfDegrees;
    string* degrees = new string[numOfDegrees];
    for (int i=0; i < numOfDegrees; i++) {
        cout << "Degree " << i << endl;
        getline(cin, degrees[i]);
        
    }
    while (numOfJobs > 4 || numOfJobs < 1) {
        cout << "How many jobs do you want to show (up to 4)?" << endl;
        cin >> numOfJobs;
        if (numOfJobs >4 || numOfJobs < 1) {
            cout << "Invalid Input." << endl;
        }
    }
    
    return 0;
}

// wut is this?
string jobs (string string) {
    //the return is filler for now
    return string;
}
