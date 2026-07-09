class Solution(object):
    def addDigits(self, num):
        while num >=10:
            num=sum(int(digit) for digit in str(num))
        return num
        