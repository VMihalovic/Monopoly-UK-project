#pragma once

#include "1_Student.h"
//2nd part



class Card {
private:
    string name;
    int type;
    int position;
    Card* nextCard;
public:
    // public methods for Card
    int getType() { return type; }
    Card* getNext() {return nextCard;}
    string getName() { return name; }
    int getPosition(){ return position;}
    Card(): name("Empty Card"), type(-1), position(-1), nextCard(nullptr){};
    Card(std::string cardName, int cardType, int cardPosition, Card* next)
            : name(cardName), type(cardType), position(cardPosition), nextCard(next) {}
};

class Subject : public Card {
private:
    int credit;
    int energy;
    Student* doneBy;
    int homeworkTime;
public:
    // Metody pre predmet
    Student* getOwner();
    bool setOwner(Student &student){ doneBy = &student;}
    int getCredit(){return credit;}
    int getEnergy(){return energy;};
    bool addToPlayer(Student& student);
    Subject(std::string subName, int subPosition, int subCredit, int subEnergy, int subHomeworkTime, Card* next)
            : Card(subName, 0, subPosition, next), credit(subCredit), energy(subEnergy), homeworkTime(subHomeworkTime), doneBy(nullptr) {}
};

class Event : public Card {
public:
    int energy;

    // Metody pre udalosť
    bool ApplyOnPlayer(Student& student);

    Event(std::string eventName, int eventPosition, int eventLiveTime, Card* next)
            : Card(eventName, 1, eventPosition, next), liveTime(eventLiveTime) {}
};
