#ifndef _MyList_h_
#define _MyList_h_
//$ class MyList
//$ extends javax.swing.JList

#include <javax/swing/JList.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class MyList : public ::javax::swing::JList {
	$class(MyList, $NO_CLASS_INIT, ::javax::swing::JList)
public:
	MyList();
	using ::javax::swing::JList::getToolTipText;
	using ::javax::swing::JList::contains;
	using ::javax::swing::JList::enable;
	using ::javax::swing::JList::getBounds;
	using ::javax::swing::JList::getSize;
	using ::javax::swing::JList::getLocation;
	using ::javax::swing::JList::firePropertyChange;
	using ::javax::swing::JList::add;
	using ::javax::swing::JList::getMousePosition;
	void init$();
	using ::javax::swing::JList::list;
	virtual int32_t locationToIndex(::java::awt::Point* location) override;
	using ::javax::swing::JList::setUI;
	using ::javax::swing::JList::requestFocus;
	using ::javax::swing::JList::requestFocusInWindow;
	using ::javax::swing::JList::repaint;
	using ::javax::swing::JList::remove;
};

#endif // _MyList_h_