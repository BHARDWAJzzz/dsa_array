# include <iostream>
using namespace std ;

                                              /// sum of element in array ?????


// using for each loop :
 
int forEach() {

    int arr[5] ; 
    int sum = 0 ;

    for(int &element : arr){
        cin>>element;
    }
    for(int element : arr){
        sum = sum + element ; 
    }
    
    return sum ; 

}

int main() {


    int array[5] ;
    int sum=0 ;
    
    for(int i=0 ; i<5 ; i++){
        cin>>array[i] ;                                   // using for loop : 
    }
    for(int i=0 ; i<5 ; i++){
        sum = sum + array[i] ; 
    }
    cout<<"Sum of element of array : "<<sum<<endl;
    


    cout<<forEach()<<endl;
}