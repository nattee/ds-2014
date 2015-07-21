#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_set>
#include "Tokenizer.h"
#include <sys/time.h>


using namespace std;

void printUniqueWords1(string filename);
void printUniqueWords2(string filename);
void printUniqueWords3(string filename);
void printUniqueWords4(string filename);
void printUniqueWords5(string filename);

int main() {
  struct timeval t1,t2;
    string filename = "mobydick.txt";
    Tokenizer t(filename);

    gettimeofday(&t1,0);
    printUniqueWords1(filename);
    gettimeofday(&t2,0);
    cout << (t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0 << endl;


    gettimeofday(&t1,0);
    printUniqueWords2(filename);
    gettimeofday(&t2,0);
    cout << (t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0 << endl;

    gettimeofday(&t1,0);
    printUniqueWords3(filename);
    gettimeofday(&t2,0);
    cout << (t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0 << endl;

    gettimeofday(&t1,0);
    printUniqueWords4(filename);
    gettimeofday(&t2,0);
    cout << (t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0 << endl;

    gettimeofday(&t1,0);
    printUniqueWords5(filename);
    gettimeofday(&t2,0);
    cout << (t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0 << endl;

    return 0;
}
//-------------------------------------------------------
bool search(string words[], int n, string w) {
    for (int i = 0; i < n; i++) {
        if (words[i] == w) return true;
    }
    return false;
}
//-------------------------------------------------------
// big enough array
void printUniqueWords1(string filename) {
    string words[100000];
    int n = 0;

    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()) {
        string token = tokenizer.next();
        if (!search(words,n,token)) words[n++] = token;
    }
    tokenizer.close();
    cout << "A total of " << n << " words" << endl;
}
//-------------------------------------------------------
// expandable array
void printUniqueWords2(string filename) {
    int cap = 1;
    string *words = new string[cap];
    int n = 0;
    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()) {
        string token = tokenizer.next();
        if (!search(words,n,token)) {
                if (n == cap) {
                    string *a = new string[2*cap];
                    for (int i=0; i<n; i++) a[i] = words[i];
                    delete[] words;
                    words = a;
                    cap *= 2;
                }
                words[n++] = token;
        }
    }
    tokenizer.close();
    cout << "A total of " << n << " words" << endl;
}
//-------------------------------------------------------
// vector
void printUniqueWords3(string filename) {
    ifstream fin(filename.c_str());
    vector<string> words;
    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()) {
        string token = tokenizer.next();
        if (words.end() == find(words.begin(), words.end(), token))
            words.push_back(token);
    }
    tokenizer.close();
    cout << "A total of " << words.size() << " words" << endl;
}
//-------------------------------------------------------
// set
void printUniqueWords4(string filename) {
    ifstream fin(filename.c_str());
    set<string> words;
    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()) {
        words.insert(tokenizer.next());
    }
    tokenizer.close();
    cout << "A total of " << words.size() << " words" << endl;
//    for (auto &x : words) {
//      cout << "the length of " << x << " is " << x.size() << endl;
//    }
}
//-------------------------------------------------------
void printUniqueWords5(string filename) {
    ifstream fin(filename.c_str());
    unordered_set<string> words;
    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()) {
        words.insert(tokenizer.next());
    }
    tokenizer.close();
    cout << "A total of " << words.size() << " words" << endl;
//    for (auto &x : words) {
//      cout << "the length of " << x << " is " << x.size() << endl;
//    }
}
