/*********************************ARRAY DECLARAION*******************************/
#include<iostream>


using namespace std;
struct array   
 {
    int *p;
    int size;
    int lenght;
};
void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
int main ()
    {
        struct array arr;
        cout<<"enter the size of array\n";
        cin>>arr.size;
        arr.p=new int [arr.size];
        cout<<"enter the lenght of array\n";
        cin>>arr.lenght;
        cout<<"enter the elements of array \n";
        for (int i = 0; i < arr.lenght; i++)
        {
            cout<<"enter element no. "<<i+1<<" : ";
            cin>>arr.p[i];
            cout<<"\n";
        }
        print(arr.p,arr.lenght);
        return 0;

    }