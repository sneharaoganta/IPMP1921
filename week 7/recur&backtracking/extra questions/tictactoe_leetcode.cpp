class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
         int countx=0,counto=0,blank=0;  //count of 'X','O',and ' '....
        bool xwin=false,owin=false;   //X,O won or not... 
        int xwon=0,owon=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='X')
                    countx++;
                if(board[i][j]=='O')
                    counto++;
                if(board[i][j]==' ')
                    blank++;
            }
        }
        
         if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X') {xwon++; xwin=true;}
        if(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X') {xwon++; xwin=true;}
        if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X') {xwon++; xwin=true;}
        if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X') {xwon++; xwin=true;}
        if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X') {xwon++; xwin=true;}
        if(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X') {xwon++; xwin=true;}
        if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X') {xwon++; xwin=true;}
        if(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X') {xwon++; xwin=true;}
        //Conditions to Check O's Winning State...
        if(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O') {owon++; owin=true;}
        if(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O') {owon++; owin=true;}
        if(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O') {owon++; owin=true;}
        if(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O') {owon++; owin=true;}
        if(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O') {owon++; owin=true;}
        if(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O') {owon++; owin=true;}
        if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O') {owon++; owin=true;}
        if(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O') {owon++; owin=true;}
        
        if(owon>1||xwon>2||abs(countx-counto)>1||(counto-countx)>0||(owin==true&&xwin==true)||(blank%2==0&&countx<=counto)||(blank%2!=0&&countx!=counto)||(xwin&&countx<=counto)||(owin&&countx!=counto))
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};