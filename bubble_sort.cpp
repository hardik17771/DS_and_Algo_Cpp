#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
int arr[4]={1,6,2,12};

int main(){
    bubbleSort(arr,4);
    for(int i=0;i<4;++i)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
