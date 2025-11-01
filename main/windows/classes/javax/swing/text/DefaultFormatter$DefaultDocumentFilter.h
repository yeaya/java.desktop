#ifndef _javax_swing_text_DefaultFormatter$DefaultDocumentFilter_h_
#define _javax_swing_text_DefaultFormatter$DefaultDocumentFilter_h_
//$ class javax.swing.text.DefaultFormatter$DefaultDocumentFilter
//$ extends javax.swing.text.DocumentFilter
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/text/DocumentFilter.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class DefaultFormatter;
			class DocumentFilter$FilterBypass;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class DefaultFormatter$DefaultDocumentFilter : public ::javax::swing::text::DocumentFilter, public ::java::io::Serializable {
	$class(DefaultFormatter$DefaultDocumentFilter, $NO_CLASS_INIT, ::javax::swing::text::DocumentFilter, ::java::io::Serializable)
public:
	DefaultFormatter$DefaultDocumentFilter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::DefaultFormatter* this$0);
	virtual void insertString(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, ::javax::swing::text::AttributeSet* attr) override;
	virtual void remove(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) override;
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attr) override;
	virtual $String* toString() override;
	::javax::swing::text::DefaultFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultFormatter$DefaultDocumentFilter_h_