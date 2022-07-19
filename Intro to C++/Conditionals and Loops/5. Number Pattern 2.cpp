Number Pattern 2

Print the following pattern
Pattern for N = 4
  
	***1
	**23
	*345
	4567
	
The dots represent spaces.

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :

	****1
	***23
	**345
	*4567
	56789
 
The dots represent spaces.

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
	cin>>n;


	int i=1;
	while(i<=n){
    	int k=1;
    	while(k<=n-i){
        	cout<<" ";
            k=k+1;
        }
    	int j=1;
    	int val=i;
    	while(j<=i){
    		cout<<val;
    		j=j+1;
    		val=val+1;
        }
    cout<<endl;
	i=i+1;
	}
  
}

//Or

/*
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i = 1;
	while(i<=n)
	{
		int spaces = 1;
		while(spaces <= n - i)
		{	
			cout<<"  ";
			spaces = spaces + 1;
		}
		int col = 1;
		int value = i;
		while(col <= i)
		{
			cout<< value;
			value = value + 1;
			col = col + 1;
		}
		cout<< endl;
		i = i+1;
	}
}
