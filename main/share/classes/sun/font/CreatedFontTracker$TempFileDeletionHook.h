#ifndef _sun_font_CreatedFontTracker$TempFileDeletionHook_h_
#define _sun_font_CreatedFontTracker$TempFileDeletionHook_h_
//$ class sun.font.CreatedFontTracker$TempFileDeletionHook
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
		class Void;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace sun {
	namespace font {

class CreatedFontTracker$TempFileDeletionHook : public ::java::lang::Object {
	$class(CreatedFontTracker$TempFileDeletionHook, 0, ::java::lang::Object)
public:
	CreatedFontTracker$TempFileDeletionHook();
	void init$();
	static void add(::java::io::File* file);
	static void init();
	static ::java::lang::Void* lambda$init$0();
	static void remove(::java::io::File* file);
	static void runHooks();
	static void set(::java::io::File* file, ::java::io::OutputStream* os);
	static ::java::util::HashMap* files;
	static $Thread* t;
};

	} // font
} // sun

#endif // _sun_font_CreatedFontTracker$TempFileDeletionHook_h_