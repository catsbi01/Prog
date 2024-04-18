#include <iostream>
#include "cdata.h"
using namespace std;

int* expand_cdata(const cdata a[], int n){
    int lenght = 0;
    for (int i =0; i < n;++i){
        lenght += a[i].count; 
    }   

    int *expanded = new int[lenght];

    int k =  0; 
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < a[i].count; j++){
            expanded[k] = a[i].value;
            k++;
        }
    }

    return expanded;
}

int main() {
    
    return 0;
}