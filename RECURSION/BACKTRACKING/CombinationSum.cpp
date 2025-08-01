#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    set<vector<int>> s;
    void getallcombination(vector<vector<int>> &ans, vector<int> &combination,int target, vector<int>& candidates,int idx){
        if(idx == candidates.size() || target < 0){
            return;
        }
        if(target == 0){
            if(s.find(combination) == s.end()){
            ans.push_back({combination});
            s.insert(combination);
        }
            return;
        }

        combination.push_back(candidates[idx]);
        // single
        getallcombination(ans, combination,target - candidates[idx], candidates,idx+1);

         // multiple
        getallcombination(ans, combination,target - candidates[idx], candidates,idx);

        combination.pop_back();   // backtracking
         // no choice
        getallcombination(ans, combination, target, candidates,idx+1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;

        getallcombination(ans, combination, target, candidates, 0);

        return ans;
    }
};
int main(){
    vector<int> s;
}