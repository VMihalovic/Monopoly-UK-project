#include "1_Student.h"

Card Student::makeStep(int step){
    if (actCard == nullptr)
        throw MonopolyError("Semester has not started yet");
    auto card = actCard;
    for (int i = step; i > 0; i++){
        card = card->getNext();
        if (card->getPosition() == 1)
            ++weekCounter;
    }
    actCard = card;
    return *card;
}

int Student::getPosition(){
    if (actCard == nullptr)
        throw MonopolyError("Semester has not started yet");
    return actCard->getPosition();
}


bool Student::payForHomework(Student& student, Subject& subject){
    if (subject.getEnergy() >= energy)
        return false;
    if (subject.getName() == "Empty Card")
        throw MonopolyError("Semester has not started yet");
    energy -= subject.getEnergy();
    student.changeEnergy(subject.getEnergy());
    return false;
}

bool Student::passSubject(Subject& subject){
    if (subject.getOwner() != nullptr)
        throw MonopolyMessage("Subject is already passed by another user. Student needs to pay!");
    if (subject.getEnergy() >= getEnergy())
        throw MonopolyMessage("Student does not have energy to pass a subject. Be careful, you may die soon!");
    changeEnergy(-subject.getEnergy());
    addSubject(subject);
    creditCount += subject.getCredit();
    subject.setOwner(*this);
    return true;

}
