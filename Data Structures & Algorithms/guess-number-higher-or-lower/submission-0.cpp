/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int st = 1 , end = n;
        while(true){
            int m = 1 + (end - st)/2;
            int res = guess(m);
            if(res > 0){
                st = m + 1;
            } else if(res  < 0){
                end = m - 1;
            } else {
                return m;
            }
        }
    }
};