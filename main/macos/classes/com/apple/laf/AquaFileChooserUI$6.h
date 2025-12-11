#ifndef _com_apple_laf_AquaFileChooserUI$6_h_
#define _com_apple_laf_AquaFileChooserUI$6_h_
//$ class com.apple.laf.AquaFileChooserUI$6
//$ extends javax.swing.JSeparator

#include <javax/swing/JSeparator.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$6 : public ::javax::swing::JSeparator {
	$class(AquaFileChooserUI$6, $NO_CLASS_INIT, ::javax::swing::JSeparator)
public:
	AquaFileChooserUI$6();
	using ::javax::swing::JSeparator::contains;
	using ::javax::swing::JSeparator::enable;
	using ::javax::swing::JSeparator::getBounds;
	using ::javax::swing::JSeparator::getSize;
	using ::javax::swing::JSeparator::getLocation;
	using ::javax::swing::JSeparator::firePropertyChange;
	using ::javax::swing::JSeparator::add;
	using ::javax::swing::JSeparator::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JSeparator::setUI;
	using ::javax::swing::JSeparator::requestFocus;
	using ::javax::swing::JSeparator::requestFocusInWindow;
	using ::javax::swing::JSeparator::repaint;
	using ::javax::swing::JSeparator::remove;
	using ::javax::swing::JSeparator::list;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$6_h_