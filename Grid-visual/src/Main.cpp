#include <iostream>
#include <string> 
#include <sstream>
#include <QApplication>
#include <QDebug>
#include <vector>
#include <QStringList>
#include <vizkit3d/QtThreadedWidget.hpp>
#include <vizkit3d/Vizkit3DWidget.hpp>
#include<vizkit3d/GridVisualization.hpp>



int main(int argc, char** argv)
{
   QtThreadedWidget<vizkit3d::Vizkit3DWidget>thread;
    thread.start();

    vizkit3d::Vizkit3DWidget* widget = thread.getWidget();
    //QStringList* plugins = widget->getAvailablePlugins(); //QStringList* return type
    widget->loadPlugin("vizkit3d","GridVisualization");
    widget->show();
     
    while(true) 
    {

    }

    return 0;
}
  
