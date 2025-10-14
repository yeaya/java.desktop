#ifndef _sun_awt_shell_Win32ShellFolderManager2$1_h_
#define _sun_awt_shell_Win32ShellFolderManager2$1_h_
//$ class sun.awt.shell.Win32ShellFolderManager2$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolderManager2;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import Win32ShellFolderManager2$1 : public ::java::security::PrivilegedAction {
	$class(Win32ShellFolderManager2$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Win32ShellFolderManager2$1();
	void init$(::sun::awt::shell::Win32ShellFolderManager2* this$0, ::java::io::File* val$dir);
	virtual $Object* run() override;
	::sun::awt::shell::Win32ShellFolderManager2* this$0 = nullptr;
	::java::io::File* val$dir = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolderManager2$1_h_