#ifndef _com_sun_java_swing_plaf_windows_WindowsSpinnerUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsSpinnerUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsSpinnerUI
//$ extends javax.swing.plaf.basic.BasicSpinnerUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$State;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class UIResource;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsSpinnerUI : public ::javax::swing::plaf::basic::BasicSpinnerUI {
	$class(WindowsSpinnerUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSpinnerUI)
public:
	WindowsSpinnerUI();
	void init$();
	virtual ::java::awt::Component* createNextButton() override;
	virtual ::java::awt::Component* createPreviousButton() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::javax::swing::plaf::UIResource* getUIResource($ObjectArray* listeners);
	::com::sun::java::swing::plaf::windows::TMSchema$State* getXPState(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void paintXPBackground(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsSpinnerUI_h_