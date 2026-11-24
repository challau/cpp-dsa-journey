// Second Largest

// give an array of positive intergets arr[] return the second largest element from the array. if the second largest element doesn't exist the return -1;

// note: the second element should not be equal to largest element
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getSecondlargest(vector<int> &arr)
    {
        int largest_num = arr[0];
        int second_num = -1;

        for(int i = 0; i < arr.size(); i++) {
            if(largest_num < arr[i]){

                second_num = largest_num;

                largest_num = arr[i];
            }

            if(largest_num != arr[i] && arr[i] > second_num){
                second_num = arr[i];
            }
        }

        return second_num;
    }
};

// time it will take O(n) space O(1);

int main(){
    int n;
    cin >> n;
    Solution obj;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    int lar_num = obj.getSecondlargest(a);

    if(lar_num != -1){
        cout<<"The second largest num is: " << lar_num<<endl;

    }else{
        cout<<"the second sum is not their";
    }
    return 0;
}
