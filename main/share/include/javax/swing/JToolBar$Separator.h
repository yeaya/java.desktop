#ifndef _javax_swing_JToolBar$Separator_h_
#define _javax_swing_JToolBar$Separator_h_
//$ class javax.swing.JToolBar$Separator
//$ extends javax.swing.JSeparator

#include <javax/swing/JSeparator.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace javax {
	namespace swing {

class $import JToolBar$Separator : public ::javax::swing::JSeparator {
	$class(JToolBar$Separator, $NO_CLASS_INIT, ::javax::swing::JSeparator)
public:
	JToolBar$Separator();
	using ::javax::swing::JSeparator::contains;
	using ::javax::swing::JSeparator::enable;
	using ::javax::swing::JSeparator::getBounds;
	using ::javax::swing::JSeparator::getSize;
	using ::javax::swing::JSeparator::getLocation;
	using ::javax::swing::JSeparator::firePropertyChange;
	using ::javax::swing::JSeparator::add;
	using ::javax::swing::JSeparator::getMousePosition;
	void init$();
	void init$(::java::awt::Dimension* size);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::java::awt::Dimension* getSeparatorSize();
	virtual $String* getUIClassID() override;
	using ::javax::swing::JSeparator::requestFocus;
	using ::javax::swing::JSeparator::requestFocusInWindow;
	using ::javax::swing::JSeparator::repaint;
	using ::javax::swing::JSeparator::remove;
	using ::javax::swing::JSeparator::list;
	virtual void setSeparatorSize(::java::awt::Dimension* size);
	using ::javax::swing::JSeparator::setUI;
	::java::awt::Dimension* separatorSize = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToolBar$Separator_h_