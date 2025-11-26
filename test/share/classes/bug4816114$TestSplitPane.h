#ifndef _bug4816114$TestSplitPane_h_
#define _bug4816114$TestSplitPane_h_
//$ class bug4816114$TestSplitPane
//$ extends javax.swing.JSplitPane

#include <javax/swing/JSplitPane.h>

class bug4816114;

class $export bug4816114$TestSplitPane : public ::javax::swing::JSplitPane {
	$class(bug4816114$TestSplitPane, $NO_CLASS_INIT, ::javax::swing::JSplitPane)
public:
	bug4816114$TestSplitPane();
	using ::javax::swing::JSplitPane::contains;
	using ::javax::swing::JSplitPane::enable;
	using ::javax::swing::JSplitPane::getBounds;
	using ::javax::swing::JSplitPane::getSize;
	using ::javax::swing::JSplitPane::getLocation;
	using ::javax::swing::JSplitPane::firePropertyChange;
	using ::javax::swing::JSplitPane::add;
	using ::javax::swing::JSplitPane::getMousePosition;
	void init$(::bug4816114* this$0);
	using ::javax::swing::JSplitPane::setDividerLocation;
	using ::javax::swing::JSplitPane::remove;
	using ::javax::swing::JSplitPane::requestFocus;
	using ::javax::swing::JSplitPane::requestFocusInWindow;
	using ::javax::swing::JSplitPane::repaint;
	using ::javax::swing::JSplitPane::list;
	virtual void setDividerLocation(int32_t location) override;
	using ::javax::swing::JSplitPane::setUI;
	::bug4816114* this$0 = nullptr;
};

#endif // _bug4816114$TestSplitPane_h_