#ifndef _javax_swing_text_GapContent$UndoPosRef_h_
#define _javax_swing_text_GapContent$UndoPosRef_h_
//$ class javax.swing.text.GapContent$UndoPosRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class GapContent;
			class GapContent$MarkData;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export GapContent$UndoPosRef : public ::java::lang::Object {
	$class(GapContent$UndoPosRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GapContent$UndoPosRef();
	void init$(::javax::swing::text::GapContent* this$0, ::javax::swing::text::GapContent$MarkData* rec);
	void resetLocation(int32_t endOffset, int32_t g1);
	::javax::swing::text::GapContent* this$0 = nullptr;
	int32_t undoLocation = 0;
	::javax::swing::text::GapContent$MarkData* rec = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GapContent$UndoPosRef_h_