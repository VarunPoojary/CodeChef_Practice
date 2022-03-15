#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        for(int i = 1; i<=n; i+=2)
        {
            sum+= (n-i+1) * (n-i+1);
        }
        cout <<sum<<endl;
    }
	// your code goes here
	return 0;
}
