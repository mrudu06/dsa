class Solution(object):
    def findRelativeRanks(self, score):
        """
        :type score: List[int]
        :rtype: List[str]
        """
        result = {}
        modified_score = sorted(score, reverse=True)
        ptr = 0
        while ptr < len(modified_score):
            result[modified_score[ptr]] = ptr + 1
            ptr += 1
        
        for i, j in result.items():
            if j == 1:
                result[i] = "Gold Medal"
            elif j == 2:
                result[i] = "Silver Medal"
            elif j == 3:
                result[i] = "Bronze Medal"
            else:
                result[i] = str(j)

        f_r = []
        for z in score:
            f_r.append(result[z])

        return f_r
