#include  <iostream>
#include <algorithm> //std::sort

int median(const int a[], int n) {

    int* tmp = new int[n];
    for (int i = 0; i < n; ++i) {
        tmp[i] = a[i];
    }
    
    std::sort(tmp, tmp + n);

    int medianValue;
    if (n % 2 == 0) {
        medianValue = (tmp[n / 2 - 1] + tmp[n / 2]) / 2;
    } else {
        medianValue = tmp[n / 2];
    }

    delete[] tmp;
    return medianValue;
}

int main(){
    return 0;
}