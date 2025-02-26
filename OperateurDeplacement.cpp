#include "../../include/Modele/OperateurDeplacement.hpp"

OperateurDeplacement::OperateurDeplacement(Piece & source, const pair<int,int> & position, OrientationDeplacement sens) : PieceOperateur(source,position) , sens{sens} {};

void OperateurDeplacement::accept(const PieceOperateur &v) { v.visit(*this); }

void OperateurDeplacement::visit(OperateurDeplacement &x) const {
    // le deplacement ne modifie pas le sens
    mapPosition(x.position);
    x.source.accept(*this); 
}

//virtual void visit(OperateurRotation &x) const;
//virtual void visit(OperateurSymetrie &x) const;

void OperateurDeplacement::mapPosition( pair<int, int> & pos) const {
    switch (sens) {
        case OrientationDeplacement::NORD : pos.second--; break;
        case OrientationDeplacement::SUD : pos.second++; break;
        case OrientationDeplacement::EST : pos.first++; break;
        case OrientationDeplacement::OUEST : pos.first--; break;
    }
}