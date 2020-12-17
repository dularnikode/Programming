import time
x, y = map(float, input().split())
start_time = time.time()
if (x%5==0 and x<y):
    y=y-x-0.5
    print("%.2f"%y)
else:
    print("%.2f"%y)
print("--- %s seconds ---" % (time.time() - start_time))
