#ifndef _com_sun_java_swing_plaf_windows_WindowsPopupMenuUI$MnemonicListener_h_
#define _com_sun_java_swing_plaf_windows_WindowsPopupMenuUI$MnemonicListener_h_
//$ class com.sun.java.swing.plaf.windows.WindowsPopupMenuUI$MnemonicListener
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JRootPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsPopupMenuUI$MnemonicListener : public ::javax::swing::event::ChangeListener {
	$class(WindowsPopupMenuUI$MnemonicListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	WindowsPopupMenuUI$MnemonicListener();
	void init$();
	virtual void stateChanged(::javax::swing::event::ChangeEvent* ev) override;
	::javax::swing::JRootPane* repaintRoot = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsPopupMenuUI$MnemonicListener_h_