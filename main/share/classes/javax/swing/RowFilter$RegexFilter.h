#ifndef _javax_swing_RowFilter$RegexFilter_h_
#define _javax_swing_RowFilter$RegexFilter_h_
//$ class javax.swing.RowFilter$RegexFilter
//$ extends javax.swing.RowFilter$GeneralFilter

#include <java/lang/Array.h>
#include <javax/swing/RowFilter$GeneralFilter.h>

namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern;
		}
	}
}
namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$RegexFilter : public ::javax::swing::RowFilter$GeneralFilter {
	$class(RowFilter$RegexFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter$GeneralFilter)
public:
	RowFilter$RegexFilter();
	using ::javax::swing::RowFilter$GeneralFilter::include;
	void init$(::java::util::regex::Pattern* regex, $ints* columns);
	virtual bool include(::javax::swing::RowFilter$Entry* value, int32_t index) override;
	::java::util::regex::Matcher* matcher = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$RegexFilter_h_