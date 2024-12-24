#include "DangerZone.h"
<<<<<<< Updated upstream
#include"Player.h"
=======
<<<<<<< HEAD
#include"player.h"
=======
#include"Player.h"
>>>>>>> 83930bfa231addc6790eed84f7a3c0b550aede24
>>>>>>> Stashed changes


DangerZone::DangerZone(const CellPosition & dangerZonePosition): GameObject(dangerZonePosition)
{
}

Objectschoise DangerZone::GetType() const{
	return danger_zone;
}
void DangerZone::Draw(Output * pOut) const
{
	pOut->DrawDangerZone(position);
}

void DangerZone::Apply(Grid * pGrid, Player * pPlayer)
{	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below


	// == Here are some guideline steps (numbered below) to implement this function ==

	// 1- Print a message "You have reached a danger zone. Click to continue ..." and wait mouse click
	pGrid->GetOutput()->PrintMessage("You have reached a danger zone. Click to continue ...");

	// 2- Apply the danger zone's effect by reducing the health of the player by 1 
<<<<<<< Updated upstream
	
=======
<<<<<<< HEAD

=======
	
>>>>>>> 83930bfa231addc6790eed84f7a3c0b550aede24
>>>>>>> Stashed changes
	pPlayer->SetHealth((pPlayer->GetHealth() - 1));
	// 3- Update the players info which is displayed (check Grid class and decide which function to use)
	string info;
	pPlayer->AppendPlayerInfo(info);
	pGrid->GetOutput()->PrintPlayersInfo(info);
}

void DangerZone::Save(ofstream& OutFile) {
	OutFile << position.GetCellNum();

}
void DangerZone::Load(ifstream& Infile) {
	int cellNum, range;
	Infile >> cellNum >> range;
}

DangerZone::~DangerZone()
{
}
