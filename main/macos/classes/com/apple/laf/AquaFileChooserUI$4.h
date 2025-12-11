#ifndef _com_apple_laf_AquaFileChooserUI$4_h_
#define _com_apple_laf_AquaFileChooserUI$4_h_
//$ class com.apple.laf.AquaFileChooserUI$4
//$ extends com.apple.laf.AquaComboBoxRendererInternal

#include <com/apple/laf/AquaComboBoxRendererInternal.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JList;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$4 : public ::com::apple::laf::AquaComboBoxRendererInternal {
	$class(AquaFileChooserUI$4, $NO_CLASS_INIT, ::com::apple::laf::AquaComboBoxRendererInternal)
public:
	AquaFileChooserUI$4();
	using ::com::apple::laf::AquaComboBoxRendererInternal::getInsets;
	using ::com::apple::laf::AquaComboBoxRendererInternal::contains;
	using ::com::apple::laf::AquaComboBoxRendererInternal::enable;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getBounds;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getSize;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getLocation;
	using ::com::apple::laf::AquaComboBoxRendererInternal::firePropertyChange;
	using ::com::apple::laf::AquaComboBoxRendererInternal::add;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::javax::swing::JComboBox* comboBox);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, ::java::io::File* directory, int32_t index, bool isSelected, bool cellHasFocus);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* directory, int32_t index, bool isSelected, bool cellHasFocus) override;
	using ::com::apple::laf::AquaComboBoxRendererInternal::setUI;
	using ::com::apple::laf::AquaComboBoxRendererInternal::requestFocus;
	using ::com::apple::laf::AquaComboBoxRendererInternal::requestFocusInWindow;
	using ::com::apple::laf::AquaComboBoxRendererInternal::repaint;
	using ::com::apple::laf::AquaComboBoxRendererInternal::remove;
	using ::com::apple::laf::AquaComboBoxRendererInternal::list;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$4_h_