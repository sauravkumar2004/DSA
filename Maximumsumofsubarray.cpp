#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> a{2,4,5,7,8,7,4,6,64,34,54};
    int k=4;
    int n=a.size();
    int presum=0;
    for(int i=0;i<k-1;i++){
        presum+=a[i];
    }
    int i=1;
    int j=k;
    int maxsum=INT_MIN;
    while(j<n){
        int currsum=presum+a[i+1]-a[0];
        if(presum<currsum){
            maxsum=currsum;
        }
        presum=currsum;
        i++;
        j++;
    }
    cout<<maxsum;
    
}
