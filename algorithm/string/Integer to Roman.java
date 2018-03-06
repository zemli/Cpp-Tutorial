class Solution {
    public String intToRoman(int num) {
        String[][] str = {
            {"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM"}
        };
        String roman = "";
        for(int i=3; i>=0; i--){
            int a = num / (int)Math.pow(10,i);
            //return Integer.toString(a);
            roman += str[i][a];
            num %= (int)Math.pow(10,i);
        }
        roman += str[0][num];
        return roman;
    }
}