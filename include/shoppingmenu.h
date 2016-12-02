/*************************************************************************
 * AUTHOR	     : Brett Korp, Bryce Hills, Nick Francke, Steve Fajardo
 * PROJECT #1    : Food Fantasy
 * TEAM:         : O Dude
 * CLASS	     : CS1D
 * SECTION       : MW 4:30 P.M.
 * DUE DATE      : 3/16/2016
 ************************************************************************/

#ifndef SHOPPINGMENU_H
#define SHOPPINGMENU_H

#include <QDialog>
#include <queue>
#include <QSpinBox>
#include <QMenu>
#include <QAction>
#include "changeintvalue.h"
#include "shoppingsummarywindow.h"

namespace Ui {
class shoppingMenu;
}

class shoppingMenu : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief shoppingMenu
     * @param sortedRestaurantIndexes the index of restaurants in order of visting priority
     * @param masterList the master restaurant list
     * @param parent the parent window
     */
//    explicit shoppingMenu(stack<string> stadiumPath, StadiumList* masterList,
//                          QStringList selectedStadiums, QWidget *parent = 0);

    /**
     * @brief shoppingMenu Destructor
     */
    ~shoppingMenu();
    /**
     * @brief buildRestaurantSelectionWindow
     */
    void buildRestaurantSelectionWindow();
    /**
     * @brief buildMenuSelectionList
     * @param selectedIndex the index (from masterList) of the restaurant list
     */
    void buildMenuSelectionList(int selectedIndex);
    /**
     * @brief addToCart
     * @param currentIndex the current index from the restaurant list
     */
    void addToCart(int currentIndex);
    /**
     * @brief startSelectingItems
     * @param i index of the restaurant from the restaurant list
     */
    void startSelectingItems(int i);
    /**
     * @brief selectLogo
     * @param idx the index of the restaurant from the restaurant list
     * @return a pixmap from the logo path of the restaurant object
     */
    QPixmap selectLogo(int idx);
    /**
     * @brief buildChoicesFromCart
     * @return  a vector of purchaseChoices built from the QT Tree widget cart
     */
    vector<purchaseChoices*> buildChoicesFromCart();

    bool isInOriginalSelectionsList( int i );

private slots:
    /** SLOT
     * @brief on_buttonBox_accepted
     */
    //void on_buttonBox_accepted();
    void on_next_clicked();
    /** SLOT
     * @brief on_prev_clicked
     */
    void on_prev_clicked();
    /** SLOT
     * @brief on_addToCart_clicked
     */
    void on_addToCart_clicked();
    /** SLOT
     * @brief modifyCartItem
     */
    void modifyCartItem(QAction*);
    /** SLOT
     * @brief on_cart_customContextMenuRequested
     * @param pos position of the right click on the UI
     */
    void on_cart_customContextMenuRequested(const QPoint &pos);
    /** SLOT
     * @brief on_okay_cancel_accepted
     */
    void on_okay_cancel_accepted();

private:
    Ui::shoppingMenu *ui;                   ///The ui window pointer
    StadiumList* selectedRestaurants;    ///The selected restaurants object
    StadiumList* masterStadiumList;   ///The Master restaurant object
    unsigned int idxCounter;                ///the idx counter iterates through selectedRestaurants
    purchaseChoices* choices;             ///A restaurant choices pointer
    double totalDistance;                   ///The totalDistance traveled accumulator
    vector<QString> visitHistory;           ///A vector of QString visitHistory
    QStringList originalSelections;         ///A QT QStringList of originall selected stadiums (check-boxes from trip planner)
};

#endif // SHOPPINGMENU_H