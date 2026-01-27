class SubstitutionCipher {
    public static void main(String[] args) {
        String text = "hariprasad";
        String key = "qwertyuiopasdfghjklzxcvbnm";
        String enc = "", dec = "";
        for (char c : text.toCharArray())
            enc += key.charAt(c - 'a');

        for (char c : enc.toCharArray())
            dec += (char) ('a' + key.indexOf(c));
        System.out.println("Encrypted: " + enc);
        System.out.println("Decrypted: " + dec);
    }
}

