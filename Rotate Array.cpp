#include <iostream>

using namespace std;


class Solution
{
public:
    void rotate(int nums[], int n, int k)
    {
        k = k % n;
        if(k == 0 || n == 1) return;
        int tem[n];
        int j = 0;
        for(int i = n - k; i < n; ++i,++j)
            tem[j] = nums[i];
        for(int i = 0; i <= k ; i++,j++)
            tem[j] = nums[i];
       for(int i = 0; i < n; ++i)
            nums[i] = tem[i];
    }

};
int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int n = 7, k = 3;
    for(int i = 0; i < n; ++i)
        cout<<a[i]<<"  ";
    cout<<endl;

    Solution s;
    s.rotate(a,n,k);
    for(int i = 0; i < n; ++i)
        cout<<a[i]<<"  ";
    cout<<endl;

    return 0;
}
