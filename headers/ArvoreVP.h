#ifndef ARVOREVP_H_INCLUDED
#define ARVOREVP_H_INCLUDED

#include <iostream>
#include <string>

#include "NoVP.h"

using namespace std;

class ArvoreVP
{
private:
    NoVP *root;
    void insert(NoVP *n, ProductReview* data);
    void fixInsert(NoVP *n);
    void printInOrder(NoVP *n);

public:
    ArvoreVP();
    ~ArvoreVP();
    void insere(ProductReview *data);
    void rotateLeft(NoVP *n);
    void rotateRight(NoVP *n);
    ProductReview *busca(string userId, string productId);
    void print();
    
};

#endif // ARVOREVP_H_INCLUDED