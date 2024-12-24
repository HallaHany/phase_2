#include "Flag.h"
int Flag::flagCount = 0;

Flag::Flag(const CellPosition & flagposition) : GameObject(flagposition)
{
	flagCount++;
}

void Flag::Draw(Output* pOut) const
{
	pOut->DrawFlag(position);
}

int Flag:: minusflagcount() {
	flagCount--;
	return flagCount;

}

int Flag::Getflagcount() {
	return flagCount;
}

Objectschoise Flag::GetType() const
{
	return flag;
}



void Flag::Apply(Grid* pGrid, Player* pPlayer)
{
	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below
<<<<<<< HEAD
		// == Here are some guideline steps (numbered below) to implement this function ==
		// 1- Print a message "You have reached a flag. Click to continue ..." and wait mouse click
=======
	// == Here are some guideline steps (numbered below) to implement this function ==
	// 1- Print a message "You have reached a flag. Click to continue ..." and wait mouse click
<<<<<<< Updated upstream
=======
>>>>>>> 83930bfa231addc6790eed84f7a3c0b550aede24
>>>>>>> Stashed changes
	pGrid->GetOutput()->PrintMessage("You have reached a flag. click to continue ...");
	int x, y;
	pGrid->GetInput()->GetPointClicked(x, y);
	// 2- Apply the flag's effect by ending the game
	pGrid->SetEndGame(true);
	//    Review the "pGrid" functions and decide which function can be used for that

}

void Flag::Save(ofstream& OutFile) {
	OutFile << position.GetCellNum();

}
void Flag::Load(ifstream& Infile) {
	int cellNum, range;
	Infile >> cellNum >> range;
}

Flag::~Flag()
{
	flagCount--;
}