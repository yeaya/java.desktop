#ifndef _JListWithScroll_h_
#define _JListWithScroll_h_
//$ class JListWithScroll
//$ extends javax.swing.JList
//$ implements java.awt.dnd.Autoscroll

#include <java/awt/dnd/Autoscroll.h>
#include <java/lang/Array.h>
#include <javax/swing/JList.h>

namespace java {
	namespace awt {
		class Insets;
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JViewport;
	}
}

class $export JListWithScroll : public ::javax::swing::JList, public ::java::awt::dnd::Autoscroll {
	$class(JListWithScroll, $NO_CLASS_INIT, ::javax::swing::JList, ::java::awt::dnd::Autoscroll)
public:
	JListWithScroll();
	using ::javax::swing::JList::getToolTipText;
	using ::javax::swing::JList::contains;
	using ::javax::swing::JList::enable;
	using ::javax::swing::JList::getBounds;
	using ::javax::swing::JList::getSize;
	using ::javax::swing::JList::getLocation;
	using ::javax::swing::JList::firePropertyChange;
	using ::javax::swing::JList::add;
	using ::javax::swing::JList::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($ObjectArray* listData);
	virtual void autoscroll(::java::awt::Point* cursorLoc) override;
	virtual ::java::awt::Insets* getAutoscrollInsets() override;
	virtual ::javax::swing::JViewport* getViewport();
	using ::javax::swing::JList::setUI;
	using ::javax::swing::JList::requestFocus;
	using ::javax::swing::JList::requestFocusInWindow;
	using ::javax::swing::JList::repaint;
	using ::javax::swing::JList::remove;
	using ::javax::swing::JList::list;
	virtual $String* toString() override;
	::java::awt::Insets* scrollInsets = nullptr;
};

#endif // _JListWithScroll_h_