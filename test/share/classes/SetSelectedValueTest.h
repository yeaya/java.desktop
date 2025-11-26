#ifndef _SetSelectedValueTest_h_
#define _SetSelectedValueTest_h_
//$ class SetSelectedValueTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

class $export SetSelectedValueTest : public ::java::lang::Object {
	$class(SetSelectedValueTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SetSelectedValueTest();
	void init$();
	static void checkSelectionByList(::javax::swing::JList* list, ::java::util::List* selectionList);
	static void main($StringArray* args);
};

#endif // _SetSelectedValueTest_h_