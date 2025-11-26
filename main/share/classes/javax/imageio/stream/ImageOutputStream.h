#ifndef _javax_imageio_stream_ImageOutputStream_h_
#define _javax_imageio_stream_ImageOutputStream_h_
//$ interface javax.imageio.stream.ImageOutputStream
//$ extends javax.imageio.stream.ImageInputStream,java.io.DataOutput

#include <java/io/DataOutput.h>
#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageInputStream.h>

namespace javax {
	namespace imageio {
		namespace stream {

class $export ImageOutputStream : public ::javax::imageio::stream::ImageInputStream, public ::java::io::DataOutput {
	$interface(ImageOutputStream, $NO_CLASS_INIT, ::javax::imageio::stream::ImageInputStream, ::java::io::DataOutput)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flushBefore(int64_t pos) override {}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual void write(int32_t b) override {}
	virtual void write($bytes* b) override {}
	virtual void write($bytes* b, int32_t off, int32_t len) override {}
	virtual void writeBit(int32_t bit) {}
	virtual void writeBits(int64_t bits, int32_t numBits) {}
	virtual void writeBoolean(bool v) override {}
	virtual void writeByte(int32_t v) override {}
	virtual void writeBytes($String* s) override {}
	virtual void writeChar(int32_t v) override {}
	virtual void writeChars($String* s) override {}
	virtual void writeChars($chars* c, int32_t off, int32_t len) {}
	virtual void writeDouble(double v) override {}
	virtual void writeDoubles($doubles* d, int32_t off, int32_t len) {}
	virtual void writeFloat(float v) override {}
	virtual void writeFloats($floats* f, int32_t off, int32_t len) {}
	virtual void writeInt(int32_t v) override {}
	virtual void writeInts($ints* i, int32_t off, int32_t len) {}
	virtual void writeLong(int64_t v) override {}
	virtual void writeLongs($longs* l, int32_t off, int32_t len) {}
	virtual void writeShort(int32_t v) override {}
	virtual void writeShorts($shorts* s, int32_t off, int32_t len) {}
	virtual void writeUTF($String* s) override {}
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_ImageOutputStream_h_