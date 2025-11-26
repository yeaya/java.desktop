#ifndef _sun_font_SunFontManager$TTorT1Filter_h_
#define _sun_font_SunFontManager$TTorT1Filter_h_
//$ class sun.font.SunFontManager$TTorT1Filter
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace font {

class SunFontManager$TTorT1Filter : public ::java::io::FilenameFilter {
	$class(SunFontManager$TTorT1Filter, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	SunFontManager$TTorT1Filter();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$TTorT1Filter_h_