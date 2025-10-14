#ifndef _javax_swing_undo_StateEditable_h_
#define _javax_swing_undo_StateEditable_h_
//$ interface javax.swing.undo.StateEditable
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RCSID")
#undef RCSID

namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace javax {
	namespace swing {
		namespace undo {

class $export StateEditable : public ::java::lang::Object {
	$interface(StateEditable, 0, ::java::lang::Object)
public:
	virtual void restoreState(::java::util::Hashtable* state) {}
	virtual void storeState(::java::util::Hashtable* state) {}
	static $String* RCSID;
};

		} // undo
	} // swing
} // javax

#pragma pop_macro("RCSID")

#endif // _javax_swing_undo_StateEditable_h_