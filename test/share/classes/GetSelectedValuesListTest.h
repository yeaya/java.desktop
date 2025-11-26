#ifndef _GetSelectedValuesListTest_h_
#define _GetSelectedValuesListTest_h_
//$ class GetSelectedValuesListTest
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

class $export GetSelectedValuesListTest : public ::java::lang::Object {
	$class(GetSelectedValuesListTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetSelectedValuesListTest();
	void init$();
	static void checkSelection(::javax::swing::JList* list, ::java::util::List* selectionList);
	static void main($StringArray* args);
};

#endif // _GetSelectedValuesListTest_h_