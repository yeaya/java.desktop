#ifndef _sun_awt_shell_Win32ShellFolder2$11_h_
#define _sun_awt_shell_Win32ShellFolder2$11_h_
//$ class sun.awt.shell.Win32ShellFolder2$11
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

class $import Win32ShellFolder2$11 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$11, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$11();
	void init$(::sun::awt::shell::Win32ShellFolder2* this$0, bool val$resolve);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2* this$0 = nullptr;
	bool val$resolve = false;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$11_h_