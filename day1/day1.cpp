#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    fstream input_file;
    input_file.open("input", ios::in);
    if(!input_file) {
        cout << "no input\n";
    } else if(input_file) {
        cout << "yes input\n";
        input_file.close();
    }
    return 0;
}
