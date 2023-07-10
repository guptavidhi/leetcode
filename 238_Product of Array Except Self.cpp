class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int all_product=1;
        int zf=0;
        int all_z=0;
        int mult_z=0;



        for(int i=0;i<nums.size();i++){

            if(nums[i]==0){
                zf=1;
                mult_z++;
            }
            else 
                {
                    all_z=1;
                    all_product=all_product*nums[i];
                    }           
        }
        vector<int> output;
        // int temp;
        for(int i=0;i<nums.size();i++){
            cout<<"zf= "<<zf<<" ; all_z = "<<all_z<<" ; nums[i] = "<< nums[i]<< " ; all_prod = "<<all_product<<endl;
            if(zf==0){
                output.push_back(all_product/nums[i]);
            }
            else{
                if(nums[i]==0 && all_z==1 && mult_z == 1){
                    output.push_back(all_product);

                }
                else{
                    output.push_back(0);
                }
            }
            
        }
        return output;
    }
};
