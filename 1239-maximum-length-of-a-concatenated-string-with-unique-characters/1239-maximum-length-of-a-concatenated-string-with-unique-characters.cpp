class Solution {
public:
	bool compare(string &s1,string &s2){
		vector<bool> f1(26),f2(26);
		for(char c : s1){
			if(f1[c-'a']) return false;
			f1[c-'a'] = true;
		}
		for(char c : s2){ 
			if(f2[c-'a']) return false;
			f2[c-'a'] = true;
		}
		for(int i = 0 ; i < 26 ; i++){
			if(f1[i] && f2[i])
				return false;
		}
		return true;
	}
	int rec(int n,vector<string> &arr,string res = ""){
		if(n == 0) {
			return res.size();
		}
		if(compare(res,arr[n-1])){
			return max(rec(n-1,arr,res+arr[n-1]),rec(n-1,arr,res));
		}
		return rec(n-1,arr,res);
	}
	int maxLength(vector<string>& arr) {
		return rec(arr.size(),arr);
	}
};