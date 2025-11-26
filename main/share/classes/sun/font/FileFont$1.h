#ifndef _sun_font_FileFont$1_h_
#define _sun_font_FileFont$1_h_
//$ class sun.font.FileFont$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace font {
		class FileFont;
	}
}

namespace sun {
	namespace font {

class FileFont$1 : public ::java::security::PrivilegedExceptionAction {
	$class(FileFont$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	FileFont$1();
	void init$(::sun::font::FileFont* this$0, ::java::io::File* val$f);
	virtual $Object* run() override;
	::sun::font::FileFont* this$0 = nullptr;
	::java::io::File* val$f = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FileFont$1_h_