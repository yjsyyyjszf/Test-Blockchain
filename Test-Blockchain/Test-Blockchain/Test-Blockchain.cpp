// Test-Blockchain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BlockChain.h"
#include "UserInterface.h"

int main() {

	BlockChain bChain = BlockChain();




	UserInterface UI;
	do {
	UI.DisplayMenu(UI.GetCurrentMenu());
	UI.ExecuteCommand(bChain);
	} while (UI.GetLastSelection() != 0);
	return(0);
}