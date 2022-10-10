class Solution {

    public String breakPalindrome(String palindrome) {
        if (palindrome.length() == 1) return "";

        char[] word = palindrome.toCharArray();
        for (int i = 0; i < word.length / 2; i++) {
            if (word[i] != 'a') {
                word[i] = 'a';
                return new String(word);
            }
        }

        word[word.length - 1] = 'b';
        return new String(word);
    }
}
