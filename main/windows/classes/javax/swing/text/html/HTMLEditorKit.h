#ifndef _javax_swing_text_html_HTMLEditorKit_h_
#define _javax_swing_text_html_HTMLEditorKit_h_
//$ class javax.swing.text.html.HTMLEditorKit
//$ extends javax.swing.text.StyledEditorKit
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/text/StyledEditorKit.h>

#pragma push_macro("BOLD_ACTION")
#undef BOLD_ACTION
#pragma push_macro("COLOR_ACTION")
#undef COLOR_ACTION
#pragma push_macro("DEFAULT_CSS")
#undef DEFAULT_CSS
#pragma push_macro("DEFAULT_STYLES_KEY")
#undef DEFAULT_STYLES_KEY
#pragma push_macro("FONT_CHANGE_BIGGER")
#undef FONT_CHANGE_BIGGER
#pragma push_macro("FONT_CHANGE_SMALLER")
#undef FONT_CHANGE_SMALLER
#pragma push_macro("IMG_ALIGN_BOTTOM")
#undef IMG_ALIGN_BOTTOM
#pragma push_macro("IMG_ALIGN_MIDDLE")
#undef IMG_ALIGN_MIDDLE
#pragma push_macro("IMG_ALIGN_TOP")
#undef IMG_ALIGN_TOP
#pragma push_macro("IMG_BORDER")
#undef IMG_BORDER
#pragma push_macro("INSERT_HR_HTML")
#undef INSERT_HR_HTML
#pragma push_macro("INSERT_OL_HTML")
#undef INSERT_OL_HTML
#pragma push_macro("INSERT_PRE_HTML")
#undef INSERT_PRE_HTML
#pragma push_macro("INSERT_TABLE_HTML")
#undef INSERT_TABLE_HTML
#pragma push_macro("INSERT_UL_HTML")
#undef INSERT_UL_HTML
#pragma push_macro("ITALIC_ACTION")
#undef ITALIC_ACTION
#pragma push_macro("LOGICAL_STYLE_ACTION")
#undef LOGICAL_STYLE_ACTION
#pragma push_macro("PARA_INDENT_LEFT")
#undef PARA_INDENT_LEFT
#pragma push_macro("PARA_INDENT_RIGHT")
#undef PARA_INDENT_RIGHT

