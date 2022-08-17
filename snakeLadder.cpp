// Online C++ compiler to run C++ program online
#include <iostream>

class Snake{
    
};

class Ladder{
    
};

class Board{
    int dimensions;
    map<int,SpecialEntity> specialEntities;
    
    Board();
    printBoard();
    addSpecialEntity(SpecialEntity se){
        specialEntity[getActionPosition()] = se;
    };
    haveSpecialEntity(position){
        if(specialEntities.find(position) != specialEntities.end())
            return specialEntities[position];
    };
    getSpecialEntity();
};

class Game{
    Board board;
    queue<Player> players;
    Dice diceroll;
    GameStatus status;
    
    Game();
    startGame(){
        Gamestatus status = RUNNING;
        while(players.size() > 1)
        {
            Player player = players.front(); players.pop();
            makeMove(player);
            if(player.getPosition() == board.dimensions)
                cout<<player.name << "won";
            else
                players.push(player);
        }
        status = FINISHED;
    };
    
    makeMove(player){
        int currentPos = player.getPosition();
        int targetPos = currentPos + diceroll.roll();
        if(targetPos > board.dimension)
            cout<<"invalid move";
        else(haveSpecialEntity(targetPos))
        {
            targetPos = getSpecialEntity().getEndPosition();
        }
        player.setPosition(targetPosition);
    };
    
    addPlayers(vector<Player>all_players){
        for(auto i:all_players)
            players.push(i);
    };
};

class SpecialEntity{
    int start;
    int end;
    
    abstract getID();
    getActionPosition();
    getEndPosition();
};

class Dice{
    int maxNum;
    
    Dice();
    int roll(){
        return randomnumber(maxNum);
    }
};

class Player{
    int name;
    int position;
};

enum Gamestatus {
    NOT_STARTED,
    RUNNING,
    FINISHED
}

int main(){
    snake1= new snake(12, 4);
    snake2 = new snake(34,28);
    ladder1 = new ladder(45,89);
    ladder2 = new ladder(68,99);
    
    board = new board(100);
    
}
