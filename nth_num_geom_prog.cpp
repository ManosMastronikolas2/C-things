#include <iostream>
#include <cmath>
void printnums(float fnum, float snum, int nnum){
  int apot;
  int l = snum / fnum;
  for(int i=1;i<=nnum;i++){
    apot = fnum * pow(l, i-1);
    std::cout << apot << "\n";
  }
}
int main(){
  float n1,n2;
  int n;
  std::cout << "Give the two first numbers\n";
  std::cin >> n1;
  std::cin >> n2;
  std::cout << "Give n\n";
  std::cin >> n;
  printnums(n1,n2,n);
  return 0;




}
