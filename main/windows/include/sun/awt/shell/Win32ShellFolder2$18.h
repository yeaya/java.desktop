#ifndef _sun_awt_shell_Win32ShellFolder2$18_h_
#define _sun_awt_shell_Win32ShellFolder2$18_h_
//$ class sun.awt.shell.Win32ShellFolder2$18
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class $import Win32ShellFolder2$18 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$18, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$18();
	void init$(::sun::awt::shell::Win32ShellFolder2* this$0, ::java::util::List* val$files);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2* this$0 = nullptr;
	::java::util::List* val$files = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$18_h_