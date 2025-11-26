#ifndef _sun_font_SunFontManager$TTFilter_h_
#define _sun_font_SunFontManager$TTFilter_h_
//$ class sun.font.SunFontManager$TTFilter
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace font {

class SunFontManager$TTFilter : public ::java::io::FilenameFilter {
	$class(SunFontManager$TTFilter, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	SunFontManager$TTFilter();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$TTFilter_h_