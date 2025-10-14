#ifndef _com_sun_java_swing_plaf_windows_WindowsCheckBoxUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsCheckBoxUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsCheckBoxUI
//$ extends com.sun.java.swing.plaf.windows.WindowsRadioButtonUI

#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonUI.h>

#pragma push_macro("WINDOWS_CHECK_BOX_UI_KEY")
#undef WINDOWS_CHECK_BOX_UI_KEY

namespace javax {
	namespace swing {
		class AbstractButton;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsCheckBoxUI : public ::com::sun::java::swing::plaf::windows::WindowsRadioButtonUI {
	$class(WindowsCheckBoxUI, 0, ::com::sun::java::swing::plaf::windows::WindowsRadioButtonUI)
public:
	WindowsCheckBoxUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	using ::com::sun::java::swing::plaf::windows::WindowsRadioButtonUI::paintText;
	using ::com::sun::java::swing::plaf::windows::WindowsRadioButtonUI::paintFocus;
	using ::com::sun::java::swing::plaf::windows::WindowsRadioButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* WINDOWS_CHECK_BOX_UI_KEY;
	static $String* propertyPrefix;
	bool defaults_initialized = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("WINDOWS_CHECK_BOX_UI_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsCheckBoxUI_h_