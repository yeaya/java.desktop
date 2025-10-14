#ifndef _bug6607130_h_
#define _bug6607130_h_
//$ class bug6607130
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export bug6607130 : public ::java::lang::Object {
	$class(bug6607130, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6607130();
	void init$();
	void checkResult($String* testName);
	void delay();
	virtual void hitKey(int32_t keycode);
	static void main($StringArray* args);
	void setupUI();
	void test();
	void test1();
	void test2();
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JComboBox* cb = nullptr;
	::java::awt::Robot* robot = nullptr;
};

#endif // _bug6607130_h_