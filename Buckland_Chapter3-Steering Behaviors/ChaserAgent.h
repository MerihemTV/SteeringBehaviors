#pragma once
#include "Vehicle.h"
#include "LeaderAgent.h"

class ChaserAgent :	public Vehicle
{
private:
	Vehicle* m_pLeaderAgent;

public:
	ChaserAgent(GameWorld* world,
		Vector2D	position,
		double		rotation,
		Vector2D	velocity,
		double		mass,
		double		max_force,
		double		max_speed,
		double		max_turn_rate,
		double		scale,
		Vehicle* leader);

	~ChaserAgent() {};

	//-------------------------------------------accessor methods
	Vehicle* const Leader()const { return m_pLeaderAgent; }
};