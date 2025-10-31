#include "tic_tac_toe.h"
using std::string;
using std::cin;
using std::cout;

int main()
{
    TicTacToe tic_tac_toe;
    string first_player;

    cout << "Enter first player (X or O): ";
    cin >> first_player;

    tic_tac_toe.start_game(first_player);

    while (!tic_tac_toe.game_over())
    {
        int position;
        cout << "\nPlayer " << tic_tac_toe.get_player() << ", enter position (1-9): ";
        cin >> position;

        tic_tac_toe.mark_board(position);
        tic_tac_toe.display_board();
    }

    cout << "\nGame over! The board is full.\n";
    return 0;
}
