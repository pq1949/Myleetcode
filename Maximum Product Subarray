
/* Topic:
 *
 * Find the contiguous subarray within an array (containing at least one number) which has the largest product.
 *
 * For example, given the array [2,3,-2,4],
 * the contiguous subarray [2,3] has the largest product = 6.
 */

//

#include <iostream>
#include <cassert>
using namespace std;


class Solution {
public:
    int maxProduct(int A[], int n) {
        assert (n > 0);
        int maxLocal = 1,minLocal = 1;
        int res = INT_MIN;
        for(int i = 0;i < n;++i)
        {
            int maxLocalTem = maxLocal;
            maxLocal = max(max(maxLocal * A[i],A[i]),minLocal * A[i]);
            minLocal = min(min(minLocal * A[i],A[i]),maxLocalTem * A[i]);
            res = max(res,maxLocal);
        }
        return res;
    }
};


int main()
{
    int a[4] = {-4,-3,-2};
    Solution s;
    cout<<s.maxProduct(a,3);
    return 0;
}
