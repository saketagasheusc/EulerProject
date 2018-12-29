#include <iostream>
#include <cmath>

using namespace std;

int main(){
  size_t squareSum = 0;
  size_t sumSquare = 0;
  for(int i = 1; i <= 100; i++){
    sumSquare += i*i;
    squareSum += i;
  }

  squareSum *= squareSum;

  cout << squareSum - sumSquare << endl;
}
