#ifndef _GetSelectedValueTest_h_
#define _GetSelectedValueTest_h_
//$ class GetSelectedValueTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JList;
	}
}

class $export GetSelectedValueTest : public ::java::lang::Object {
	$class(GetSelectedValueTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetSelectedValueTest();
	void init$();
	static void checkSelectedIndex(::javax::swing::JList* list, Object$* value);
	static void main($StringArray* args);
};

#endif // _GetSelectedValueTest_h_