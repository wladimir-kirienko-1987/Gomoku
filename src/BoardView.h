#pragma once
#include "Board.h"

class BoardView
{
private:
	Board* board;
	void show();			// ����� ����
public:
	BoardView( Board* b);
	~BoardView();

	void StartGame();		// ������� ����, �������� � �������������
	void TestGame();		// ������� ����, �������� � ����������� ���������

};

