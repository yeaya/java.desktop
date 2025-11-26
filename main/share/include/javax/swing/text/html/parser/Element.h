#ifndef _javax_swing_text_html_parser_Element_h_
#define _javax_swing_text_html_parser_Element_h_
//$ class javax.swing.text.html.parser.Element
//$ extends javax.swing.text.html.parser.DTDConstants
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/text/html/parser/DTDConstants.h>

#pragma push_macro("MAX_INDEX_KEY")
#undef MAX_INDEX_KEY

namespace java {
	namespace util {
		class BitSet;
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class AttributeList;
					class ContentModel;
				}
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class $import Element : public ::javax::swing::text::html::parser::DTDConstants, public ::java::io::Serializable {
	$class(Element, 0, ::javax::swing::text::html::parser::DTDConstants, ::java::io::Serializable)
public:
	Element();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* name, int32_t index);
	::javax::swing::text::html::parser::AttributeList* getAttribute($String* name);
	::javax::swing::text::html::parser::AttributeList* getAttributeByValue($String* value);
	::javax::swing::text::html::parser::AttributeList* getAttributes();
	::javax::swing::text::html::parser::ContentModel* getContent();
	int32_t getIndex();
	static int32_t getMaxIndex();
	$String* getName();
	int32_t getType();
	bool isEmpty();
	static int32_t name2type($String* nm);
	bool omitEnd();
	bool omitStart();
	virtual $String* toString() override;
	int32_t index = 0;
	$String* name = nullptr;
	bool oStart = false;
	bool oEnd = false;
	::java::util::BitSet* inclusions = nullptr;
	::java::util::BitSet* exclusions = nullptr;
	int32_t type = 0;
	::javax::swing::text::html::parser::ContentModel* content = nullptr;
	::javax::swing::text::html::parser::AttributeList* atts = nullptr;
	$Object* data = nullptr;
	static $Object* MAX_INDEX_KEY;
	static ::java::util::Hashtable* contentTypes;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("MAX_INDEX_KEY")

#endif // _javax_swing_text_html_parser_Element_h_