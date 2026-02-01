/*4. Write C++ code to represent a hitting game by using OOP concept. The details are as follows: 
This game is being played between two teams (i.e. your team and the enemy team). The total number of players in your team is randomly generated and stored accordingly. The function
generates a pair of numbers and matches each pair. If the numbers get matched, the following message is displayed: “Enemy got hit by your team!” Otherwise, the following message is
displayed: “You got hit by the enemy team!” The number of hits should be equal to the number
of players in your team. The program should tell the final result of your team by counting the hits of both the teams.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Team {
private:
    int players;
    int hits;
public:
    Team(int numPlayers = 0) {
        players = numPlayers;
        hits = 0;
    }
    void setPlayers(int numPlayers) {
        players = numPlayers;
    }
    int getPlayers() {
        return players;
    }
    void addHit() {
        hits++;
    }
    int getHits() {
        return hits;
    }
};
class HittingGame {
private:
    Team yourTeam;
    Team enemyTeam;
public:
    HittingGame() {
        srand(time(0));
        int numPlayers = rand() % 5 + 3; // Random between 3-7 players
        yourTeam.setPlayers(numPlayers);
        enemyTeam.setPlayers(numPlayers);
    }

    void play() {
        cout << "Total No. Of Players in your team: " << yourTeam.getPlayers() << "\n";

        for (int i = 1; i <= yourTeam.getPlayers(); i++) {
            int number1 = rand() % 5 + 1;
            int number2 = rand() % 5 + 1;

            cout << "Pair of numbers:\n";
            cout << "Number1:" << number1 << "\n";
            cout << "Number2: " << number2 << "\n";

            if (number1 == number2) {
                cout << "Enemy got hit by your team!\n";
                yourTeam.addHit();
            } else {
                cout << "You got hit by the enemy team!\n";
                enemyTeam.addHit();
            }
        }

        cout << "Game Over! ";
        if (yourTeam.getHits() > enemyTeam.getHits()) {
            cout << "You won\n";
        } else if (yourTeam.getHits() < enemyTeam.getHits()) {
            cout << "Enemy won\n";
        } else {
            cout << "It's a tie\n";
        }
    }
};

int main() {
    HittingGame game;
    game.play();
    return 0;
}
