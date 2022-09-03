#include<iostream>
#include<cstring>
using namespace std;
void merge(int l[],int r[], int A[])
{ int nl=sizeof(l)/sizeof(int);
  int nr=sizeof(r)/sizeof(int);
  int left[nl],right[nr],i=0,j=0,k=0;
   memset(left,-1,nl);
   memset(right,-1,nr);

   while(i<=nl && j<=nr)
   {
    if(left[i]<=right[j])
    {
        A[k]=left[i];
        i++;
    }
    else{
         A[k]=right[j];
        j++;
    }
    k++;
   }

   while(i<=nl)
   {
     A[k]=left[i];
        i++;
        k++;
   }
   while(j<=nr)
   {
     A[k]=right[j];
        j++;
        k++;

   }



}
void merge_sort(int A[],int n,int low, int high)
{  int mid,i;
   
   if(n<2)
{
    return;
} 
 mid=(high-low)/2;
 int l[mid],r[n-mid];
 memset(l,-1,mid);
 memset(r,-1,n-mid);
 cout<<mid;
 for(i=0;i<=mid;i++)
 {   
    l[i]=A[i];
    
 }
 for(i=mid+1;i<n;i++)
 {
     
    r[i]=A[i];
   
 
 }
 merge_sort(l,mid,0,mid);
 merge_sort(r,n-mid,mid+1,n-1);
 merge(l,r,A);
 
}

int main()
{ 
   int arr[]={55,22,3,9,17};
   int n= sizeof(arr)/sizeof(arr[0]);
   merge_sort(arr,n,0,n-1);
   int i=0;
 while(i<n)
 {
    cout<<arr[i]<<"\n";
    i++;
 }
    return 0;
}