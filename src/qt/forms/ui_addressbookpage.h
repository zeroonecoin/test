/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelExplanation;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *newAddress;
    QPushButton *copyAddress;
    QPushButton *deleteAddress;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportButton;
    QPushButton *closeButton;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QStringLiteral("AddressBookPage"));
        AddressBookPage->resize(760, 380);
        AddressBookPage->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelExplanation = new QLabel(AddressBookPage);
        labelExplanation->setObjectName(QStringLiteral("labelExplanation"));
        labelExplanation->setTextFormat(Qt::PlainText);
        labelExplanation->setWordWrap(true);

        verticalLayout->addWidget(labelExplanation);

        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newAddress = new QPushButton(AddressBookPage);
        newAddress->setObjectName(QStringLiteral("newAddress"));
        newAddress->setAutoDefault(false);

        horizontalLayout->addWidget(newAddress);

        copyAddress = new QPushButton(AddressBookPage);
        copyAddress->setObjectName(QStringLiteral("copyAddress"));
        copyAddress->setAutoDefault(false);

        horizontalLayout->addWidget(copyAddress);

        deleteAddress = new QPushButton(AddressBookPage);
        deleteAddress->setObjectName(QStringLiteral("deleteAddress"));
        deleteAddress->setAutoDefault(false);

        horizontalLayout->addWidget(deleteAddress);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exportButton = new QPushButton(AddressBookPage);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setAutoDefault(false);

        horizontalLayout->addWidget(exportButton);

        closeButton = new QPushButton(AddressBookPage);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setAutoDefault(false);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("AddressBookPage", "Right-click to edit address or label", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        newAddress->setToolTip(QApplication::translate("AddressBookPage", "Create a new address", 0));
#endif // QT_NO_TOOLTIP
        newAddress->setText(QApplication::translate("AddressBookPage", "&New", 0));
#ifndef QT_NO_TOOLTIP
        copyAddress->setToolTip(QApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyAddress->setText(QApplication::translate("AddressBookPage", "&Copy", 0));
#ifndef QT_NO_TOOLTIP
        deleteAddress->setToolTip(QApplication::translate("AddressBookPage", "Delete the currently selected address from the list", 0));
#endif // QT_NO_TOOLTIP
        deleteAddress->setText(QApplication::translate("AddressBookPage", "&Delete", 0));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("AddressBookPage", "Export the data in the current tab to a file", 0));
#endif // QT_NO_TOOLTIP
        exportButton->setText(QApplication::translate("AddressBookPage", "&Export", 0));
        closeButton->setText(QApplication::translate("AddressBookPage", "C&lose", 0));
        Q_UNUSED(AddressBookPage);
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
