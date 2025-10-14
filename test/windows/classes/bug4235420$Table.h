#ifndef _bug4235420$Table_h_
#define _bug4235420$Table_h_
//$ class bug4235420$Table
//$ extends javax.swing.JTable

#include <javax/swing/JTable.h>

class bug4235420$Table : public ::javax::swing::JTable {
	$class(bug4235420$Table, $NO_CLASS_INIT, ::javax::swing::JTable)
public:
	bug4235420$Table();
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
	virtual void test();
};

#endif // _bug4235420$Table_h_