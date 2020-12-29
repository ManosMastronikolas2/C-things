#include <iostream>
#include "calc_op.h"

using namespace std;

int main(){
  int num, num1;
  char op;

  cin >> num >> op >> num1;

  operation(num, op, num1);

  return 0;
}
