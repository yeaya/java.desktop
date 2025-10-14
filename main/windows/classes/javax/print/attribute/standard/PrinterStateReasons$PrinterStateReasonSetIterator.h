#ifndef _javax_print_attribute_standard_PrinterStateReasons$PrinterStateReasonSetIterator_h_
#define _javax_print_attribute_standard_PrinterStateReasons$PrinterStateReasonSetIterator_h_
//$ class javax.print.attribute.standard.PrinterStateReasons$PrinterStateReasonSetIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Map$Entry;
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

class PrinterStateReasons$PrinterStateReasonSetIterator : public ::java::util::Iterator {
	$class(PrinterStateReasons$PrinterStateReasonSetIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PrinterStateReasons$PrinterStateReasonSetIterator();
	void init$(::javax::print::attribute::standard::PrinterStateReasons* this$0, ::javax::print::attribute::standard::Severity* severity, ::java::util::Iterator* iterator);
	void goToNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::javax::print::attribute::standard::PrinterStateReasons* this$0 = nullptr;
	::javax::print::attribute::standard::Severity* mySeverity = nullptr;
	::java::util::Iterator* myIterator = nullptr;
	::java::util::Map$Entry* myEntry = nullptr;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterStateReasons$PrinterStateReasonSetIterator_h_