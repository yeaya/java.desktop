#ifndef _javax_swing_undo_UndoManager$Action_h_
#define _javax_swing_undo_UndoManager$Action_h_
//$ class javax.swing.undo.UndoManager$Action
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("REDO")
#undef REDO
#pragma push_macro("UNDO")
#undef UNDO

namespace javax {
	namespace swing {
		namespace undo {

class UndoManager$Action : public ::java::lang::Enum {
	$class(UndoManager$Action, 0, ::java::lang::Enum)
public:
	UndoManager$Action();
	static $Array<::javax::swing::undo::UndoManager$Action>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::undo::UndoManager$Action* valueOf($String* name);
	static $Array<::javax::swing::undo::UndoManager$Action>* values();
	static ::javax::swing::undo::UndoManager$Action* UNDO;
	static ::javax::swing::undo::UndoManager$Action* REDO;
	static ::javax::swing::undo::UndoManager$Action* ANY;
	static $Array<::javax::swing::undo::UndoManager$Action>* $VALUES;
};

		} // undo
	} // swing
} // javax

#pragma pop_macro("ANY")
#pragma pop_macro("REDO")
#pragma pop_macro("UNDO")

#endif // _javax_swing_undo_UndoManager$Action_h_