# include <iostream>
using namespace std ;

int main() {
    
    int arr[] = {6,7,8,2,72,10,58,72,72,72} ;
    int max = arr[0];

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<length ; i++){
     if(arr[i] > max)
        max = arr[i];
    }
    cout<<"Biggest element of array : "<<max<<endl;


    return 0;
}