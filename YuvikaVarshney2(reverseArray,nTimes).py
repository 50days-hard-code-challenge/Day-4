from  typing import *

def printNtimes(n: int):
    if n==1:
        print("Coding Ninjas ",end="")
    else:
        printNtimes(n-1)
        print("Coding Ninjas ",end="")

    pass 
# Reverse the array
# iterative approach
def reverseArray(n: int, nums: List[int]) -> List[int]:
    # Write your code here
    a=0
    while a<n//2:
        
        nums[a],nums[n-a-1]=nums[n-a-1],nums[a]
        a=a+1
    return nums

# recursive approach

def reverseTheArray(start, end, nums):
    # Base case: If 'end' is less than 'start', the array is already reversed.
    if start > end:
        return

    # Swapping the elements at 'start' and 'end' indices.
    nums[start], nums[end] = nums[end], nums[start]

    # Recursively call the function to reverse the remaining elements.
    reverseTheArray(start + 1, end - 1, nums)

def reverseArray(n, nums):
    # Calling the recursive function to reverse the array.
    reverseTheArray(0, n - 1, nums)

    # Returning the reversed array.
    return nums
