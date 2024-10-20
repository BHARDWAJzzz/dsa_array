# include <iostream>
using namespace std ;

               /// Find the unique no. in a given array where all the elements are repeated twice with one value being unique ???

               // Hint : Array Manipulation


int main() {

    int array[] = {2,3,4,6,3,6,2};
    int size=7;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }


    return 0;
}