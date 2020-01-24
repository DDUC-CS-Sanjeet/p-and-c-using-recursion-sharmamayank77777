#include<iostream>
using namespace std;
int permutation(int n, int r)
{
	
	if(n-r==0)
	return 1;
	else 	
	return(n*permutation(n-1,r));
		
	return 0;
}

int combination(int n, int r)
{
  
  if(r==0)
  return 1;
  else
  return(n*combination(n-1,r-1))/r;	
  return 0;
}

int main()
{
	int n,r;
	try
	{
		cout<<"Enter value of n:";
		cin>>n;
		cout<<"Enter value of r:";
		cin>>r;
		if(n<0 || r<0 )
		throw "Please enter non-negative values!!";
		else
		{
			cout<<"\nPermutation is:"<<permutation(n,n-r);
			cout<<"\nCombination is:"<<combination(n,n-r);
		}
	}
	catch(char const* str)
	{
		cout<<" "<<str;
	}
  return 0;
}
