#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$1
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsInternalFrameTitlePane;
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
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsInternalFrameTitlePane$1 : public ::javax::swing::JLabel {
	$class(WindowsInternalFrameTitlePane$1, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	WindowsInternalFrameTitlePane$1();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0, ::javax::swing::Icon* image);
	using ::javax::swing::JLabel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$1_h_