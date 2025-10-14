#ifndef _javax_swing_text_html_Option_h_
#define _javax_swing_text_html_Option_h_
//$ class javax.swing.text.html.Option
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export Option : public ::java::io::Serializable {
	$class(Option, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Option();
	void init$(::javax::swing::text::AttributeSet* attr);
	virtual ::javax::swing::text::AttributeSet* getAttributes();
	virtual $String* getLabel();
	virtual $String* getValue();
	virtual bool isSelected();
	virtual void setLabel($String* label);
	virtual void setSelection(bool state);
	virtual $String* toString() override;
	bool selected = false;
	$String* label = nullptr;
	::javax::swing::text::AttributeSet* attr = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Option_h_