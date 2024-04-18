#include <iostream>

using namespace std; 
const char* longest(const char* pa[]){
    int i=0,ret=0,k=0,size=0,counter=0;
    while(pa[i]!=nullptr){
        while(pa[i][k]!=0){
            counter++;
            k++;
        }
        if(counter>=size){
            ret=i;
            size=counter;
        }
        counter=0;k=0;i++;
    }
    return pa[ret];
}


int main(){
    return 0;
}