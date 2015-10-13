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
bool degree;




int main() {
    /*
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
    */
    cout << "How many degrees do you have? if none type 0 (zero)." << endl;
    cin >> numOfDegrees;
    if (numOfDegrees <= 0) {
        degree = false;
    } else {
        degree = true;
    }
    if (degree == 1) {
        string* degrees = new string[numOfDegrees];
        for (int i = 0; i < numOfDegrees; i++) {
        
        cout << "Degree " << i + 1 << ": " << endl;
        cin >> degrees[i];
            
        }
    }
    cout << "it worked." << endl;
    while (numOfJobs > 4 || numOfJobs < 1) {
        cout << "How many jobs do you want to show (up to 4)?" << endl;
        cin >> numOfJobs;
        if (numOfJobs >4 || numOfJobs < 1) {
            cout << "Invalid Input." << endl;
        } else {
            cout << "valid input" << endl; //this output is filler
        }
    }
    
    return 0;
}

string jobs (string string) {
    //the return is filler for now
    return string;
}
