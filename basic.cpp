# include <iostream>
using namespace std ;

int main() {

    int arr[] = {1 ,2 ,3, 4,5,6};

    int size = sizeof(arr) ;               // SIZE OF ARRAY
    cout<<"Size of Array : "<<size<<endl;     

    int length = sizeof(arr) / sizeof(arr[0]) ;    // LENGTH OF ARRAY
    cout<<"Length of array : "<<length<<endl;

    /// TRAVERSE THE ARRAY 

    for(int i=0; i<length; i++){               // using for loop (it traverse through index)
        cout<<arr[i]<<endl;
    }
    cout<<endl ;

    for(int element : arr){                   // using for each (it traverse through each element) 
        cout<<element<<endl;
    }
    cout<<endl ;

    int index = 0 ;
    while(index<length){
        cout<<arr[index]<<endl;                  // using while loop
        index++ ;
    }
    cout<<endl ;

    
          /// Input from user in  Arrays


    char vowels[5] ;

    for(int i =0 ; i < 5; i++){
        cin>>vowels[i];
    }                                                     // using for loop
    for(int i =0 ; i < 5; i++){
        cout<<vowels[i]<<" ";
    }

    for(char &element : vowels){
        cin>>element;
    }                                                      // using for each loop 
                                                           //  (it need ampersand to equal the memory location of element and vowels)
    for(char element : vowels){                            // otherwise it will store the value of element somewhere else but not in vowels list. 
        cout<<element<<" ";
    }



    return 0 ;
}