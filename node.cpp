// Code written by all group members
// November 2022

#include "node.h"

//Constructors
Node::Node(){
    //Defaults to road if no type
    this->nodeType = 'r';
    this->population = 0;
    this->pollution = 0;
    this->workers = 0;
    this->goods = 0;
}
Node::Node(char nodeType){
    this->nodeType = nodeType;
    this->population = 0;
    this->pollution = 0;
    this->workers = 0;
    this->goods = 0;
}
//Mutators
void Node::SetType(char nodeType){
    this->nodeType = nodeType;
}
void Node::SetPop(int pop){
    this->population = pop;
}
void Node::SetWork(int worker){
    this->workers = worker;
}
void Node::SetPollution(int pollution){
    this->pollution = pollution;
}
//Accessors
char Node::GetType(){
    return this->nodeType;
}
int Node::GetPop(){
    return this->population;
}
int Node::GetWork(){
    return this->workers;
}
int Node::GetPollution(){
    return this->pollution;
}
//Destructors
Node::~Node(){
    //TODO: ADD STUFF
}