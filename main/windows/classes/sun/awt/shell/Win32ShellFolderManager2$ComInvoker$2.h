#ifndef _sun_awt_shell_Win32ShellFolderManager2$ComInvoker$2_h_
#define _sun_awt_shell_Win32ShellFolderManager2$ComInvoker$2_h_
//$ class sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolderManager2$ComInvoker;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolderManager2$ComInvoker$2 : public ::java::security::PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Win32ShellFolderManager2$ComInvoker$2();
	void init$(::sun::awt::shell::Win32ShellFolderManager2$ComInvoker* this$0, ::java::util::concurrent::Future* val$future);
	virtual $Object* run() override;
	::sun::awt::shell::Win32ShellFolderManager2$ComInvoker* this$0 = nullptr;
	::java::util::concurrent::Future* val$future = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolderManager2$ComInvoker$2_h_