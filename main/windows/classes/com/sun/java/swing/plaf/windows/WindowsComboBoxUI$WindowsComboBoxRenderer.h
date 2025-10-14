#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxRenderer_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxRenderer_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer
//$ extends javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource

#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>

#pragma push_macro("BORDER_KEY")
#undef BORDER_KEY
#pragma push_macro("NULL_BORDER")
#undef NULL_BORDER

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI$WindowsComboBoxRenderer : public ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource {
	$class(WindowsComboBoxUI$WindowsComboBoxRenderer, 0, ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource)
public:
	WindowsComboBoxUI$WindowsComboBoxRenderer();
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::contains;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::enable;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::getBounds;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::getSize;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::getLocation;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::add;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::getMousePosition;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::list;
	void init$();
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::setUI;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::repaint;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource::remove;
	static $Object* BORDER_KEY;
	static ::javax::swing::border::Border* NULL_BORDER;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BORDER_KEY")
#pragma pop_macro("NULL_BORDER")

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxRenderer_h_