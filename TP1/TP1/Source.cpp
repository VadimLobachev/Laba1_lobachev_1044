#include "Ochered.h"
#include <iostream>
using namespace std;


ochered::ochered()
{

    head = nullptr;
    size = 0;

}

ochered::~ochered()
{
    while (size != 0)
    {
        uzel* temp = head;
        head = temp->pNext;
        delete temp;
        size--;
    }
}

void ochered::dobav_v_konec(int nomer)
{
    if (head == nullptr)
    {
        head = new uzel(nomer);
    }

    else
    {
        uzel* current = this->head;

        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new uzel(nomer);
    }
    size++;


}


int& ochered::operator[](const int index)
{
    int counter = 0;
    uzel* current = this->head;

    while (current->pNext != nullptr)
    {
        if (counter == index) return current->data;

        current = current->pNext;
        counter++;
    }
}


void ochered::ydal_perv()
{
    uzel* temp = head;
    head = head->pNext;
    delete temp;

    size--;



}



void ochered::copirovanie (ochered& q)
{
    int temp[100];
    uzel* current = q.head;
    for (int i = 0; i < q.size; i++)
    {
        temp[i] = current->data;
        current = current->pNext;
    }

    for (int i = 0; i < q.size; i++)
    {
       dobav_v_konec (temp[i]);
    }

}

void ochered::sliyanie(ochered& q, const ochered& qq)
{
    int temp[100], temp2[100];

    uzel* current = q.head;
    for (int i = 0; i < q.size; i++)
    {
        temp[i] = current->data;
        current = current->pNext;
    }
    int lenght = qq.size + q.size;
    uzel *current2 = qq.head;
    for (int i = q.size; i < lenght; i++)
    {
        temp[i] = current2->data;
        current2 = current2->pNext;
    }

    for (int i = 0; i < lenght; i++)
    {
        dobav_v_konec(temp[i]);
    }


}

float ochered::srednegarmon(ochered& q)
{
   
    
    float inverseSum = 0;
    float result=0;

    uzel* current = q.head;
    for (int i=0; i < q.Getsize(); i++)
    {
       
       
        inverseSum = inverseSum + ((float) 1 / current->data);
        current = current->pNext;
    }
    result =  q.Getsize() / inverseSum;
    return result;
}