#include <iostream>
#include "wc.h"
#include "p2_test1.txt"
using namespace std;

wcresult wc(const string& filename){
    ifstream in("filename");
    wcresult res ={0,0,0};
    char c;
    string line;
    while(getline(in, line)){
        res.lines++;

        istringstream str(line);
        res.words++;

        res.bytes += line.size();
    }
    return res;
}

int main(){
    { wcresult r = wc("p2_test1.txt"); 
  cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n'; }
    return 0;
}