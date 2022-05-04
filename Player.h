#ifndef PLAYER_H
#define PLAYER_H


class Player{
   const char* m_name; // May only include english letters and no spaces.
   int m_level; // Can only be in range of 1-10
   int m_force; // Any natural number
   int m_maxHP; // Any natural number
   int m_HP; // Any natural number in range of 0-maxHP
   int m_coins; //Any not-negative number
    


     public:
    /*
     * C'tor of Player class
     * @param force - The force of the player. default is 5
     * @param maxHP - The max HP of the payer. default is 100
     * @param name - The name of the Player
     *    Creates a new player instance
     */
    Player(char* name,int maxHP,int force);


    /*
     * Copy c'tor of Player class
     * @param Player1 - The instace of Player that you copy from
     *   Copies a player instance  
     */
    Player(const Player& player1);


    /*
     * Destructor of the Player class
     *   Destroys an instance of a Player
     */
    ~Player();

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
    void printPlayerInfo(const char* name, int level, int force, int hp, int coins);
    /*
     * Levels up the player
     * Doesn't do anything if the Player is already at level 10
     * @return void
     */
    void levelUp();


    /*
     * Gets the level of the Player
     * @return int
     */
    int getLevel();

    /*
     * Increases the force of the Player by the given number
     * @param force - The number to increase force by
     * @return void
     */
    void buff(int force);


    /*
     * Increases the HP of the Player by the given number, up to the Player's max HP
     * @param HP - The number to increase HP by
     * @return void
     */
    void heal(int HP);


    /*
     * Decreases the HP of the Player by the given number, but not below 0.
     * @param damage - The number to increase HP by
     * @return void
     */
    void damage(int damage);


    /*
     * Checks if the Hp of the player is 0
     * @return bool
     */
    bool isKnockedOut();


    /*
     * Adds coins to the player by the given amount
     * @param coins - The amount to increase coins by
     * @return void
     */
    void addCoins(int coins);

    /*
     * Pays coins if possible, and returns true if pay succeeded or flase otherwise
     * Doesn't pay coins if Player doesn't have enough coins
     * @param cost - The amount to decrease coins by
     * @return bool
     */
    bool pay(int cost);


    /*
     *Gets the attack strength of Player
     *Attack strength is defined to be: the level of the player + the force of the player
     *@return int
     */
    int getAttackStrength();

#endif //PLAYER_H