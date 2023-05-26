class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev=0
        temp=x
        if(x<0):
            return False
        while(x!=0):
            rem=x%10
            rev=rev*10+rem
            x=x//10
        if(rev==temp):
            return True
        else:
            return False