#ifndef _javax_swing_text_TextLayoutStrategy_h_
#define _javax_swing_text_TextLayoutStrategy_h_
//$ class javax.swing.text.TextLayoutStrategy
//$ extends javax.swing.text.FlowView$FlowStrategy

#include <javax/swing/text/FlowView$FlowStrategy.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class LineBreakMeasurer;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class FlowView;
			class TextLayoutStrategy$AttributedSegment;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class TextLayoutStrategy : public ::javax::swing::text::FlowView$FlowStrategy {
	$class(TextLayoutStrategy, $NO_CLASS_INIT, ::javax::swing::text::FlowView$FlowStrategy)
public:
	TextLayoutStrategy();
	void init$();
	virtual void adjustRow(::javax::swing::text::FlowView* fv, int32_t rowIndex, int32_t desiredSpan, int32_t x) override;
	virtual void changedUpdate(::javax::swing::text::FlowView* fv, ::javax::swing::event::DocumentEvent* e, ::java::awt::Rectangle* alloc) override;
	virtual ::javax::swing::text::View* createView(::javax::swing::text::FlowView* fv, int32_t startOffset, int32_t spanLeft, int32_t rowIndex) override;
	virtual int32_t getLimitingOffset(::javax::swing::text::View* v, int32_t startOffset, int32_t spanLeft, bool requireNextWord);
	virtual void insertUpdate(::javax::swing::text::FlowView* fv, ::javax::swing::event::DocumentEvent* e, ::java::awt::Rectangle* alloc) override;
	virtual void layout(::javax::swing::text::FlowView* fv) override;
	virtual int32_t layoutRow(::javax::swing::text::FlowView* fv, int32_t rowIndex, int32_t p0) override;
	virtual void removeUpdate(::javax::swing::text::FlowView* fv, ::javax::swing::event::DocumentEvent* e, ::java::awt::Rectangle* alloc) override;
	virtual void sync(::javax::swing::text::FlowView* fv);
	::java::awt::font::LineBreakMeasurer* measurer = nullptr;
	::javax::swing::text::TextLayoutStrategy$AttributedSegment* text = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TextLayoutStrategy_h_