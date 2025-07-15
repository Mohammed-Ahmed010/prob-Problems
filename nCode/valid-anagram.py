class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a=[*s]
        b=[*t]
        a.sort()
        b.sort()
        return a==b
    