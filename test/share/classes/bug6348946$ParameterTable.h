#ifndef _bug6348946$ParameterTable_h_
#define _bug6348946$ParameterTable_h_
//$ class bug6348946$ParameterTable
//$ extends javax.swing.JTable

#include <javax/swing/JTable.h>

class bug6348946$ParameterTable : public ::javax::swing::JTable {
	$class(bug6348946$ParameterTable, $NO_CLASS_INIT, ::javax::swing::JTable)
public:
	bug6348946$ParameterTable();
	using ::javax::swing::JTable::getToolTipText;
	using ::javax::swing::JTable::contains;
	using ::javax::swing::JTable::enable;
	using ::javax::swing::JTable::getBounds;
	using ::javax::swing::JTable::getSize;
	using ::javax::swing::JTable::getLocation;
	using ::javax::swing::JTable::firePropertyChange;
	using ::javax::swing::JTable::add;
	using ::javax::swing::JTable::getMousePosition;
	void init$();
	using ::javax::swing::JTable::setUI;
	using ::javax::swing::JTable::print;
	using ::javax::swing::JTable::requestFocus;
	using ::javax::swing::JTable::requestFocusInWindow;
	using ::javax::swing::JTable::repaint;
	using ::javax::swing::JTable::remove;
	using ::javax::swing::JTable::list;
};

#endif // _bug6348946$ParameterTable_h_