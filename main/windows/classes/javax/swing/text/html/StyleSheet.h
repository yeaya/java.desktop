#ifndef _javax_swing_text_html_StyleSheet_h_
#define _javax_swing_text_html_StyleSheet_h_
//$ class javax.swing.text.html.StyleSheet
//$ extends javax.swing.text.StyleContext

#include <java/lang/Array.h>
#include <javax/swing/text/StyleContext.h>

#pragma push_macro("DEFAULT_FONT_SIZE")
#undef DEFAULT_FONT_SIZE

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace java {
	namespace io {
		class Reader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class ImageIcon;
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
		namespace text {
			class AttributeSet;
			class Element;
			class MutableAttributeSet;
			class Style;
			class StyleContext$SmallAttributeSet;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS;
				class CSS$Attribute;
				class HTML$Tag;
				class StyleSheet$BoxPainter;
				class StyleSheet$ListPainter;
				class StyleSheet$SelectorMapping;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export StyleSheet : public ::javax::swing::text::StyleContext {
	$class(StyleSheet, 0, ::javax::swing::text::StyleContext)
public:
	StyleSheet();
	using ::javax::swing::text::StyleContext::getFont;
	void init$();
	$String* _cleanSelectorString($String* selector);
	virtual ::javax::swing::text::AttributeSet* addAttribute(::javax::swing::text::AttributeSet* old, Object$* key, Object$* value) override;
	virtual ::javax::swing::text::AttributeSet* addAttributes(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attr) override;
	virtual void addCSSAttribute(::javax::swing::text::MutableAttributeSet* attr, ::javax::swing::text::html::CSS$Attribute* key, $String* value);
	virtual bool addCSSAttributeFromHTML(::javax::swing::text::MutableAttributeSet* attr, ::javax::swing::text::html::CSS$Attribute* key, $String* value);
	virtual void addRule($String* rule);
	virtual void addRule($StringArray* selector, ::javax::swing::text::AttributeSet* declaration, bool isLinked);
	void addSortedStyle(::javax::swing::text::html::StyleSheet$SelectorMapping* mapping, ::java::util::Vector* elements);
	virtual void addStyleSheet(::javax::swing::text::html::StyleSheet* ss);
	virtual $String* cleanSelectorString($String* selector);
	virtual ::javax::swing::text::AttributeSet* convertAttributeSet(::javax::swing::text::AttributeSet* a);
	virtual ::javax::swing::text::MutableAttributeSet* createLargeAttributeSet(::javax::swing::text::AttributeSet* a) override;
	::javax::swing::text::Style* createResolvedStyle($String* selector, $StringArray* tags, $StringArray* ids, $StringArray* classes);
	::javax::swing::text::Style* createResolvedStyle($String* selector, ::java::util::Vector* elements, ::javax::swing::text::html::HTML$Tag* t);
	::javax::swing::text::Style* createResolvedStyle($String* selector);
	virtual ::javax::swing::text::StyleContext$SmallAttributeSet* createSmallAttributeSet(::javax::swing::text::AttributeSet* a) override;
	$Object* fontSizeInherit();
	virtual ::java::awt::Color* getBackground(::javax::swing::text::AttributeSet* a) override;
	virtual ::javax::swing::ImageIcon* getBackgroundImage(::javax::swing::text::AttributeSet* attr);
	virtual ::java::net::URL* getBase();
	virtual ::javax::swing::text::html::StyleSheet$BoxPainter* getBoxPainter(::javax::swing::text::AttributeSet* a);
	virtual ::javax::swing::text::AttributeSet* getDeclaration($String* decl);
	virtual ::java::awt::Font* getFont(::javax::swing::text::AttributeSet* a) override;
	virtual ::java::awt::Color* getForeground(::javax::swing::text::AttributeSet* a) override;
	static int32_t getIndexOfSize(float pt);
	::javax::swing::text::Style* getLinkedStyle(::javax::swing::text::Style* localStyle);
	virtual ::javax::swing::text::html::StyleSheet$ListPainter* getListPainter(::javax::swing::text::AttributeSet* a);
	virtual float getPointSize(int32_t index);
	virtual float getPointSize($String* size);
	::javax::swing::text::Style* getResolvedStyle($String* selector, ::java::util::Vector* elements, ::javax::swing::text::html::HTML$Tag* t);
	::javax::swing::text::Style* getResolvedStyle($String* selector);
	::javax::swing::text::html::StyleSheet$SelectorMapping* getRootSelectorMapping();
	virtual ::javax::swing::text::Style* getRule(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::Element* e);
	virtual ::javax::swing::text::Style* getRule($String* selector);
	virtual $StringArray* getSimpleSelectors($String* selector);
	virtual $ints* getSizeMap();
	static int32_t getSpecificity($String* selector);
	virtual $Array<::javax::swing::text::html::StyleSheet>* getStyleSheets();
	void getStyles(::javax::swing::text::html::StyleSheet$SelectorMapping* parentMapping, ::java::util::Vector* styles, $StringArray* tags, $StringArray* ids, $StringArray* classes, int32_t index, int32_t numElements, ::java::util::Hashtable* alreadyChecked);
	virtual ::javax::swing::text::AttributeSet* getViewAttributes(::javax::swing::text::View* v);
	virtual void importStyleSheet(::java::net::URL* url);
	virtual bool isW3CLengthUnits();
	void linkStyleSheetAt(::javax::swing::text::html::StyleSheet* ss, int32_t index);
	virtual void loadRules(::java::io::Reader* in, ::java::net::URL* ref);
	virtual void rebaseSizeMap(int32_t base);
	void refreshResolvedRules($String* selectorName, $StringArray* selector, ::javax::swing::text::Style* newStyle, int32_t specificity);
	virtual ::javax::swing::text::AttributeSet* removeAttribute(::javax::swing::text::AttributeSet* old, Object$* key) override;
	virtual ::javax::swing::text::AttributeSet* removeAttributes(::javax::swing::text::AttributeSet* old, ::java::util::Enumeration* names) override;
	virtual ::javax::swing::text::AttributeSet* removeAttributes(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attrs) override;
	::javax::swing::text::AttributeSet* removeHTMLTags(::javax::swing::text::AttributeSet* old, ::javax::swing::text::AttributeSet* attr);
	virtual void removeStyle($String* nm) override;
	virtual void removeStyleSheet(::javax::swing::text::html::StyleSheet* ss);
	virtual void setBase(::java::net::URL* base);
	virtual void setBaseFontSize(int32_t sz);
	virtual void setBaseFontSize($String* size);
	virtual ::java::awt::Color* stringToColor($String* string);
	virtual ::javax::swing::text::AttributeSet* translateHTMLToCSS(::javax::swing::text::AttributeSet* htmlAttrSet);
	void unlinkStyleSheet(::javax::swing::text::html::StyleSheet* ss, int32_t index);
	static ::javax::swing::border::Border* noBorder;
	static const int32_t DEFAULT_FONT_SIZE = 3;
	$Object* fontSizeInherit$ = nullptr;
	::javax::swing::text::html::CSS* css = nullptr;
	::javax::swing::text::html::StyleSheet$SelectorMapping* selectorMapping = nullptr;
	::java::util::Hashtable* resolvedStyles = nullptr;
	::java::util::Vector* linkedStyleSheets = nullptr;
	::java::net::URL* base = nullptr;
	static $ints* sizeMapDefault;
	$ints* sizeMap = nullptr;
	bool w3cLengthUnits = false;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("DEFAULT_FONT_SIZE")

#endif // _javax_swing_text_html_StyleSheet_h_