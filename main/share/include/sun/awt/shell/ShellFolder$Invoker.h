#ifndef _sun_awt_shell_ShellFolder$Invoker_h_
#define _sun_awt_shell_ShellFolder$Invoker_h_
//$ interface sun.awt.shell.ShellFolder$Invoker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import ShellFolder$Invoker : public ::java::lang::Object {
	$interface(ShellFolder$Invoker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* invoke(::java::util::concurrent::Callable* task) {return nullptr;}
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolder$Invoker_h_