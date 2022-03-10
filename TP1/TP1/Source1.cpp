#include "dochernochered.h"
#include <iostream>
using namespace std;

void ochered_protected::dobav_v_konec(int nomer) { return ochered::dobav_v_konec(nomer); }
int& ochered_protected::operator[](const int index) { return ochered::operator[](index); }
void ochered_protected::ydal_perv() { return ochered::ydal_perv(); }
void ochered_protected::copirovanie(ochered_protected& q) { return ochered::copirovanie(q); }
void ochered_protected::sliyanie(ochered_protected& q, ochered_protected& qq) { return ochered::sliyanie(q, qq); }
float ochered_protected::srednegarmon(ochered_protected& q) { return ochered::srednegarmon(q); }


void ochered_private::dobav_v_konec(int nomer) { return ochered::dobav_v_konec(nomer); }
int& ochered_private::operator[](const int index) { return ochered::operator[](index); }
void ochered_private::ydal_perv() { return ochered::ydal_perv(); }
void ochered_private::copirovanie(ochered_private& q) { return ochered::copirovanie(q); }
void ochered_private::sliyanie(ochered_private& q, ochered_private& qq) { return ochered::sliyanie(q, qq); }
float ochered_private::srednegarmon(ochered_private& q) { return ochered::srednegarmon(q); }