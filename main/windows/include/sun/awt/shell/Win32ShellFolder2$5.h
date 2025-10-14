#ifndef _sun_awt_shell_Win32ShellFolder2$5_h_
#define _sun_awt_shell_Win32ShellFolder2$5_h_
//$ class sun.awt.shell.Win32ShellFolder2$5
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace awt {
		namespace shell {

class $import Win32ShellFolder2$5 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$5, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$5();
	void init$(int64_t val$pIShellFolder, int64_t val$pidl1, int64_t val$pidl2);
	virtual $Object* call() override;
	int64_t val$pidl2 = 0;
	int64_t val$pidl1 = 0;
	int64_t val$pIShellFolder = 0;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$5_h_