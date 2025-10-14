#ifndef _javax_swing_JSpinner$DateEditorFormatter_h_
#define _javax_swing_JSpinner$DateEditorFormatter_h_
//$ class javax.swing.JSpinner$DateEditorFormatter
//$ extends javax.swing.text.DateFormatter

#include <javax/swing/text/DateFormatter.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace javax {
	namespace swing {
		class SpinnerDateModel;
	}
}

namespace javax {
	namespace swing {

class JSpinner$DateEditorFormatter : public ::javax::swing::text::DateFormatter {
	$class(JSpinner$DateEditorFormatter, $NO_CLASS_INIT, ::javax::swing::text::DateFormatter)
public:
	JSpinner$DateEditorFormatter();
	void init$(::javax::swing::SpinnerDateModel* model, ::java::text::DateFormat* format);
	virtual ::java::lang::Comparable* getMaximum() override;
	virtual ::java::lang::Comparable* getMinimum() override;
	using ::javax::swing::text::DateFormatter::setFormat;
	virtual void setMaximum(::java::lang::Comparable* max) override;
	virtual void setMinimum(::java::lang::Comparable* min) override;
	using ::javax::swing::text::DateFormatter::updateValue;
	::javax::swing::SpinnerDateModel* model = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$DateEditorFormatter_h_