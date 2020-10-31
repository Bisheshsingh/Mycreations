import math

def add(l1,l2):
    return [l1[0]+l2[0],l1[1]+l2[1]]

def validmove(map):
    moves=[[1,0],[-1,0],[0,-1],[0,1],[1,1],[1,-1],[-1,1],[-1,-1]]
    rng,l=[i for i in range(6)],[]
    for i in range(len(moves)):
        if (add(pos1(map),moves[i])[0] in rng) and (add(pos1(map),moves[i])[1] in rng):
            l.append(moves[i])
    return l

def pos1(map):
    for i in range(6):
        for j in range(6):
            if map[i][j]==1:
                return [i,j]
    
def pos2(map):
    for i in range(6):
        for j in range(6):
            if map[i][j]==2:
                return [i,j]
    return pos1(map)
            
def move(map,pos):
    if map[pos1(map)[0]][pos1(map)[1]]!=5:
          map[pos1(map)[0]][pos1(map)[1]]=0
    map[pos[0]][pos[1]]=1

def distance(map):
    return math.sqrt(math.pow((pos1(map)[0]-pos2(map)[0]),2)+math.pow((pos1(map)[1]-pos2(map)[1]),2))

def printmap(map):
    print()
    print(map[0])
    print(map[1])
    print(map[2])
    print(map[3])
    print(map[4])
    print(map[5])
    print()
    
    
def PathFind(map,d):
    if pos1(map)==pos2(map):
        return d
    best=1000
    for i in validmove(map):
        
        undo=pos1(map)
        if map[add(pos1(map),i)[0]][add(pos1(map),i)[1]]!=5:
            move(map,add(pos1(map),i))
        if distance(map)<best:
            best=distance(map)
            bestmove=i
        move(map,undo)
    move(map,add(pos1(map),bestmove))
    map[undo[0]][undo[1]]=5
    return PathFind(map, d+1)
    
    

map=[[1,0,0,0,0,0],
     [0,0,0,0,0,0],
     [0,0,0,0,0,0],
     [0,0,0,0,0,0],
     [0,0,2,0,0,0],
     [0,0,0,0,0,0]]

print("Steps :",PathFind(map,0))
printmap(map)