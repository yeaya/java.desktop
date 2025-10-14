#ifndef _bug4865918$TestScrollBar_h_
#define _bug4865918$TestScrollBar_h_
//$ class bug4865918$TestScrollBar
//$ extends javax.swing.JScrollBar

#include <javax/swing/JScrollBar.h>

class $export bug4865918$TestScrollBar : public ::javax::swing::JScrollBar {
	$class(bug4865918$TestScrollBar, $NO_CLASS_INIT, ::javax::swing::JScrollBar)
public:
	bug4865918$TestScrollBar();
	using ::javax::swing::JScrollBar::contains;
	using ::javax::swing::JScrollBar::enable;
	using ::javax::swing::JScrollBar::getBounds;
	using ::javax::swing::JScrollBar::getSize;
	using ::javax::swing::JScrollBar::getLocation;
	using ::javax::swing::JScrollBar::firePropertyChange;
	using ::javax::swing::JScrollBar::add;
	using ::javax::swing::JScrollBar::getMousePosition;
	void init$(int32_t orientation, int32_t value, int32_t extent, int32_t min, int32_t max);
	using ::javax::swing::JScrollBar::list;
	virtual void pressMouse();
	using ::javax::swing::JScrollBar::setUI;
	using ::javax::swing::JScrollBar::requestFocus;
	using ::javax::swing::JScrollBar::requestFocusInWindow;
	using ::javax::swing::JScrollBar::repaint;
	using ::javax::swing::JScrollBar::remove;
};

#endif // _bug4865918$TestScrollBar_h_