class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        int i;
        int j,k;
        int n=nums.size();
        vector<int>c(n);
        for(i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }

        if(a.size()==0){
            for(i=0;i<n;i++){
                nums[i]=nums[i]*nums[i];
                c[i]=nums[i];
            }
        }
        else if(b.size()==0){
            for(i=0;i<n;i++){
                nums[i]=nums[i]*nums[i];
                c[i]=nums[i];
            }
            std::reverse(c.begin(),c.end());
            
        }
        else{
            for(i=0;i<a.size();i++){
                a[i]=a[i]*a[i];
            }
            for(i=0;i<b.size();i++){
                b[i]=b[i]*b[i];
            }
            std::reverse(a.begin(),a.end());
            j=0,k=0,i=0;
            while(i<a.size() && j<b.size()){
                if(a[i]<=b[j]){
                    c[k]=a[i];
                    k++;
                    i++;
                }
                else{
                    c[k]=b[j];
                    k++;
                    j++;
                }
            }
            while(i<a.size()){
                c[k]=a[i];
                i++;
                k++;
            }
            while(j<b.size()){
                c[k]=b[j];
                j++;
                k++;
            }
        }
        return c;
    }
};