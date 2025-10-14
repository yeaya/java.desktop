#ifndef _bug8028616_h_
#define _bug8028616_h_
//$ class bug8028616
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

class $export bug8028616 : public ::java::lang::Object {
	$class(bug8028616, 0, ::java::lang::Object)
public:
	bug8028616();
	void init$();
	static void main($StringArray* args);
	static $String* text;
	static $Object* lock;
	static bool isCallbackInvoked;
	static ::java::lang::Exception* exception;
};

#endif // _bug8028616_h_