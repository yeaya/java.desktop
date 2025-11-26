#ifndef _Test6888156_h_
#define _Test6888156_h_
//$ class Test6888156
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ICON")
#undef ICON

namespace javax {
	namespace swing {
		class Icon;
		class JTable;
	}
}

class $export Test6888156 : public ::java::lang::Object {
	$class(Test6888156, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test6888156();
	void init$();
	static void main($StringArray* args);
	virtual void test($String* laf);
	::javax::swing::JTable* table = nullptr;
	::javax::swing::Icon* ICON = nullptr;
};

#pragma pop_macro("ICON")

#endif // _Test6888156_h_