#ifndef _javax_swing_JFormattedTextField$AbstractFormatterFactory_h_
#define _javax_swing_JFormattedTextField$AbstractFormatterFactory_h_
//$ class javax.swing.JFormattedTextField$AbstractFormatterFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
		class JFormattedTextField$AbstractFormatter;
	}
}

namespace javax {
	namespace swing {

class $export JFormattedTextField$AbstractFormatterFactory : public ::java::lang::Object {
	$class(JFormattedTextField$AbstractFormatterFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JFormattedTextField$AbstractFormatterFactory();
	void init$();
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getFormatter(::javax::swing::JFormattedTextField* tf) {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_JFormattedTextField$AbstractFormatterFactory_h_