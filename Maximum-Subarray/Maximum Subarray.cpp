#include <iostream>
#include <cstdio>
using namespace std;


class Solution {
public:
    Solution()
    {
        start = end = 0;
    }
    int start,end;
    int maxSubArray(int A[], int n) {
        int res = INT_MIN;
        int tem = 0;
        int start_fake = 0,end_fake = 0;
        for(int i = 0; i < n; ++i)
        {
            //tem = max(A[i],tem + A[i]);
           // res = max(res,tem);
           if(A[i] <= tem + A[i])
           {
               tem = tem +A[i];
               end_fake = i;
           }
           else
           {
               tem = A[i];
               start_fake = i;
               end_fake = i;
           }
           if(res <= tem)
           {
                res = tem;
                start = start_fake;
                end = end_fake;
           }
        }
        return res;
    }
};

int main()
{

   // freopen("in.txt","r",stdin);
//    int a[9] = {-2,1,-3,4,-1,2,1,-5,4};
//    Solution s;
//    cout<<s.maxSubArray(a,9)<<endl;
//    cout<<s.start<<endl<<s.end<<endl;
    int T;
    int a[100000];
    cin>>T;
    for(int i = 1;i <= T ;++i)
    {

        int N;
        Solution s;
        cin>>N;
        for(int j = 0;j < N ;++j)
        {
            cin>>a[j];
        }
        cout<<"Case "<<i<<":"<<endl;
        cout<<s.maxSubArray(a,N)<<" ";
        cout<<s.start + 1<<" ";
        cout<<s.end + 1<<endl;;
        if(i != T)cout<<endl;
    }

    return 0;
}
