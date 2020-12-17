for _ in range(int(input())):
		n,m = map(int, input().split())
		height = list(map(int, input().split()))
		color = list(map(int, input().split()))
		blank = [0] * n
		for i in range(n):
			temp = height[i]
			temp2 = color[i]
			print(i+1, temp, temp2)
			for j in range(temp):
				blank[j] = temp2
			
		
		count = 1
		for i in range(n-1):
			if(blank[i] != blank[i+1]):
				count += 1
		print(count)
