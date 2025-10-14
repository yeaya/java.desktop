#ifndef _javax_swing_text_AbstractDocument$Content_h_
#define _javax_swing_text_AbstractDocument$Content_h_
//$ interface javax.swing.text.AbstractDocument$Content
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class Position;
			class Segment;
		}
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class UndoableEdit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractDocument$Content : public ::java::lang::Object {
	$interface(AbstractDocument$Content, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::text::Position* createPosition(int32_t offset) {return nullptr;}
	virtual void getChars(int32_t where, int32_t len, ::javax::swing::text::Segment* txt) {}
	virtual $String* getString(int32_t where, int32_t len) {return nullptr;}
	virtual ::javax::swing::undo::UndoableEdit* insertString(int32_t where, $String* str) {return nullptr;}
	virtual int32_t length() {return 0;}
	virtual ::javax::swing::undo::UndoableEdit* remove(int32_t where, int32_t nitems) {return nullptr;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$Content_h_