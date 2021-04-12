//
// Created by yanick on 2021/4/12.
//

#ifndef IMPL_OO_IN_C_SET_H
#define IMPL_OO_IN_C_SET_H

extern const void *Set;

void *add(void *set, const void *element);

void *find(const void *set, const void *element);

void *drop(void *set, const void *element);

int contains(const void *set, const void *element);


#endif //IMPL_OO_IN_C_SET_H
