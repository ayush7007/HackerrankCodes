#include<iostream>
#include<queue>
#include<cmath>
#include<vector>
using namespace std;

    void extractK(int elements[],int n,int k)
    {
        if(k>n)
        {
            cout<<"n greater than k"<<endl;
            return;
        }

        if(k==n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<elements[i]<<" ";
            }
            cout<<endl;
        }
        priority_queue<int,vector<int>,less<int>> pq;
        int i;
        for(i=0;i<k;i++)
        {
            pq.push(elements[i]);
        }

        int diff= n-k ;

        while(diff>0)
        {
              pq.push(elements[i]);
                pq.pop();
                i++;
                diff--;
        }

        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;

        return;

    }



int main()
{

    int k,n;
    cin>>n;
    cin>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    extractK(arr,n,k);
    delete []arr;
    return 0;

}
