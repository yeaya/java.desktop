#ifndef _javax_print_PrintService_h_
#define _javax_print_PrintService_h_
//$ interface javax.print.PrintService
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace print {
		class DocFlavor;
		class DocPrintJob;
		class ServiceUIFactory;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class Attribute;
			class AttributeSet;
			class PrintServiceAttribute;
			class PrintServiceAttributeSet;
		}
	}
}
namespace javax {
	namespace print {
		namespace event {
			class PrintServiceAttributeListener;
		}
	}
}

namespace javax {
	namespace print {

class $import PrintService : public ::java::lang::Object {
	$interface(PrintService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addPrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) {}
	virtual ::javax::print::DocPrintJob* createPrintJob() {return nullptr;}
	virtual bool equals(Object$* obj) override;
	virtual ::javax::print::attribute::PrintServiceAttribute* getAttribute($Class* category) {return nullptr;}
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getAttributes() {return nullptr;}
	virtual $Object* getDefaultAttributeValue($Class* category) {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual ::javax::print::ServiceUIFactory* getServiceUIFactory() {return nullptr;}
	virtual $ClassArray* getSupportedAttributeCategories() {return nullptr;}
	virtual $Object* getSupportedAttributeValues($Class* category, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) {return nullptr;}
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() {return nullptr;}
	virtual ::javax::print::attribute::AttributeSet* getUnsupportedAttributes(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isAttributeCategorySupported($Class* category) {return false;}
	virtual bool isAttributeValueSupported(::javax::print::attribute::Attribute* attrval, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) {return false;}
	virtual bool isDocFlavorSupported(::javax::print::DocFlavor* flavor) {return false;}
	virtual void removePrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) {}
};

	} // print
} // javax

#endif // _javax_print_PrintService_h_