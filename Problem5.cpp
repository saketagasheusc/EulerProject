#include <iostream>
#include <set>
#include <cmath>

using namespace std;

size_t LCMFromRange(size_t low, size_t high);
size_t GCD(size_t num1, size_t num2);
size_t LCM(size_t num1, size_t num2);

int main(){
  cout << LCMFromRange(1, 20) << endl;
}

size_t LCMFromRange(size_t low, size_t high){
  size_t LCMTotal = LCM(low, low + 1);
  for(size_t i = low + 2; i <= high; i++){
    if(LCM(LCMTotal, i) != LCMTotal){
      LCMTotal = LCM(LCMTotal, i);
    }
  }
  return LCMTotal;
}

size_t GCD(size_t num1, size_t num2){
  return num2 == 0 ? num1: GCD(num2, num1 % num2);
}

size_t LCM(size_t num1, size_t num2){
  if(GCD(num1, num2) == num2){
    return num1;
  }
  return (num1*num2)/GCD(num1, num2);
}
