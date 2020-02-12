// Purpose: Simulate a drunken sailor
// @Date 2/12/2020
// @Author Chris Rice

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ArrayWidth 20
#define ArrayHeight 20
enum DIRECTION {NORTH, SOUTH, EAST, WEST}; //possible directions of sailor

int main()
{
    srand(time(NULL));
    int arrayArea[ArrayWidth][ArrayHeight] = { 0 }; //zero out array
    int currentAreaX = ArrayWidth / 2; //set starting point
    int currentAreaY = ArrayHeight / 2; //set starting point
    DIRECTION nextStep;

    for (int i = 0; i < 1000; i++) { //take 1000 steps
        arrayArea[currentAreaX][currentAreaY]++; //add 1 value to current cell
        nextStep = static_cast<DIRECTION>(rand() % 4);

        switch (nextStep) { //append sailor's current placement

        case NORTH:
            if (currentAreaY == ArrayHeight - 1) {
                break;
            }
            currentAreaY++;
            break;
        case SOUTH:
            if (currentAreaY == 0) {
                break;
            }
            currentAreaY--;
            break;
        case EAST:
            if (currentAreaX == ArrayWidth - 1) {
                break;
            }
            currentAreaX++;
            break;
        case WEST:
            if (currentAreaX == 0) {
                break;
            }
            currentAreaX--;
            break;
        }

    }

    for (int x = 0; x < ArrayWidth; x++) { //iterate through 2d array and print

        std::cout << std::endl;

        for (int y = 0; y < ArrayHeight; y++) {

            std::cout << arrayArea[x][y] << ", "; //making of the csv

        }
    }


}

