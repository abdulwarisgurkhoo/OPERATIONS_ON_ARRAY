/***************************************delete and elemnet from a particular index value*********************/
#include<iostream>
using namespace std;
void del (int arr[],int *n,int ind)
    {
        
        for (int i =ind ; i < *n; i++)
        {
            arr[i]=arr[i+1];
        }

       *n=*n-1;
    }
    void print(int arr[],int count)
        {
            for (int i = 0; i < count; i++)
            {
                cout<<arr[i]<<"  ";
            }
            
        }
        int main ()
            {
                int size,len,ind;
                cout<<"enter the size of array";
                cin>>size;
                int arr[size];
                cout<<"enter the length of array ";
                cin>>len;
                for (int i = 0; i < len; i++)
                {
                    cout<<"enter element number "<<i+1<<" : ";
                    cin>>arr[i];
                    cout<<endl;
                }
                cout<<"enter the index at which you want to delete the element within the array \n";
                cin>>ind;
                del(arr,&len,ind);
               
                print(arr,len);
                return 0;

            }