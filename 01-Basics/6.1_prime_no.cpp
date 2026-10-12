#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool p(int n){
            if(n < 2){
                return false;
            }

            int i = 2;
            bool isp = true;
            while(i < n){
                if(n % i == 0){
                    isp = false;
                }
                i++;
            }

            if(isp){
                return true;
            }

        return false;
    }
       
};

int main(){
    Solution s;
    s.p(8);
    return 0;
}
