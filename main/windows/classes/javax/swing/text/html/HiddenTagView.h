#ifndef _javax_swing_text_html_HiddenTagView_h_
#define _javax_swing_text_html_HiddenTagView_h_
//$ class javax.swing.text.html.HiddenTagView
//$ extends javax.swing.text.html.EditableView
//$ implements javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/html/EditableView.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Font;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
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
			class Element;
			class JTextComponent;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class HiddenTagView : public ::javax::swing::text::html::EditableView, public ::javax::swing::event::DocumentListener {
	$class(HiddenTagView, 0, ::javax::swing::text::html::EditableView, ::javax::swing::event::DocumentListener)
public:
	HiddenTagView();
	using ::javax::swing::text::html::EditableView::insertUpdate;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* e);
	virtual void _setTextFromModel();
	virtual void _updateModelFromText();
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::java::awt::Component* createComponent() override;
	virtual float getAlignment(int32_t axis) override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual $String* getRepresentedText();
	virtual ::javax::swing::text::JTextComponent* getTextComponent();
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual bool isEndTag();
	using ::javax::swing::text::html::EditableView::modelToView;
	using ::javax::swing::text::html::EditableView::removeUpdate;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void resetBorder();
	virtual void setTextFromModel();
	virtual $String* toString() override;
	virtual void updateModelFromText();
	virtual void updateYAlign(::java::awt::Font* font);
	using ::javax::swing::text::html::EditableView::viewToModel;
	float yAlign = 0.0;
	bool isSettingAttributes = false;
	static const int32_t circleR = 3;
	static const int32_t circleD = 6; // circleR * 2
	static const int32_t tagSize = 6;
	static const int32_t padding = 3;
	static ::java::awt::Color* UnknownTagBorderColor;
	static ::javax::swing::border::Border* StartBorder;
	static ::javax::swing::border::Border* EndBorder;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HiddenTagView_h_