class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            list<char> rowList;
            list<char> colList;
            for (int j = 0; j < 9; j++) {
                char rowVal = board[i][j];
                char colVal = board[j][i];
                if (rowVal != '.' && find(rowList.begin(), rowList.end(), rowVal) != rowList.end()) {
                    return false;
                }
                if (colVal != '.' && find(colList.begin(), colList.end(), colVal) != colList.end()) {
                    return false;
                }
                if (rowVal != '.') {
                    rowList.push_back(rowVal);
                }
                if (colVal != '.') {
                    colList.push_back(colVal);
                }
            }
        }
        // Add logic to check for repeats in 3x3 sub-boxes
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                list<char> boxList;
                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {
                        char boxVal = board[i + x][j + y];
                        if (boxVal != '.' && find(boxList.begin(), boxList.end(), boxVal) != boxList.end()) {
                            return false;
                        }
                        if (boxVal != '.') {
                            boxList.push_back(boxVal);
                        }
                    }
                }
            }
        }
        return true;
    }
};