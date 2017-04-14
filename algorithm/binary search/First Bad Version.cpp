// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
		int low = 1, high = n, mid;
		while(low <= high){
			mid = low + (high - low) / 2; // be careful about interger overflow when calculating a+b
						         // or use long long mid = (low + high)/2
			if(!isBadVersion(mid))
				low = mid + 1;
			else{
				if(mid == 1 || !isBadVersion(mid - 1)) //check mid == 1, all the versions are bad, so return mid when it is 1
					return mid;
				else
					high = mid - 1;
			}
		}
    }
};

/*
the max positive value the type 'int' can store is 2147483647(2 ^ 32 - 1) , 
if there are 2147483647 versions than (1 + 2147483647) will overflow and the value wrapped to negative
*/