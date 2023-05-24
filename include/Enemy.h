#ifndef ENEMY_H
#define ENEMY_H


class Enemy
{
    public:
        Enemy();
        void setAttackPower(int);

    protected:

    private:
         int attackPower;
};

class Monster: public Enemy {


};
class Ninja: public Enemy{


};

#endif // ENEMY_H
