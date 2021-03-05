// Vivian Ma, vm8ufh, 2/15/2021, xToN.cpp

#include <iostream>
using namespace std;



int xton(int a, int b) {
  if(b == 0)
    return 1;
  else if(b>0)
    return (xton(a, b-1)*a); 
}

int main (){
  int a, b;
  cin >> a;
  cin >> b;
  cout << xton(a, b);
  return 0;
}
