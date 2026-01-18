#include <iostream>
#include <fstream>   
using namespace std;

int main() {
    ifstream myFile("taxes.txt");  // read from file
    double tax;                    // Variable declaration

    
    if (!myFile) {//Check file existance
        cout << "Error opening file" << endl;
        return 1;
    }

    cout << "Tax amounts in file:\n";

    
    while (myFile >> tax) {//looping through the file
        cout << tax << endl;
    }

    
    myFile.close();//close file
    return 0;
}
