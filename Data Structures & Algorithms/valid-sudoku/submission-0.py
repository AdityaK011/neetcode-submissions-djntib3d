class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in board:
            dict =defaultdict(int)
            for j in i:
                if j!=".":
                    dict[j]+=1
                    if dict[j]>1:
                        return False
        row_len=len(board)
        col_len=len(board[0])
        for j in range(col_len):
            dict = defaultdict(int)
            for i in range(row_len):
                if board[i][j]!=".":
                    dict[board[i][j]]+=1
                    if dict[board[i][j]]>1:
                        return False
        for i in range(0,row_len,3):
            for j in range(0,col_len,3):
                dict=defaultdict(int)
                for x in range(i,i+3,1):
                    for y in range(j,j+3,1):
                        if board[x][y]!=".":
                            dict[board[x][y]]+=1
                            if dict[board[x][y]]>1:
                                return False
        return True
