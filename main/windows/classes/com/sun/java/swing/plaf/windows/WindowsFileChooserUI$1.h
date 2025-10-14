#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsFileChooserUI;
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

class $export WindowsFileChooserUI$1 : public ::javax::swing::JLabel {
	$class(WindowsFileChooserUI$1, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	WindowsFileChooserUI$1();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0, $String* text, int32_t horizontalAlignment);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$1_h_