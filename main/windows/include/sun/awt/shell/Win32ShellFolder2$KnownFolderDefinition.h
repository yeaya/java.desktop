#ifndef _sun_awt_shell_Win32ShellFolder2$KnownFolderDefinition_h_
#define _sun_awt_shell_Win32ShellFolder2$KnownFolderDefinition_h_
//$ class sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace shell {

class $import Win32ShellFolder2$KnownFolderDefinition : public ::java::lang::Object {
	$class(Win32ShellFolder2$KnownFolderDefinition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Win32ShellFolder2$KnownFolderDefinition();
	void init$();
	$String* guid = nullptr;
	int32_t category = 0;
	$String* name = nullptr;
	$String* description = nullptr;
	$String* parent = nullptr;
	$String* relativePath = nullptr;
	$String* parsingName = nullptr;
	$String* tooltip = nullptr;
	$String* localizedName = nullptr;
	$String* icon = nullptr;
	$String* security = nullptr;
	int64_t attributes = 0;
	int32_t defenitionFlags = 0;
	$String* ftidType = nullptr;
	$String* path = nullptr;
	$String* saveLocation = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$KnownFolderDefinition_h_