#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int part(vector<int> &a,int start,int end)
{int pivot=a[end];
 int pIndex=start;
 
 for(int i=start;i<end;i++)
 {
    if(a[i]<=pivot)
    {   swap(a[i],a[pIndex]);
        pIndex++;
    }
}

swap(a[pIndex],a[end]);
return pIndex;
}
void quicksort( vector<int> &a,int start, int end)
{   int pIndex;

     if(start<end)
    {  cout<<"working\n";
        pIndex=part(a,start,end);
        quicksort(a,start,pIndex-1);
        quicksort(a,pIndex+1,end);


    }
    else{
        return;
    }

}





int main()
{  vector<int> arr2={909,88,100,1,55,14,10,22,36};
for(int x :arr2)
   {
    cout<<x<<"\n";
   }
   quicksort(arr2,0,arr2.size()-1);
   for(int x :arr2)
   {
    cout<<x<<"\n";
   }

    return 0;
}