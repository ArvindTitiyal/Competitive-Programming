Start Pattern

Print the following pattern
Pattern for N = 4

	+++*
	++***
	+*****
	*******
 
The + represent spaces.

Input Format 
N (Total no. of rows)
Output Format 
Pattern in N lines
Constraints 
0 = N = 50
Sample Input 1 
3
Sample Output 1 
  
   *
  *** 
 *****

 
Sample Input 2 
4
Sample Output 2 
    
    *
   *** 
  *****
 *******
 
  
 

#includeiostream
using namespace std;


int main(){

         Read input as specified in the question.
	 Print output as specified in the question.
	
    int num, count = 1, i;

    cinnum;

    while(count = num)
    {
        i = 0;
        while( i  (num-count)){
            cout ;
            i++;
        }
        i = 0;
        while(i  (2count-1))
        {
            cout;
            i++;
        }
        coutn;
        count++;
    }
  
}


//Or

/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int currRow = 1;
	while(currRow <= n)
	{
		int spaces = 1;
		while(spaces <= n - currRow)
		{
			cout<<" ";
			spaces++
		}
		int currCol = 1;
		while(currCol <= (2 * currRow) - 1)
		{
			cout<< '*';
			currCol++;
		}
		cout<<endl;
		currRow++;
	}
}
*/
