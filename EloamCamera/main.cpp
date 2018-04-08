#include "Eloamcamera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EloamCamera w;
	w.show();
	return a.exec();
}
