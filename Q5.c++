#include<iostream>
using namespace std;

bool Bubble(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1])
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
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    Bubble(arr,n);
    print(arr,n);
}