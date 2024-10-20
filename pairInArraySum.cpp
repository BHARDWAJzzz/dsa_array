# include <iostream>
using namespace std ;


                   // Find the total no. of pair in array whose sum is equal to the given value x ??


int main() {

    int arr[] = {2,5,7,3,5,8,1,6,0,12,10};

    int x ; 
    cout<<"Enter the value of x : ";
    cin>>x;

    int length = sizeof(arr)/sizeof(arr[0]);
    int pairs = 0 ;

    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i] + arr[j] ==  x){
                cout<<arr[i]<<" , "<<arr[j]<<endl;
                pairs++;
            }
        }
    }
    cout<<"Pairs = "<<pairs<<endl;

    return 0;
}
