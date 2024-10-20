# include <iostream>
using namespace std ;


                         // Count the no. of triplet whose sum is equal to given value x ???


int main() {
    
    int arr[] = {1,2,3,0,6,4};
    int targetSum = 5;
    int length = sizeof(arr)/sizeof(arr[0]);

    int triplets=0;

    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            for(int k=j+1; k<length; k++){
                if(arr[i]+arr[j]+arr[k]==targetSum){
                    triplets++;
                }
            }
        }
    }
    cout<<"Triplets : "<<triplets<<endl;


    return 0;
}