#ifndef _javax_swing_text_DateFormatter_h_
#define _javax_swing_text_DateFormatter_h_
//$ class javax.swing.text.DateFormatter
//$ extends javax.swing.text.InternationalFormatter

#include <javax/swing/text/InternationalFormatter.h>

namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Map;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DateFormatter : public ::javax::swing::text::InternationalFormatter {
	$class(DateFormatter, $NO_CLASS_INIT, ::javax::swing::text::InternationalFormatter)
public:
	DateFormatter();
	void init$();
	void init$(::java::text::DateFormat* format);
	virtual $Object* adjustValue(Object$* value, ::java::util::Map* attributes, Object$* key, int32_t direction) override;
	virtual $Object* getAdjustField(int32_t start, ::java::util::Map* attributes) override;
	::java::util::Calendar* getCalendar();
	virtual bool getSupportsIncrement() override;
	using ::javax::swing::text::InternationalFormatter::setFormat;
	virtual void setFormat(::java::text::DateFormat* format);
	using ::javax::swing::text::InternationalFormatter::updateValue;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DateFormatter_h_