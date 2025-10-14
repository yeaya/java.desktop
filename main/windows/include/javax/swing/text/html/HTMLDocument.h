#ifndef _javax_swing_text_html_HTMLDocument_h_
#define _javax_swing_text_html_HTMLDocument_h_
//$ class javax.swing.text.html.HTMLDocument
//$ extends javax.swing.text.DefaultStyledDocument

#include <java/lang/Array.h>
#include <javax/swing/text/DefaultStyledDocument.h>

#pragma push_macro("MAP_PROPERTY")
#undef MAP_PROPERTY
#pragma push_macro("NEWLINE")
#undef NEWLINE

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class HashMap;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
			class UndoableEditEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$AbstractElement;
			class AbstractDocument$Content;
			class AbstractDocument$DefaultDocumentEvent;
			class AttributeSet;
			class DefaultStyledDocument$ElementSpec;
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
				class HTMLDocument$Iterator;
				class HTMLEditorKit$Parser;
				class HTMLEditorKit$ParserCallback;
				class HTMLFrameHyperlinkEvent;
				class Map;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTMLDocument : public ::javax::swing::text::DefaultStyledDocument {
	$class(HTMLDocument, 0, ::javax::swing::text::DefaultStyledDocument)
public:
	HTMLDocument();
	void init$();
	void init$(::javax::swing::text::html::StyleSheet* styles);
	void init$(::javax::swing::text::AbstractDocument$Content* c, ::javax::swing::text::html::StyleSheet* styles);
	static void access$000(::javax::swing::text::html::HTMLDocument* x0, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* x1);
	static ::javax::swing::text::AbstractDocument$Content* access$100(::javax::swing::text::html::HTMLDocument* x0);
	static void access$200(::javax::swing::text::html::HTMLDocument* x0, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* x1);
	static void access$300(::javax::swing::text::html::HTMLDocument* x0, ::javax::swing::event::DocumentEvent* x1);
	virtual void addMap(::javax::swing::text::html::Map* map);
	virtual void create($Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data) override;
	virtual ::javax::swing::text::Element* createBranchElement(::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a) override;
	virtual ::javax::swing::text::AbstractDocument$AbstractElement* createDefaultRoot() override;
	virtual ::javax::swing::text::Element* createLeafElement(::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a, int32_t p0, int32_t p1) override;
	::javax::swing::text::Element* findFrame($String* frameName);
	virtual void fireChangedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void fireUndoableEditUpdate(::javax::swing::event::UndoableEditEvent* e) override;
	virtual ::java::net::URL* getBase();
	virtual $String* getBaseTarget();
	virtual $String* getDefaultStyleSheetType();
	virtual ::javax::swing::text::Element* getElement($String* id);
	virtual ::javax::swing::text::Element* getElement(::javax::swing::text::Element* e, Object$* attribute, Object$* value);
	::javax::swing::text::Element* getElement(::javax::swing::text::Element* e, Object$* attribute, Object$* value, bool searchLeafAttributes);
	virtual ::javax::swing::text::html::HTMLDocument$Iterator* getIterator(::javax::swing::text::html::HTML$Tag* t);
	virtual ::javax::swing::text::html::Map* getMap($String* name);
	virtual ::java::util::Enumeration* getMaps();
	virtual ::javax::swing::text::html::HTMLEditorKit$Parser* getParser();
	virtual bool getPreservesUnknownTags();
	virtual ::javax::swing::text::html::HTMLEditorKit$ParserCallback* getReader(int32_t pos);
	virtual ::javax::swing::text::html::HTMLEditorKit$ParserCallback* getReader(int32_t pos, int32_t popDepth, int32_t pushDepth, ::javax::swing::text::html::HTML$Tag* insertTag);
	virtual ::javax::swing::text::html::HTMLEditorKit$ParserCallback* getReader(int32_t pos, int32_t popDepth, int32_t pushDepth, ::javax::swing::text::html::HTML$Tag* insertTag, bool insertInsertTag);
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual int32_t getTokenThreshold();
	virtual bool hasBaseTag();
	virtual void insert(int32_t offset, $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data) override;
	virtual void insertAfterEnd(::javax::swing::text::Element* elem, $String* htmlText);
	virtual void insertAfterStart(::javax::swing::text::Element* elem, $String* htmlText);
	virtual void insertBeforeEnd(::javax::swing::text::Element* elem, $String* htmlText);
	virtual void insertBeforeStart(::javax::swing::text::Element* elem, $String* htmlText);
	void insertHTML(::javax::swing::text::Element* parent, int32_t offset, $String* html, bool wantsTrailingNewline);
	virtual void insertUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng, ::javax::swing::text::AttributeSet* attr) override;
	void installParserIfNecessary();
	virtual bool isFrameDocument();
	static bool matchNameAttribute(::javax::swing::text::AttributeSet* attr, ::javax::swing::text::html::HTML$Tag* tag);
	virtual void obtainLock();
	virtual void processHTMLFrameHyperlinkEvent(::javax::swing::text::html::HTMLFrameHyperlinkEvent* e);
	virtual void releaseLock();
	void removeElements(::javax::swing::text::Element* e, int32_t index, int32_t count);
	void removeElements(::javax::swing::text::Element* e, int32_t index, int32_t count, int32_t start, int32_t end);
	void removeElementsAtEnd(::javax::swing::text::Element* e, int32_t index, int32_t count, int32_t start, int32_t end);
	virtual void removeMap(::javax::swing::text::html::Map* map);
	using ::javax::swing::text::DefaultStyledDocument::replace;
	void replace(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* dde, ::javax::swing::text::Element* e, int32_t index, int32_t count, int32_t start, int32_t end, bool remove, bool create);
	virtual void setBase(::java::net::URL* u);
	virtual void setDefaultStyleSheetType($String* contentType);
	virtual void setFrameDocumentState(bool frameDoc);
	virtual void setInnerHTML(::javax::swing::text::Element* elem, $String* htmlText);
	virtual void setOuterHTML(::javax::swing::text::Element* elem, $String* htmlText);
	virtual void setParagraphAttributes(int32_t offset, int32_t length, ::javax::swing::text::AttributeSet* s, bool replace) override;
	virtual void setParser(::javax::swing::text::html::HTMLEditorKit$Parser* parser);
	virtual void setPreservesUnknownTags(bool preservesTags);
	virtual void setTokenThreshold(int32_t n);
	void updateFrame(::javax::swing::text::Element* element, $String* url);
	void updateFrameSet(::javax::swing::text::Element* element, $String* url);
	void verifyParser();
	bool frameDocument = false;
	bool preservesUnknownTags = false;
	::java::util::HashMap* radioButtonGroupsMap = nullptr;
	static $String* TokenThreshold;
	static const int32_t MaxThreshold = 10000;
	static const int32_t StepThreshold = 5;
	static $String* AdditionalComments;
	static $String* StyleType;
	::java::net::URL* base = nullptr;
	bool hasBaseTag$ = false;
	$String* baseTarget = nullptr;
	::javax::swing::text::html::HTMLEditorKit$Parser* parser = nullptr;
	static ::javax::swing::text::AttributeSet* contentAttributeSet;
	static $String* MAP_PROPERTY;
	static $chars* NEWLINE;
	bool insertInBody = false;
	static $String* I18NProperty;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("MAP_PROPERTY")
#pragma pop_macro("NEWLINE")

#endif // _javax_swing_text_html_HTMLDocument_h_