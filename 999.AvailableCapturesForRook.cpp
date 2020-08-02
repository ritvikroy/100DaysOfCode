class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int res = 0, row = 0, col= 0;
        
        //Search for Rook.
        while(board[row][col] != *"R")
        {
            if(col== 7)
            {
                col = 0;
                row++;
            }
            col++;
        }

        /*Search all four directions and exit loop if 'p' or 'B' is found. */
        //up
        for(int i = row; i >= 0; i--)
        {
            if(board[i][col] == *"p") {res++; break;}
            else if(board[i][col] == *"B") break;
        }

        //down
        for(int i = row; i < 8; i++)
        {
            if(board[i][col] == *"p") {res++; break;}
            else if(board[i][col] == *"B") break;
        }

        //left
        for(int i = col; i >= 0; i--)
        {
            if(board[row][i] == *"p") {res++; break;}
            else if(board[row][i] == *"B") break;
        }

        //right
        for(int i = col; i < 8; i++)
        {
            if(board[row][i] == *"p") {res++; break;}
            else if(board[row][i] == *"B") break;
        }

        return res;
    }
};
