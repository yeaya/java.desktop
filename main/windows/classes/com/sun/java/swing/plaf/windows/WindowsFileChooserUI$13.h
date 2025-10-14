#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$13_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$13_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsFileChooserUI$13 : public ::java::awt::event::FocusAdapter {
	$class(WindowsFileChooserUI$13, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	WindowsFileChooserUI$13();
	void init$(::javax::swing::JButton* val$result);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::JButton* val$result = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$13_h_