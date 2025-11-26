#ifndef _Test6625450_h_
#define _Test6625450_h_
//$ class Test6625450
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BORDER")
#undef BORDER
#pragma push_macro("COMPONENT")
#undef COMPONENT

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class TitledBorder;
		}
	}
}

class $export Test6625450 : public ::java::lang::Object {
	$class(Test6625450, 0, ::java::lang::Object)
public:
	Test6625450();
	void init$();
	static void main($StringArray* args);
	static void test(bool expected, int32_t width, int32_t height);
	static ::javax::swing::border::TitledBorder* BORDER;
	static ::java::awt::Component* COMPONENT;
};

#pragma pop_macro("BORDER")
#pragma pop_macro("COMPONENT")

#endif // _Test6625450_h_