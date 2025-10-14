#ifndef _DefaultComboBoxModelAddAllElementsTest_h_
#define _DefaultComboBoxModelAddAllElementsTest_h_
//$ class DefaultComboBoxModelAddAllElementsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("END")
#undef END
#pragma push_macro("START")
#undef START

namespace java {
	namespace util {
		class ArrayList;
		class TreeSet;
		class Vector;
	}
}

class $export DefaultComboBoxModelAddAllElementsTest : public ::java::lang::Object {
	$class(DefaultComboBoxModelAddAllElementsTest, 0, ::java::lang::Object)
public:
	DefaultComboBoxModelAddAllElementsTest();
	void init$();
	static void checkAddAll();
	static void checkAddAllWithIndex();
	static void main($StringArray* args);
	static const int32_t START = 0;
	static const int32_t END = 50;
	static ::java::util::Vector* vector;
	static ::java::util::TreeSet* set;
	static ::java::util::ArrayList* arrayList;
};

#pragma pop_macro("END")
#pragma pop_macro("START")

#endif // _DefaultComboBoxModelAddAllElementsTest_h_