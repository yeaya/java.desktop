#ifndef _bug8078268_h_
#define _bug8078268_h_
//$ class bug8078268
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

class $export bug8078268 : public ::java::lang::Object {
	$class(bug8078268, 0, ::java::lang::Object)
public:
	bug8078268();
	void init$();
	static $String* getDirURL();
	static void main($StringArray* args);
	static $volatile(bool) parsingDone;
	static $volatile(::java::lang::Exception*) exception;
};

#endif // _bug8078268_h_