#ifndef _javax_swing_text_html_HTMLEditorKit$NavigateLinkAction_h_
#define _javax_swing_text_html_HTMLEditorKit$NavigateLinkAction_h_
//$ class javax.swing.text.html.HTMLEditorKit$NavigateLinkAction
//$ extends javax.swing.text.TextAction
//$ implements javax.swing.event.CaretListener

#include <javax/swing/event/CaretListener.h>
#include <javax/swing/text/TextAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLEditorKit;
				class HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLEditorKit$NavigateLinkAction : public ::javax::swing::text::TextAction, public ::javax::swing::event::CaretListener {
	$class(HTMLEditorKit$NavigateLinkAction, 0, ::javax::swing::text::TextAction, ::javax::swing::event::CaretListener)
public:
	HTMLEditorKit$NavigateLinkAction();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* actionName);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void caretUpdate(::javax::swing::event::CaretEvent* e) override;
	::javax::swing::text::html::HTMLEditorKit* getHTMLEditorKit(::javax::swing::text::JTextComponent* comp);
	void moveCaretPosition(::javax::swing::text::JTextComponent* comp, ::javax::swing::text::html::HTMLEditorKit* kit, int32_t mark, int32_t dot);
	virtual $String* toString() override;
	static ::javax::swing::text::html::HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter* focusPainter;
	bool focusBack = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$NavigateLinkAction_h_