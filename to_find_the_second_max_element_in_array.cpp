/************************************to_find_the_second_max_element_in_array**********************/
#include<iostream>
using namespace std;
int sec_max(int arr[],int count)
{
    int temp=arr[0];
    int temp2=arr[0];
    for (int i = 0; i < count; i++)
    {
        if(temp<=arr[i])
        {
            temp2=temp;
            temp=arr[i];

        }
        else if (arr[i]>temp2 && arr[i]<temp)
        {
            temp2=arr[i];
        }
    }
    return temp2;
}
void print(int arr[],int count)
{
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
int main()
{
    int arr[5]={1,3,3,10,5};
   cout<<sec_max(arr,5);
    

}