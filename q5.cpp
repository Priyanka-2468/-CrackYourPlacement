<<<<<<< HEAD
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int diff=0;
    int mindiff=INT_MAX;
    for(int i=0;i<=n-m;i++){
        int minw=a[i];
        int maxw=a[i+m-1];
        diff=maxw-minw;
        mindiff=min(mindiff,diff);
    }
    return mindiff;
    }   
};
=======
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int diff=0;
    int mindiff=INT_MAX;
    for(int i=0;i<=n-m;i++){
        int minw=a[i];
        int maxw=a[i+m-1];
        diff=maxw-minw;
        mindiff=min(mindiff,diff);
    }
    return mindiff;
    }   
};
>>>>>>> f966c01 (first commit)
