//
//  알고리즘교재숙제.c
//  cTree
//
//  Created by Kate KyuWon on 6/3/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//



12.3-3

worst case는 숫자입력을 오름차순이나 내림차순으로 하는 경우이다.
skewed tree가 된다.

best case는 full tree or complete tree가 되게 숫자를 입력하는 경우이다.

12.3-6

tree-delete 함수에서 predecessor를 mvNode로 하려면, successor로 했던 경우를 반대로 생각하면 된다.

left, right 같은 우선순위로 두려면 left와 right의 노드갯수를 비교해 더 큰 쪽이 삭제되는 함수를 생각할 수 있다.
혹은 번갈아 가면서 삭제할 수 있다.

red black tree

12.2-1

c와 e가 불가능하다.


12.2-5
successor란 노드의 오른쪽 서브트리에서 가장 작은 값이다.
만일 successor에 left child가 있다면, 이 left child가 successor보다 작은 값을 가진다. (모순)

predecessor란 노드의 왼쪽 서브트리에서 가장 큰 값이다.
만일 predecessor에 right child가 있다면, 이 right child가 predecessor보다 큰 값을 가진다. (모순)