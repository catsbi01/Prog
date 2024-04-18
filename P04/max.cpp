#include <iostream>
using namespace std;

int max(const int a[], int n){
    int value = a[0];

    for(int i=1; i<n; ++i){
        if (a[i]> value){
            value =a[i];
        }
    }
    return value;
}


int main(){

    return 0;
}