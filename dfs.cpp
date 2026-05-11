#include<iostream>
#include<vector>
using namespace std;

vector<int>g[4]{
    {1,3},{0,2},{1,3},{0,2}
};

int visited[4] = {0};
void dfs(int s){
    visited[s] = 1;
    cout<<s<<" ";
    for(int c : g[s]){
        if(!visited[c]){
            dfs(c);
        }
    }
}
int main(){
    dfs(0);
}