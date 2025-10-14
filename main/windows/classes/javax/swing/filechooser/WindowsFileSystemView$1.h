#ifndef _javax_swing_filechooser_WindowsFileSystemView$1_h_
#define _javax_swing_filechooser_WindowsFileSystemView$1_h_
//$ class javax.swing.filechooser.WindowsFileSystemView$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class WindowsFileSystemView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class WindowsFileSystemView$1 : public ::java::security::PrivilegedAction {
	$class(WindowsFileSystemView$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WindowsFileSystemView$1();
	void init$(::javax::swing::filechooser::WindowsFileSystemView* this$0, ::java::io::File* val$dir);
	virtual $Object* run() override;
	::javax::swing::filechooser::WindowsFileSystemView* this$0 = nullptr;
	::java::io::File* val$dir = nullptr;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_WindowsFileSystemView$1_h_