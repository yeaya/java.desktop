#ifndef _sun_print_Win32MediaSize_h_
#define _sun_print_Win32MediaSize_h_
//$ class sun.print.Win32MediaSize
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
				class MediaSize;
			}
		}
	}
}

namespace sun {
	namespace print {

class Win32MediaSize : public ::javax::print::attribute::standard::MediaSizeName {
	$class(Win32MediaSize, 0, ::javax::print::attribute::standard::MediaSizeName)
public:
	Win32MediaSize();
	void init$(int32_t x);
	void init$($String* name, int32_t dmPaper);
	static ::sun::print::Win32MediaSize* findMediaName($String* name);
	virtual int32_t getDMPaper();
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	static $Array<::javax::print::attribute::standard::MediaSize>* getPredefMedia();
	virtual $StringArray* getStringTable() override;
	$Array<::javax::print::attribute::standard::MediaSizeName>* getSuperEnumTable();
	static int32_t nextValue($String* name);
	static ::java::util::ArrayList* winStringTable;
	static ::java::util::ArrayList* winEnumTable;
	static $Array<::javax::print::attribute::standard::MediaSize>* predefMedia;
	int32_t dmPaperID = 0;
};

	} // print
} // sun

#endif // _sun_print_Win32MediaSize_h_