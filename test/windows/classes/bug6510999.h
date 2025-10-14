#ifndef _bug6510999_h_
#define _bug6510999_h_
//$ class bug6510999
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
	}
}

class $export bug6510999 : public ::java::lang::Object {
	$class(bug6510999, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6510999();
	void init$();
	static void createGui();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JScrollPane* s;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug6510999_h_