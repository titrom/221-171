#pragma once
#include <iostream>
using namespace std;

class Monster
{
public:   
    string name;
    float health;
    float damage;

    /*Monster() { //1-�� ������

        name = "Monster";

        health = 1;

        damage = 1;
    }*/
    Monster(string name, float health, float damage) { //2-�� ������

        this->name = name;

        this->health = health;

        this->damage = damage;

    }
};

