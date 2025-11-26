#ifndef _sun_font_FileFont$CreatedFontFileDisposerRecord$1_h_
#define _sun_font_FileFont$CreatedFontFileDisposerRecord$1_h_
//$ class sun.font.FileFont$CreatedFontFileDisposerRecord$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class FileFont$CreatedFontFileDisposerRecord;
	}
}

namespace sun {
	namespace font {

class FileFont$CreatedFontFileDisposerRecord$1 : public ::java::security::PrivilegedAction {
	$class(FileFont$CreatedFontFileDisposerRecord$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileFont$CreatedFontFileDisposerRecord$1();
	void init$(::sun::font::FileFont$CreatedFontFileDisposerRecord* this$0);
	virtual $Object* run() override;
	::sun::font::FileFont$CreatedFontFileDisposerRecord* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FileFont$CreatedFontFileDisposerRecord$1_h_