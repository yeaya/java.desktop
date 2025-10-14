#ifndef _sun_font_TrueTypeFont$TTDisposerRecord_h_
#define _sun_font_TrueTypeFont$TTDisposerRecord_h_
//$ class sun.font.TrueTypeFont$TTDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

namespace sun {
	namespace font {

class TrueTypeFont$TTDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(TrueTypeFont$TTDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	TrueTypeFont$TTDisposerRecord();
	void init$();
	virtual void dispose() override;
	::java::nio::channels::FileChannel* channel = nullptr;
};

	} // font
} // sun

#endif // _sun_font_TrueTypeFont$TTDisposerRecord_h_