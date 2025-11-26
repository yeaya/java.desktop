#ifndef _javax_print_attribute_standard_PrinterStateReasons$PrinterStateReasonSet_h_
#define _javax_print_attribute_standard_PrinterStateReasons$PrinterStateReasonSet_h_
//$ class javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class PrinterStateReasons;
				class Severity;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class PrinterStateReasons$PrinterStateReasonSet : public ::java::util::AbstractSet {
	$class(PrinterStateReasons$PrinterStateReasonSet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	PrinterStateReasons$PrinterStateReasonSet();
	void init$(::javax::print::attribute::standard::PrinterStateReasons* this$0, ::javax::print::attribute::standard::Severity* severity, ::java::util::Set* entrySet);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::javax::print::attribute::standard::PrinterStateReasons* this$0 = nullptr;
	::javax::print::attribute::standard::Severity* mySeverity = nullptr;
	::java::util::Set* myEntrySet = nullptr;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterStateReasons$PrinterStateReasonSet_h_