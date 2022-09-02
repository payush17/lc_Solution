class Solution {

    public int numUniqueEmails(String[] emails) {
        Set<String> unique_emails = new HashSet<>();
        for (String eml : emails) {
            StringBuilder email = new StringBuilder(eml);
            for (int i = 0; i < email.length(); i++) {
                if (email.charAt(i) == '+') 
                    email.delete(i, email.indexOf("@"));
                
                else if (email.charAt(i) == '.') {
                    email.deleteCharAt(i);
                }
                if (email.charAt(i) == '@') break;
            }
            unique_emails.add(email.toString());
        }
        return unique_emails.size();
    }
}
