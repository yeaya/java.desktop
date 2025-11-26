#ifndef _sun_font_SunFontManager$T1Filter_h_
#define _sun_font_SunFontManager$T1Filter_h_
//$ class sun.font.SunFontManager$T1Filter
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace font {

class SunFontManager$T1Filter : public ::java::io::FilenameFilter {
	$class(SunFontManager$T1Filter, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	SunFontManager$T1Filter();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$T1Filter_h_