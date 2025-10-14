#ifndef _sun_awt_shell_Win32ShellFolder2$FolderDisposer$1_h_
#define _sun_awt_shell_Win32ShellFolder2$FolderDisposer$1_h_
//$ class sun.awt.shell.Win32ShellFolder2$FolderDisposer$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolder2$FolderDisposer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import Win32ShellFolder2$FolderDisposer$1 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$FolderDisposer$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$FolderDisposer$1();
	void init$(::sun::awt::shell::Win32ShellFolder2$FolderDisposer* this$0);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2$FolderDisposer* this$0 = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$FolderDisposer$1_h_