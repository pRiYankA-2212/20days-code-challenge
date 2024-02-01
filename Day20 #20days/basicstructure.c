#include<stdio.h>
int main(){
    struct pokemon// usr define data type 
    {
     int hp;
     int speed;
     int attack;
     char ch;
    } pikachu,charizard;//in one line decilartion
    struct pokemon pikachu;
    //by making the struct in code we can use the data type
    pikachu.attack=60;
    pikachu.ch='v';
    pikachu.hp=20;
    pikachu.speed=10;
    printf("%c\n",pikachu.ch);
    printf("%d",pikachu.hp);
    
    struct pokemon charizad;
    
    charizad.attack=60;
    charizad.ch;
    charizad.hp=20;
    charizad.speed=10;
    

}