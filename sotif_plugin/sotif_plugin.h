#ifndef SOTIF_PLUGIN_H
#define SOTIF_PLUGIN_H

#include <QtWidgets/QMainWindow>
#include "ui_sotif_plugin.h"

class sotif_plugin : public QMainWindow
{
	Q_OBJECT

public:
	sotif_plugin(QWidget *parent = 0);
	~sotif_plugin();

private:
	Ui::sotif_pluginClass ui;
};

#endif // SOTIF_PLUGIN_H
