#include<iostream>
    using namespace std;
    int main()
    {
        int a,size,max,min;
        cout<<"Enter Array size : ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        max=arr[0];
        min=arr[0];
        for(int i=0;i<size;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        cout<<"Maximum Value of Array : "<<max<<endl;
        cout<<"Minimum Value of Array : "<<min;


    }

