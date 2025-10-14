#ifndef _bug4242228_h_
#define _bug4242228_h_
//$ class bug4242228
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
	}
}

class $export bug4242228 : public ::java::lang::Object {
	$class(bug4242228, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4242228();
	void init$();
	static void main($StringArray* argv);
	static ::javax::swing::JTabbedPane* tabPane;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug4242228_h_