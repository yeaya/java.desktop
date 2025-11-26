#ifndef _javax_swing_text_html_FrameSetView_h_
#define _javax_swing_text_html_FrameSetView_h_
//$ class javax.swing.text.html.FrameSetView
//$ extends javax.swing.text.BoxView

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>

namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Attribute;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class FrameSetView : public ::javax::swing::text::BoxView {
	$class(FrameSetView, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	FrameSetView();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual $Array<::javax::swing::SizeRequirements>* getChildRequests(int32_t targetSpan, int32_t axis);
	void init();
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::BoxView::modelToView;
	int32_t parseDigits($String* mixedStr);
	$StringArray* parseRowColSpec(::javax::swing::text::html::HTML$Attribute* key);
	void spread(int32_t targetSpan, $ints* span);
	using ::javax::swing::text::BoxView::viewToModel;
	$StringArray* children = nullptr;
	$ints* percentChildren = nullptr;
	$ints* absoluteChildren = nullptr;
	$ints* relativeChildren = nullptr;
	int32_t percentTotals = 0;
	int32_t absoluteTotals = 0;
	int32_t relativeTotals = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FrameSetView_h_