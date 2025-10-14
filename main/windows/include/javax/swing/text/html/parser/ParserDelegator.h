#ifndef _javax_swing_text_html_parser_ParserDelegator_h_
#define _javax_swing_text_html_parser_ParserDelegator_h_
//$ class javax.swing.text.html.parser.ParserDelegator
//$ extends javax.swing.text.html.HTMLEditorKit$Parser
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>

#pragma push_macro("DTD_KEY")
#undef DTD_KEY

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class Reader;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLEditorKit$ParserCallback;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {
					class DTD;
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

class $import ParserDelegator : public ::javax::swing::text::html::HTMLEditorKit$Parser, public ::java::io::Serializable {
	$class(ParserDelegator, 0, ::javax::swing::text::html::HTMLEditorKit$Parser, ::java::io::Serializable)
public:
	ParserDelegator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::text::html::parser::DTD* createDTD(::javax::swing::text::html::parser::DTD* dtd, $String* name);
	static ::javax::swing::text::html::parser::DTD* getDefaultDTD();
	static ::java::io::InputStream* getResourceAsStream($String* name);
	virtual void parse(::java::io::Reader* r, ::javax::swing::text::html::HTMLEditorKit$ParserCallback* cb, bool ignoreCharSet) override;
	void readObject(::java::io::ObjectInputStream* s);
	static void setDefaultDTD();
	virtual $String* toString() override;
	static $Object* DTD_KEY;
};

				} // parser
			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("DTD_KEY")

#endif // _javax_swing_text_html_parser_ParserDelegator_h_