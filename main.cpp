#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string line;
        ifstream MyFile2("test.qst");
        while (getline(MyFile2, line) ){
            cout << line << '\n';
        }
        MyFile2.close();
        return 0;
}
