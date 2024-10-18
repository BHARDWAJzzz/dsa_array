# include <iostream>
using namespace std ;                        /// Linear Search ///


// Find the element in array ,if present return the index of element else -1 ???????  

int main() {
    int arr[]={2,5,87,23,34,45} ;
    int key=45 ;                           // Element to find 
    int index=-1 ;

    for(int i=0 ; i<6 ; i++){
        if(arr[i]==key){
            index=key;
            break;
        }
    }

    cout<<index<<endl;

}