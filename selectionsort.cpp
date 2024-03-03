#include<bits/stdc++.h>
using namespace std;
void selectionsort();
int main()
{
     selectionsort();
    return 0;
}
void selectionsort()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for (int i = n-1; i >=0; i--) {
    cout << arr[i] << " ";
  }
}
