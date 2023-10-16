#include <iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int l = 0, h = size-1;
    int x = 9;

    while(l!=h)
    {
        if(arr[l]+arr[h]>x)
        {
            h--;
        }
        else if(arr[l]+arr[h]<x)
        {
            l++;
        }
        else
        {
            cout<<arr[l]<<" "<<arr[h]<<endl;
            break;
        }
    }

}
