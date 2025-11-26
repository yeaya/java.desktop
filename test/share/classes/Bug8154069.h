#ifndef _Bug8154069_h_
#define _Bug8154069_h_
//$ class Bug8154069
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

class $export Bug8154069 : public ::java::lang::Object {
	$class(Bug8154069, 0, ::java::lang::Object)
public:
	Bug8154069();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static $volatile(::java::lang::Exception*) exception;
};

#endif // _Bug8154069_h_