#ifndef _javax_swing_text_html_AccessibleHTML_h_
#define _javax_swing_text_html_AccessibleHTML_h_
//$ class javax.swing.text.html.AccessibleHTML
//$ extends javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
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
			class DocumentListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class Element;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML$ElementInfo;
				class AccessibleHTML$RootHTMLAccessibleContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML : public ::javax::accessibility::Accessible {
	$class(AccessibleHTML, $NO_CLASS_INIT, ::javax::accessibility::Accessible)
public:
	AccessibleHTML();
	void init$(::javax::swing::JEditorPane* pane);
	void buildInfo();
	virtual ::javax::swing::text::html::AccessibleHTML$ElementInfo* createElementInfo(::javax::swing::text::Element* e, ::javax::swing::text::html::AccessibleHTML$ElementInfo* parent);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	::javax::swing::text::Document* getDocument();
	::java::awt::Rectangle* getRootEditorRect();
	::javax::swing::text::html::AccessibleHTML$ElementInfo* getRootInfo();
	::javax::swing::text::View* getRootView();
	::javax::swing::JEditorPane* getTextComponent();
	$Object* lock();
	void setDocument(::javax::swing::text::Document* document);
	void unlock(Object$* key);
	::javax::swing::JEditorPane* editor = nullptr;
	::javax::swing::text::Document* model = nullptr;
	::javax::swing::event::DocumentListener* docListener = nullptr;
	::java::beans::PropertyChangeListener* propChangeListener = nullptr;
	::javax::swing::text::html::AccessibleHTML$ElementInfo* rootElementInfo = nullptr;
	::javax::swing::text::html::AccessibleHTML$RootHTMLAccessibleContext* rootHTMLAccessibleContext = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML_h_