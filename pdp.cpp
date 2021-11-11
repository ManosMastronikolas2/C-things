#include <iostream>

class ypopsifios{
    public:
        int num=0;
        int cnt=0;
};

int main(){
    int n, m, k=0;
    
    

    std::cin >> n >>  m >> k;
    
    std::cin.ignore();

    int* psifoi = new int[k];
    ypopsifios* ypopsifioi = new ypopsifios[m];


    for(int i=0;i<k;i++){
        std::cin >> psifoi[i];
    }

    for(int i=0;i<k-1;i++){
        for(int j=0;j<m-1;j++){
            ypopsifioi[j].num = psifoi[i];
            ypopsifioi[j].cnt += 1;
        }
    }

    for(int i=1;i<=m;i++){

        if(ypopsifioi[0].cnt < ypopsifioi[i].cnt){
            ypopsifioi[0] = ypopsifioi[i];
        }

    }

    std::cout << ypopsifioi[0].num << '\n';

    delete[] psifoi;
    delete[] ypopsifioi;
    return 0;
}