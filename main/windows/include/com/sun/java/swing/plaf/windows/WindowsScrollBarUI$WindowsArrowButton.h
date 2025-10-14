#ifndef _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$WindowsArrowButton_h_
#define _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$WindowsArrowButton_h_
//$ class com.sun.java.swing.plaf.windows.WindowsScrollBarUI$WindowsArrowButton
//$ extends javax.swing.plaf.basic.BasicArrowButton

#include <javax/swing/plaf/basic/BasicArrowButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsScrollBarUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsScrollBarUI$WindowsArrowButton : public ::javax::swing::plaf::basic::BasicArrowButton {
	$class(WindowsScrollBarUI$WindowsArrowButton, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicArrowButton)
public:
	WindowsScrollBarUI$WindowsArrowButton();
	using ::javax::swing::plaf::basic::BasicArrowButton::contains;
	using ::javax::swing::plaf::basic::BasicArrowButton::enable;
	using ::javax::swing::plaf::basic::BasicArrowButton::getBounds;
	using ::javax::swing::plaf::basic::BasicArrowButton::getSize;
	using ::javax::swing::plaf::basic::BasicArrowButton::getLocation;
	using ::javax::swing::plaf::basic::BasicArrowButton::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicArrowButton::add;
	using ::javax::swing::plaf::basic::BasicArrowButton::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* this$0, int32_t direction, ::java::awt::Color* background, ::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight);
	void init$(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* this$0, int32_t direction);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::plaf::basic::BasicArrowButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicArrowButton::setUI;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocus;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicArrowButton::repaint;
	using ::javax::swing::plaf::basic::BasicArrowButton::remove;
	::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$WindowsArrowButton_h_