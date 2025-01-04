/*******************************-----BINARY SEARCH------*******************************/
#include<iostream>
using namespace std;
int binary_find(int arr[],int high,int key)
    {
        int low =0,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(key==arr[mid])
            {
                cout<<"\n THE KEY IS FIND AT INDEX VALUE : ";
                return mid;
            }
            else if(key<arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        cout<<"key is not present result is :-> ";
        return -1;

    }
int main ()
{
    int size,len,key;
    cout<<"enter size of array \n";
    cin>>size;
    cout<<"enter length of array \n";
    cin>>len;
    int arr[size];
    cout<<"please enter the elements of an sorted array\n";
    for(int i=0;i<len;i++)
    {
        cout<<"enter element : "<<i+1<<" : ";
        cin>>arr[i];
        cout<<endl;
    } 
    cout<<"enter the key you want to find\n";
    cin>>key;
    cout<<binary_find(arr,len,key);
    return 0;


}