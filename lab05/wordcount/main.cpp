#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include "Tokenizer.h"

using namespace std;

void printUniqueWords4(string filename);

int main() {
    string filename = "main.cpp";
    printUniqueWords4(filename);
    return 0;
}
//-------------------------------------------------------
// set
void printUniqueWords4(string filename) {
    map<string,int> words;
    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()) {
      words[tokenizer.next()]++;
    }
    tokenizer.close();
    cout << "A total of " << words.size() << " words" << endl;
    auto it = words.begin();
    while (it != words.end()) {
      cout << "There are " << (*it).second << " copies of [" << (*it).first << "]" << endl;
      it++;
    }
}
//-------------------------------------------------------
