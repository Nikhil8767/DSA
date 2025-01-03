class Solution {
public:
    int binary(vector<int>arr,int target){
	int n=arr.size();
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==target){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]>target){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=(s+e)/2;
	}
	return ans;
}

int binarys(vector<int>arr,int target){
	int n=arr.size();
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==target){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]>target){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>tempp;
        tempp.push_back(binary(nums,target));
        tempp.push_back(binarys(nums,target));
       return tempp;
    }
};