#ifndef _sun_awt_shell_Win32ShellFolder2$7_h_
#define _sun_awt_shell_Win32ShellFolder2$7_h_
//$ class sun.awt.shell.Win32ShellFolder2$7
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2$7 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$7, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$7();
	void init$(int32_t val$csidl);
	virtual $Object* call() override;
	int32_t val$csidl = 0;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$7_h_