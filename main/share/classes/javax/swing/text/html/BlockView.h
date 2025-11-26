#ifndef _javax_swing_text_html_BlockView_h_
#define _javax_swing_text_html_BlockView_h_
//$ class javax.swing.text.html.BlockView
//$ extends javax.swing.text.BoxView

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>

namespace java {
	namespace awt {
		class Graphics;
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
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class View;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS$LengthValue;
				class StyleSheet;
				class StyleSheet$BoxPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export BlockView : public ::javax::swing::text::BoxView {
	$class(BlockView, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	BlockView();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	void constrainSize(int32_t axis, ::javax::swing::SizeRequirements* want, ::javax::swing::SizeRequirements* min);
	virtual float getAlignment(int32_t axis) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual bool isPercentage(int32_t axis, ::javax::swing::text::AttributeSet* a);
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setPropertiesFromAttributes();
	static bool spanSetFromAttributes(int32_t axis, ::javax::swing::SizeRequirements* r, ::javax::swing::text::html::CSS$LengthValue* cssWidth, ::javax::swing::text::html::CSS$LengthValue* cssHeight);
	using ::javax::swing::text::BoxView::viewToModel;
	::javax::swing::text::AttributeSet* attr = nullptr;
	::javax::swing::text::html::StyleSheet$BoxPainter* painter = nullptr;
	::javax::swing::text::html::CSS$LengthValue* cssWidth = nullptr;
	::javax::swing::text::html::CSS$LengthValue* cssHeight = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_BlockView_h_