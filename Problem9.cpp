#include <iostream>
#include <cmath>

using namespace std;

bool Pythag(int i, int j, int k);

int main(){
    for(int i = 1; i < 332; i++){
      for(int j = 1; j < 499; j++){
        for(int k = 1; k < 997; k++){
          if((i < j && j < k) && Pythag(i, j, k) && (i + j + k == 1000)){
                cout << "A * B & C = " << i << "*" << j << "*" << k << "="
                   << i*j*k << endl;
          }
       }
    }
  }
}

bool Pythag(int i, int j, int k){
  int iSq = pow(i, 2);
  int jSq = pow(j, 2);
  int kSq = pow(k, 2);

  int LHSide = iSq + jSq;

  return (LHSide == kSq);
}
