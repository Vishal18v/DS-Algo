// Online C++ compiler to run C++ program online
#include <iostream>

Class Players{
    name
    symbol
    
    getname
    setname
    getsymbol
    setsymbol
}

Class Board{
    matrix:
    isDiagonalWin();
    isColumnWin();
    isRowWin();
}
    

Class Game{
    board:
    players:
    status:
    
    startgame(){
    status = Gamestatus.RUNNING;
    while(true || status != Gamestatus.finished){
        currPlayer = players.front(); players.pop();
        playerSymbol = getplayersymbol(player);
        input cell number where they want to mark there symbol;
        
        if(board.isWinner(cell)){
            status = GameStatus.finished;
            cout<<player.name<<"wins";
        }
            
        player.push(currPlayer);    
    }
    }
};
    
*/
enum Gamestatus {
    NOT_STARTED,
    RUNNING,
    FINISHED
}

int main(){
    
}
