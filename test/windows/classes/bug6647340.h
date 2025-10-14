#ifndef _bug6647340_h_
#define _bug6647340_h_
//$ class bug6647340
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export bug6647340 : public ::java::lang::Object {
	$class(bug6647340, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6647340();
	void init$();
	void check1();
	void check2();
	void lambda$check1$6();
	static void lambda$main$0(::bug6647340* test);
	static void lambda$main$1(::bug6647340* test);
	void lambda$test1$2();
	void lambda$test2$3();
	void lambda$test2$4();
	void lambda$test2$5();
	static void main($StringArray* args);
	void setIcon(bool b);
	void setupUI();
	void test();
	void test1();
	void test2();
	::javax::swing::JFrame* frame = nullptr;
	$volatile(::java::awt::Point*) location = nullptr;
	$volatile(::java::awt::Point*) iconloc = nullptr;
	::javax::swing::JInternalFrame* jif = nullptr;
	static ::java::awt::Robot* robot;
};

#endif // _bug6647340_h_