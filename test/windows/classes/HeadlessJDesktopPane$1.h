#ifndef _HeadlessJDesktopPane$1_h_
#define _HeadlessJDesktopPane$1_h_
//$ class HeadlessJDesktopPane$1
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

class HeadlessJDesktopPane$1 : public ::javax::swing::JComponent {
	$class(HeadlessJDesktopPane$1, $NO_CLASS_INIT, ::javax::swing::JComponent)
public:
	HeadlessJDesktopPane$1();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	void init$();
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	using ::javax::swing::JComponent::list;
};

#endif // _HeadlessJDesktopPane$1_h_