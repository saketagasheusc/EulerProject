#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int sum = 0;
  for(int i = 0; i < 1000; i++){
    if(i%3 == 0 || i%5 == 0){
      sum += i;
    }
  }
  cout << "Sum of all multiples of 3 and 5 below 1000 is : " << sum << endl;
}
