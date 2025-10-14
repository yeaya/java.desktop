#ifndef _bug8001470_h_
#define _bug8001470_h_
//$ class bug8001470
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextField;
	}
}

class $export bug8001470 : public ::java::lang::Object {
	$class(bug8001470, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8001470();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextField* textField1;
	static ::javax::swing::JTextField* textField2;
};

#endif // _bug8001470_h_