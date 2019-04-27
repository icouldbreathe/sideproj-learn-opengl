#include "Engine/Engine.h"
#include "Engine/Window.h"
#include <stdio.h>
#include <string>
#include <iostream>

uint32_t WINDOW_WIDTH = 800;
uint32_t WINDOW_HEIGHT = 800;

int _main (int argc, char *argv[]) {

    Window *myWindow = nullptr;





    Engine *myEngine = nullptr;
    myEngine = new Engine(WINDOW_WIDTH, WINDOW_HEIGHT);
    myEngine->Run();
    delete myEngine;


    return 0;
}

