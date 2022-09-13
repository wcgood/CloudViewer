
#include <vtkoutputwindow.h>

#include "CloudViewer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
  vtkOutputWindow::SetGlobalWarningDisplay(0);
  QApplication a(argc, argv);
  CloudViewer w;
  w.show();
  return a.exec();
}

