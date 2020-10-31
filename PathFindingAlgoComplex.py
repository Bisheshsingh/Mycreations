def add(l1,l2):
    return [l1[0]+l2[0],l1[1]+l2[1]]

def validmove(map1):
    moves=[[1,0],[-1,0],[0,-1],[0,1]]
    rng,l=[i for i in range(len(map1))],[]
    for i in range(4):
        k=add(pos1(map1),moves[i])
        if (k[0] in rng) and (k[1] in rng) and map1[k[0]][k[1]]!=5 and map1[k[0]][k[1]]!=3:
            l.append(moves[i])
    return l

def pos1(map1):
    for i in range(len(map1)):
        for j in range(len(map1)):
            if map1[i][j]==1:
                return [i,j]
t=[] 
def pos2(map1):
    for i in range(len(map1)):
        for j in range(len(map1)):
            if map1[i][j]==2:
                return [i,j]
    return t
            
def move(map1,pos):
    if map1[pos1(map1)[0]][pos1(map1)[1]]!=5:
          map1[pos1(map1)[0]][pos1(map1)[1]]=0
    map1[pos[0]][pos[1]]=1

def printmap(map1):
    for i in range(len(map1)):
        print(map1[i])
    print()
    
def movesnotavl(map1):
    for i in range(len(map1)):
        if 0 in map1[i]:
            return False
    return True

m1=[]
def PathFind(map1,d,val):
    if pos1(map1)==pos2(map1) or movesnotavl(map1):
        m1.append(d)
        return d
    for i in validmove(map1):
        undo=pos1(map1)
        move(map1,add(pos1(map1),i))
        map1[undo[0]][undo[1]]=5
        cost=PathFind(map1, d+1,val)
        if cost==val and pos1(map1)==pos2(map1):
            printmap(map1)
        move(map1,undo)
    if val=='len':
       return m1

map1=[[1,3,0,0,0,0],
      [0,3,3,0,0,0],
      [0,3,0,0,3,0],
      [0,0,0,0,3,0],
      [0,3,0,0,0,0],
      [2,3,3,3,3,3]]
t=pos2(map1)
length=min(PathFind(map1,0,'len'))
print(length)
PathFind(map1,0,length)