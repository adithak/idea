m=input().split()
m=list(map(int,m))
num=m[0]/2
a=m[1]
b=m[2]
d=int(m[0]/a)
e=int(m[0]/b)
c=0
if(m[0]%2==0):
  for i in range(1,d):
    for j in range(1,e):
      if((a*i)+(b*j)==num):
        c=1
if(c==1):
  print('YES')
else:
  print('NO')
