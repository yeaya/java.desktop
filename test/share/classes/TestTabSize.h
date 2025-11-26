#ifndef _TestTabSize_h_
#define _TestTabSize_h_
//$ class TestTabSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class JTextArea;
	}
}

class $export TestTabSize : public ::java::lang::Object {
	$class(TestTabSize, 0, ::java::lang::Object)
public:
	TestTabSize();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JScrollPane* jScrollPane1;
	static ::javax::swing::JTextArea* jTextArea1;
	static ::javax::swing::JFrame* f;
	static ::java::awt::geom::Rectangle2D* rect;
	static ::java::awt::geom::Rectangle2D* rect1;
	static bool excpnthrown;
};

#endif // _TestTabSize_h_