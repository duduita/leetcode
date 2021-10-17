#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**
	* Moves to one of the directions (left, right, up, down) and returns false if you can't move and true if you can.
	*/
bool move(string direction);

/**
	* Returns true if there is a cheese in the current cell.
	*/
bool hasCheese();

/**
	* Should return true and leave the mouse at that location or false if we can't find cheese and return the mouse back to where it started.
	*/

bool getCheeseDFS(string direction, pair<int, int> pos, set<pair<int, int>> &visited)
{
	if (visited.find(pos) != visited.end())
		return false;
	else if (hasCheese)
		return true;
	else if (move(direction))
	{
		visited.insert(pos);
		return getCheeseDFS("up", {pos.first, pos.second + 1}, visited) || getCheeseDFS("left", {pos.first - 1, pos.second}, visited) || getCheeseDFS("right", {pos.first + 1, pos.second}, visited) || getCheeseDFS("down", {pos.first, pos.second - 1}, visited);
	}
	return false;
}

bool getCheese()
{
	set<pair<int, int>> visited;
	return getCheeseDFS("up", {0, 0}, visited) || getCheeseDFS("left", {0, 0}, visited) || getCheeseDFS("right", {0, 0}, visited) || getCheeseDFS("down", {0, 0}, visited);
}
