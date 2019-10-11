
https://www.codechef.com/COOK110B/problems/MATCHES
/*
 ___     ___     ___                                              ___ 
 | |     | |     | |                                              | | 
 | |     | |  ___| |____                                          | | ________  
 | |     | | |___   ____|  _________    __________   __________   | ||_____  |
 | |     | |     | |       |  ______|  |  ______  | |  ______  |  | |     / /
 | |     | |     | |       | |         | |      | | | |      | |  | |    / /    
 | |     | |  _  | |       | |         | |      | | | |      | |  | |   / /
 | |_____| |_| | | |______ | |______   | |______| | | |______| |  | |  / /    
 |_____________| |_______| |________|  |__________| |__________|  |_| /_/     
 
 */     
#include<bits/stdc++.h>
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb emplace_back
#define val first
#define idx second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
typedef long long int lli;
#define vli vector<lli> 
#define fo(i,a,b) for(int i=(a);i<(b);i++)
const int mod = 1000000007;
using namespace std;
lli a,b;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int S[]={6,2,5,5,4,5,6,3,7,6};
		lli sum=0;
		cin>>a>>b;
		lli res=a+b;
	
		while(res)
		{
			sum+=S[res%10];
			res/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
    
