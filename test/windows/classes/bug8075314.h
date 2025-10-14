#ifndef _bug8075314_h_
#define _bug8075314_h_
//$ class bug8075314
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export bug8075314 : public ::java::lang::Object {
	$class(bug8075314, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8075314();
	void init$();
	static void main($StringArray* args);
	static void setup(::javax::swing::JFrame* frame);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JInternalFrame* frame1;
	static ::javax::swing::JInternalFrame* frame2;
};

#endif // _bug8075314_h_