#pragma once
#include <QWidget>
namespace Ui {class RedCircle;}

class RedCircle : public QWidget {
	Q_OBJECT

public:
	RedCircle(QWidget * parent = Q_NULLPTR);
	~RedCircle();
	void makeRed();
	void makeGreen();

private:
	Ui::RedCircle *ui;
	QPalette qp;
};
