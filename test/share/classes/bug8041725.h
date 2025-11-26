#ifndef _bug8041725_h_
#define _bug8041725_h_
//$ class bug8041725
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JList;
	}
}

class $export bug8041725 : public ::java::lang::Object {
	$class(bug8041725, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8041725();
	void init$();
	static void main($StringArray* args);
	static void testSelectionColors(::javax::swing::JList* list);
};

#endif // _bug8041725_h_