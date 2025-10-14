#ifndef _sun_awt_shell_Win32ShellFolder2$10_h_
#define _sun_awt_shell_Win32ShellFolder2$10_h_
//$ class sun.awt.shell.Win32ShellFolder2$10
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

class $export Win32ShellFolder2$10 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$10, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$10();
	void init$(::sun::awt::shell::Win32ShellFolder2* this$0, $String* val$filePath);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2* this$0 = nullptr;
	$String* val$filePath = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$10_h_