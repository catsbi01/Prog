#include <iostream>
#include "alist.h"
using namespace std;

void append(alist* a, const alist* b){
  int* newArray = new int[a->size + b->size];
  for (int i = 0; i < a->size; i++)
      newArray[i] = a->elements[i];

  for (int i = a->size; i < a->size + b->size; i++)
      newArray[i] = b->elements[i - a->size];

  delete[] a->elements;

  a->elements = newArray;
  a->size = a->size + b->size;

}




int main()	{
  return 0;
}