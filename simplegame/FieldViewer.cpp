#include "FieldViewer.h"
#include "Game.h"
#include "Player.h"

FieldViewer::FieldViewer(Game* game, Player* player) : _game(*game), _player(*player)
{

}

FieldViewer::~FieldViewer()
{
}

void FieldViewer::printField() noexcept
{
}
