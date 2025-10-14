#ifndef _sun_awt_shell_Win32ShellFolder2$4_h_
#define _sun_awt_shell_Win32ShellFolder2$4_h_
//$ class sun.awt.shell.Win32ShellFolder2$4
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

class $export Win32ShellFolder2$4 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$4, 0, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$4();
	void init$(::sun::awt::shell::Win32ShellFolder2* this$0);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2* this$0 = nullptr;
	static bool $assertionsDisabled;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$4_h_