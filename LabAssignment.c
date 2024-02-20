/*
//Write a program in C to print all unique elements of an array
#include<stdio.h>
int main()
{ int a[10],n,count,i,j;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter %d elements in the array :\n",n);
  for(i=0;i<n;i++)
  {
	  scanf("%d",&a[i]);
	}
  for(i=0; i<n; i++)
  {
    count=0;
    for(j=0; j<n; j++)
    {
      if (i!=j)
      {
		if(a[i]==a[j])
        {
          count++;
        }
      }
    }
    if(count==0)
    {
      printf("%d ",a[i]);
    }
  }
  return 0;
}
*/
//2 ================================================================================================
/*
//Write a C program  to find the second largest element in an array
include <stdio.h>
int main() 
{
  int a[20], n, l1, l2,i,j;
  printf("Enter the size of the array : ");
  scanf("%d", &n);
  printf("Enter %d elements in the array :\n", n);
  for (i = 0; i < n; i++) 
  {
      scanf("%d", &a[i]);
  }
  l1 = 0;
  j=0;
  for (i = 0; i < n; i++) 
  {
    if (l1 < a[i]) 
    {
      l1 = a[i];
      j = i;
    }
  }
  l2 = 0;
  for (i = 0; i < n; i++) 
  {
    if (i == j) 
    {
      i++;  
      i--;
    } 
    else 
    {
      if (l2 < a[i]) 
      {
        l2 = a[i];
      }
    }
  }
  printf("The Second largest element is :  %d ", lrg2nd);
  return 0;
}*/
//3 ====================================================================================================
/*
//C program to swap first element with last, second to second last and so on
#include<stdio.h>
int main()
{
    int a[20],i=0,n; 
    printf("Enter the size of the array : ");
    scanf("%d",&n);
   
    printf("Enter the elements for array");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    
   int temp=0;

    for(i=0 ; i<n/2 ; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for(i=0 ; i<n ; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}
*/
//4 ================================================================================================
/*
//C program to delete prime numbers from an array
#include <stdio.h>
int main()
{
	int a[10],n,i,j,flag=0;
	printf("Enter the size of the array : ");
    scanf("%d",&n);
   
    printf("Enter the elements for array");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
	int flag=0; 
	for(i=2; i<n/2; i++)
	{
		if(n%i ==0)
		{
			flag =1;
			break;
		}
	}
	if(flag==1)
    {
	    for(i=0; i<n; i++)
	    {
		    for(j=i; j<len; j++)
		    {
			    a[j] = a[j+1];
		    }
		    i--;
		    n--;			
	    }
    }
	for(i=0; i<n; i++)
	{
    	printf("%d\n",a[i]);
    }
	return 0;	
}
*/
//5 =====================================================================================================
/*
//C Program to find the Biggest Number in an Array of Numbers using Recursion
#include<stdio.h>
int find(int a[],int n)
{   int l;
	if(n==0)
		return l;
    else if (a[n]>l)
    {
        l=a[n];
    } 
	return find(a,n-1);
}

int main()
{   
	int a[10],n,b;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("enter elements of the array");
	for(int i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
    }
	b=find(a,n);
	printf("The biggest element is: %d",b);
	return 0;
}
*/
//6 =================================================================================================
/*
//C Program to implement Linear Search using Recursion
#include<stdio.h>
int find(int a[],int k,int n)
{   int pos;
	if(n==0)
		return 0;
    else if (a[n]==k)
    {
        pos=n+1;
        return pos;
    } 
    else
	    return find(a,k,n-1);
}

int main()
{   
	int a[10],n,b;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("enter elements of the array");
	for(int i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
    }
    printf("Enter the element to find in the array: ");
	scanf("%d",&k);
	b=find(a,n);
    if(b == 0)
    {
        printf("The element is not to be founnd")
    }
    else
    {
	    printf("The element is in position: %d",b);
    }
	return 0;
}
*/
