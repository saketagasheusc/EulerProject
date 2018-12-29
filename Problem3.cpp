#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(size_t num);

int main(){
  size_t numOfQ =  600851475143;
  size_t largestPFac = 2;

  for(size_t i = 3; i < floor(sqrt(numOfQ)); i += 2){
    if(numOfQ%i == 0){
      if(isPrime(i)){
        largestPFac = i;
        cout << "New largest prime factor is: " << largestPFac << endl;
      }
    }
  }
  cout << "Largest Prime Factor is " << largestPFac << endl;
}

bool isPrime(size_t num){
  for(size_t i = 2; i < floor(num/2); i++){
    if(num % i == 0){
      return false;
    }
  }
  return true;
}
