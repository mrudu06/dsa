class Solution(object):
    def maxDivScore(self, nums, divisors):
        """
        :type nums: List[int]
        :type divisors: List[int]
        :rtype: int
        """
        count=[]
        divisors = sorted(divisors)
        for i in divisors:
            sum = 0
            for j in nums:
                if j%i == 0:
                    sum+=1
            # if sum != 0:
            count.append(sum)
        
        op = count.index(max(count))
        output = divisors[op]
        return output

        