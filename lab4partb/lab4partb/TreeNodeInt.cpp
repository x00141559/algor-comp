#include "TreeNodeInt.h"

TreeNodeInt::TreeNodeInt(int value) : value(value), rightChild(nullptr), leftChild(nullptr) {}

int TreeNodeInt::getValue() const
{
	return TreeNodeInt::value;
}