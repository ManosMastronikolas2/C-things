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

    int* psifoi = new int[k]; //array me k elements pu krataei tous ari8mous sta pshfodeltia
    ypopsifios* ypopsifioi = new ypopsifios[m];//array class objects pu exei m elements


    for(int i=0;i<k;i++){
        std::cin >> psifoi[i];//vazoume tous ari8mous twn pshfodeltiwn sto array
    }

    for(int i=0;i<k-1;i++){ //analoga me to num sto pshfodeltio auxanoume to count twn pshfwn sto antistoixo element
      ypopsifioi[j].num = psifoi[i];
      ypopsifioi[j].cnt += 1;
      
    }

    for(int i=1;i<=m;i++){ //vriskume to element me to megalutero count

        if(ypopsifioi[0].cnt < ypopsifioi[i].cnt){
            ypopsifioi[0] = ypopsifioi[i];
        }

    }

    std::cout << ypopsifioi[0].num << '\n';

    delete[] psifoi;//diagrafoume ta arrays
    delete[] ypopsifioi;
    return 0;
}
