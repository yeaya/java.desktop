#ifndef _Bug8134116_h_
#define _Bug8134116_h_
//$ class Bug8134116
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export Bug8134116 : public ::java::lang::Object {
	$class(Bug8134116, 0, ::java::lang::Object)
public:
	Bug8134116();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static $volatile(::java::lang::Exception*) exception;
	static ::javax::swing::JFrame* frame;
};

#endif // _Bug8134116_h_