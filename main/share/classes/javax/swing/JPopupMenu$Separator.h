#ifndef _javax_swing_JPopupMenu$Separator_h_
#define _javax_swing_JPopupMenu$Separator_h_
//$ class javax.swing.JPopupMenu$Separator
//$ extends javax.swing.JSeparator

#include <javax/swing/JSeparator.h>

namespace javax {
	namespace swing {

class $export JPopupMenu$Separator : public ::javax::swing::JSeparator {
	$class(JPopupMenu$Separator, $NO_CLASS_INIT, ::javax::swing::JSeparator)
public:
	JPopupMenu$Separator();
	using ::javax::swing::JSeparator::contains;
	using ::javax::swing::JSeparator::enable;
	using ::javax::swing::JSeparator::getBounds;
	using ::javax::swing::JSeparator::getSize;
	using ::javax::swing::JSeparator::getLocation;
	using ::javax::swing::JSeparator::firePropertyChange;
	using ::javax::swing::JSeparator::add;
	using ::javax::swing::JSeparator::getMousePosition;
	void init$();
	virtual $String* getUIClassID() override;
	using ::javax::swing::JSeparator::setUI;
	using ::javax::swing::JSeparator::requestFocus;
	using ::javax::swing::JSeparator::requestFocusInWindow;
	using ::javax::swing::JSeparator::repaint;
	using ::javax::swing::JSeparator::remove;
	using ::javax::swing::JSeparator::list;
};

	} // swing
} // javax

#endif // _javax_swing_JPopupMenu$Separator_h_