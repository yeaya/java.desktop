#ifndef _javax_swing_text_html_parser_AttributeList_h_
#define _javax_swing_text_html_parser_AttributeList_h_
//$ class javax.swing.text.html.parser.AttributeList
//$ extends javax.swing.text.html.parser.DTDConstants
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/text/html/parser/DTDConstants.h>

namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Vector;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

class $export AttributeList : public ::javax::swing::text::html::parser::DTDConstants, public ::java::io::Serializable {
	$class(AttributeList, 0, ::javax::swing::text::html::parser::DTDConstants, ::java::io::Serializable)
public:
	AttributeList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* name);
	void init$($String* name, int32_t type, int32_t modifier, $String* value, ::java::util::Vector* values, ::javax::swing::text::html::parser::AttributeList* next);
	static void defineAttributeType($String* nm, int32_t val);
	int32_t getModifier();
	$String* getName();
	::javax::swing::text::html::parser::AttributeList* getNext();
	int32_t getType();
	$String* getValue();
	::java::util::Enumeration* getValues();
	static int32_t name2type($String* nm);
	virtual $String* toString() override;
	static $String* type2name(int32_t tp);
	$String* name = nullptr;
	int32_t type = 0;
	::java::util::Vector* values = nullptr;
	int32_t modifier = 0;
	$String* value = nullptr;
	::javax::swing::text::html::parser::AttributeList* next = nullptr;
	static ::java::util::Hashtable* attributeTypes;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_parser_AttributeList_h_