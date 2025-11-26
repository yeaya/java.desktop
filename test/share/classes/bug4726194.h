#ifndef _bug4726194_h_
#define _bug4726194_h_
//$ class bug4726194
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FAIL")
#undef FAIL
#pragma push_macro("TEST_DUPLICATES")
#undef TEST_DUPLICATES

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class SpringLayout$Constraints;
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4726194 : public ::java::lang::Object {
	$class(bug4726194, 0, ::java::lang::Object)
public:
	bug4726194();
	void init$();
	static $ints* getValues(::javax::swing::SpringLayout$Constraints* con, $StringArray* cNames);
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test(int32_t level, bool horizontal);
	static void test(int32_t level, $StringArray* constraints, ::java::util::List* result, ::java::util::List* soFar);
	static $StringArray* hConstraints;
	static $StringArray* vConstraints;
	static $ints* FAIL;
	static bool TEST_DUPLICATES;
};

#pragma pop_macro("FAIL")
#pragma pop_macro("TEST_DUPLICATES")

#endif // _bug4726194_h_