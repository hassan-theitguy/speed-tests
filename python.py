import datetime

before = datetime.datetime.now()

f = open("output.txt", "w")

for x in range(1, 100001):
    print(x)
    f.write(str(x) + "\n")

f.close()

after = datetime.datetime.now()

print (after - before)