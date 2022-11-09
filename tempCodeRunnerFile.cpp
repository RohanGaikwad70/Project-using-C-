#include<iostream>
using namespace std;
int nCr(int n, int r);
int factorial(int n);


int main()
{
    int n,r;
  cout<<"Enter values of n & r : ";
  cin>>n>>r;
  cout<<"Your Answer of nCr is:   "<<nCr(n,r)<<endl;
}

int nCr(int n,int r)
{
  // factorial();
  int nr=factorial(n);
  int dr=factorial(r)*factorial(n-r);
  int ans =nr/dr;
  return ans;
}
int factorial(int n)
{
  int fact=1;
  for (int i=1;i<=n;i++)
  {  
  fact=fact*i;
}
  return fact;
}