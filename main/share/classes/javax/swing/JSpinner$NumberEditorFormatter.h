#ifndef _javax_swing_JSpinner$NumberEditorFormatter_h_
#define _javax_swing_JSpinner$NumberEditorFormatter_h_
//$ class javax.swing.JSpinner$NumberEditorFormatter
//$ extends javax.swing.text.NumberFormatter

#include <javax/swing/text/NumberFormatter.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace text {
		class NumberFormat;
	}
}
namespace javax {
	namespace swing {
		class SpinnerNumberModel;
	}
}

namespace javax {
	namespace swing {

class JSpinner$NumberEditorFormatter : public ::javax::swing::text::NumberFormatter {
	$class(JSpinner$NumberEditorFormatter, $NO_CLASS_INIT, ::javax::swing::text::NumberFormatter)
public:
	JSpinner$NumberEditorFormatter();
	void init$(::javax::swing::SpinnerNumberModel* model, ::java::text::NumberFormat* format);
	virtual ::java::lang::Comparable* getMaximum() override;
	virtual ::java::lang::Comparable* getMinimum() override;
	using ::javax::swing::text::NumberFormatter::isLiteral;
	using ::javax::swing::text::NumberFormatter::replace;
	virtual void setMaximum(::java::lang::Comparable* max) override;
	virtual void setMinimum(::java::lang::Comparable* min) override;
	using ::javax::swing::text::NumberFormatter::stringToValue;
	using ::javax::swing::text::NumberFormatter::updateValue;
	::javax::swing::SpinnerNumberModel* model = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$NumberEditorFormatter_h_