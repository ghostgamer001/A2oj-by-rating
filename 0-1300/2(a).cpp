#include <bits/stdc++.h>
using namespace std;
#define n 5
#define r 3
#define c 3
int row,col;
vector<vector<int>> mat;
class calci{
    public:
    int min=0;
    
    
    void swap(int &x,int &y){
        int temp=x;
        x=y;
        y=temp;
    }
    
    void init(){
        
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
            if(mat[i][j]==0){
                row=i;
                col=j;
            }
        }
    }

    }
    int count(vector<vector<int>> mat,int x,int y){
        if(mat[r][c]==3)return min;
        min++;

        if(x==r || y<r)count(mat,x,y+1);
        if(x==r || y>r)count(mat,x,y-1);
        if(x<r || y<r)count(mat,x+1,y);
        if(x<r || y<r)count(mat,x-1,y);
    }
};
int main(void) {
    
   
    calci obj = calci();
    obj.init();
    cout<<obj.count(mat,row,col);
}

    