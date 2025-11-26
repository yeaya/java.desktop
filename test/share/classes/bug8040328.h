#ifndef _bug8040328_h_
#define _bug8040328_h_
//$ class bug8040328
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug8040328 : public ::java::lang::Object {
	$class(bug8040328, 0, ::java::lang::Object)
public:
	bug8040328();
	void init$();
	static void main($StringArray* args);
	static void test(::javax::swing::JFrame* frame);
	static $String* synthXml;
};

#endif // _bug8040328_h_