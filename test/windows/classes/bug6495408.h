#ifndef _bug6495408_h_
#define _bug6495408_h_
//$ class bug6495408
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
	}
}

class $export bug6495408 : public ::java::lang::Object {
	$class(bug6495408, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6495408();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JTabbedPane* tabbedPane;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug6495408_h_