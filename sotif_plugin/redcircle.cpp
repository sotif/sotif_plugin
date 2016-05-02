#include <QPalette>
#include <QLabel>
#include <QHBoxLayout>

#include "redcircle.h"
#include "ui_redcircle.h"

RedCircle::RedCircle(QWidget * parent) : QWidget(parent) {
	ui = new Ui::RedCircle();
	ui->setupUi(this);
	setGeometry(100, 100, 300, 300);
	setWindowTitle("Slop3s ruta");
	QLabel *label = new QLabel(this);
	label->setAlignment(Qt::AlignCenter);
	label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
	QFont font = label->font();
	font.setPointSize(72);
	label->setFont(font);
	QHBoxLayout *layout = new QHBoxLayout();
	label->setText("MIC LIVE");
	layout->addWidget(label);
	setLayout(layout);
}

RedCircle::~RedCircle() {
	delete ui;
}

void RedCircle::makeRed() {
	qp.setColor(QPalette::Background, Qt::red);
	setAutoFillBackground(true);
	setPalette(qp);
	show();
}

void RedCircle::makeGreen() {
//	qp.setColor(QPalette::Background, Qt::green);
//	setAutoFillBackground(true);
//	setPalette(qp);
//	show();

	hide();
}
