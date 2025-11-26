#ifndef _javax_swing_text_html_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_h_
#define _javax_swing_text_html_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_h_
//$ class javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment
//$ extends javax.swing.text.Segment

#include <javax/swing/text/Segment.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML$TextElementInfo$TextAccessibleContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment : public ::javax::swing::text::Segment {
	$class(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, $NO_CLASS_INIT, ::javax::swing::text::Segment)
public:
	AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment();
	void init$(::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext* this$2);
	::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext* this$2 = nullptr;
	int32_t modelOffset = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_h_