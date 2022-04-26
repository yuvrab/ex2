//
// Created by Daniel_Meents on 07/04/2022.
//

#ifndef EX2_GAME_H
#define EX2_GAME_H
#include "Card.h"
#include <iostream>

/*
 * GameStatus:
 * RoundStart - The start of a round. Happens at the beginning of a game and after an encounter.
 * CardDrawn - A card was drawn, happens before the encounter.
 * Win - The player reached level 10.
 * Loss - The player's HP is 0.
*/
enum class GameStatus{Win, Loss, RoundStart, CardDrawn};

class Mtmchkin {
private:
    //TODO: complete the Mtmchkin class.

public:

    /*
     * C'tor of the game:
     *
     * @param playerName - The name of the player.
     * @param cardsArray - A ptr to the cards deck.
     * @param numOfCards - Num of cards in the deck.
     * @result
     *      An instance of Mtmchkin
    */
    Mtmchkin(const char* playerName, const Card* cardsArray, int numOfCards);


    /*
     * Draw the next Card from the deck:
     *
     * @return
     *      void
    */
    void drawCard();


    /*
     * Encounter the current card and check if the game ended:
     *
     * @return
     *      void
    */
    void encounter();


    /*
     *  Check if the game ended:
     *
     *  @return
     *          True if the game ended
     *          False otherwise
     */
    bool isOver();


    /*
     *  Get the status of the game:
     *
     *  @return
     *          GameStatus - the current status of the running game
     */
    GameStatus getGameStatus() const;


    /*
     * Print the info of the game.
     * First, print the player's details. Then, print current card info.
     *
     * @return
     *      void
     */
    void printGameInfo() const;

};


#endif //EX2_GAME_H
