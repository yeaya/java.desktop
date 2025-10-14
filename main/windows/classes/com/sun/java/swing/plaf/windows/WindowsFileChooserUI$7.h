#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$7_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$7_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

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

class $export WindowsFileChooserUI$7 : public ::javax::swing::JTextField {
	$class(WindowsFileChooserUI$7, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	WindowsFileChooserUI$7();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0, int32_t columns);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JTextField::setUI;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$7_h_