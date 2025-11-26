#ifndef _FontSetToNull$1_h_
#define _FontSetToNull$1_h_
//$ class FontSetToNull$1
//$ extends javax.swing.JSpinner

#include <javax/swing/JSpinner.h>

namespace java {
	namespace awt {
		class Font;
	}
}

class FontSetToNull$1 : public ::javax::swing::JSpinner {
	$class(FontSetToNull$1, $NO_CLASS_INIT, ::javax::swing::JSpinner)
public:
	FontSetToNull$1();
	using ::javax::swing::JSpinner::contains;
	using ::javax::swing::JSpinner::enable;
	using ::javax::swing::JSpinner::getBounds;
	using ::javax::swing::JSpinner::getSize;
	using ::javax::swing::JSpinner::getLocation;
	using ::javax::swing::JSpinner::firePropertyChange;
	using ::javax::swing::JSpinner::add;
	using ::javax::swing::JSpinner::getMousePosition;
	void init$();
	virtual ::java::awt::Font* getFont() override;
	using ::javax::swing::JSpinner::setUI;
	using ::javax::swing::JSpinner::requestFocus;
	using ::javax::swing::JSpinner::requestFocusInWindow;
	using ::javax::swing::JSpinner::repaint;
	using ::javax::swing::JSpinner::remove;
	using ::javax::swing::JSpinner::list;
};

#endif // _FontSetToNull$1_h_