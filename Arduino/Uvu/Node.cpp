#include "Node.h"
Node::Node(int cost, int inHeurestic) {
  costToTargetSquare = cost;
  heurestic = inHeurestic;
  totalCost = heurestic + costToTargetSquare;
}

int Node::GetCostToTargetSquare() {
  return totalCost;
}
int Node::GetHeurestic() {
  return heurestic;
}
int Node::GetTotalCost() {
  return totalCost;
}
void Node::SetHeurestic(int input) {

}
void Node::SetCostToTargetSquare(int input) {

}
