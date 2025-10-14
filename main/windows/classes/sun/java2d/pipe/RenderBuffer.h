#ifndef _sun_java2d_pipe_RenderBuffer_h_
#define _sun_java2d_pipe_RenderBuffer_h_
//$ class sun.java2d.pipe.RenderBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COPY_FROM_ARRAY_THRESHOLD")
#undef COPY_FROM_ARRAY_THRESHOLD
#pragma push_macro("SIZEOF_BYTE")
#undef SIZEOF_BYTE
#pragma push_macro("SIZEOF_DOUBLE")
#undef SIZEOF_DOUBLE
#pragma push_macro("SIZEOF_FLOAT")
#undef SIZEOF_FLOAT
#pragma push_macro("SIZEOF_INT")
#undef SIZEOF_INT
#pragma push_macro("SIZEOF_LONG")
#undef SIZEOF_LONG
#pragma push_macro("SIZEOF_SHORT")
#undef SIZEOF_SHORT

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class RenderBuffer : public ::java::lang::Object {
	$class(RenderBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RenderBuffer();
	void init$(int32_t numBytes);
	static ::sun::java2d::pipe::RenderBuffer* allocate(int32_t numBytes);
	int32_t capacity();
	void clear();
	int64_t getAddress();
	int32_t position();
	void position(int64_t numBytes);
	virtual ::sun::java2d::pipe::RenderBuffer* put($bytes* x);
	virtual ::sun::java2d::pipe::RenderBuffer* put($bytes* x, int32_t offset, int32_t length);
	virtual ::sun::java2d::pipe::RenderBuffer* put($shorts* x);
	virtual ::sun::java2d::pipe::RenderBuffer* put($shorts* x, int32_t offset, int32_t length);
	virtual ::sun::java2d::pipe::RenderBuffer* put($ints* x);
	virtual ::sun::java2d::pipe::RenderBuffer* put($ints* x, int32_t offset, int32_t length);
	virtual ::sun::java2d::pipe::RenderBuffer* put($floats* x);
	virtual ::sun::java2d::pipe::RenderBuffer* put($floats* x, int32_t offset, int32_t length);
	virtual ::sun::java2d::pipe::RenderBuffer* put($longs* x);
	virtual ::sun::java2d::pipe::RenderBuffer* put($longs* x, int32_t offset, int32_t length);
	::sun::java2d::pipe::RenderBuffer* putByte(int8_t x);
	::sun::java2d::pipe::RenderBuffer* putDouble(double x);
	::sun::java2d::pipe::RenderBuffer* putFloat(float x);
	::sun::java2d::pipe::RenderBuffer* putInt(int32_t pos, int32_t x);
	::sun::java2d::pipe::RenderBuffer* putInt(int32_t x);
	::sun::java2d::pipe::RenderBuffer* putLong(int64_t x);
	::sun::java2d::pipe::RenderBuffer* putShort(int16_t x);
	int32_t remaining();
	::sun::java2d::pipe::RenderBuffer* skip(int64_t numBytes);
	static const int64_t SIZEOF_BYTE = (int64_t)1;
	static const int64_t SIZEOF_SHORT = (int64_t)2;
	static const int64_t SIZEOF_INT = (int64_t)4;
	static const int64_t SIZEOF_FLOAT = (int64_t)4;
	static const int64_t SIZEOF_LONG = (int64_t)8;
	static const int64_t SIZEOF_DOUBLE = (int64_t)8;
	static const int32_t COPY_FROM_ARRAY_THRESHOLD = 6;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	int64_t baseAddress = 0;
	int64_t endAddress = 0;
	int64_t curAddress = 0;
	int32_t capacity$ = 0;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("COPY_FROM_ARRAY_THRESHOLD")
#pragma pop_macro("SIZEOF_BYTE")
#pragma pop_macro("SIZEOF_DOUBLE")
#pragma pop_macro("SIZEOF_FLOAT")
#pragma pop_macro("SIZEOF_INT")
#pragma pop_macro("SIZEOF_LONG")
#pragma pop_macro("SIZEOF_SHORT")

#endif // _sun_java2d_pipe_RenderBuffer_h_