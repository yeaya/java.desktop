#ifndef _sun_font_CreatedFontTracker_h_
#define _sun_font_CreatedFontTracker_h_
//$ class sun.font.CreatedFontTracker
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_FILE_SIZE")
#undef MAX_FILE_SIZE
#pragma push_macro("MAX_TOTAL_BYTES")
#undef MAX_TOTAL_BYTES

namespace java {
	namespace io {
		class File;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Semaphore;
		}
	}
}

namespace sun {
	namespace font {

class CreatedFontTracker : public ::java::lang::Object {
	$class(CreatedFontTracker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CreatedFontTracker();
	void init$();
	virtual bool acquirePermit();
	virtual void add(::java::io::File* file);
	virtual void addBytes(int32_t sz);
	static ::java::util::concurrent::Semaphore* getCS();
	virtual int32_t getNumBytes();
	static ::sun::font::CreatedFontTracker* getTracker();
	virtual void releasePermit();
	virtual void remove(::java::io::File* file);
	virtual void set(::java::io::File* file, ::java::io::OutputStream* os);
	virtual void subBytes(int32_t sz);
	static const int32_t MAX_FILE_SIZE = 33554432; // 32 * 1024 * 1024
	static const int32_t MAX_TOTAL_BYTES = 0x14000000; // 10 * MAX_FILE_SIZE
	static ::sun::font::CreatedFontTracker* tracker;
	int32_t numBytes = 0;
};

	} // font
} // sun

#pragma pop_macro("MAX_FILE_SIZE")
#pragma pop_macro("MAX_TOTAL_BYTES")

#endif // _sun_font_CreatedFontTracker_h_