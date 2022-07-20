Find power of a number

Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1

Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int base, exponent, power, i;
    
    cin>>base;
    cin>>exponent;
    
    power = 1;
    i = 1;
    
    while(i <= exponent){
        power = power*base;
        i++;
    }
    
    cout<<power;
	
}

Or

#include<iostream> 
using namespace std; 
int main() 
{ 
	int x,n; 
	cin>>x>>n; 
	int ans=1; 
	while(n>0)
	{ 
		ans *=x; 
		n--; 
	} 	
	cout<<ans; 
}

//Or

/*
#include <stdio.h> 
int power(int x, int n)
{ 
	if(n==1)
	{ 
		return x; 
	} 
	if(n==0)
	{ 
		return 1; 
	} 
	return x*power(x,n-1); 
} 

int main() 
{ 
	int x, n; 
	scanf("%d%d", &x, &n); 
	int ans= power(x,n); 
	printf("%d", ans); 
}

*/