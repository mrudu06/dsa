class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        op = []
        rows = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
        
        for word in words:
            lower_word = word.lower()
            for row in rows:
                if all(char in row for char in lower_word):
                    op.append(word)
                    break
        return op


# Example usage
s = Solution()
result = s.findWords(["Alaska", "Dad", "Peace", "Type"])
print(result)
