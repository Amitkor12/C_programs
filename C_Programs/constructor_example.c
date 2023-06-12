#include<stdio.h>
#include <stdlib.h>

typedef struct {
    int* factors;
    int order;
} Cpolynom;

void Assign(Cpolynom* dest, const Cpolynom* src) {
    dest->order = src->order;
    dest->factors = (int*)malloc(sizeof(int) * (src->order + 1));
    for (int i = 0; i <= src->order; i++) {
        dest->factors[i] = src->factors[i];
    }
}

Cpolynom* createCpolynom(int order) {
    Cpolynom* poly = (Cpolynom*)malloc(sizeof(Cpolynom));
    poly->order = order;
    poly->factors = (int*)malloc(sizeof(int) * (order + 1));
    return poly;
}

void destroyCpolynom(Cpolynom* poly) {
    free(poly->factors);
    free(poly);
}

void Cpolynom_operator_plus_equal(Cpolynom* self, const Cpolynom* other) {
    if (self->factors == NULL || other->factors == NULL) {
        Cpolynom res;
        Assign(&res, self);
        return;
    }

    int size = (self->order > other->order) ? self->order : other->order;
    Cpolynom res;
    Assign(&res, createCpolynom(size));

    int ownOffs = self->order - 1;
    int resOffs = size - 1;
    int otherOffs = other->order - 1;

    for (int j = 0; j < size; j++) {
        if (ownOffs - j >= 0) {
            res.factors[resOffs - j] += self->factors[ownOffs - j];
        }
        if (otherOffs - j >= 0) {
            res.factors[resOffs - j] += other->factors[otherOffs - j];
        }
    }

    Assign(self, &res);
    destroyCpolynom(&res);
}

int main() {
    // Example usage
    Cpolynom p1;
    p1.order = 3;
    p1.factors = (int*)malloc(sizeof(int) * (p1.order + 1));
    p1.factors[0] = 1;
    p1.factors[1] = 2;
    p1.factors[2] = 3;
    p1.factors[3] = 4;

    Cpolynom p2;
    p2.order = 2;
    p2.factors = (int*)malloc(sizeof(int) * (p2.order + 1));
    p2.factors[0] = 5;
    p2.factors[1] = 6;
    p2.factors[2] = 7;

    Cpolynom_operator_plus_equal(&p1, &p2);

    // Use the modified p1 here...

    free(p1.factors);
    free(p2.factors);

    return 0;
}
