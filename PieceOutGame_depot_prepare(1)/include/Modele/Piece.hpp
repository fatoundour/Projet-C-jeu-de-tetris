#ifndef PIECE_
#define PIECE_

#include <utility> // pour pair
#include <vector>

#include <iostream> 
using namespace std;

class PieceOperateur;
class Piece{
    public :
	void trigger(const pair<int,int> & coord );
	virtual void trigger(const pair<int,int> & coord , Piece &origin)=0;
	virtual vector<pair<int, int>>& getCoordinates() =0  ;
	virtual void accept(const PieceOperateur &v)=0;
	virtual ~Piece() {} //pour la liaison dynamique
};
#endif