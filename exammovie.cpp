#include <bits/stdc++.h>

using namespace std;
class movie
{
public:
    int state[5] = {1, 1, 1, 1, 1};
    char *movies[5] = {
        "WolfOfWallStreet",
        "Avengers:Endgame",
        "Avatar",
        "Inception",
        "Tommorow_Land"};
};
class movie_club : public movie
{
public:
    void NameOfMovies()
    {
        cout << "WolfOfWallStreet" << endl;
        cout << "Avengers:Endgame" << endl;
        cout << "Avatar" << endl;
        cout << "Inception" << endl;
        cout << "Tommorow_Land" << endl;
    }
    void rent()
    {
        char name[25];
        cout << "Enter the name of the movie you'd like to rent" << endl;
        scanf("%s", &name);
        for (int i = 0; i < 5; i++)
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
        for (int i = 0; i < 5; i++)
        {
            if (strcmp(movies[i], name) == 0)
            {
                cout << "Thank you " << endl
                     << endl;
                state[i] = 1;
                break;
            }
        }
    }
    void num_movies()
    {
        int num = 0;
        for (int i = 0; i < 5; i++)
            if (state[i] == 1)
                num++;
        cout << num << endl;
    }
};
int main()
{
    string a;
    movie_club obj;
    cout << "Type 'name' to know the name of the movies" << endl;
    cout << "Type 'rent' to rent to rent a movie" << endl;
    cout << "Type 'return' for returning a movie" << endl;
    cout << "and Type 'number' to show the number of movies in the club" << endl;
    while (1)
    {
        cout << "\nHow can we help you" << endl;
        cin >> a;
        if (a == "rent")
            obj.rent();
        else if (a == "name")
            obj.NameOfMovies();
        else if (a == "return")
            obj.give();
        else if (a == "number")
            obj.num_movies();
    }
    return 0;
}