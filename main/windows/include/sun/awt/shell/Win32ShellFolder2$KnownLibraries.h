#ifndef _sun_awt_shell_Win32ShellFolder2$KnownLibraries_h_
#define _sun_awt_shell_Win32ShellFolder2$KnownLibraries_h_
//$ class sun.awt.shell.Win32ShellFolder2$KnownLibraries
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import Win32ShellFolder2$KnownLibraries : public ::java::lang::Object {
	$class(Win32ShellFolder2$KnownLibraries, 0, ::java::lang::Object)
public:
	Win32ShellFolder2$KnownLibraries();
	void init$();
	static ::java::util::List* INSTANCE;
};

		} // shell
	} // awt
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_awt_shell_Win32ShellFolder2$KnownLibraries_h_