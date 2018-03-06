class Solution {
    public int romanToInt(String s) {
        /*
            {"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM"}
        */
        //"MDCCCLXXXIV"
        
        char[] letters = {'I','V','X','L','C','D','M'};
        int[] numbers = {1, 5, 10, 50, 100, 500, 1000};
        
        int num = 0;
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            int j=0;
            while(j<letters.length){
                if(letters[j] == ch) break;
                else j++;
            }  
            if((ch == 'I' || ch == 'X' || ch == 'C') && i+1 < s.length()){
                char nextCh = s.charAt(i+1); 
                
                if(nextCh == letters[j+1]){
                    num += (numbers[j+1] - numbers[j]);
                    i++;
                }
                else if(nextCh == letters[j+2]){
                    num += (numbers[j+2] - numbers[j]);
                    i++;
                }
                else num += numbers[j];
                
            }
            else{
                    num += numbers[j];
            }
                
        }
        
        return num;
    }
}