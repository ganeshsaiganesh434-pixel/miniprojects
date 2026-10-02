#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;
    ifstream fin("test.txt");   // open file directly in constructor

    if (!fin) {                 // check if file opened successfully
        cout << "Error opening file!" << endl;
        return 1;
    }
cout << "File opened successfully!" << endl;

    while (fin.get(ch)) {       // safer loop condition
        cout << ch;
    }

    fin.close();
    return 0;
}
