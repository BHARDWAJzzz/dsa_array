# include <iostream>
using namespace std ;

                         /// Find the second largest element in the given array ???



int secondLargestElement(int array[] , int size){

    int max = array[0];
    int secondMax = array[0];

    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    
    for(int i=0; i<size; i++){
        if(array[i]>secondMax && array[i]!=max){
            secondMax=array[i];
        }
    }

    return secondMax;
}

int main() {

    int arr[] = {2,3,5,7,4,10};
    int length = 6;

    cout<<secondLargestElement(arr, length)<<endl;

    

    return 0 ;

}