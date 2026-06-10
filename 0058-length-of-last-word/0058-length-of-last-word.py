class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        reversed_str=s[::-1]

        counter=0
        for index in range(0,len(reversed_str)):

            if reversed_str[index]==" " and counter==0:
                continue

            if reversed_str[index]==" " and counter!=0:
                break

            counter=counter+1

        return counter

            