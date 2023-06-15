//                                    made by Nadeem 
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxConsecutiveOnes(int N)
    {
        string s = "";
        //1st step: Converting the given integer to a binary string s
        while (N)
        {
            s += (N % 2) ? '1' : '0';
            N >>= 1;
        }
        /* cout<<s<<" ";
          reverse(s.begin(), s.end());
        s is obtained reversed, you can reverse if needed, 
        but the logic of question doesnt need it */
        int i = 0, ans = 0, len = s.length();

        // Traverse the string
        while (i < len)
        {
            if (s[i] == '1')
            {
                int tmp = 0;
                //As soon as you find a 1, count the number of 1s in this group
                while (i < len && s[i] == '1')
                {
                    tmp++;
                    i++;
                }
                //Update the answer
                ans = max(ans, tmp);
            }
            i++;
        }

        return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.maxConsecutiveOnes(N);
        cout << cnt << endl;
    }
    return 0;
}
