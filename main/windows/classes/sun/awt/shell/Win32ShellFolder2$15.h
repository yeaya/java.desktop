#ifndef _sun_awt_shell_Win32ShellFolder2$15_h_
#define _sun_awt_shell_Win32ShellFolder2$15_h_
//$ class sun.awt.shell.Win32ShellFolder2$15
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolder2;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2$15 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$15, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$15();
	void init$(::sun::awt::shell::Win32ShellFolder2* this$0, bool val$getLargeIcon);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2* this$0 = nullptr;
	bool val$getLargeIcon = false;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$15_h_