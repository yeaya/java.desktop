#ifndef _com_apple_laf_AquaFileChooserUI$JTableExtension_h_
#define _com_apple_laf_AquaFileChooserUI$JTableExtension_h_
//$ class com.apple.laf.AquaFileChooserUI$JTableExtension
//$ extends javax.swing.JTable

#include <javax/swing/JTable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		class Point;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$JTableExtension : public ::javax::swing::JTable {
	$class(AquaFileChooserUI$JTableExtension, $NO_CLASS_INIT, ::javax::swing::JTable)
public:
	AquaFileChooserUI$JTableExtension();
	using ::javax::swing::JTable::getToolTipText;
	using ::javax::swing::JTable::contains;
	using ::javax::swing::JTable::enable;
	using ::javax::swing::JTable::getBounds;
	using ::javax::swing::JTable::getSize;
	using ::javax::swing::JTable::getLocation;
	using ::javax::swing::JTable::firePropertyChange;
	using ::javax::swing::JTable::add;
	using ::javax::swing::JTable::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void ensureIndexIsVisible(int32_t index);
	using ::javax::swing::JTable::list;
	virtual int32_t locationToIndex(::java::awt::Point* location);
	using ::javax::swing::JTable::print;
	using ::javax::swing::JTable::remove;
	virtual void removeSelectedIndex(int32_t index);
	using ::javax::swing::JTable::requestFocus;
	using ::javax::swing::JTable::requestFocusInWindow;
	using ::javax::swing::JTable::repaint;
	virtual void setSelectedIndex(int32_t index);
	using ::javax::swing::JTable::setUI;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$JTableExtension_h_