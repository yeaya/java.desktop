#ifndef _javax_imageio_stream_ImageInputStream_h_
#define _javax_imageio_stream_ImageInputStream_h_
//$ interface javax.imageio.stream.ImageInputStream
//$ extends java.io.DataInput,java.io.Closeable

#include <java/io/Closeable.h>
#include <java/io/DataInput.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteOrder;
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

class $import ImageInputStream : public ::java::io::DataInput, public ::java::io::Closeable {
	$interface(ImageInputStream, $NO_CLASS_INIT, ::java::io::DataInput, ::java::io::Closeable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flush() {}
	virtual void flushBefore(int64_t pos) {}
	virtual int32_t getBitOffset() {return 0;}
	virtual ::java::nio::ByteOrder* getByteOrder() {return nullptr;}
	virtual int64_t getFlushedPosition() {return 0;}
	virtual int64_t getStreamPosition() {return 0;}
	virtual int32_t hashCode() override;
	virtual bool isCached() {return false;}
	virtual bool isCachedFile() {return false;}
	virtual bool isCachedMemory() {return false;}
	virtual int64_t length() {return 0;}
	virtual void mark() {}
	virtual int32_t read() {return 0;}
	virtual int32_t read($bytes* b) {return 0;}
	virtual int32_t read($bytes* b, int32_t off, int32_t len) {return 0;}
	virtual int32_t readBit() {return 0;}
	virtual int64_t readBits(int32_t numBits) {return 0;}
	virtual bool readBoolean() override {return false;}
	virtual int8_t readByte() override {return 0;}
	virtual void readBytes(::javax::imageio::stream::IIOByteBuffer* buf, int32_t len) {}
	virtual char16_t readChar() override {return 0;}
	virtual double readDouble() override {return 0.0;}
	virtual float readFloat() override {return 0.0;}
	virtual void readFully($bytes* b, int32_t off, int32_t len) override {}
	virtual void readFully($bytes* b) override {}
	virtual void readFully($shorts* s, int32_t off, int32_t len) {}
	virtual void readFully($chars* c, int32_t off, int32_t len) {}
	virtual void readFully($ints* i, int32_t off, int32_t len) {}
	virtual void readFully($longs* l, int32_t off, int32_t len) {}
	virtual void readFully($floats* f, int32_t off, int32_t len) {}
	virtual void readFully($doubles* d, int32_t off, int32_t len) {}
	virtual int32_t readInt() override {return 0;}
	virtual $String* readLine() override {return nullptr;}
	virtual int64_t readLong() override {return 0;}
	virtual int16_t readShort() override {return 0;}
	virtual $String* readUTF() override {return nullptr;}
	virtual int32_t readUnsignedByte() override {return 0;}
	virtual int64_t readUnsignedInt() {return 0;}
	virtual int32_t readUnsignedShort() override {return 0;}
	virtual void reset() {}
	virtual void seek(int64_t pos) {}
	virtual void setBitOffset(int32_t bitOffset) {}
	virtual void setByteOrder(::java::nio::ByteOrder* byteOrder) {}
	virtual int32_t skipBytes(int32_t n) override {return 0;}
	virtual int64_t skipBytes(int64_t n) {return 0;}
	virtual $String* toString() override;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_ImageInputStream_h_