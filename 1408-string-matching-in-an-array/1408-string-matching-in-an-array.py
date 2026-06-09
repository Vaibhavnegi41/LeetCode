class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        substr=[]
        for first_str in words:
            for second_str in words:
                if first_str in second_str and first_str!=second_str and first_str not in substr:
                    substr.append(first_str)

        return substr

        