#include<iostream>
#include<string>

using namespace std;

#define  IDER_DEBUG 1
#define FUNC_TRAC(info) {if(IDER_DEBUG)cout<<"----"<<info<<"----"<<endl;}

class Human;

class Ape;

class Programmer;

class Programmer {
public:
    Programmer(string where = "genius") {
        FUNC_TRAC("Programmer Default Constructor");
        from = where;
    }

private:
    string from;
};

class Human {
public:
    Human(string where = "delivered by Parents") : heart("Human with Training") {
        FUNC_TRAC("Human Default Constructor");
        from = where;
    }

    //选项A
    Human(Ape &a) : heart("Human with Practice") {
        printf("A");
        FUNC_TRAC("Hummer Ape-Promotion Constructor");
        from = "Evolution from an Ape";
    }

    //选项B
    operator Programmer() {
        printf("B");
        FUNC_TRAC("Hummer Programmer-Cast Operator");
        return heart;
    }

    //选项C
    Human &operator=(Human &h) {
        printf("C");
        FUNC_TRAC("Hummer Assignment Operator");
        cout << "Call assignment" << endl;
        return *this;
    }

private:
    string from;
    Programmer heart;
};

class Ape {
public:
    Ape(string where = "from Nature") {
        FUNC_TRAC("Ape Default Constructor");
        from = where;
    }
    //选项D
    Ape &operator=(Programmer &p) {
        FUNC_TRAC("Ape Programmer-Assignment Operator");
        from = "Degeneration from a Programmer";
        return *this;
    }

private:
    string from;
};


int main(void) {
    Ape a;
    Human h = a;        //问题1
    Human h2 = a;     //问题2
    Programmer p = h;    //问题3
    Programmer p0;
    p0 = h;                //问题4
    Ape a2;
    a2 = p;            //问题5
    Ape a3 = p;        //问题6

    return 0;
}
//
// Created by Invalid_index on 2023/5/14.
//
