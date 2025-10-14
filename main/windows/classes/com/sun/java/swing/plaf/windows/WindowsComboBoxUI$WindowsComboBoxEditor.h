#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxEditor_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxEditor_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor
//$ extends javax.swing.plaf.basic.BasicComboBoxEditor$UIResource

#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>

namespace javax {
	namespace swing {
		class JTextField;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI$WindowsComboBoxEditor : public ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource {
	$class(WindowsComboBoxUI$WindowsComboBoxEditor, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource)
public:
	WindowsComboBoxUI$WindowsComboBoxEditor();
	void init$();
	virtual ::javax::swing::JTextField* createEditorComponent() override;
	virtual void setItem(Object$* item) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$WindowsComboBoxEditor_h_