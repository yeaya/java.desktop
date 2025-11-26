#ifndef _javax_swing_text_StringContent$StickyPosition_h_
#define _javax_swing_text_StringContent$StickyPosition_h_
//$ class javax.swing.text.StringContent$StickyPosition
//$ extends javax.swing.text.Position

#include <javax/swing/text/Position.h>

namespace javax {
	namespace swing {
		namespace text {
			class StringContent;
			class StringContent$PosRec;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StringContent$StickyPosition : public ::javax::swing::text::Position {
	$class(StringContent$StickyPosition, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::swing::text::Position)
public:
	StringContent$StickyPosition();
	void init$(::javax::swing::text::StringContent* this$0, int32_t offset);
	virtual void finalize() override;
	virtual int32_t getOffset() override;
	virtual $String* toString() override;
	::javax::swing::text::StringContent* this$0 = nullptr;
	::javax::swing::text::StringContent$PosRec* rec = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StringContent$StickyPosition_h_