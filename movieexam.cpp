#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
class movie
{
public:
    int state[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    char *movies[10] = {"Rambo",
                        "Scent_of_a_woman",
                        "Wolf_Of_Wall_Street",
                        "Shawshank_redemption",
                        "Avengers:Endgame",
                        "Kill_Bill_Volume-1",
                        "Kill_Bill_Volume-2",
                        "Parasite",
                        "Inception",
                        "La_La_land"};
};
class movie_club : public movie
{
public:
    void rent()
    {
        char name[25];
        cout << "Enter the name of the movie you'd like to rent" << endl;
        scanf("%s", &name);
        for (int i = 0; i < 10; i++)
        {
            if (strcmp(movies[i], name) == 0 && state[i] == 1)
            {
                cout << "Enjoy your movie" << endl;
                state[i] = 0;
                return;
            }
        }
        cout << "Movie currently rented to another person" << endl;
    }
    void give()
    {
        char name[25];
        cout << "Enter the name of the movie you'd like to return" << endl;
        scanf("%s", &name);
        for (int i = 0; i < 10; i++)
        {
            if (strcmp(movies[i], name) == 0)
            {
                cout << "Thank you sir/mam\n"
                     << endl;
                state[i] = 1;
                break;
            }
        }
    }
    void num_movies()
    {
        int num = 0;
        for (int i = 0; i < 10; i++)
            if (state[i] == 1)
                num++;
        cout << num << endl;
    }
};
int main()
{
    int a;
    movie_club obj;
    cout << "Press 1 to rent,2 for returning a movie" << endl;
    cout << "and 3 to show the number of movies in the club\n"
         << endl;
    while (1)
    {
        cout << "\nHow can we help you" << endl;
        cin >> a;
        if (a == 1)
            obj.rent();
        else if (a == 2)
            obj.give();
        else if (a == 3)
            obj.num_movies();
    }
    return 0;
}
