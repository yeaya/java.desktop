#ifndef _sun_font_FileFont$CreatedFontFileDisposerRecord_h_
#define _sun_font_FileFont$CreatedFontFileDisposerRecord_h_
//$ class sun.font.FileFont$CreatedFontFileDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace font {
		class CreatedFontTracker;
	}
}

namespace sun {
	namespace font {

class FileFont$CreatedFontFileDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(FileFont$CreatedFontFileDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	FileFont$CreatedFontFileDisposerRecord();
	void init$(::java::io::File* file, int32_t cnt, ::sun::font::CreatedFontTracker* tracker);
	virtual void dispose() override;
	::java::io::File* fontFile = nullptr;
	int32_t count = 0;
	::sun::font::CreatedFontTracker* tracker = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FileFont$CreatedFontFileDisposerRecord_h_