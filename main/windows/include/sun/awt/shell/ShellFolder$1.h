#ifndef _sun_awt_shell_ShellFolder$1_h_
#define _sun_awt_shell_ShellFolder$1_h_
//$ class sun.awt.shell.ShellFolder$1
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

class $import ShellFolder$1 : public ::java::util::concurrent::Callable {
	$class(ShellFolder$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	ShellFolder$1();
	void init$(::java::util::List* val$files);
	virtual $Object* call() override;
	::java::util::List* val$files = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolder$1_h_