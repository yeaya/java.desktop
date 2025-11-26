#ifndef _java_awt_TrayIcon$MessageType_h_
#define _java_awt_TrayIcon$MessageType_h_
//$ class java.awt.TrayIcon$MessageType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("WARNING")
#undef WARNING

namespace java {
	namespace awt {

class $export TrayIcon$MessageType : public ::java::lang::Enum {
	$class(TrayIcon$MessageType, 0, ::java::lang::Enum)
public:
	TrayIcon$MessageType();
	static $Array<::java::awt::TrayIcon$MessageType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::TrayIcon$MessageType* valueOf($String* name);
	static $Array<::java::awt::TrayIcon$MessageType>* values();
	static ::java::awt::TrayIcon$MessageType* ERROR;
	static ::java::awt::TrayIcon$MessageType* WARNING;
	static ::java::awt::TrayIcon$MessageType* INFO;
	static ::java::awt::TrayIcon$MessageType* NONE;
	static $Array<::java::awt::TrayIcon$MessageType>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("ERROR")
#pragma pop_macro("INFO")
#pragma pop_macro("NONE")
#pragma pop_macro("WARNING")

#endif // _java_awt_TrayIcon$MessageType_h_