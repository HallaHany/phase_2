#include "Belt.h"


Belt::Belt(const CellPosition & startCellPos, const CellPosition & endCellPos) : GameObject(startCellPos)
{
	this->endCellPos = endCellPos;

	///TODO: Do the needed validation
}

Objectschoise Belt::GetType() const{
	return belt;
}


void Belt::Draw(Output* pOut) const
{
	pOut->DrawBelt(position, endCellPos);
}

void Belt::Apply(Grid* pGrid, Player* pPlayer)
{


	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below

// 1- Print a message "You have reached a belt. Click to continue ..." and wait mouse click
	pGrid->GetOutput()->PrintMessage("You have reached a belt. click to continue ...");
	// 2- Apply the belt's effect by moving the player to the endCellPos
	pGrid->UpdatePlayerCell(pPlayer, *(new CellPosition(endCellPos.GetCellNum())));
	//    Review the "pGrid" functions and decide which function can be used for that

}

void Belt::Save(ofstream& OutFile) {
	OutFile << position.GetCellNum();

}
void Belt::Load(ifstream& Infile) {
	int cellNum, range;
	Infile >> cellNum >> range;
}

CellPosition Belt::GetEndPosition() const
{
	return endCellPos;
}


Belt::~Belt()
{
}
