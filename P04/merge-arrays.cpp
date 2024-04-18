#include <iostream>
#include "print_array.h"
using namespace std;

int* merge_arrays(const int a[], int na, const int b[], int nb){
    int* c = new int[na+nb];
    int i = 0;
    int k = 0;
    int j = 0;
    while (i<na && j<nb){ //para os valores que etsao nos arrays pelo mesmo "comprimento"
        if (a[i] < b[j]) {
            c[k] = a[i];
            k++;
            i++;
        } else {
            c[k] = b[j];
            k++;
            j++;
        }
    }

//para o resto dos  valores que faltam de algum dos arrays
    while(i< na){
        c[k] = a[i];
        k++;
        i++;
    }

    while(j< nb){
        c[k] = b[j];
        k++;
        j++;
    }

    return c;
}   

int main() {
    
    return 0;
}