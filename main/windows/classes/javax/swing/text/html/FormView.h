#ifndef _javax_swing_text_html_FormView_h_
#define _javax_swing_text_html_FormView_h_
//$ class javax.swing.text.html.FormView
//$ extends javax.swing.text.ComponentView
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/text/ComponentView.h>

#pragma push_macro("RESET")
#undef RESET
#pragma push_macro("SUBMIT")
#undef SUBMIT

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLDocument;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export FormView : public ::javax::swing::text::ComponentView, public ::java::awt::event::ActionListener {
	$class(FormView, 0, ::javax::swing::text::ComponentView, ::java::awt::event::ActionListener)
public:
	FormView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	void appendBuffer(::java::lang::StringBuilder* buffer, $String* name, $String* value);
	virtual ::java::awt::Component* createComponent() override;
	::javax::swing::JComponent* createInputComponent(::javax::swing::text::AttributeSet* attr, Object$* model);
	void getFormData(::java::lang::StringBuilder* buffer);
	::javax::swing::text::Element* getFormElement();
	$String* getImageData(::java::awt::Point* point);
	$String* getInputElementData(::javax::swing::text::AttributeSet* attr);
	virtual float getMaximumSpan(int32_t axis) override;
	$String* getTextAreaData(::javax::swing::text::AttributeSet* attr);
	virtual void imageSubmit($String* imageData);
	bool isControl(::javax::swing::text::Element* elem);
	virtual bool isLastTextOrPasswordField();
	void loadElementDataIntoBuffer(::javax::swing::text::Element* elem, ::java::lang::StringBuilder* buffer);
	void loadSelectData(::javax::swing::text::AttributeSet* attr, ::java::lang::StringBuilder* buffer);
	using ::javax::swing::text::ComponentView::modelToView;
	void removeStaleListenerForModel(Object$* model);
	virtual void resetForm();
	void storePostData(::javax::swing::text::html::HTMLDocument* doc, $String* target, $String* data);
	virtual void submitData($String* data);
	using ::javax::swing::text::ComponentView::viewToModel;
	virtual $String* toString() override;
	static $String* SUBMIT;
	static $String* RESET;
	static $String* PostDataProperty;
	int16_t maxIsPreferred = 0;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("RESET")
#pragma pop_macro("SUBMIT")

#endif // _javax_swing_text_html_FormView_h_