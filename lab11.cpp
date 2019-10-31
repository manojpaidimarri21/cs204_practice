#include<iostream>
#include<queue>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define si size()
#define bk back()
#define popb pop_back()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define lb lower_bound
#define ub upper_bound
#define emp empty()
#define beg begin()
#define en end()
#define forl(i,a,n) for(int i=a;i<n;i++)
#define rfor(i,n,a) for(int i=n;i>=a;i--)
#define fore(i,a,n) for(int i
//-------------------------------------------------------------
void add_edge(vector<int>* v,int a,int b)
{
        v[a].push_back(b);
        v[b].push_back(a);
}

bool is_in_queue(queue<int> bfs,int a)
{   queue <int> g = bfs; 
    while (!g.empty()) 
    { 
        if(g.front()!=a)
        g.pop(); 
        else
        return true;
    } 
    return false;
}
//push to queue bfs,a is first node
void push_to_queue(vector<int>* v,int* colour,queue<int> bfs,int a)
{
    int s=v[a].size();
    forl(i,0,s)
    {   
        if((colour[v[a][i]]==-1)&&(is_in_queue(bfs,v[a][i])==false))
        {
            bfs.push(v[a][i]);
        }
    }
     queue <int> g = bfs; 
     cout<<"queue";
    while (!g.empty()) 
    { 
        cout<<g.front()<<" ";
        g.pop();
    } 
    cout<<""<<endl;

    
}
bool is_bipartiate(vector<int>* v,int n)
{
    queue <int> bfs;
    int k;
    int colour[n+1]={-1};
            forl(j,0,n+1)
        {
            colour[j]=-1;
        }
        cout<<"colour";
        forl(j,1,n+1)
        {
            cout<<colour[j];
        }
        cout<<""<<endl;
    bfs.push(1);
    colour[1]=0;
        cout<<"colour";
        forl(j,1,n+1)
        {
            cout<<colour[j];
        }
        cout<<""<<endl;
    int s=v[1].size();
    
    push_to_queue(v,colour,bfs,1);
        queue <int> g = bfs; 
     cout<<"queue";
    while (!g.empty()) 
    { 
        cout<<g.front()<<" ";
        g.pop();
    } 
    cout<<""<<endl;



        forl(i,0,s)
    {
        colour[v[1][i]]=1;
    }
    
            cout<<"colour";
        forl(j,1,n+1)
        {
            cout<<colour[j];
        }
        cout<<""<<endl;
    cout<<"iam"<<endl;
    while(!bfs.empty())
    {   
        k=bfs.front();
        bfs.pop();
     int s=v[k].size();
    forl(i,0,s)
    {
        if(colour[v[k][i]]==-1)
       {
           if(colour[k]==0)
           colour[v[k][i]]=1;
           else
           colour[v[k][i]]=0;
       }
       if(colour[k]-colour[v[k][i]]==0)
       {
           return false;
       }
       
    }
        forl(j,1,n+1)
        {
            cout<<colour[j];
        }
        cout<<""<<endl;
        
        
    }
    return true;
    
    
    
}
int main()
{   //number of vertices and edges
    int n,m,a,b;
    cin>>n;
    cin>>m;
    vector<int> v[n+1];
    //m edges 
    forl(i,0,m)
    {   
        cin>>a;
        cin>>b;
       add_edge(v,a,b);
    }
    if(is_bipartiate(v,n))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
