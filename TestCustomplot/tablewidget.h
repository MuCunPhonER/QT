#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H
#include <QTabWidget>
#include <QtWidgets/QMainWindow>
#include <QTableView>
#include <QtWidgets/QHBoxLayout>
#include <QItemSelection>
#include <QTabWidget>
#include <QtWidgets>


#include "tablemodel.h"

QT_BEGIN_NAMESPACE
class QSortFilterProxyModel;
class QItemSelectionModel;
QT_END_NAMESPACE
class TableWidget:public QTabWidget
{
    Q_OBJECT
public:
    TableWidget(QWidget *parent = 0);

    QTableView *tableView;

    void setupTab();
public slots:
    void showAddEntryDialog();
    void addEntry(QString start, QString end, QString fhwm, QString netArea, QString grossArea, QString centroid, QString uncertainty);
    void removeEntry(int row);
private:
    TableModel* table;
    //QTableView *tableView;
    QBoxLayout *mainlayout;
    QTabWidget *widget;
    QTabWidget *centralwidget;

    QAction *m_pActionCopy;
private slots:
    void copyData();
    void copyData2();

};

#endif // TABLEWIDGET_H
