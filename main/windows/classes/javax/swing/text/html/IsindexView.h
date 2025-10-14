#ifndef _javax_swing_text_html_IsindexView_h_
#define _javax_swing_text_html_IsindexView_h_
//$ class javax.swing.text.html.IsindexView
//$ extends javax.swing.text.ComponentView
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/text/ComponentView.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JTextField;
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

class IsindexView : public ::javax::swing::text::ComponentView, public ::java::awt::event::ActionListener {
	$class(IsindexView, $NO_CLASS_INIT, ::javax::swing::text::ComponentView, ::java::awt::event::ActionListener)
public:
	IsindexView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	virtual ::java::awt::Component* createComponent() override;
	using ::javax::swing::text::ComponentView::modelToView;
	using ::javax::swing::text::ComponentView::viewToModel;
	virtual $String* toString() override;
	::javax::swing::JTextField* textField = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_IsindexView_h_