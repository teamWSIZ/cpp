#include <bits/stdc++.h>
using namespace std; 

//   g++ a.cc
//   ./a.out
int main() {
  int x; 
  cin >> x; 

  //instr warunkowe
  if (x%7==0) {
    cout << "podzielna przez 7" << endl;
  } else {
    cout << "liczba nie jest podzielna przez 7" << endl;
  }

  //petle
  for(int z=12; z<21; z++) {
     cout << "z=" << z << endl;
     cout << "z*z=" << z*z << endl; 
  }

}  
