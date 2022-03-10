#pragma once
#include <iostream>

class uzel
{
public:
    int data;
    uzel* pNext;

public:
    uzel(int value, uzel* pNext = nullptr)
    {
        this->data = value;
        this->pNext = pNext;
    }

};

class ochered
{

public:
    ochered();
    ~ochered();




public:
    void dobav_v_konec(int nomer);
    int& operator[](const int index);
    float srednegarmon(ochered& q);
    void ydal_perv ();
    int Getsize () { return size; }
    void copirovanie(ochered& q);
    void sliyanie(ochered& q, const ochered& qq);

private:
    uzel* head;
protected:
    int size;
};