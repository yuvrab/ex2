//
// Created by Daniel_Meents on 12/04/2022.
//


#include "utilities.h"

using std::cout;
using std::endl;

const char* LINE_DIVIDER  = "------------------------";


void printBattleCardInfo(const CardStats& card){
    cout << "Card drawn:" << endl;
    cout << "Type: Battle" << endl;
    cout << "Force: " << card.m_force << endl;
    cout << "Profit (on win): " << card.m_loot << endl;
    cout << "Damage taken (on loss): " << card.m_hpLossOnDefeat << endl;
    cout << LINE_DIVIDER << endl;
}

void printBattleResult(bool win){
    if (win){
        cout << "The player defeated the monster and won the loot! Hooray!" << endl;
        cout << LINE_DIVIDER << endl;
    } else{
        cout << "After a long battle, the player has fled wounded and failed." << endl;
        cout << LINE_DIVIDER << endl;
    }
}

void printBuffCardInfo(const CardStats& card){
    cout << "Card drawn:" << endl;
    cout << "Type: Buff" << endl;
    cout << "Buff points: " << card.m_buff << endl;
    cout << "Cost: " << card.m_cost << endl;
    cout << LINE_DIVIDER << endl;
}

void printHealCardInfo(const CardStats& card){
    cout << "Card drawn:" << endl;
    cout << "Type: Heal" << endl;
    cout << "Heal points: " << card.m_heal << endl;
    cout << "Cost: " << card.m_cost << endl;
    cout << LINE_DIVIDER << endl;
}

void printTreasureCardInfo(const CardStats& card){
    cout << "Card drawn:" << endl;
    cout << "Type: Treasure" << endl;
    cout << "Coins: " << card.m_loot << endl;
    cout << LINE_DIVIDER << endl;
}

void printPlayerDetails(const char* name, const int level, const int force, const int hp, const int coins){
    cout << "Player Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
    cout << "Force: " << force << endl;
    cout << "HP: " << hp << endl;
    cout << "Coins: " << coins << endl;
    cout << LINE_DIVIDER << endl;
}

