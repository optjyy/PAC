from collections import deque

result = 0
N, M = list(map(int, input().split()))
# matrix = [['0' for i in range(N+1)] for j in range(N+1)]
# group_infos = [['0' for i in range(N+1)] for j in range(N+1)]
visited = [[0 for i in range(M)] for j in range(N)]
matrix = []
candidates = []
moves = [[-1,0],[1,0],[0,-1],[0,1]]
for i in range(N):
	row = list(map(int, input().split()))
	matrix.append(row)
	for j in range(M):
		if row[j] != 1:
			candidates.append([i, j])
max_val = 0
r_cand = deque()
c_cand = deque()

for cand in candidates:
	val = 0
	r, c = cand
	if visited[r][c] == 1:
		continue
	r_cand.clear()
	c_cand.clear()

	r_cand.append(r)
	c_cand.append(c)
	visited[r][c] = 1
	
	while len(r_cand) > 0:
		r = r_cand.popleft()
		c = c_cand.popleft()
		if matrix[r][c] == 0:
			val += 1
		# elif matrix[r][c] == 2:
		else:
			val -= 2
		for move in moves:
			rr = r + move[0]
			cc = c + move[1]
			if rr < 0 or rr >= N or cc < 0 or cc >= M:
				continue
			if (matrix[rr][cc] != 1) and (visited[rr][cc] == 0):
				r_cand.append(rr)
				c_cand.append(cc)
				visited[rr][cc] = 1
	max_val = max(val, max_val)
print(max_val)