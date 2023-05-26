class Solution:
    def reverse(self, x: int) -> int:
        t=0
        s=1
        k=x

        if k<0:
            x=abs(x)
            s=-1
        while x>0:
            b=x%10
            t=t*10+b
            x=x//10
        if t>pow(2,31):
            return 0
        else:
            return t*s