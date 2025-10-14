#ifndef _bug8041642_h_
#define _bug8041642_h_
//$ class bug8041642
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JProgressBar;
	}
}

class $export bug8041642 : public ::java::lang::Object {
	$class(bug8041642, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8041642();
	void init$();
	static void main($StringArray* args);
	static void setup(::javax::swing::JFrame* frame);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Point* point;
	static ::javax::swing::JProgressBar* bar;
};

#endif // _bug8041642_h_