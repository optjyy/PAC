from collections import deque

result = 0
N, M = list(map(int, input().split()))
# matrix = [['0' for i in range(N+1)] for j in range(N+1)]
# group_infos = [['0' for i in range(N+1)] for j in range(N+1)]
visited = [[False for i in range(M)] for j in range(N)]
matrix = []
moves = [[-1,0],[1,0],[0,-1],[0,1]]
for i in range(N):
	row = list(map(int, input().split()))
	matrix.append(row)
	for j in range(M):
		if row[j] == 1:
			visited[i][j] = True
max_val = 0
r_cand = deque()
c_cand = deque()

for r in range(N):
	for c in range(M):
		if visited[r][c]:
			continue
		val = 0
		r_cand.append(r)
		c_cand.append(c)
		visited[r][c] = True
	
		while r_cand:
			r = r_cand.popleft()
			c = c_cand.popleft()
			if matrix[r][c] == 0:
				val += 1
			else:
				val -= 2
			for move in moves:
				rr = r + move[0]
				cc = c + move[1]
				if (0 <= rr < N) and (0 <= cc < M):
					if (visited[rr][cc] == False):
						r_cand.append(rr)
						c_cand.append(cc)
						visited[rr][cc] = True
		max_val = max(val, max_val)
print(max_val)