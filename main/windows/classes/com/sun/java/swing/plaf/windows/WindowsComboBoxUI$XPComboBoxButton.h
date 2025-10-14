#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$XPComboBoxButton_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$XPComboBoxButton_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$XPComboBoxButton
//$ extends com.sun.java.swing.plaf.windows.XPStyle$GlyphButton

#include <com/sun/java/swing/plaf/windows/XPStyle$GlyphButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
						class WindowsComboBoxUI;
						class XPStyle;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI$XPComboBoxButton : public ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton {
	$class(WindowsComboBoxUI$XPComboBoxButton, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton)
public:
	WindowsComboBoxUI$XPComboBoxButton();
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::contains;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::enable;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::getBounds;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::getSize;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::getLocation;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::firePropertyChange;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::add;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* this$0, ::com::sun::java::swing::plaf::windows::XPStyle* xp);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$State* getState() override;
	virtual ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* getWindowsComboBoxUI();
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::setPart;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::requestFocus;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::requestFocusInWindow;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::repaint;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::remove;
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::list;
	virtual void setPart(::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	using ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton::setUI;
	::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* this$0 = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$State* prevState = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$XPComboBoxButton_h_