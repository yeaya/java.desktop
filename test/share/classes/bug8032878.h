#ifndef _bug8032878_h_
#define _bug8032878_h_
//$ class bug8032878
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("EXPECTED")
#undef EXPECTED
#pragma push_macro("ONE")
#undef ONE
#pragma push_macro("THREE")
#undef THREE
#pragma push_macro("TWO")
#undef TWO

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
	}
}

class $export bug8032878 : public ::java::lang::Runnable {
	$class(bug8032878, 0, ::java::lang::Runnable)
public:
	bug8032878();
	void init$();
	void checkResult();
	void lambda$test$0();
	static void main($StringArray* args);
	virtual void run() override;
	void runTest();
	void setupUI();
	void test(bool flag);
	static $String* ONE;
	static $String* TWO;
	static $String* THREE;
	static $String* EXPECTED;
	::java::awt::Robot* robot = nullptr;
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JComboBox* cb = nullptr;
	$volatile(bool) surrender = false;
	$volatile($String*) text = nullptr;
};

#pragma pop_macro("EXPECTED")
#pragma pop_macro("ONE")
#pragma pop_macro("THREE")
#pragma pop_macro("TWO")

#endif // _bug8032878_h_