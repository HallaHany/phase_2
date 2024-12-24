#include "WaterPit.h"



WaterPit::WaterPit(const CellPosition & waterPitPosition):GameObject(waterPitPosition)
{
}

Objectschoise WaterPit::GetType() const
{
	return water_pit;
}

void WaterPit::Draw(Output * pOut) const
{
	pOut->DrawWaterPit(position);
}

void WaterPit::Apply(Grid * pGrid, Player * pPlayer)
{

	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below

// 1- Print a message, make sure to edit this message according to which player wins "You drowned in a water pit. Player (0/1) wins !  Click to continue ..." and wait mouse click
	
	//pGrid->GetOutput()->PrintMessage("You drowned in a water pit.Player " + to_string( );//
	int x, y;
	pGrid->GetInput()->GetPointClicked(x, y);
	pGrid->GetCurrentPlayer();



	// 2- Apply the water pit's effect by setting the player's health which drowned to zero and ending the game//

	pPlayer->SetHealth(0);
	pGrid->SetEndGame(true);

	// 3- Update the players info which is displayed (check Grid class and decide which function to use)//
	string info;
	pPlayer->AppendPlayerInfo(info);
	pGrid->GetOutput()->PrintPlayersInfo(info);
}



void WaterPit::Save(ofstream& OutFile) {
	OutFile << position.GetCellNum();

}
void WaterPit::Load(ifstream& Infile) {
	int cellNum, range;
	Infile >> cellNum >> range;
}

WaterPit::~WaterPit()
{
}
