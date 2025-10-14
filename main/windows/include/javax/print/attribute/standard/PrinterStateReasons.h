#ifndef _javax_print_attribute_standard_PrinterStateReasons_h_
#define _javax_print_attribute_standard_PrinterStateReasons_h_
//$ class javax.print.attribute.standard.PrinterStateReasons
//$ extends java.util.HashMap
//$ implements javax.print.attribute.PrintServiceAttribute

#include <java/util/HashMap.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class PrinterStateReason;
				class Severity;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import PrinterStateReasons : public ::java::util::HashMap, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterStateReasons, $NO_CLASS_INIT, ::java::util::HashMap, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterStateReasons();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t initialCapacity);
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(::java::util::Map* map);
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	::java::util::Set* printerStateReasonSet(::javax::print::attribute::standard::Severity* severity);
	::javax::print::attribute::standard::Severity* put(::javax::print::attribute::standard::PrinterStateReason* reason, ::javax::print::attribute::standard::Severity* severity);
	virtual $Object* put(Object$* reason, Object$* severity) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xCC3603C7A8DA5B7F;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterStateReasons_h_