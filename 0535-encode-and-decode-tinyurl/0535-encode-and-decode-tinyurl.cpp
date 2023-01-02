class Solution {
public:
    unordered_map<string,string> map;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string str="";
        str += (char)(rand()%89);
        while(map.find(str)!=map.end()){
            str += (char)(rand()%89);
        }
        map[str]=longUrl;
        return str;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       return map[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));