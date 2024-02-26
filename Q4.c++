#include<iostream>
using namespace std;

bool Decr_Bubble(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] < arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
           break;
        }
    }
    
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
       cout << arr[i]<< " ";
    }
    cout << endl;    
}

int main(){
    int arr[] = {5,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    Decr_Bubble(arr,n);
    print(arr,n);
}