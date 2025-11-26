#ifndef _bug6474153_h_
#define _bug6474153_h_
//$ class bug6474153
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent$KeyBinding;
		}
	}
}

class $export bug6474153 : public ::java::lang::Object {
	$class(bug6474153, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6474153();
	void init$();
	static void checkArray($Array<::javax::swing::text::JTextComponent$KeyBinding>* keyActionArray);
	static void main($StringArray* args);
};

#endif // _bug6474153_h_