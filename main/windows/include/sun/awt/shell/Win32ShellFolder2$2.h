#ifndef _sun_awt_shell_Win32ShellFolder2$2_h_
#define _sun_awt_shell_Win32ShellFolder2$2_h_
//$ class sun.awt.shell.Win32ShellFolder2$2
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

class $import Win32ShellFolder2$2 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$2();
	void init$(::sun::awt::shell::Win32ShellFolder2* val$parent, int64_t val$pIDL);
	virtual $Object* call() override;
	int64_t val$pIDL = 0;
	::sun::awt::shell::Win32ShellFolder2* val$parent = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$2_h_