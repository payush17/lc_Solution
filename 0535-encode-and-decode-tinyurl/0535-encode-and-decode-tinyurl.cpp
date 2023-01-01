class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string org_url ="http://tinyurl.com/"+longUrl;
        return org_url;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string org_url="";
        //19 is length of http://tinyurl.com/
        for(int i=19;i<shortUrl.size();i++){
            org_url +=shortUrl[i];
        }
        return org_url;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));