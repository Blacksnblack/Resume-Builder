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




int main() {
    
    cout << "Hello, Welcome to Resume Builder!\n";
    cout << "Input your name:\n";
    getline (cin, name);
    cout << "How old are you?\n";
    getline (cin, age);
    cout << "What is your Address?\n";
    getline (cin, address);
    cout << "What is your Phone Number?\n";
    getline (cin, phoneNumber);
    cout << "What is your email?\n";
    getline (cin, email);
    cout << "What is the name of your School?\n";
    getline (cin, schoolName);
    cout << "What is your Major? If you don't have one, type: 'none'\n";
    getline (cin, majorr);
    if (majorr == "none") {
        majorBool = false;
    }else {
        majorBool = true;
    }
    cout << "What is your Minor? If you don't have one, type 'none'\n";
    getline (cin, minorr);
    if (minorr == "none") {
        minorBool = false;
    } else {
        minorBool = true;
    }
    cout << "What is your graduation date? If you are still enrolled or something, type: 'none'\n";
    getline (cin, gradDate);
    if (gradDate == "none") {
        gradDateBool = false;
    } else {
        gradDateBool = true;
    }
    cout << "How many degrees do you have?\n";
    cin >> numOfDegrees;
    
    
    
    
    
    return 0;
}
