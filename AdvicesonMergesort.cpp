#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//princechaurasia @heyiampc
using namespace std;
bool princech(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;
     for (int i=0; i<n1; i++)
    {
       if (str1[i] < str2[i])
          return true;
       if (str1[i] > str2[i])
          return false;
    }
 
    return false;
}
int main() {
    vector<string> pc;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        pc.push_back(s);
    }
    sort(pc.begin(),pc.end(),princech);
    for(auto &x:pc)
        cout<<x<<endl;
    return 0;
}