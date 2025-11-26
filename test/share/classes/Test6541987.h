#ifndef _Test6541987_h_
#define _Test6541987_h_
//$ class Test6541987
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export Test6541987 : public ::java::lang::Runnable {
	$class(Test6541987, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test6541987();
	void init$();
	static void click($ints* keys);
	static void main($StringArray* args);
	virtual void run() override;
	static void start();
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
};

#endif // _Test6541987_h_