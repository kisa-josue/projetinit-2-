/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sauvegarder.h
 * Author: snir2g1
 *
 * Created on 31 mars 2021, 14:49
 */

#ifndef SAUVEGARDER_H
#define SAUVEGARDER_H
#include "lib/pugixml/src/pugixml.hpp"

class sauvegarder {
public:
    sauvegarder();
    sauvegarder(const sauvegarder& orig);
    virtual ~sauvegarder();
    bool enregistrerArgument();
private:

};

#endif /* SAUVEGARDER_H */

