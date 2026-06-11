class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        num=0
        for digit in digits:
            num=num*10 + digit

        num=num+1
        arr=[]

        while(num > 0):
            rem=num%10
            arr.append(rem)
            num=num//10

        arr=arr[::-1]

        return arr
        