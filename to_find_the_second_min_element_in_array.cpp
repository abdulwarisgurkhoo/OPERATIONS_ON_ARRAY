/***********************************to_find_the_second_min_element_in_array.cpp**************************/

#include<iostream>
using namespace std;
int sec_min(int arr[],int count)
{
    int temp=arr[0];
    int temp2=arr[0];
    for (int i = 0; i < count; i++)
    {
        if(temp>arr[i])
        {
            temp2=temp;
            temp=arr[i];

        }
        else if (arr[i]<temp2 && arr[i]>temp)
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
   cout<<sec_min(arr,5)<<" is the minimum value present in array \n";
   return 0;

    

}