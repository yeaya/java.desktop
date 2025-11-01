#ifndef _javax_swing_text_html_HTML$UnknownTag_h_
#define _javax_swing_text_html_HTML$UnknownTag_h_
//$ class javax.swing.text.html.HTML$UnknownTag
//$ extends javax.swing.text.html.HTML$Tag
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/text/html/HTML$Tag.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTML$UnknownTag : public ::javax::swing::text::html::HTML$Tag, public ::java::io::Serializable {
	$class(HTML$UnknownTag, $NO_CLASS_INIT, ::javax::swing::text::html::HTML$Tag, ::java::io::Serializable)
public:
	HTML$UnknownTag();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* id);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTML$UnknownTag_h_