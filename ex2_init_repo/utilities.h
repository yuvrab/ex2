//
// Created by Daniel_Meents on 12/04/2022.
//

#ifndef EX2_UTILITIES_H
#define EX2_UTILITIES_H

#include <iostream>


/*
 * Numeric stats of a card.
 */
struct CardStats{
    int m_force;  // The force of the monster
    int m_loot; // The profit you get when winning a battle or when getting a "Treasure" card
    int m_hpLossOnDefeat; // The amount of hp you lose when losing the battle

    int m_cost; // The cost of a "Buff/Heal" card
    int m_heal; // The amount of HP you get when buying a "HEAL" card
    int m_buff; // The amount of force you get when buying a "BUFF" card

    /*
     * Explicitly declaring the default C'tor.
    */
    CardStats() = default;

    /*
     * Another C'tor of CardStats:
     *
     * @param force - The force of the card (monster).
     * @param hpLoss - HP loss when losing the battle.
     * @param cost - The cost of the card when is type is "Buff" or "Heal".
     * @param heal - The amount of HP is given when buying a "Heal" card.
     * @param buff - The amount of force is given when buying a "Buff" card.
     * @param loot - The profit from winning a battle or when getting a "Treasure" card.
     * @return
     *      New instance of CardStats.
    */
    CardStats(int force, int hpLoss, int cost, int heal, int buff, int loot) {
        this->m_force = force;
        this->m_hpLossOnDefeat = hpLoss;
        this->m_cost = cost;
        this->m_heal = heal;
        this->m_buff = buff;
        this->m_loot = loot;
    }
};

/*
 * Prints info of a Battle card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
void printBattleCardInfo(const CardStats& card);


/*
 * Prints info of a Battle outcomes:
 *
 * @param win - Boolean.
 * @return
 *      void
 */
void printBattleResult(bool win);


/*
 * Prints info of a Buff card:
 *
 * @param win - Is the player won or lost the battle?
 * @return
 *      void
 */
void printBuffCardInfo(const CardStats& card);


/*
 * Prints info of a Heal card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
void printHealCardInfo(const CardStats& card);


/*
 * Prints info of a Treasure card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
void printTreasureCardInfo(const CardStats& card);

/*
 * Prints the details of the player:
 *
 * @param name - The name of the player.
 * @param level - The player's level.
 * @param force - The player's force.
 * @param hp - The player's HP points.
 * @param coins - The player's amount of coins.
 * @return
 *      void
 */
void printPlayerDetails(const char* name, const int level, const int force, const int hp, const int coins);



#endif //EX2_UTILITIES_H
