#ifndef _java_awt_dnd_DnDConstants_h_
#define _java_awt_dnd_DnDConstants_h_
//$ class java.awt.dnd.DnDConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACTION_COPY")
#undef ACTION_COPY
#pragma push_macro("ACTION_COPY_OR_MOVE")
#undef ACTION_COPY_OR_MOVE
#pragma push_macro("ACTION_LINK")
#undef ACTION_LINK
#pragma push_macro("ACTION_MOVE")
#undef ACTION_MOVE
#pragma push_macro("ACTION_NONE")
#undef ACTION_NONE
#pragma push_macro("ACTION_REFERENCE")
#undef ACTION_REFERENCE

namespace java {
	namespace awt {
		namespace dnd {

class $import DnDConstants : public ::java::lang::Object {
	$class(DnDConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DnDConstants();
	void init$();
	static const int32_t ACTION_NONE = 0;
	static const int32_t ACTION_COPY = 1;
	static const int32_t ACTION_MOVE = 2;
	static const int32_t ACTION_COPY_OR_MOVE = 3; // ACTION_COPY | ACTION_MOVE
	static const int32_t ACTION_LINK = 0x40000000;
	static const int32_t ACTION_REFERENCE = ACTION_LINK;
};

		} // dnd
	} // awt
} // java

#pragma pop_macro("ACTION_COPY")
#pragma pop_macro("ACTION_COPY_OR_MOVE")
#pragma pop_macro("ACTION_LINK")
#pragma pop_macro("ACTION_MOVE")
#pragma pop_macro("ACTION_NONE")
#pragma pop_macro("ACTION_REFERENCE")

#endif // _java_awt_dnd_DnDConstants_h_