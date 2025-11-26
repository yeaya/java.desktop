#ifndef _FPMethodCalledTest_h_
#define _FPMethodCalledTest_h_
//$ class FPMethodCalledTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TESTS")
#undef TESTS

class FPMethodCalledTest$Test;
namespace javax {
	namespace swing {
		class JFrame;
		class JTextField;
	}
}

class $export FPMethodCalledTest : public ::java::lang::Object {
	$class(FPMethodCalledTest, 0, ::java::lang::Object)
public:
	FPMethodCalledTest();
	void init$();
	static void createAndShowGUI(::FPMethodCalledTest$Test* test);
	static void lambda$test$0(::FPMethodCalledTest$Test* test);
	static void lambda$test$1();
	static void lambda$test$2(::FPMethodCalledTest$Test* test);
	static void lambda$test$3();
	static void main($StringArray* args);
	static void test(::FPMethodCalledTest$Test* test);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextField* textField;
	static $Array<FPMethodCalledTest$Test>* TESTS;
};

#pragma pop_macro("TESTS")

#endif // _FPMethodCalledTest_h_