#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        //if(n<3)
        sort(nums.begin(), nums.end());
        int k=0;
        int min=INT_MAX;
        int res=0;
        for(int k=0; k<n; ++k)
        {
            int i=k+1;
            int j=n-1;
            
            while(i<j)
            {   
                int sum=nums[k]+nums[i]+nums[j];
                int diff=sum-target;
                //cout << diff;
                if (abs(diff)<min) {
                    res=sum;
                    min=abs(diff);
                }
                
                if(diff>0)
                {
                    j--;
                    //while(i<j&&nums[j]==nums[j+1]) j--;
                    continue;
                }
                else if(diff<0)
                {
                    i++;
                    //while(nums[i]==nums[i-1] && i<j) i++;
                    continue;
                }
                else 
                {
                    return target;
                }   
            }
            return res;
        }
}

int main(int argc, char const *argv[])
{
    int myints[] = {1,1,1,0};
    vector<int> a (myints, myints + sizeof(myints) / sizeof(int) );
    //vector<int> a = {1,1,1,0};
    threeSumClosest(a, 100);
    
    return 0;
}