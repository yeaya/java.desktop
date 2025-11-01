#ifndef _javax_swing_text_html_HTMLEditorKit$LinkController_h_
#define _javax_swing_text_html_HTMLEditorKit$LinkController_h_
//$ class javax.swing.text.html.HTMLEditorKit$LinkController
//$ extends java.awt.event.MouseAdapter
//$ implements java.io.Serializable

#include <java/awt/event/MouseAdapter.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class HyperlinkEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class Position$Bias;
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

class $export HTMLEditorKit$LinkController : public ::java::awt::event::MouseAdapter, public ::java::io::Serializable {
	$class(HTMLEditorKit$LinkController, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter, ::java::io::Serializable)
public:
	HTMLEditorKit$LinkController();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void activateLink(int32_t pos, ::javax::swing::JEditorPane* editor);
	virtual void activateLink(int32_t pos, ::javax::swing::JEditorPane* html, ::java::awt::event::MouseEvent* mouseEvent);
	virtual ::javax::swing::event::HyperlinkEvent* createHyperlinkEvent(::javax::swing::JEditorPane* html, ::javax::swing::text::html::HTMLDocument* hdoc, $String* href, ::javax::swing::text::AttributeSet* anchor, ::javax::swing::text::Element* element, ::java::awt::event::MouseEvent* mouseEvent);
	bool doesElementContainLocation(::javax::swing::JEditorPane* editor, ::javax::swing::text::Element* e, int32_t offset, int32_t x, int32_t y);
	virtual void fireEvents(::javax::swing::JEditorPane* editor, ::javax::swing::text::html::HTMLDocument* doc, $String* href, ::javax::swing::text::Element* lastElem, ::java::awt::event::MouseEvent* mouseEvent);
	$String* getMapHREF(::javax::swing::JEditorPane* html, ::javax::swing::text::html::HTMLDocument* hdoc, ::javax::swing::text::Element* elem, ::javax::swing::text::AttributeSet* attr, int32_t offset, int32_t x, int32_t y);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::text::Element* curElem = nullptr;
	bool curElemImage = false;
	$String* href = nullptr;
	$Array<::javax::swing::text::Position$Bias>* bias = nullptr;
	int32_t curOffset = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$LinkController_h_