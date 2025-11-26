#ifndef _bug6866751_h_
#define _bug6866751_h_
//$ class bug6866751
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
	}
}

class $export bug6866751 : public ::java::lang::Object {
	$class(bug6866751, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6866751();
	void init$();
	static void main($StringArray* args);
	static void setup(::javax::swing::JFrame* frame);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextArea* area;
};

#endif // _bug6866751_h_