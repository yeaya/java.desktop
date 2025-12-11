#ifndef _sun_java2d_DataBufferNIOInt_h_
#define _sun_java2d_DataBufferNIOInt_h_
//$ class sun.java2d.DataBufferNIOInt
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class IntBuffer;
	}
}

namespace sun {
	namespace java2d {

class DataBufferNIOInt : public ::java::awt::image::DataBuffer {
	$class(DataBufferNIOInt, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferNIOInt();
	void init$(int32_t size);
	$Array<int32_t, 2>* getBankData();
	::java::nio::IntBuffer* getBuffer();
	::java::nio::IntBuffer* getBuffer(int32_t bank);
	::java::nio::ByteBuffer* getBufferOfSize(int32_t size);
	$ints* getData();
	$ints* getData(int32_t bank);
	virtual int32_t getElem(int32_t i) override;
	virtual int32_t getElem(int32_t bank, int32_t i) override;
	virtual void setElem(int32_t i, int32_t val) override;
	virtual void setElem(int32_t bank, int32_t i, int32_t val) override;
	::java::nio::IntBuffer* data = nullptr;
	$Array<::java::nio::IntBuffer>* bankdata = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_DataBufferNIOInt_h_