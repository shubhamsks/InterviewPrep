def combination_sum(A, k, res, r = [], i = 0):
	if k < 0:
		return
	if k == 0:
		res.append(r[:])
		return
	while i < len(A) and k - A[i] >= 0:
		r.append(A[i])
		combination_sum(A, k - A[i], res, r, i)
		i += 1
		r.pop()



class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return a list of list of integer
	def combinationSum(self, A, k):
		A = list(set(A))
		A.sort()
		result = []
		current_set = []
		combination_sum(A,k,result)
		return result
	

sol = Solution()
print(sol.combinationSum([10,1,2,7,6,1,5],8))

