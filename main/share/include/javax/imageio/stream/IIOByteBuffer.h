#ifndef _javax_imageio_stream_IIOByteBuffer_h_
#define _javax_imageio_stream_IIOByteBuffer_h_
//$ class javax.imageio.stream.IIOByteBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace stream {

class $import IIOByteBuffer : public ::java::lang::Object {
	$class(IIOByteBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOByteBuffer();
	void init$($bytes* data, int32_t offset, int32_t length);
	virtual $bytes* getData();
	virtual int32_t getLength();
	virtual int32_t getOffset();
	virtual void setData($bytes* data);
	virtual void setLength(int32_t length);
	virtual void setOffset(int32_t offset);
	$bytes* data = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_IIOByteBuffer_h_