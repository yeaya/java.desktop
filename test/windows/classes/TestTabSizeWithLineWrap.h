#ifndef _TestTabSizeWithLineWrap_h_
#define _TestTabSizeWithLineWrap_h_
//$ class TestTabSizeWithLineWrap
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

class $export TestTabSizeWithLineWrap : public ::java::lang::Object {
	$class(TestTabSizeWithLineWrap, 0, ::java::lang::Object)
public:
	TestTabSizeWithLineWrap();
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

#endif // _TestTabSizeWithLineWrap_h_