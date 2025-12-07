class Solution:
    def countAndSay(self, n: int) -> str:
        if n == 1:
            return "1"
        return self.rle(self.countAndSay(n - 1))

    def rle(self, s: str) -> str:
        result = []
        count = 1
        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                count += 1
            else:
                result.append(f"{count}{s[i - 1]}")
                count = 1
        result.append(f"{count}{s[-1]}")
        return ''.join(result)