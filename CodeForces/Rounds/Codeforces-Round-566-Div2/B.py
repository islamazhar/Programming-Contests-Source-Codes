

dx = [-1, 0, 1]
dy = [-1, 0, 1]
n = 0
m = 0


def check(ii,jj, picture):

    for i in dx:
        for j in dy:
            if abs(i)+abs(j) > 1 : continue

            [x, y] = [ii+i, jj+j]
            # print(x,y)
            if x < 0 or y < 0 or x >= n or y >= m or picture[x][y] != '*':
                # print(i, j)
                return -1

    return 1


if __name__ == "__main__":
    [n,m] = [ int(x) for x in input().split()]
    picture = [ [] for x in range(n)]
    for i in range(n):
        picture[i] = [ cc  for cc in input()]



    # print(picture[0][1])
    star = 0

    for i in range(n):
        for ch in picture[i]:
            if ch == '*':
                star += 1
    res = "NO"
    for i in range(n):
        for j in range(m):
            if check(i, j, picture) == 1:
                #print("Found",i,j)
                c = 0
                for k in range(i-1,-1,-1):
                    if picture[k][j] == '*': c += 1
                    else: break

                for k in range(i+1,n,1):
                    if picture[k][j] == '*': c += 1
                    else: break

                for k in range(j-1,-1,-1):
                    if picture[i][k] == '*': c += 1
                    else: break
                for k in range(j+1,m,1):
                    if picture[i][k] == '*': c += 1
                    else: break

                # print(c, star)
                if c == star-1:
                    res = "YES"
                n = 0
                m = 0

    print(res)