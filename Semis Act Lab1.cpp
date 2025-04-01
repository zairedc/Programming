#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    
    cout << "COMPUTER ENGINEERING TERMS AND DEFINITIONS: ";
    cin>>a;  

    if (a == "ALGORITHM") {
        cout << "A step-by-step procedure or formula for solving a problem." << endl;
    } else if (a == "BYTE") {
        cout << "A group of 8 bits, used to store a single character." << endl;
    } else if (a == "VIRTUAL MEMORY") {
        cout << "A memory management technique that extends RAM using disk storage." << endl;
    } else if (a == "PARALLEL COMPUTING") {
        cout << "The simultaneous execution of multiple tasks or processes." << endl;
    } else if (a == "CLOCK SPEED") {
        cout << "The speed at which a CPU processes instructions, measured in GHz." << endl;
    } else if (a == "EMBEDDED SYSTEM") {
        cout << "A specialized computer that performs dedicated functions." << endl;
    } else if (a == "ARITHMETIC") {
        cout << "The process of making calculations." << endl;
    } else if (a == "DATA BUS") {
        cout << "A communication pathway that allows data to be transferred." << endl;
    } else if (a == "FIRMWARE") {
        cout << "A type of software permanently stored in hardware devices." << endl;
    } else if (a == "HARD DISK DRIVE") {
        cout << "A traditional storage device that uses magnetic disks.";
    } else if (a == "JAVA") {
        cout << "A popular programming language.";
    }
    
    return 0;
}
