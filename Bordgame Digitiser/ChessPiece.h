#pragma once
#include "CONSTANTS.h"
#include "opencv2/core/types.hpp"
public class ChessPiece
{
public:
	ChessPiece(cv::Point2i pos,chessPieces type);
	~ChessPiece();
//setter
	void setPos(cv::Point2i pos); //Sets the coordinates of the piece
//getter
	cv::Point2i getPos();
	int getX();
	int getY();
	chessPieces getType(); 
private:
	chessPieces type; //The type of the chesspiece
	cv::Point2i coordinates; //The coordinates of the piece in the 2d vector
};
