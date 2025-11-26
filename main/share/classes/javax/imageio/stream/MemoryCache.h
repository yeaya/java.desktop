#ifndef _javax_imageio_stream_MemoryCache_h_
#define _javax_imageio_stream_MemoryCache_h_
//$ class javax.imageio.stream.MemoryCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUFFER_LENGTH")
#undef BUFFER_LENGTH

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class MemoryCache : public ::java::lang::Object {
	$class(MemoryCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MemoryCache();
	void init$();
	virtual void disposeBefore(int64_t pos);
	$bytes* getCacheBlock(int64_t blockNum);
	virtual int64_t getLength();
	virtual int64_t loadFromStream(::java::io::InputStream* stream, int64_t pos);
	void pad(int64_t pos);
	virtual int32_t read(int64_t pos);
	virtual void read($bytes* b, int32_t off, int32_t len, int64_t pos);
	virtual void reset();
	virtual void write($bytes* b, int32_t off, int32_t len, int64_t pos);
	virtual void write(int32_t b, int64_t pos);
	virtual void writeToStream(::java::io::OutputStream* stream, int64_t pos, int64_t len);
	static const int32_t BUFFER_LENGTH = 8192;
	::java::util::ArrayList* cache = nullptr;
	int64_t cacheStart = 0;
	int64_t length = 0;
};

		} // stream
	} // imageio
} // javax

#pragma pop_macro("BUFFER_LENGTH")

#endif // _javax_imageio_stream_MemoryCache_h_