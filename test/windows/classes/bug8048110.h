#ifndef _bug8048110_h_
#define _bug8048110_h_
//$ class bug8048110
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

class $export bug8048110 : public ::java::lang::Object {
	$class(bug8048110, 0, ::java::lang::Object)
public:
	bug8048110();
	void init$();
	static void createAndShowGUI();
	static ::javax::swing::text::Element* findFirstElement(::javax::swing::text::Element* e, $String* name);
	static void main($StringArray* args);
	static ::java::awt::Robot* robot;
	static $Object* lock;
	static bool isRealSyncPerformed;
	static $String* htmlText;
};

#endif // _bug8048110_h_