
class Node
{
private:
    int costToTargetSquare; //cost of going from current square to target square
    int heurestic; //approximation cost of getting to the end from current square. 
    int totalCost;

public:
    Node(int cost, int inHeurestic);
    ~Node();
    int GetCostToTargetSquare();
    int GetHeurestic();
    int GetTotalCost();
    void SetHeurestic(int input);
    void SetCostToTargetSquare(int input);
};