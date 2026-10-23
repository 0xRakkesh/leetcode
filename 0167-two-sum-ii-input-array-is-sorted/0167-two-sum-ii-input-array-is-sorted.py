class Solution:

  def twoSum(self, numbers: list[int], target: int) -> list[int]:
    low = 0
    high = len(numbers) - 1

    while low < high:
      total = numbers[low] + numbers[high]
      if total == target:
        return [low+1, high+1]
      elif total > target:
        high -= 1
      else:
        low += 1

    return []
