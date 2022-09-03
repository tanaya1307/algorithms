#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void heapify(vector<int> &v,int i,int n)
{ int largest=i;
  int left=2*i+1;
  int right=2*i+2;
 if(left<n && v[left]>v[largest])
 {
    largest=left;
 }
 if(right<n && v[right]>v[largest])
 {
    largest=right;
 }
if(largest!=i)
{  
    swap(v[i],v[largest]);
    heapify(v,largest,n);
}


}


int main()
{  vector<int> a={44,22,5,0,14,90};
   
   int n=a.size();
   cout<<"n:"<<n<<"\n";
   int i=(n/2);
   while(i>=0)
   { heapify(a,i,n);
     i--;
   }

  int j=n-1;
  while(j>0)
  {  
     swap(a[0],a[j]);
     n--;
    heapify(a,0,n);
     j--;

  }
  
 for(int x:a)
 {
    cout<<x<<"\n";

 }
    return 0;
}