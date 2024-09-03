#include "room.h"
#include <random>


void Room::generateroomnamba() {
	int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
	std::random_device jenereta;
	std::mt19937 gen(jenereta());
	std::uniform_int_distribution<> namba(1000, 9999);

	auto room_number = namba(gen);
	
	roomnamba = room_number;
}
int Room::getroomnamba() {
	return roomnamba;
};