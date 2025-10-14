#ifndef _sun_print_PSStreamPrintService_h_
#define _sun_print_PSStreamPrintService_h_
//$ class sun.print.PSStreamPrintService
//$ extends javax.print.StreamPrintService
//$ implements sun.print.SunPrinterJobService

#include <java/lang/Array.h>
#include <javax/print/StreamPrintService.h>
#include <sun/print/SunPrinterJobService.h>

#pragma push_macro("MAXCOPIES")
#undef MAXCOPIES

namespace java {
	namespace io {
		class OutputStream;
	}
}
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
		namespace attribute {
			namespace standard {
				class Copies;
				class MediaSizeName;
			}
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

namespace sun {
	namespace print {

class PSStreamPrintService : public ::javax::print::StreamPrintService, public ::sun::print::SunPrinterJobService {
	$class(PSStreamPrintService, 0, ::javax::print::StreamPrintService, ::sun::print::SunPrinterJobService)
public:
	PSStreamPrintService();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::io::OutputStream* out);
	virtual void addPrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	virtual ::javax::print::DocPrintJob* createPrintJob() override;
	virtual bool equals(Object$* obj) override;
	virtual ::javax::print::attribute::PrintServiceAttribute* getAttribute($Class* category) override;
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getAttributes() override;
	virtual $Object* getDefaultAttributeValue($Class* category) override;
	virtual $String* getName() override;
	virtual $String* getOutputFormat() override;
	virtual ::javax::print::ServiceUIFactory* getServiceUIFactory() override;
	virtual $ClassArray* getSupportedAttributeCategories() override;
	virtual $Object* getSupportedAttributeValues($Class* category, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() override;
	virtual ::javax::print::attribute::AttributeSet* getUnsupportedAttributes(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual int32_t hashCode() override;
	virtual bool isAttributeCategorySupported($Class* category) override;
	virtual bool isAttributeValueSupported(::javax::print::attribute::Attribute* attr, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual bool isDocFlavorSupported(::javax::print::DocFlavor* flavor) override;
	bool isSupportedCopies(::javax::print::attribute::standard::Copies* copies);
	bool isSupportedMedia(::javax::print::attribute::standard::MediaSizeName* msn);
	virtual void removePrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	virtual $String* toString() override;
	virtual bool usesClass($Class* c) override;
	static $ClassArray* suppAttrCats;
	static int32_t MAXCOPIES;
	static $Array<::javax::print::attribute::standard::MediaSizeName>* mediaSizes;
};

	} // print
} // sun

#pragma pop_macro("MAXCOPIES")

#endif // _sun_print_PSStreamPrintService_h_