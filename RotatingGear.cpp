#include "RotatingGear.h"
#include "player.h"



RotatingGear::RotatingGear(const CellPosition & gearposition,bool clockwise) : GameObject(gearposition)
{
	isClockWise = clockwise;
}

Objectschoise RotatingGear::GetType() const
{
	return rotating_gear;
}


void RotatingGear::Draw(Output* pOut) const
{
	pOut->DrawRotatingGear(position, isClockWise);
}

void RotatingGear::Apply(Grid* pGrid, Player* pPlayer)
{

	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below
<<<<<<< HEAD
// == Here are some guideline steps (numbered below) to implement this function ==
// 1- Print a message and change the message according to direction of rotation "You have reached a rotating gear, you will rotate (clockwise/ anti-clockwise) Click to continue ..." and wait mouse click
=======
	// == Here are some guideline steps (numbered below) to implement this function ==
	// 1- Print a message and change the message according to direction of rotation "You have reached a rotating gear, you will rotate (clockwise/ anti-clockwise) Click to continue ..." and wait mouse click
<<<<<<< Updated upstream
=======
>>>>>>> 83930bfa231addc6790eed84f7a3c0b550aede24
>>>>>>> Stashed changes
	pGrid->GetOutput()->PrintMessage("You have reached a rotating gear, you will rotate");
	int x, y;
	pGrid->GetInput()->GetPointClicked(x, y);
	//2- Apply the roating gear's effect by rotating the player according to the direction
	//Direction currdirection ;
		//pPlayer->//
<<<<<<< Updated upstream
		
=======
<<<<<<< HEAD


=======
		
>>>>>>> 83930bfa231addc6790eed84f7a3c0b550aede24
>>>>>>> Stashed changes
}


bool RotatingGear::GetisClockWise() const
{
	return isClockWise;
}

void RotatingGear::Save(ofstream& OutFile) {
	OutFile << position.GetCellNum();

}
void RotatingGear::Load(ifstream& Infile) {
	int cellNum, range;
	Infile >> cellNum >> range;
}

RotatingGear::~RotatingGear()
{
}
