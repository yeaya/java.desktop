#ifndef _javax_swing_text_html_FrameView_h_
#define _javax_swing_text_html_FrameView_h_
//$ class javax.swing.text.html.FrameView
//$ extends javax.swing.text.ComponentView
//$ implements javax.swing.event.HyperlinkListener

#include <javax/swing/event/HyperlinkListener.h>
#include <javax/swing/text/ComponentView.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Shape;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
		class JScrollPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
			class HyperlinkEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
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

class FrameView : public ::javax::swing::text::ComponentView, public ::javax::swing::event::HyperlinkListener {
	$class(FrameView, $NO_CLASS_INIT, ::javax::swing::text::ComponentView, ::javax::swing::event::HyperlinkListener)
public:
	FrameView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::java::awt::Component* createComponent() override;
	void createScrollPane();
	virtual ::javax::swing::JEditorPane* getHostPane();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual ::javax::swing::JEditorPane* getOutermostJEditorPane();
	virtual void hyperlinkUpdate(::javax::swing::event::HyperlinkEvent* evt) override;
	bool inNestedFrameSet();
	using ::javax::swing::text::ComponentView::modelToView;
	$Object* movePostData(::javax::swing::JEditorPane* targetPane, $String* frameName);
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	void setBorder();
	void setMargin();
	virtual void setParent(::javax::swing::text::View* parent) override;
	using ::javax::swing::text::ComponentView::viewToModel;
	virtual $String* toString() override;
	::javax::swing::JEditorPane* htmlPane = nullptr;
	::javax::swing::JScrollPane* scroller = nullptr;
	bool editable = false;
	float width = 0.0;
	float height = 0.0;
	::java::net::URL* src = nullptr;
	bool createdComponent = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FrameView_h_