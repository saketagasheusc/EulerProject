#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int fib1 = 1;
  int fib2 = 2;
  int fib3 = 3;
  int upperLim = 4000000;
  int sum = 2;

  while(fib1 + fib2 < 4000000){
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;
    if(fib3 % 2 == 0){
      sum += fib3;
    }
  }

  cout << sum << endl;
}
