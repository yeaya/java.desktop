#ifndef _javax_swing_text_GapContent$StickyPosition_h_
#define _javax_swing_text_GapContent$StickyPosition_h_
//$ class javax.swing.text.GapContent$StickyPosition
//$ extends javax.swing.text.Position

#include <javax/swing/text/Position.h>

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

class $import GapContent$StickyPosition : public ::javax::swing::text::Position {
	$class(GapContent$StickyPosition, $NO_CLASS_INIT, ::javax::swing::text::Position)
public:
	GapContent$StickyPosition();
	void init$(::javax::swing::text::GapContent* this$0);
	virtual int32_t getOffset() override;
	void setMark(::javax::swing::text::GapContent$MarkData* mark);
	virtual $String* toString() override;
	::javax::swing::text::GapContent* this$0 = nullptr;
	::javax::swing::text::GapContent$MarkData* mark = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GapContent$StickyPosition_h_