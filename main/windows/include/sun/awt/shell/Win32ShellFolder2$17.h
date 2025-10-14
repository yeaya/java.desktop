#ifndef _sun_awt_shell_Win32ShellFolder2$17_h_
#define _sun_awt_shell_Win32ShellFolder2$17_h_
//$ class sun.awt.shell.Win32ShellFolder2$17
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

class $import Win32ShellFolder2$17 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$17, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$17();
	void init$(::sun::awt::shell::Win32ShellFolder2* this$0, int32_t val$column);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2* this$0 = nullptr;
	int32_t val$column = 0;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$17_h_