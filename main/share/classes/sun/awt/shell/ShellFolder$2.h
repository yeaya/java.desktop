#ifndef _sun_awt_shell_ShellFolder$2_h_
#define _sun_awt_shell_ShellFolder$2_h_
//$ class sun.awt.shell.ShellFolder$2
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
			class ShellFolder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export ShellFolder$2 : public ::java::util::concurrent::Callable {
	$class(ShellFolder$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	ShellFolder$2();
	void init$(::sun::awt::shell::ShellFolder* this$0, ::java::util::List* val$files);
	virtual $Object* call() override;
	::sun::awt::shell::ShellFolder* this$0 = nullptr;
	::java::util::List* val$files = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolder$2_h_