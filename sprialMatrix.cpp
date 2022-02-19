#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        int total = row * col;
        int count = 0;
        
        while(count < total){
            //starting Row
            for(int index = startingCol; index <= endingCol && count < total; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //ending column
            for(int index = startingRow; index <= endingCol && count < total; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //ending row
            for(int index = endingCol; index >= startingCol && count < total; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //starting column
            for(int index = endingRow; index >=startingRow && count < total; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
}

vector<int> spiralOrder2(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;
        
        int total = row * col;
        int count = 0;
        vector<int> ans;
        while(count < total){
            //print starting row
            for(int index = startCol; count < total && index <= endCol; index++) {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;
            
            //print ending col
            for(int index = startRow; count < total && index <= endRow; index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;
            
            //print ending row
            for(int index = endCol; count < total && index >= startCol; index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;
            
            //print starting col
            for(int index = endRow; count < total && index >= startRow; index--){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;            
        }
              
        return ans;
    }

    vector<int> spiralOrder3(vector<vector<int>>& matrix) {
        int left=0, right=matrix[0].size()-1, top=0, bottom=matrix.size()-1;
        vector<int> res;
        int i;
        while(left<=right && top<=bottom){
            //  left
            i=left;
            while(i<=right){
                res.push_back(matrix[top][i++]);
            }  top++;
            if(top>bottom)  break;
            //  down
            i=top;
            while(i<=bottom){
                res.push_back(matrix[i++][right]);
            }  right--;
            if(left>right)  break;
            //  left
            i=right;
            while(i>=left){
                res.push_back(matrix[bottom][i--]);
            }  bottom--;
            if(top>bottom)  break;
            //  upper
            i=bottom;
            while(i>=top){
                res.push_back(matrix[i--][left]);
            }  left++;
        }
        return res;
    }

    vector<int> spiralOrder4(vector<vector<int>> matrix){
            int row = matrix.size(); int col = matrix[0].size();
            int left = 0; int right =  col - 1; int top = 0; int bottom = row - 1;
            int count = 0; int total = row * col;
            vector<int> ans;
            while(count < total){
                //left to right
                for(int index = left; index <= right && count < total; index++){
                    ans.push_back(matrix[top][index]);
                    count++;
                }
                top++;
                //top to bottom (right side)
                for(int index = top; index <= bottom && count < total; index++){
                    ans.push_back(matrix[index][right]);
                    count++;
                }
                right--;
                //right to left (bottom side)
                for(int index = right; index >= left && count < total; index--){
                    ans.push_back(matrix[bottom][index]);
                    count++;
                }
                bottom--;
                //bottom to top (left side)
                for(int index = bottom; index >= top && count < total; index--){
                    ans.push_back(matrix[index][left]);
                    count++;
                }
                left++;
            }
            return ans;
    }

void printVector(vector<int> ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i] << " ";
    }
    cout<<endl;
}

int main()
{
    // vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> result = spiralOrder4(matrix);
    printVector(result);
}