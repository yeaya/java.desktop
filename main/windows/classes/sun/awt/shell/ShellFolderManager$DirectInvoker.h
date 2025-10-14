#ifndef _sun_awt_shell_ShellFolderManager$DirectInvoker_h_
#define _sun_awt_shell_ShellFolderManager$DirectInvoker_h_
//$ class sun.awt.shell.ShellFolderManager$DirectInvoker
//$ extends sun.awt.shell.ShellFolder$Invoker

#include <sun/awt/shell/ShellFolder$Invoker.h>

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

class $export ShellFolderManager$DirectInvoker : public ::sun::awt::shell::ShellFolder$Invoker {
	$class(ShellFolderManager$DirectInvoker, $NO_CLASS_INIT, ::sun::awt::shell::ShellFolder$Invoker)
public:
	ShellFolderManager$DirectInvoker();
	void init$();
	virtual $Object* invoke(::java::util::concurrent::Callable* task) override;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolderManager$DirectInvoker_h_