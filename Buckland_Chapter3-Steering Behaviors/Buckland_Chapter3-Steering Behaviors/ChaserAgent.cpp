#include "ChaserAgent.h"
#include "SteeringBehaviors.h"

ChaserAgent::ChaserAgent(GameWorld* world,
	Vector2D	position,
	double		rotation,
	Vector2D	velocity,
	double		mass,
	double		max_force,
	double		max_speed,
	double		max_turn_rate,
	double		scale,
	Vehicle* leader) :	Vehicle(world,
									position,
									rotation,
									velocity,
									mass,
									max_force,
									max_speed,
									max_turn_rate,
									scale),
							m_pLeaderAgent(leader)
{
	Steering()->OffsetPursuitOn(leader, Vector2D(-25,0));
	Steering()->SeparationOn();
}