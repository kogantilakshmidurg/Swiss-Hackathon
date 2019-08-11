#include <iostream>
using namespace std;
int main() 
{
    int x,p,s=0;
    cin>>x>>p; //x->price of coffee; p->discount rate
    p=100-p;
    while(x>0)
    {
        s=s+x; //s->calculating amount required according to the price and dicsount
        x=(p*x)/100; //x->price after applying discount
    }
    cout<<s; //s->amount necessary to order for free
	return 0;
}
/*
Sample Input:
100 90
Sample Output:
111
*/
