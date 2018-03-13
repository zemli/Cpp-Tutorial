class Solution {
    public int compress(char[] chars) {
        int length = 0, count = 0;
        boolean hasMulti = false;
        
        for(int i=1; i<chars.length; i++){
            while(i < chars.length && chars[i] == chars[i-1]){
                i++;
                count++;
                hasMulti = true;
            }
            if(hasMulti){
                length += 2;
                chars[i-count] = (char)(count+1+48);
                count = 0;
            }
            else length++;

        }
        
        return length;
    }
}

class Solution {
    public int compress(char[] chars) {
        
        int length = 0, count = 0;
        int locator = 1;
        for(int i=1; i<chars.length; i++){
            if(chars[i] == chars[i-1]){
                while(i < chars.length && chars[i] == chars[i-1]){
                    i++;
                    count++;
                }
                locator++;//leave space for the letter
                if(count/1000 != 0){
                    chars[locator++] = (char)(count/1000+1+48);
                    count %= 1000;
                    length++;
                }
                if(count/100 != 0){
                    chars[locator++] = (char)(count/100+1+48);
                    count %= 100;
                    length++;
                }
                if(count/10 != 0){
                    chars[locator++] = (char)(count/10+1+48);
                    count %= 10;
                    length++;
                }
                chars[locator++] = (char)(count+1+48);
                length += 2;
                count = 0;
            }
            else locator++;
            
        }
        
        return ++length;
    }
}
