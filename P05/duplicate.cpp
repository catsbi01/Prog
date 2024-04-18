#include <iostream>
using namespace std;
char* duplicate(const char s[]){
    int length = 0;
    while (s[length] != 0) {
        length++;
    }

    length++;
    char* res= new char[length];
    int i = length - 1;

    while (i >= 0) {
        res[i] = s[i];
        i--;
    }

    res[length - 1] = '\0';

    return res;

}

int main(){ 
  return 0;
}