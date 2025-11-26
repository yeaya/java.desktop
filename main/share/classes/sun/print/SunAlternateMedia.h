#ifndef _sun_print_SunAlternateMedia_h_
#define _sun_print_SunAlternateMedia_h_
//$ class sun.print.SunAlternateMedia
//$ extends javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintRequestAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class Media;
			}
		}
	}
}

namespace sun {
	namespace print {

class SunAlternateMedia : public ::javax::print::attribute::PrintRequestAttribute {
	$class(SunAlternateMedia, $NO_CLASS_INIT, ::javax::print::attribute::PrintRequestAttribute)
public:
	SunAlternateMedia();
	void init$(::javax::print::attribute::standard::Media* altMedia);
	virtual $Class* getCategory() override;
	virtual ::javax::print::attribute::standard::Media* getMedia();
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x84C7EC4834A166E7;
	::javax::print::attribute::standard::Media* media = nullptr;
};

	} // print
} // sun

#endif // _sun_print_SunAlternateMedia_h_