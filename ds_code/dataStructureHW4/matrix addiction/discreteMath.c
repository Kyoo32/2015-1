//
//  discreteMath.c
//  matrix addiction
//
//  Created by Kate KyuWon on 4/30/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//



이산수학3.2-23

첫번째 알고릐즘은 nlogn동작을 하고, 두번째 알고리즘은 n^3/2 동작을 한다. (n은 양의 정수)
비교를 위해 비슷한 형태로 만든다. nlogn, n^3/2.  logn, n^1/2. (logn)^2, n.

1부터 대입해 보면, 0 < 1.
n = 2, 1 < 2.
n = 3, (log3)^2 < 3.
n = 4, 4 = 4.
n = 5, (log5)^2 > 5.
...
n = 8, 9 > 8.
...

n이 4까지는 nlogn가 적거나 같은 시행번 수의 동작을 한다.
그러나 n이 4이상이면서 커져감에 따라 n^3/2 알고리즘이 적은 동작을 한다.


이산수학3.3-1

t := 0
for i := 1 to 3 -> loop가 3번 돈다.
for j := 1 to 4 -> loop가 4번 돈다.
t := t + ij


big - o : 3*4


이산수학3.3-2

t := 0
for i := 1 to n -> loop가 n번 돈다.
for j := 1 to n -> loop가 n번 돈다.
t := t + i + j

big - o : n*n



D.S.1.5.3-7
first function : n^2.
second function : 20n + 4.

n = 1 , 1^2 < 20 + 4
n = 2 , 2^2 < 20*2 + 4
...
n = 20, 20^2 < 20*20 +4
n = 21, 21^2 > 20*21 +4
...

for all n, n>20, (20n + 4) is smaller than (n^2).int



