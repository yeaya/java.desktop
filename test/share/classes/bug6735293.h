#ifndef _bug6735293_h_
#define _bug6735293_h_
//$ class bug6735293
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
		class JFrame;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class NavigationFilter;
		}
	}
}

class $export bug6735293 : public ::java::lang::Object {
	$class(bug6735293, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6735293();
	void init$();
	static void main($StringArray* args);
	static $volatile(::javax::swing::JFormattedTextField*) jtf;
	static $volatile(::javax::swing::text::NavigationFilter*) nf;
	static $volatile(::javax::swing::JFrame*) jFrame;
};

#endif // _bug6735293_h_