#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '.'){
                cout <<"0";
        }
        else{
            if(str[i] == '-' && str[i+1] == '.'){
                cout <<"1";i++;
                
            }
            else if(str[i] =='-' && str[i+1] == '-'){
            cout <<"2";
            i++;
            }
            
        }
    }
    }