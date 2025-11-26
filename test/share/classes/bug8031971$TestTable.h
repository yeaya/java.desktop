#ifndef _bug8031971$TestTable_h_
#define _bug8031971$TestTable_h_
//$ class bug8031971$TestTable
//$ extends javax.swing.JTable

#include <javax/swing/JTable.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}

class $export bug8031971$TestTable : public ::javax::swing::JTable {
	$class(bug8031971$TestTable, $NO_CLASS_INIT, ::javax::swing::JTable)
public:
	bug8031971$TestTable();
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
	virtual ::java::util::Hashtable* getDefaultEditorsByColumnClass();
	virtual ::java::util::Hashtable* getDefaultRenderersByColumnClass();
	using ::javax::swing::JTable::setUI;
	using ::javax::swing::JTable::print;
	using ::javax::swing::JTable::requestFocus;
	using ::javax::swing::JTable::requestFocusInWindow;
	using ::javax::swing::JTable::repaint;
	using ::javax::swing::JTable::remove;
	using ::javax::swing::JTable::list;
};

#endif // _bug8031971$TestTable_h_