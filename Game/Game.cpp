#include "Game.h"

void Game::start_game(){

    srand(time(nullptr));

    std::cout << "Preprocessing..." << "\n\n";

    Field field(32, 24);
    Player player(field.get_field_size_x()/2, field.get_field_size_y()/2);
    CommandReader reader(&player, &field);


    field.create_field();
    field.clear_field();

    FieldDraw fieldDraw(&field);

    Logger logger;
    Observer observer(&player, &logger);
    Message message;
    ErrorLog errorLog(&field, &player, &message);
    ObjectLog objectLog(&field, &player);
    StatusLog statusLog(&field, &player);

    std::cout << "Select Logging Path:" << "\n";
    std::cout << "1.Console" << "\n";
    std::cout << "2.File" << "\n";
    std::cout << "3.Console & File" << "\n";
    std::cout << "4.W/o logs" << "\n";

    char num = getchar();
    bool log_flag = true;
    FileLog fileLog;
    ConsoleLog consoleLog;

    switch(num){
        case '1':
            logger.add_log(&consoleLog);
            std::cout << "Selected Console Path..." << "\n\n";
            break;
        case '2':
            logger.add_log(&fileLog);
            std::cout << "Selected File Path..." << "\n\n";
            break;
        case '3':
            logger.add_log(&consoleLog);
            logger.add_log(&fileLog);
            std::cout << "Both Paths Selected..." << "\n\n";
            break;
        case '4':
            log_flag = false;
            std::cout << "Log's aren't available" << "\n\n";
            break;
        default:
            std::cout << "Such command does not exist. Using console path...";
            logger.add_log(&consoleLog);
            break;
    }
    char temp = getchar();
    if(log_flag){
        std::cout << "Select Logging Level:" << "\n";
        std::cout << "1.Objects" << "\n";
        std::cout << "2.Game Status" << "\n";
        std::cout << "3.Errors" << "\n";
        std::string str;
        std::cin >> str;
        for(char i: str){
            switch(i){
                case '1':
                    std::cout << "Selected level - " << i << " - Logging Objects..." << "\n\n";
                    observer.add_lvl(&objectLog);
                    logger.add_lvl(&objectLog);
                    break;
                case '2':
                    std::cout << "Selected level - " << i <<  " - Logging Game Status..." << "\n\n";
                    observer.add_lvl(&statusLog);
                    logger.add_lvl(&statusLog);
                    break;
                case '3':
                    std::cout << "Selected level - " << i <<  " - Logging Errors..." << "\n\n";
                    observer.add_lvl(&errorLog);
                    logger.add_lvl(&errorLog);
                    break;
                default:
                    std::cout << "Selected level - " << i << " - Such level does not exist!!!" << "\n\n";
                    break;
            }
        }
        observer.check_status();
    }

    sf::RenderWindow window(sf::VideoMode(fieldDraw.get_window_width(), fieldDraw.get_window_height()), "Lab", sf::Style::Close);

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed) window.close();
            if (player.get_win()) window.close();
            if (player.get_death()) window.close();
        }
        reader.read_from_keyboard();

        if(log_flag) observer.check_game();

        window.clear(sf::Color(0,0,0));
        fieldDraw.draw_field(window);
        window.display();
        sf::sleep(sf::milliseconds(100));
    }
    system("cls");
}