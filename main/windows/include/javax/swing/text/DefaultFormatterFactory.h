#ifndef _javax_swing_text_DefaultFormatterFactory_h_
#define _javax_swing_text_DefaultFormatterFactory_h_
//$ class javax.swing.text.DefaultFormatterFactory
//$ extends javax.swing.JFormattedTextField$AbstractFormatterFactory
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
		class JFormattedTextField$AbstractFormatter;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultFormatterFactory : public ::javax::swing::JFormattedTextField$AbstractFormatterFactory, public ::java::io::Serializable {
	$class(DefaultFormatterFactory, $NO_CLASS_INIT, ::javax::swing::JFormattedTextField$AbstractFormatterFactory, ::java::io::Serializable)
public:
	DefaultFormatterFactory();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::swing::JFormattedTextField$AbstractFormatter* defaultFormat);
	void init$(::javax::swing::JFormattedTextField$AbstractFormatter* defaultFormat, ::javax::swing::JFormattedTextField$AbstractFormatter* displayFormat);
	void init$(::javax::swing::JFormattedTextField$AbstractFormatter* defaultFormat, ::javax::swing::JFormattedTextField$AbstractFormatter* displayFormat, ::javax::swing::JFormattedTextField$AbstractFormatter* editFormat);
	void init$(::javax::swing::JFormattedTextField$AbstractFormatter* defaultFormat, ::javax::swing::JFormattedTextField$AbstractFormatter* displayFormat, ::javax::swing::JFormattedTextField$AbstractFormatter* editFormat, ::javax::swing::JFormattedTextField$AbstractFormatter* nullFormat);
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getDefaultFormatter();
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getDisplayFormatter();
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getEditFormatter();
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getFormatter(::javax::swing::JFormattedTextField* source) override;
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getNullFormatter();
	virtual void setDefaultFormatter(::javax::swing::JFormattedTextField$AbstractFormatter* atf);
	virtual void setDisplayFormatter(::javax::swing::JFormattedTextField$AbstractFormatter* atf);
	virtual void setEditFormatter(::javax::swing::JFormattedTextField$AbstractFormatter* atf);
	virtual void setNullFormatter(::javax::swing::JFormattedTextField$AbstractFormatter* atf);
	virtual $String* toString() override;
	::javax::swing::JFormattedTextField$AbstractFormatter* defaultFormat = nullptr;
	::javax::swing::JFormattedTextField$AbstractFormatter* displayFormat = nullptr;
	::javax::swing::JFormattedTextField$AbstractFormatter* editFormat = nullptr;
	::javax::swing::JFormattedTextField$AbstractFormatter* nullFormat = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultFormatterFactory_h_