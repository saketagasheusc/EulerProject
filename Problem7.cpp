#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(size_t num);

int main(){
  int primeCounter = 2;
  int firstPrime = 3;
  while (primeCounter < 10001){
    firstPrime += 2;
    if(isPrime(firstPrime)){
      primeCounter ++;
    }
  }
  cout << firstPrime << endl;
}

bool isPrime(size_t num){
  for(size_t i = 2; i < ceil(sqrt(num)) + 1; i++){
    if(num % i == 0){
      return false;
    }
  }
  return true;
}
