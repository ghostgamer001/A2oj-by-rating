#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    
    vector<int> x,y,z;
    cin >> n;
   
 
    int resx=0,resy=0,resz=0;
    
    for(int i=0;i<n;i++) {
        int a,b,c;
        cin >> a>>b>>c;
        resx+=a;
        resy+=b;
        resz+=c;
    }
    if(resx==0 && resy==0 && resz==0)
    cout<<"YES";
    else
    cout<<"NO";
}