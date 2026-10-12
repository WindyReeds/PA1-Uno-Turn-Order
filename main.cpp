//
// Created by tjsie on 10/10/2026.
//

#include <iostream>
#include "List.h"
#include "Player.h"

int main() {
    // ---- Part 1: required test harness, do not modify ----
    std::cout << "== List<int>: addAnywhere / deleteAnywhere / reverse ==" << std::endl;
    std::unique_ptr<List<int>> nums = makeList<int>();
    nums->addFront(new int(10));
    nums->addFront(new int(20));
    nums->addFront(new int(30));
    nums->print();
    nums->addAnywhere(1, new int(99));
    nums->print();
    nums->deleteAnywhere(2);
    nums->print();
    nums->reverse();
    nums->print();
    std::cout << std::endl << "== List<int>: concat ==" << std::endl;
    std::unique_ptr<List<int>> more = makeList<int>();
    more->addFront(new int(2));
    more->addFront(new int(1));
    more->print();
    nums->concat(more.get());
    nums->print();
    more->print();

    // ---- Part 2: your Uno scene goes below ----
    std::cout << std::endl << "== Uno game ==" << std::endl;

    std::unique_ptr<List<Player>> table1 = makeList<Player>();
    table1->addFront(new Player(0, "Catherine"));
    table1->addFront(new Player(1, "Carlos"));
    table1->addFront(new Player(2, "Craig"));
    table1->addAnywhere(1, new Player(3, "Chudley"));

    table1->print();
    table1->reverse();
    table1->print();
    table1->deleteAnywhere(1);
    table1->print();

    std::unique_ptr<List<Player>> table2 = makeList<Player>();
    table2->addFront(new Player(0, "Gretchen"));
    table2->addFront(new Player(1, "Gertrude"));
    table2->addFront(new Player(2, "Geraldo"));
    table2->print();

    table1->concat(table2.get());
    table1->print();
    table2->print();

    return 0;
}
