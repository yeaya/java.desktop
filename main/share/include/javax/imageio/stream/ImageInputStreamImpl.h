#ifndef _javax_imageio_stream_ImageInputStreamImpl_h_
#define _javax_imageio_stream_ImageInputStreamImpl_h_
//$ class javax.imageio.stream.ImageInputStreamImpl
//$ extends javax.imageio.stream.ImageInputStream

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageInputStream.h>

#pragma push_macro("BYTE_BUF_LENGTH")
#undef BYTE_BUF_LENGTH

namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace util {
		class Stack;
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class IIOByteBuffer;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class $import ImageInputStreamImpl : public ::javax::imageio::stream::ImageInputStream {
	$class(ImageInputStreamImpl, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::imageio::stream::ImageInputStream)
public:
	ImageInputStreamImpl();
	void init$();
	void checkClosed();
	virtual void close() override;
	virtual void finalize() override;
	virtual void flush() override;
	virtual void flushBefore(int64_t pos) override;
	virtual int32_t getBitOffset() override;
	virtual ::java::nio::ByteOrder* getByteOrder() override;
	virtual int64_t getFlushedPosition() override;
	virtual int64_t getStreamPosition() override;
	virtual bool isCached() override;
	virtual bool isCachedFile() override;
	virtual bool isCachedMemory() override;
	virtual int64_t length() override;
	virtual void mark() override;
	virtual int32_t read() override {return 0;}
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override {return 0;}
	virtual int32_t read($bytes* b) override;
	virtual int32_t readBit() override;
	virtual int64_t readBits(int32_t numBits) override;
	virtual bool readBoolean() override;
	virtual int8_t readByte() override;
	virtual void readBytes(::javax::imageio::stream::IIOByteBuffer* buf, int32_t len) override;
	virtual char16_t readChar() override;
	virtual double readDouble() override;
	virtual float readFloat() override;
	virtual void readFully($bytes* b, int32_t off, int32_t len) override;
	virtual void readFully($bytes* b) override;
	virtual void readFully($shorts* s, int32_t off, int32_t len) override;
	virtual void readFully($chars* c, int32_t off, int32_t len) override;
	virtual void readFully($ints* i, int32_t off, int32_t len) override;
	virtual void readFully($longs* l, int32_t off, int32_t len) override;
	virtual void readFully($floats* f, int32_t off, int32_t len) override;
	virtual void readFully($doubles* d, int32_t off, int32_t len) override;
	virtual int32_t readInt() override;
	virtual $String* readLine() override;
	virtual int64_t readLong() override;
	virtual int16_t readShort() override;
	virtual $String* readUTF() override;
	virtual int32_t readUnsignedByte() override;
	virtual int64_t readUnsignedInt() override;
	virtual int32_t readUnsignedShort() override;
	virtual void reset() override;
	virtual void seek(int64_t pos) override;
	virtual void setBitOffset(int32_t bitOffset) override;
	virtual void setByteOrder(::java::nio::ByteOrder* byteOrder) override;
	virtual int32_t skipBytes(int32_t n) override;
	virtual int64_t skipBytes(int64_t n) override;
	void toChars($bytes* b, $chars* c, int32_t off, int32_t len);
	void toDoubles($bytes* b, $doubles* d, int32_t off, int32_t len);
	void toFloats($bytes* b, $floats* f, int32_t off, int32_t len);
	void toInts($bytes* b, $ints* i, int32_t off, int32_t len);
	void toLongs($bytes* b, $longs* l, int32_t off, int32_t len);
	void toShorts($bytes* b, $shorts* s, int32_t off, int32_t len);
	::java::util::Stack* markByteStack = nullptr;
	::java::util::Stack* markBitStack = nullptr;
	bool isClosed = false;
	static const int32_t BYTE_BUF_LENGTH = 8192;
	$bytes* byteBuf = nullptr;
	::java::nio::ByteOrder* byteOrder = nullptr;
	int64_t streamPos = 0;
	int32_t bitOffset = 0;
	int64_t flushedPos = 0;
};

		} // stream
	} // imageio
} // javax

#pragma pop_macro("BYTE_BUF_LENGTH")

#endif // _javax_imageio_stream_ImageInputStreamImpl_h_