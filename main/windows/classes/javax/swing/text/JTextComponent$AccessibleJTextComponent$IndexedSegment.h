#ifndef _javax_swing_text_JTextComponent$AccessibleJTextComponent$IndexedSegment_h_
#define _javax_swing_text_JTextComponent$AccessibleJTextComponent$IndexedSegment_h_
//$ class javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment
//$ extends javax.swing.text.Segment

#include <javax/swing/text/Segment.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent$AccessibleJTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$AccessibleJTextComponent$IndexedSegment : public ::javax::swing::text::Segment {
	$class(JTextComponent$AccessibleJTextComponent$IndexedSegment, $NO_CLASS_INIT, ::javax::swing::text::Segment)
public:
	JTextComponent$AccessibleJTextComponent$IndexedSegment();
	void init$(::javax::swing::text::JTextComponent$AccessibleJTextComponent* this$1);
	::javax::swing::text::JTextComponent$AccessibleJTextComponent* this$1 = nullptr;
	int32_t modelOffset = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$AccessibleJTextComponent$IndexedSegment_h_