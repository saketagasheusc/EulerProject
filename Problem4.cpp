#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPal(size_t num){
  vector<int> palTest;
  while(num > 0){
    int toAdd = num%10;
    num /= 10;
    palTest.push_back(toAdd);
  }
  for(size_t i = 0; i < palTest.size(); i++){
    if(palTest[i] != palTest[palTest.size() - i - 1]){
      return false;
    }
  }
  return true;
}

int main(){
  int testNum = 0;
  int largestPal = 0;
  for(int i = 100; i < 999; i++){
    for(int j = 100; j < 999; j++){
      testNum = i * j;
      if(isPal(testNum) && testNum > largestPal){
        largestPal = testNum;
      }
    }
  }
  cout << "Largest Palindrome Made was : " << largestPal << endl;
}

bool isPal(size_t num);
