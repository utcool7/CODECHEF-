#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void editstrdist(string str1,string str2 ,int m,int n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
            {
                dp[i][j]=j;
            }
            else if(j==0)
            {
                dp[i][j]=i;
            }
            else if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }
        }
    }
    /*for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
        
    }*/
    cout<<dp[m][n];
    
}

    
int main()
{
    string str1 = "azced";
    string str2 = "abcdef";
    editstrdist(str1,str2,str1.length(),str2.length());
    return 0;
}