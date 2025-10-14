#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$WindowsFileView_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$WindowsFileView_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileView
//$ extends javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView

#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>

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
	namespace io {
		class File;
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

class $export WindowsFileChooserUI$WindowsFileView : public ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView {
	$class(WindowsFileChooserUI$WindowsFileView, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView)
public:
	WindowsFileChooserUI$WindowsFileView();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual ::javax::swing::Icon* getIcon(::java::io::File* f) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$WindowsFileView_h_