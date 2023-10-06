#include <iostream>

using namespace std;

void calcula(int &X, int &Y){
    X += Y;
    Y = X - Y;
}

int main(){

  int X = 10, Y = 5;

  
  calcula(X, Y);

  
  cout << "X = " << X << endl;
  cout << "Y = " << Y << endl;

  return 0;
}
    
