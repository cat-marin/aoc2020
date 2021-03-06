#include <iostream>
#include <fstream>

using namespace std;

int lines[200];
int size = 0;

void find_input() {
    ifstream input_file("input");
    if(input_file.is_open()) {
        string line;
        while(getline(input_file, line)) {
            lines[size] = (stoi(line));
            size++;
        }
    }
    input_file.close();
}

int main() {
    find_input();
    int ans;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            for(int k = j+1; k <= size; k++){
                if(lines[i] + lines[j] + lines[k] == 2020){
                    ans = lines[i] * lines[j] * lines[k];
                }
            }
        }
    }
    cout << "part two: " << ans << endl;
}
