#ifndef _javax_swing_text_ParagraphView$Row_h_
#define _javax_swing_text_ParagraphView$Row_h_
//$ class javax.swing.text.ParagraphView$Row
//$ extends javax.swing.text.BoxView

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>

#pragma push_macro("END_JUSTIFIABLE")
#undef END_JUSTIFIABLE
#pragma push_macro("SPACE_ADDON")
#undef SPACE_ADDON
#pragma push_macro("SPACE_ADDON_LEFTOVER_END")
#undef SPACE_ADDON_LEFTOVER_END
#pragma push_macro("START_JUSTIFIABLE")
#undef START_JUSTIFIABLE

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class ParagraphView;
			class Position$Bias;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export ParagraphView$Row : public ::javax::swing::text::BoxView {
	$class(ParagraphView$Row, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	ParagraphView$Row();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::ParagraphView* this$0, ::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual float getAlignment(int32_t axis) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int16_t getBottomInset() override;
	virtual int32_t getEndOffset() override;
	virtual int16_t getLeftInset() override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual int32_t getStartOffset() override;
	virtual int32_t getViewIndexAtPosition(int32_t pos) override;
	bool isBrokenRow();
	bool isJustifiableDocument();
	bool isJustifyEnabled();
	bool isLastRow();
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	using ::javax::swing::text::BoxView::viewToModel;
	::javax::swing::text::ParagraphView* this$0 = nullptr;
	static const int32_t SPACE_ADDON = 0;
	static const int32_t SPACE_ADDON_LEFTOVER_END = 1;
	static const int32_t START_JUSTIFIABLE = 2;
	static const int32_t END_JUSTIFIABLE = 3;
	$ints* justificationData = nullptr;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("END_JUSTIFIABLE")
#pragma pop_macro("SPACE_ADDON")
#pragma pop_macro("SPACE_ADDON_LEFTOVER_END")
#pragma pop_macro("START_JUSTIFIABLE")

#endif // _javax_swing_text_ParagraphView$Row_h_