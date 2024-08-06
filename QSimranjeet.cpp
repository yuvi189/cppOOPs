
#include <iostream>

using namespace std;

int main()
{
    int first_trend_change;
	    bool result=true;
	    int second_diff;
	    int third_diff;
	    cout<<"Enter the number of elements you want in the array";
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cout<<"Enter element "<<(i+1)<<" of the array";
	        cin>>arr[i];
	    }
	    int first_diff=arr[1]-arr[0];
	    if(first_diff>0)
	    {
	        for(int j=1;j<n-1;j++)
	        {
	            second_diff=arr[j+1]-arr[j];
	            if(second_diff<0)
	            {
	                first_trend_change=j;
	                break;
	            }
	        }
	        for(int k=first_trend_change+1;k<n-1;k++)
	        {
	            third_diff=arr[k+1]-arr[k];
	            if (third_diff>0)
	            {
	                result=false;
	                
	                break;
	            }
	        }
	    }
	    else if(first_diff<0)
	    {
	        for(int j=1;j<n-1;j++)
	        {
	            second_diff=arr[j+1]-arr[j];
	            if(second_diff>0)
	            {
	                first_trend_change=j;
	                break;
	            }
	        }
	        for(int k=first_trend_change+1;k<n-1;k++)
	        {
	            third_diff=arr[k+1]-arr[k];
	            if (third_diff<0)
	            {
	                result=false;
	                
	                break;
	            }
	        }
	    }
	    for(int h=0;h<n-1;h++)
	    {
	        if(arr[h]==arr[h+1])
	        {
	            result=false;
	            break;
	        }
	    }
	    
	    if(result==true)
	    {
	        cout<<"true"<<endl;
	    }
	    else
	    {
	        cout<<"false"<<endl;
	    }
}