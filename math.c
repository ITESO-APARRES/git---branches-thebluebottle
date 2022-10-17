//
//  math.c
//  funciones matematicas
//
//  Created by Brandon Mendoza Medina on 16/10/22.
//

#include "math.h"

int dobleInt(int a) {
    if(a > MAX_INT) {
        return -1;
    }
    return a*2;
}
