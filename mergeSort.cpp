#include<iostream>
#include<vector>

using namespace std;
void merge(vector<int> &l,vector<int> &r,vector<int> &A)
{ 
  int i=0,j=0,k=0;
 int nl=l.size();
 int nr=r.size();
   while(i<nl && j<nr)
   {
    if(l[i]<=r[j])
    {
        A[k]=l[i];
        i++;
    }
    else{
         A[k]=r[j];
        j++;
    }
    k++;
   }

   while(i<nl)
   {
     A[k]=l[i];
        i++;
        k++;
   }
   while(j<nr)
   {
     A[k]=r[j];
        j++;
        k++;

   }

}
void merge_sort(vector<int> &A)
{ if (A.size() <= 1) return; 
 int mid=A.size()/2;
 cout<<"\n mid:"<<mid;
vector<int> left;
vector<int> right; 
 for(int i=0;i<mid;i++)
 {   
    left.push_back(A[i]);
   
    
 }
 for(int i=0;i<A.size()-mid;i++)
 {
     
    right.push_back(A[mid+i]);
    
   
 
 }
 merge_sort(left);
 merge_sort(right);
 merge(left,right,A);

}

int main()
{ 
   vector<int> arr={55,22,3,9,17};
   cout<<"before \n";
   for(int i:arr)
 {
    cout<<i<<endl;
 }
   int n= arr.size();
   cout<<"size:"<<n;
   merge_sort(arr);
   
   cout<<"\nans: \n";
 for(int i:arr)
 {
    cout<<i<<endl;
 }
    return 0;
}