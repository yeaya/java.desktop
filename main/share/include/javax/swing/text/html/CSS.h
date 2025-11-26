#ifndef _javax_swing_text_html_CSS_h_
#define _javax_swing_text_html_CSS_h_
//$ class javax.swing.text.html.CSS
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CSS")
#undef CSS

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class MutableAttributeSet;
			class StyleConstants;
			class StyleContext;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS$Attribute;
				class CSS$LayoutIterator;
				class CSS$Value;
				class HTML$Attribute;
				class HTML$Tag;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS : public ::java::io::Serializable {
	$class(CSS, 0, ::java::io::Serializable)
public:
	CSS();
	void init$();
	virtual void addInternalCSSValue(::javax::swing::text::MutableAttributeSet* attr, ::javax::swing::text::html::CSS$Attribute* key, $String* value);
	static void calculateTiledLayout(::javax::swing::text::html::CSS$LayoutIterator* iter, int32_t targetSpan);
	static ::javax::swing::SizeRequirements* calculateTiledRequirements(::javax::swing::text::html::CSS$LayoutIterator* iter, ::javax::swing::SizeRequirements* r);
	static $String* colorToHex(::java::awt::Color* color);
	virtual $Object* cssValueToStyleConstantsValue(::javax::swing::text::StyleConstants* key, Object$* value);
	static $Array<::javax::swing::text::html::CSS$Attribute>* getAllAttributeKeys();
	static ::javax::swing::text::html::CSS$Attribute* getAttribute($String* name);
	virtual int32_t getBaseFontSize();
	virtual ::java::awt::Color* getColor(::javax::swing::text::AttributeSet* a, ::javax::swing::text::html::CSS$Attribute* key);
	static float getColorComponent($String* string, $ints* index);
	::javax::swing::text::html::CSS$Attribute* getCssAlignAttribute(::javax::swing::text::html::HTML$Tag* tag, ::javax::swing::text::AttributeSet* htmlAttrSet);
	$Array<::javax::swing::text::html::CSS$Attribute>* getCssAttribute(::javax::swing::text::html::HTML$Attribute* hAttr);
	virtual $Object* getCssValue(::javax::swing::text::html::CSS$Attribute* cssAttr, $String* htmlAttrValue);
	virtual ::java::awt::Font* getFont(::javax::swing::text::StyleContext* sc, ::javax::swing::text::AttributeSet* a, int32_t defaultSize, ::javax::swing::text::html::StyleSheet* ss);
	static int32_t getFontSize(::javax::swing::text::AttributeSet* attr, int32_t defaultSize, ::javax::swing::text::html::StyleSheet* ss);
	::javax::swing::text::html::HTML$Tag* getHTMLTag(::javax::swing::text::AttributeSet* htmlAttrSet);
	static int32_t getIndexOfSize(float pt, $ints* sizeMap);
	static int32_t getIndexOfSize(float pt, ::javax::swing::text::html::StyleSheet* ss);
	virtual $Object* getInternalCSSValue(::javax::swing::text::html::CSS$Attribute* key, $String* value);
	virtual float getLength(::javax::swing::text::AttributeSet* a, ::javax::swing::text::html::CSS$Attribute* key, ::javax::swing::text::html::StyleSheet* ss);
	virtual float getPointSize($String* size, ::javax::swing::text::html::StyleSheet* ss);
	virtual float getPointSize(int32_t index, ::javax::swing::text::html::StyleSheet* ss);
	::javax::swing::text::html::StyleSheet* getStyleSheet(::javax::swing::text::html::StyleSheet* ss);
	static int32_t getTableBorder(::javax::swing::text::AttributeSet* tableAttr);
	static ::java::net::URL* getURL(::java::net::URL* base, $String* cssString);
	static ::javax::swing::text::html::CSS$Value* getValue($String* name);
	static ::java::awt::Color* hexToColor($String* value);
	bool isFloater($String* alignValue);
	bool isHTMLFontTag(::javax::swing::text::html::HTML$Tag* tag);
	static ::java::awt::Color* parseRGB($String* string);
	static ::java::awt::Color* parseRGBA($String* string);
	static $StringArray* parseStrings($String* value);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setBaseFontSize(int32_t sz);
	virtual void setBaseFontSize($String* size);
	static ::java::awt::Color* stringToColor($String* str);
	virtual ::javax::swing::text::html::CSS$Attribute* styleConstantsKeyToCSSKey(::javax::swing::text::StyleConstants* sc);
	virtual $Object* styleConstantsValueToCSSValue(::javax::swing::text::StyleConstants* sc, Object$* styleValue);
	void translateAttribute(::javax::swing::text::html::HTML$Attribute* key, $String* htmlAttrValue, ::javax::swing::text::MutableAttributeSet* cssAttrSet);
	void translateAttributes(::javax::swing::text::html::HTML$Tag* tag, ::javax::swing::text::AttributeSet* htmlAttrSet, ::javax::swing::text::MutableAttributeSet* cssAttrSet);
	void translateEmbeddedAttributes(::javax::swing::text::AttributeSet* htmlAttrSet, ::javax::swing::text::MutableAttributeSet* cssAttrSet);
	virtual ::javax::swing::text::AttributeSet* translateHTMLToCSS(::javax::swing::text::AttributeSet* htmlAttrSet);
	bool validTextAlignValue($String* alignValue);
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::java::util::Hashtable* attributeMap;
	static ::java::util::Hashtable* valueMap;
	static ::java::util::Hashtable* htmlAttrToCssAttrMap;
	static ::java::util::Hashtable* styleConstantToCssMap;
	static ::java::util::Hashtable* htmlValueToCssValueMap;
	static ::java::util::Hashtable* cssValueToInternalValueMap;
	::java::util::Hashtable* valueConvertor = nullptr;
	int32_t baseFontSize = 0;
	::javax::swing::text::html::StyleSheet* styleSheet = nullptr;
	static int32_t baseFontSizeIndex;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("CSS")

#endif // _javax_swing_text_html_CSS_h_