namespace java {
	namespace awt {
		class Cursor;
	}
}
namespace java {
	namespace io {
		class InputStream;
		class Reader;
		class Writer;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class JTextComponent;
			class MutableAttributeSet;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Attribute;
				class HTML$Tag;
				class HTMLDocument;
				class HTMLEditorKit$ActivateLinkAction;
				class HTMLEditorKit$LinkController;
				class HTMLEditorKit$NavigateLinkAction;
				class HTMLEditorKit$Parser;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLEditorKit : public ::javax::swing::text::StyledEditorKit, public ::javax::accessibility::Accessible {
	$class(HTMLEditorKit, 0, ::javax::swing::text::StyledEditorKit, ::javax::accessibility::Accessible)
public:
	HTMLEditorKit();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual ::javax::swing::text::Document* createDefaultDocument() override;
	virtual void createInputAttributes(::javax::swing::text::Element* element, ::javax::swing::text::MutableAttributeSet* set) override;
	virtual void deinstall(::javax::swing::JEditorPane* c) override;
	::javax::swing::text::html::HTMLEditorKit$Parser* ensureParser(::javax::swing::text::html::HTMLDocument* doc);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::Action>* getActions() override;
	static $Object* getAttrValue(::javax::swing::text::AttributeSet* attr, ::javax::swing::text::html::HTML$Attribute* key);
	static int32_t getBodyElementStart(::javax::swing::text::JTextComponent* comp);
	virtual $String* getContentType() override;
	virtual ::java::awt::Cursor* getDefaultCursor();
	virtual ::javax::swing::text::MutableAttributeSet* getInputAttributes() override;
	virtual ::java::awt::Cursor* getLinkCursor();
	virtual ::javax::swing::text::html::HTMLEditorKit$Parser* getParser();
	static ::java::io::InputStream* getResourceAsStream($String* name);
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual void insertHTML(::javax::swing::text::html::HTMLDocument* doc, int32_t offset, $String* html, int32_t popDepth, int32_t pushDepth, ::javax::swing::text::html::HTML$Tag* insertTag);
	virtual void install(::javax::swing::JEditorPane* c) override;
	virtual bool isAutoFormSubmission();
	using ::javax::swing::text::StyledEditorKit::read;
	virtual void read(::java::io::Reader* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void setAutoFormSubmission(bool isAuto);
	virtual void setDefaultCursor(::java::awt::Cursor* cursor);
	virtual void setLinkCursor(::java::awt::Cursor* cursor);
	virtual void setStyleSheet(::javax::swing::text::html::StyleSheet* s);
	using ::javax::swing::text::StyledEditorKit::write;
	virtual $String* toString() override;
	virtual void write(::java::io::Writer* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
	::javax::swing::JEditorPane* theEditor = nullptr;
	static $String* DEFAULT_CSS;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
	static ::java::awt::Cursor* MoveCursor;
	static ::java::awt::Cursor* DefaultCursor;
	static ::javax::swing::text::ViewFactory* defaultFactory;
	::javax::swing::text::MutableAttributeSet* input = nullptr;
	static $Object* DEFAULT_STYLES_KEY;
	::javax::swing::text::html::HTMLEditorKit$LinkController* linkHandler = nullptr;
	static ::javax::swing::text::html::HTMLEditorKit$Parser* defaultParser;
	::java::awt::Cursor* defaultCursor = nullptr;
	::java::awt::Cursor* linkCursor = nullptr;
	bool isAutoFormSubmission$ = false;
	static $String* BOLD_ACTION;
	static $String* ITALIC_ACTION;
	static $String* PARA_INDENT_LEFT;
	static $String* PARA_INDENT_RIGHT;
	static $String* FONT_CHANGE_BIGGER;
	static $String* FONT_CHANGE_SMALLER;
	static $String* COLOR_ACTION;
	static $String* LOGICAL_STYLE_ACTION;
	static $String* IMG_ALIGN_TOP;
	static $String* IMG_ALIGN_MIDDLE;
	static $String* IMG_ALIGN_BOTTOM;
	static $String* IMG_BORDER;
	static $String* INSERT_TABLE_HTML;
	static $String* INSERT_UL_HTML;
	static $String* INSERT_OL_HTML;
	static $String* INSERT_HR_HTML;
	static $String* INSERT_PRE_HTML;
	static ::javax::swing::text::html::HTMLEditorKit$NavigateLinkAction* nextLinkAction;
	static ::javax::swing::text::html::HTMLEditorKit$NavigateLinkAction* previousLinkAction;
	static ::javax::swing::text::html::HTMLEditorKit$ActivateLinkAction* activateLinkAction;
	static $Array<::javax::swing::Action>* defaultActions;
	bool foundLink = false;
	int32_t prevHypertextOffset = 0;
	$Object* linkNavigationTag = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("BOLD_ACTION")
#pragma pop_macro("COLOR_ACTION")
#pragma pop_macro("DEFAULT_CSS")
#pragma pop_macro("DEFAULT_STYLES_KEY")
#pragma pop_macro("FONT_CHANGE_BIGGER")
#pragma pop_macro("FONT_CHANGE_SMALLER")
#pragma pop_macro("IMG_ALIGN_BOTTOM")
#pragma pop_macro("IMG_ALIGN_MIDDLE")
#pragma pop_macro("IMG_ALIGN_TOP")
#pragma pop_macro("IMG_BORDER")
#pragma pop_macro("INSERT_HR_HTML")
#pragma pop_macro("INSERT_OL_HTML")
#pragma pop_macro("INSERT_PRE_HTML")
#pragma pop_macro("INSERT_TABLE_HTML")
#pragma pop_macro("INSERT_UL_HTML")
#pragma pop_macro("ITALIC_ACTION")
#pragma pop_macro("LOGICAL_STYLE_ACTION")
#pragma pop_macro("PARA_INDENT_LEFT")
#pragma pop_macro("PARA_INDENT_RIGHT")

#endif // _javax_swing_text_html_HTMLEditorKit_h_