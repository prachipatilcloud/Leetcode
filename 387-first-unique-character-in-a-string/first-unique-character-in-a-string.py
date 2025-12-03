class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        for i,ch in enumerate(s):
            if s.index(ch) == s.rindex(ch):
                return i
        return -1


        