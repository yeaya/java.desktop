#ifndef _javax_swing_text_html_parser_DTD_h_
#define _javax_swing_text_html_parser_DTD_h_
//$ class javax.swing.text.html.parser.DTD
//$ extends javax.swing.text.html.parser.DTDConstants

#include <java/lang/Array.h>
#include <javax/swing/text/html/parser/DTDConstants.h>

#pragma push_macro("DTD")
#undef DTD
#pragma push_macro("DTD_HASH_KEY")
#undef DTD_HASH_KEY
#pragma push_macro("FILE_VERSION")
#undef FILE_VERSION

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace java {
	namespace util {
		class BitSet;
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class AttributeList;
					class ContentModel;
					class Element;
					class Entity;
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

class $export DTD : public ::javax::swing::text::html::parser::DTDConstants {
	$class(DTD, 0, ::javax::swing::text::html::parser::DTDConstants)
public:
	DTD();
	void init$($String* name);
	virtual ::javax::swing::text::html::parser::AttributeList* defAttributeList($String* name, int32_t type, int32_t modifier, $String* value, $String* values, ::javax::swing::text::html::parser::AttributeList* atts);
	virtual ::javax::swing::text::html::parser::ContentModel* defContentModel(int32_t type, Object$* obj, ::javax::swing::text::html::parser::ContentModel* next);
	virtual ::javax::swing::text::html::parser::Element* defElement($String* name, int32_t type, bool omitStart, bool omitEnd, ::javax::swing::text::html::parser::ContentModel* content, $StringArray* exclusions, $StringArray* inclusions, ::javax::swing::text::html::parser::AttributeList* atts);
	virtual ::javax::swing::text::html::parser::Entity* defEntity($String* name, int32_t type, int32_t ch);
	virtual ::javax::swing::text::html::parser::Entity* defEntity($String* name, int32_t type, $String* str);
	virtual void defineAttributes($String* name, ::javax::swing::text::html::parser::AttributeList* atts);
	virtual ::javax::swing::text::html::parser::Element* defineElement($String* name, int32_t type, bool omitStart, bool omitEnd, ::javax::swing::text::html::parser::ContentModel* content, ::java::util::BitSet* exclusions, ::java::util::BitSet* inclusions, ::javax::swing::text::html::parser::AttributeList* atts);
	virtual ::javax::swing::text::html::parser::Entity* defineEntity($String* name, int32_t type, $chars* data);
	virtual bool elementExists($String* name);
	static ::javax::swing::text::html::parser::DTD* getDTD($String* name);
	static ::java::util::Hashtable* getDtdHash();
	virtual ::javax::swing::text::html::parser::Element* getElement($String* name);
	virtual ::javax::swing::text::html::parser::Element* getElement(int32_t index);
	virtual ::javax::swing::text::html::parser::Entity* getEntity($String* name);
	virtual ::javax::swing::text::html::parser::Entity* getEntity(int32_t ch);
	virtual $String* getName();
	static void putDTDHash($String* name, ::javax::swing::text::html::parser::DTD* dtd);
	virtual void read(::java::io::DataInputStream* in);
	::javax::swing::text::html::parser::AttributeList* readAttributeList(::java::io::DataInputStream* in, $StringArray* names);
	::javax::swing::text::html::parser::ContentModel* readContentModel(::java::io::DataInputStream* in, $StringArray* names);
	$StringArray* readNameArray(::java::io::DataInputStream* in, $StringArray* names);
	virtual $String* toString() override;
	$String* name = nullptr;
	::java::util::Vector* elements = nullptr;
	::java::util::Hashtable* elementHash = nullptr;
	::java::util::Hashtable* entityHash = nullptr;
	::javax::swing::text::html::parser::Element* pcdata = nullptr;
	::javax::swing::text::html::parser::Element* html = nullptr;
	::javax::swing::text::html::parser::Element* meta = nullptr;
	::javax::swing::text::html::parser::Element* base = nullptr;
	::javax::swing::text::html::parser::Element* isindex = nullptr;
	::javax::swing::text::html::parser::Element* head = nullptr;
	::javax::swing::text::html::parser::Element* body = nullptr;
	::javax::swing::text::html::parser::Element* applet = nullptr;
	::javax::swing::text::html::parser::Element* param = nullptr;
	::javax::swing::text::html::parser::Element* p = nullptr;
	::javax::swing::text::html::parser::Element* title = nullptr;
	::javax::swing::text::html::parser::Element* style = nullptr;
	::javax::swing::text::html::parser::Element* link = nullptr;
	::javax::swing::text::html::parser::Element* script = nullptr;
	static const int32_t FILE_VERSION = 1;
	static $Object* DTD_HASH_KEY;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("DTD")
#pragma pop_macro("DTD_HASH_KEY")
#pragma pop_macro("FILE_VERSION")

#endif // _javax_swing_text_html_parser_DTD_h_