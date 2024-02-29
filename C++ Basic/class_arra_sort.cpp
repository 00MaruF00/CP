#include <bits/stdc++.h>
using namespace std;

class Cuboid
{
private:
    int length;
    int width;
    int height;

public:
    Cuboid()
    {
    }

    Cuboid(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    int getVolume()
    {
        return length * width * height;
    }
    int getSurfaceArea()
    {
        return 2 * length * width + 2 * width * height + 2 * height * length;
    }
};

bool compare(Cuboid a, Cuboid b)
{
    if (a.getVolume() == b.getVolume())
        return a.getSurfaceArea() < b.getSurfaceArea();
    return a.getVolume() < b.getVolume();
}

int main()
{
    vector<Cuboid> C(5);

    C[0] = Cuboid(2, 3, 1);
    C[1] = Cuboid(2, 1, 1);
    C[2] = Cuboid(2, 4, 1);
    C[3] = Cuboid(7, 3, 1);
    C[4] = Cuboid(2, 3, 9);

    for (int i = 0; i < 5; i++)
    {
        int V = C[i].getVolume();
        cout << V << "\n";
    }

    sort(C.begin() + 0, C.end(), compare);

    cout<<"After Sorting : "<<"\n";

    for(int i =0;i<5;i++)
    {
        int V = C[i].getVolume();
        cout<<V<<"\n";
    }
    return 0;
}
