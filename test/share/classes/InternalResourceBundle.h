#ifndef _InternalResourceBundle_h_
#define _InternalResourceBundle_h_
//$ class InternalResourceBundle
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

class $export InternalResourceBundle : public ::java::lang::Object {
	$class(InternalResourceBundle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InternalResourceBundle();
	void init$();
	static $Object* getValue(::javax::swing::UIDefaults* defaults);
	static void lambda$main$0();
	static void main($StringArray* args);
};

#endif // _InternalResourceBundle_h_