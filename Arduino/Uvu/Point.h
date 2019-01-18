
//used for points in the grid for planning purposes
class Point
{
  private:
    int x, y;
  public:
    int GetX();
    int GetY();
    void SetX(int in);
    void SetY(int in);
    Point(int X, int Y);
    Point();
    ~Point();
};
