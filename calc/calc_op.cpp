#include <iostream>

using namespace std;

int addition(int n, int n1){
  int result = n + n1;
  return result;
}

int subtraction(int n, int n1){
  int result = n-n1;
  return result;
}

int multiplication(int n, int n1){
  int result = n * n1;
  return result;
}

float division(int n, int n1){
  float result = float(n) / float(n1);
  return result;
}

void operation(int n, char oper, int n1){

  switch(oper){
    case '+':
      cout << addition(n, n1) << endl;break;
   case '-':
    cout << subtraction(n, n1) << endl;break;
   case '*':
    cout << multiplication(n, n1) << endl;break;
   case '/':
    cout << division(n, n1) << endl;break;
    default:
    cout << "This is not a valid operator.." << endl;break;

}
}
