#include "player.h"
#include <iostream>

using std::cout;
using std::endl;

const char* LINE_DIVIDER  = "------------------------";
const int DEFAULT_HEALTH=100;
const int DEFAULT_FORCE=5;

Player::Player(char* name,int maxHP=DEFAULT_HEALTH,int force=DEFAULT_FORCE)
{
    m_name=name; 
    m_force=force;
    m_maxHP=maxHP;
    m_coins=0;
    m_HP=maxHP;
}

Player::Player(const Player& player1):
m_level(player1.m_level),
m_name(player1.m_name),
m_maxHP(player1.m_maxHP),
m_force(player1.m_force),
m_HP(player1.m_HP),
m_coins(player1.m_coins)
{
}

Player& Player::operator=(const Player& player1)
{
    if(this==&player1)
    {
        return *this;
    }
    delete[] m_name;
    m_name=player1.m_name;
    m_coins=player1.m_coins;
    m_force-=player1.m_force;
    m_HP=player1.m_HP;
    m_maxHP=player1.m_maxHP;
    m_level=player1.m_level;
    return *this;

}

Player::~Player()
{
    //need to check
    delete[] m_name;
}

void printPlayerInfo(const char* name, const int level, const int force, const int hp, const int coins){
    cout << "Player Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
    cout << "Force: " << force << endl;
    cout << "HP: " << hp << endl;
    cout << "Coins: " << coins << endl;
    cout << LINE_DIVIDER << endl;
}

void Player::levelUp()
{
    m_name+=1;
    return;
}

int Player::getLevel()
{
    return m_level;
}

void Player::buff(int force)
{
    if(force<0)
    {
        force=0;
    }
    m_force+=force;
    return;
}

void Player::heal(int HP)
{
    if(HP<0)
    {
        HP=0;
    }
    int current=m_HP+HP;
    if(current>m_maxHP)
    {
        m_HP=m_maxHP;
    }
    else
    {
        m_HP=current;
    }
    return;
}

void Player::damage(int damage)
{
    if(damage>0)
    {
        damage=0;
    }
    int current=m_HP-damage;
    if(current<0)
    {
        m_HP=0;
    }
    else
    {
        m_HP=current;
    }
    return;
}

bool Player::isKnockedOut()
{
    if(m_HP==0)
    {
        return true;
    }
    return false;
}

void Player::addCoins(int coins)
{
    if(coins<0)
    {
        coins=0;
    }
    m_coins+=coins;
    return;
}

bool Player::pay(int cost)
{
    if(cost<0)
    {
        cost=0;
    }
    if(m_coins-cost<0)
    {
        return false;
    }
    else
    {
        m_coins-=cost;
        return true;
    }
}

int Player::getAttackStrength()
{
    return m_level+m_force;
}