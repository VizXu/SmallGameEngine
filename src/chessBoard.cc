#include"chessBoard.h"
#include<cstdio>
void ChessBoard::init()
{
  for(int i=0;i<BOARDSIZE;i++)
  {
    for(int j=0;j<BOARDSIZE;j++)
    chessBoard[i][j]='+';
  }
}

void ChessBoard::displayChessBoard()
{
  for(int i=0;i<BOARDSIZE;i++){
    for(int j=0;j<BOARDSIZE;j++){
      printf("%2c",chessBoard[i][j]);
    }
      puts("");
  }
}

bool ChessBoard::isLegal(int _x,int _y)
{
  if(chessBoard[_x][_y]=='#'||chessBoard[_x][_y]=='*')
    return false;
  else
    return true;
}

void ChessBoard::setPos(int _x,int _y,char ch)
{
  chessBoard[_x][_y]=ch;
}
