cmake_minimum_required(VERSION 3.14)
project(Blackjack_Game C)

set(CMAKE_C_STANDARD 99)

add_executable(Blackjack_Game main.c card.c card.h)