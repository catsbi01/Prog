#include <iostream>
#include <fstream>

using namespace std;

int count(const string& fname, const string& word){
    ifstream in("fname"); 
    string str;
    int count = 0;
    string wordcp = word;

    for(char& c: wordcp) c = tolower(c);

    while(in >> str){
       for (char& c: str) c = tolower(c);
       if (str == wordcp) count ++;
    } 

    return count;
}

int main(){
    return 0;
}