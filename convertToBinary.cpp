#include <iostream>
//conversion of decimal numbers to binary (up to 128 bits)
int main(){
    using namespace std;

    int bin[128];
    int num;
    int i=0;

    cin >> num;

    while(num>0){
        bin[i] = num%2;
        num = num/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<<bin[j];
    }

    return 0;
}