#ifndef _bug8079640_h_
#define _bug8079640_h_
//$ class bug8079640
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JFrame;
	}
}

class $export bug8079640 : public ::java::lang::Object {
	$class(bug8079640, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8079640();
	void init$();
	static void main($StringArray* args);
	static void setup(::javax::swing::JFrame* frame);
	static void test();
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JComponent* comp2;
};

#endif // _bug8079640_h_