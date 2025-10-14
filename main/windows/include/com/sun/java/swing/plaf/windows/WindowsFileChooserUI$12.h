#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$12_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$12_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12
//$ extends javax.swing.DefaultButtonModel

#include <javax/swing/DefaultButtonModel.h>

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

class $import WindowsFileChooserUI$12 : public ::javax::swing::DefaultButtonModel {
	$class(WindowsFileChooserUI$12, $NO_CLASS_INIT, ::javax::swing::DefaultButtonModel)
public:
	WindowsFileChooserUI$12();
	void init$(::javax::swing::JButton* val$result);
	virtual void setPressed(bool b) override;
	virtual void setRollover(bool b) override;
	virtual void setSelected(bool b) override;
	::javax::swing::JButton* val$result = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$12_h_