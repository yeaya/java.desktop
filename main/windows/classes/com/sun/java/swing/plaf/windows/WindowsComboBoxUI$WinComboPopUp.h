#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WinComboPopUp_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WinComboPopUp_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp
//$ extends javax.swing.plaf.basic.BasicComboPopup

#include <javax/swing/plaf/basic/BasicComboPopup.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsComboBoxUI;
						class XPStyle;
						class XPStyle$Skin;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI$WinComboPopUp : public ::javax::swing::plaf::basic::BasicComboPopup {
	$class(WindowsComboBoxUI$WinComboPopUp, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboPopup)
public:
	WindowsComboBoxUI$WinComboPopUp();
	using ::javax::swing::plaf::basic::BasicComboPopup::add;
	using ::javax::swing::plaf::basic::BasicComboPopup::getComponent;
	using ::javax::swing::plaf::basic::BasicComboPopup::contains;
	using ::javax::swing::plaf::basic::BasicComboPopup::enable;
	using ::javax::swing::plaf::basic::BasicComboPopup::getBounds;
	using ::javax::swing::plaf::basic::BasicComboPopup::getSize;
	using ::javax::swing::plaf::basic::BasicComboPopup::getLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboPopup::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* this$0, ::javax::swing::JComboBox* combo);
	virtual ::java::awt::event::KeyListener* createKeyListener() override;
	using ::javax::swing::plaf::basic::BasicComboPopup::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicComboPopup::show;
	using ::javax::swing::plaf::basic::BasicComboPopup::setUI;
	using ::javax::swing::plaf::basic::BasicComboPopup::remove;
	using ::javax::swing::plaf::basic::BasicComboPopup::setLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::processMouseEvent;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboPopup::repaint;
	::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* this$0 = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* listBoxBorder = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle* xp = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WinComboPopUp_h_