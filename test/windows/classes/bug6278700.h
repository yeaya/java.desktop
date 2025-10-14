#ifndef _bug6278700_h_
#define _bug6278700_h_
//$ class bug6278700
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}

class $export bug6278700 : public ::java::lang::Object {
	$class(bug6278700, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6278700();
	void init$();
	static void main($StringArray* args);
	int32_t changeCount = 0;
	::javax::swing::event::ChangeListener* listener = nullptr;
};

#endif // _bug6278700_h_