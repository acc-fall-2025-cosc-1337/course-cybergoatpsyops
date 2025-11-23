#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <memory>

int main()
{
    TicTacToeManager manager;
    std::string choice;

    do
    {
        std::unique_ptr<TicTacToe> game;
        int size;

        std::cout << "Play TicTacToe 3 or 4? ";
        std::cin >> size;

        if (size == 3)
            game = std::make_unique<TicTacToe3>();
        else
            game = std::make_unique<TicTacToe4>();

        std::string first_player;
        std::cout << "Enter first player (X or O): ";
        std::cin >> first_player;

        game->start_game(first_player);
        std::cout << *game;

        while (!game->game_over())
        {
            std::cin >> *game;
            std::cout << *game;
        }

        std::cout << "Winner: " << game->get_winner() << "\n";

        manager.save_game(game);

        int o, x, t;
        manager.get_winner_totals(o, x, t);
        std::cout << "X wins: " << x << "  O wins: " << o << "  Ties: " << t << "\n";

        std::cout << "Play again? (Y/N): ";
        std::cin >> choice;

    } while (choice == "Y" || choice == "y");

    return 0;
}
