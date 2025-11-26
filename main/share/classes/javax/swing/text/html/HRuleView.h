#ifndef _javax_swing_text_html_HRuleView_h_
#define _javax_swing_text_html_HRuleView_h_
//$ class javax.swing.text.html.HRuleView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

#pragma push_macro("SPACE_ABOVE")
#undef SPACE_ABOVE
#pragma push_macro("SPACE_BELOW")
#undef SPACE_BELOW

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
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
			class Position$Bias;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS$Attribute;
				class CSS$LengthValue;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class HRuleView : public ::javax::swing::text::View {
	$class(HRuleView, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	HRuleView();
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::View* breakView(int32_t axis, int32_t offset, float pos, float len) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int32_t getBreakWeight(int32_t axis, float pos, float len) override;
	float getLength(::javax::swing::text::html::CSS$Attribute* key, ::javax::swing::text::AttributeSet* a);
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void setPropertiesFromAttributes();
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	float topMargin = 0.0;
	float bottomMargin = 0.0;
	float leftMargin = 0.0;
	float rightMargin = 0.0;
	int32_t alignment = 0;
	$String* noshade = nullptr;
	int32_t size = 0;
	::javax::swing::text::html::CSS$LengthValue* widthValue = nullptr;
	static const int32_t SPACE_ABOVE = 3;
	static const int32_t SPACE_BELOW = 3;
	::javax::swing::text::AttributeSet* attr = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("SPACE_ABOVE")
#pragma pop_macro("SPACE_BELOW")

#endif // _javax_swing_text_html_HRuleView_h_