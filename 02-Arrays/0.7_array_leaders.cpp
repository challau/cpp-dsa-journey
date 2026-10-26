#include<bits/stdc++.h>
using namespace std;
class Sloution{
    public:
        vector<int> leaders(vector<int>& arr){

            int n = arr.size();

            vector<int> a;

            int max = arr[n - 1];
            a.push_back(max);

            for(int i = n - 2; i >= 0; i--){
                if(arr[i] >= max){
                    max = arr[i];
                    a.push_back(arr[i]);
                }
            }
            reverse(a.begin(),a.end());
            return a;
        }
};

int main(){
    Sloution obj;

    int n;
    cin >> n;
    vector<int> ar(n);

    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
     vector<int> result = obj.leaders(ar);
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}