#ifndef _sun_font_Type1Font$T1DisposerRecord_h_
#define _sun_font_Type1Font$T1DisposerRecord_h_
//$ class sun.font.Type1Font$T1DisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace font {

class Type1Font$T1DisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(Type1Font$T1DisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	Type1Font$T1DisposerRecord();
	void init$($String* name);
	virtual void dispose() override;
	$String* fileName = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Type1Font$T1DisposerRecord_h_