#include "Antenna.h"
#include"Player.h"
int Antenna::AntennaCount = 0;

Antenna::Antenna(const CellPosition & antennaPosition):GameObject(antennaPosition)
{
	AntennaCount++;
}

Objectschoise Antenna::GetType() const
{
	return antenna;
}


void Antenna::Draw(Output * pOut) const
{
	pOut->DrawAntenna(position);
}

int Antenna::GetAntennaCount() {
	return AntennaCount;
}
int Antenna::minusAntennaCount() {
	AntennaCount--;
	return AntennaCount;
  }


void Antenna::Apply(Grid * pGrid, Player * pPlayer)
{

	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below

// 1- Print a message "the antenna will decide the turn of players. Click to continue ..." and wait mouse click( done)
	pGrid->GetOutput()->PrintMessage("the antenna will decide the turn of players. Click to continue ...");
	int x, y;
	pGrid->GetInput()->GetPointClicked(x, y);
	// 2- Apply the antenna effect by following these notes, check grid class and decide which function to use
	//The antenna determines the turn order for players.
	//The distance of each player from the antenna determines his turn order in each rount.
	//Player with the minimum distance[ from the antenna will have the first turn in that round.
	//If there is a tie, player number will break it, for example if player 1 & 2 are in the same cell and they have the same distance from the antenna, player 1 will play first in that round.
	// 3- After deciding the turn of player Print a message indicating which player will play first example: "Player 1 will play first"
	pPlayer->GetCell()->GetCellPosition();
	
	//pGrid->GetOutput()->PrintMessage("Player" + to_string(pPlayer-> );
}
 void Antenna :: Save(ofstream& OutFile) {
	 OutFile << position.GetCellNum();

 }
 void Antenna::Load(ifstream& Infile) {
	 int cellNum, range;
	 Infile >> cellNum >> range;
 }

Antenna::~Antenna()
{
}
