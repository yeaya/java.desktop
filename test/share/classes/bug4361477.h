#ifndef _bug4361477_h_
#define _bug4361477_h_
//$ class bug4361477
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
	}
}

class $export bug4361477 : public ::java::lang::Object {
	$class(bug4361477, 0, ::java::lang::Object)
public:
	bug4361477();
	void init$();
	static void createAndShowUI();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JTabbedPane* tabbedPane;
	static $volatile(bool) bStateChanged;
	static $volatile(::java::awt::Rectangle*) bounds;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug4361477_h_