#ifndef _sun_print_CustomMediaSizeName_h_
#define _sun_print_CustomMediaSizeName_h_
//$ class sun.print.CustomMediaSizeName
//$ extends javax.print.attribute.standard.MediaSizeName

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/MediaSizeName.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class EnumSyntax;
		}
	}
}
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

class CustomMediaSizeName : public ::javax::print::attribute::standard::MediaSizeName {
	$class(CustomMediaSizeName, 0, ::javax::print::attribute::standard::MediaSizeName)
public:
	CustomMediaSizeName();
	void init$(int32_t x);
	void init$($String* name);
	void init$($String* name, $String* choice, float width, float length);
	static ::javax::print::attribute::standard::MediaSizeName* findMedia($Array<::javax::print::attribute::standard::Media>* media, float x, float y, int32_t units);
	virtual $String* getChoiceName();
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual ::javax::print::attribute::standard::MediaSizeName* getStandardMedia();
	virtual $StringArray* getStringTable() override;
	virtual $Array<::javax::print::attribute::standard::Media>* getSuperEnumTable();
	static int32_t nextValue($String* name);
	static ::java::util::ArrayList* customStringTable;
	static ::java::util::ArrayList* customEnumTable;
	$String* choiceName = nullptr;
	::javax::print::attribute::standard::MediaSizeName* mediaName = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x66DF9538A70657C5;
};

	} // print
} // sun

#endif // _sun_print_CustomMediaSizeName_h_