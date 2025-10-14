#ifndef _com_sun_java_swing_plaf_windows_WindowsRootPaneUI$AltProcessor_h_
#define _com_sun_java_swing_plaf_windows_WindowsRootPaneUI$AltProcessor_h_
//$ class com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor
//$ extends java.awt.KeyEventPostProcessor

#include <java/awt/KeyEventPostProcessor.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsRootPaneUI$AltProcessor : public ::java::awt::KeyEventPostProcessor {
	$class(WindowsRootPaneUI$AltProcessor, 0, ::java::awt::KeyEventPostProcessor)
public:
	WindowsRootPaneUI$AltProcessor();
	void init$();
	virtual void altPressed(::java::awt::event::KeyEvent* ev);
	virtual void altReleased(::java::awt::event::KeyEvent* ev);
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* ev) override;
	static bool altKeyPressed;
	static bool menuCanceledOnPress;
	static ::javax::swing::JRootPane* root;
	static ::java::awt::Window* winAncestor;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsRootPaneUI$AltProcessor_h_