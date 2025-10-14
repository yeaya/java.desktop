#ifndef _sun_awt_shell_Win32ShellFolder2$SystemIcon_h_
#define _sun_awt_shell_Win32ShellFolder2$SystemIcon_h_
//$ class sun.awt.shell.Win32ShellFolder2$SystemIcon
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("IDI_APPLICATION")
#undef IDI_APPLICATION
#pragma push_macro("IDI_ASTERISK")
#undef IDI_ASTERISK
#pragma push_macro("IDI_ERROR")
#undef IDI_ERROR
#pragma push_macro("IDI_EXCLAMATION")
#undef IDI_EXCLAMATION
#pragma push_macro("IDI_HAND")
#undef IDI_HAND
#pragma push_macro("IDI_INFORMATION")
#undef IDI_INFORMATION
#pragma push_macro("IDI_QUESTION")
#undef IDI_QUESTION
#pragma push_macro("IDI_WARNING")
#undef IDI_WARNING
#pragma push_macro("IDI_WINLOGO")
#undef IDI_WINLOGO

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2$SystemIcon : public ::java::lang::Enum {
	$class(Win32ShellFolder2$SystemIcon, 0, ::java::lang::Enum)
public:
	Win32ShellFolder2$SystemIcon();
	static $Array<::sun::awt::shell::Win32ShellFolder2$SystemIcon>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t iconID);
	virtual int32_t getIconID();
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* valueOf($String* name);
	static $Array<::sun::awt::shell::Win32ShellFolder2$SystemIcon>* values();
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_APPLICATION;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_HAND;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_ERROR;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_QUESTION;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_EXCLAMATION;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_WARNING;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_ASTERISK;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_INFORMATION;
	static ::sun::awt::shell::Win32ShellFolder2$SystemIcon* IDI_WINLOGO;
	static $Array<::sun::awt::shell::Win32ShellFolder2$SystemIcon>* $VALUES;
	int32_t iconID = 0;
};

		} // shell
	} // awt
} // sun

#pragma pop_macro("IDI_APPLICATION")
#pragma pop_macro("IDI_ASTERISK")
#pragma pop_macro("IDI_ERROR")
#pragma pop_macro("IDI_EXCLAMATION")
#pragma pop_macro("IDI_HAND")
#pragma pop_macro("IDI_INFORMATION")
#pragma pop_macro("IDI_QUESTION")
#pragma pop_macro("IDI_WARNING")
#pragma pop_macro("IDI_WINLOGO")

#endif // _sun_awt_shell_Win32ShellFolder2$SystemIcon_h_