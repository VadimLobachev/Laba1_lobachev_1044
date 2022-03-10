#pragma once
#include "Ochered.h"

class ochered_private : private ochered
{
public:
    void dobav_v_konec(int value);
    int& operator[](const int index);
    void ydal_perv();
    float srednegarmon(ochered_private& q);
    int  Getsize() { return size; }
    void copirovanie(ochered_private& q);
    void sliyanie(ochered_private& q, ochered_private& qq);
};


class ochered_protected : protected ochered
{
public:
    void dobav_v_konec(int nomer);
    int& operator[](const int index);
    void ydal_perv();
    float srednegarmon(ochered_protected& q);
    int  Getsize() { return size; }
    void copirovanie(ochered_protected& q);
    void sliyanie(ochered_protected& q, ochered_protected& qq);
};

class ochered_public : public ochered
{
};