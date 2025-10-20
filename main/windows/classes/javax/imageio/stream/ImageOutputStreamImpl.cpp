#include <javax/imageio/stream/ImageOutputStreamImpl.h>

#include <java/io/UTFDataFormatException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <javax/imageio/stream/IIOByteBuffer.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $IIOByteBuffer = ::javax::imageio::stream::IIOByteBuffer;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace javax {
	namespace imageio {
		namespace stream {

$MethodInfo _ImageOutputStreamImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flush", "()V", nullptr, $PUBLIC},
	{"*flushBefore", "(J)V", nullptr, $PUBLIC},
	{"*getBitOffset", "()I", nullptr, $PUBLIC},
	{"*getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"*getFlushedPosition", "()J", nullptr, $PUBLIC},
	{"*getStreamPosition", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageOutputStreamImpl::*)()>(&ImageOutputStreamImpl::init$))},
	{"flushBits", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(ImageOutputStreamImpl::*)()>(&ImageOutputStreamImpl::flushBits)), "java.io.IOException"},
	{"*isCached", "()Z", nullptr, $PUBLIC},
	{"*isCachedFile", "()Z", nullptr, $PUBLIC},
	{"*isCachedMemory", "()Z", nullptr, $PUBLIC},
	{"*length", "()J", nullptr, $PUBLIC},
	{"*mark", "()V", nullptr, $PUBLIC},
	{"*read", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*read", "([B)I", nullptr, $PUBLIC},
	{"*read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*readBit", "()I", nullptr, $PUBLIC},
	{"*readBits", "(I)J", nullptr, $PUBLIC},
	{"*readBoolean", "()Z", nullptr, $PUBLIC},
	{"*readByte", "()B", nullptr, $PUBLIC},
	{"*readBytes", "(Ljavax/imageio/stream/IIOByteBuffer;I)V", nullptr, $PUBLIC},
	{"*readChar", "()C", nullptr, $PUBLIC},
	{"*readDouble", "()D", nullptr, $PUBLIC},
	{"*readFloat", "()F", nullptr, $PUBLIC},
	{"*readFully", "([BII)V", nullptr, $PUBLIC},
	{"*readFully", "([B)V", nullptr, $PUBLIC},
	{"*readFully", "([SII)V", nullptr, $PUBLIC},
	{"*readFully", "([CII)V", nullptr, $PUBLIC},
	{"*readFully", "([III)V", nullptr, $PUBLIC},
	{"*readFully", "([JII)V", nullptr, $PUBLIC},
	{"*readFully", "([FII)V", nullptr, $PUBLIC},
	{"*readFully", "([DII)V", nullptr, $PUBLIC},
	{"*readInt", "()I", nullptr, $PUBLIC},
	{"*readLine", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*readLong", "()J", nullptr, $PUBLIC},
	{"*readShort", "()S", nullptr, $PUBLIC},
	{"*readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*readUnsignedByte", "()I", nullptr, $PUBLIC},
	{"*readUnsignedInt", "()J", nullptr, $PUBLIC},
	{"*readUnsignedShort", "()I", nullptr, $PUBLIC},
	{"*reset", "()V", nullptr, $PUBLIC},
	{"*seek", "(J)V", nullptr, $PUBLIC},
	{"*setBitOffset", "(I)V", nullptr, $PUBLIC},
	{"*setByteOrder", "(Ljava/nio/ByteOrder;)V", nullptr, $PUBLIC},
	{"*skipBytes", "(I)I", nullptr, $PUBLIC},
	{"*skipBytes", "(J)J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeBit", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeBits", "(JI)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeBoolean", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeByte", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeChar", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeChars", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeDouble", "(D)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeDoubles", "([DII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeFloat", "(F)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeFloats", "([FII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeInts", "([III)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeLongs", "([JII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeShort", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeShorts", "([SII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ImageOutputStreamImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.stream.ImageOutputStreamImpl",
	"javax.imageio.stream.ImageInputStreamImpl",
	"javax.imageio.stream.ImageOutputStream",
	nullptr,
	_ImageOutputStreamImpl_MethodInfo_
};

$Object* allocate$ImageOutputStreamImpl($Class* clazz) {
	return $of($alloc(ImageOutputStreamImpl));
}

void ImageOutputStreamImpl::setByteOrder($ByteOrder* byteOrder) {
	this->$ImageInputStreamImpl::setByteOrder(byteOrder);
}

$ByteOrder* ImageOutputStreamImpl::getByteOrder() {
	 return this->$ImageInputStreamImpl::getByteOrder();
}

int32_t ImageOutputStreamImpl::read($bytes* b) {
	 return this->$ImageInputStreamImpl::read(b);
}

void ImageOutputStreamImpl::readBytes($IIOByteBuffer* buf, int32_t len) {
	this->$ImageInputStreamImpl::readBytes(buf, len);
}

bool ImageOutputStreamImpl::readBoolean() {
	 return this->$ImageInputStreamImpl::readBoolean();
}

int8_t ImageOutputStreamImpl::readByte() {
	 return this->$ImageInputStreamImpl::readByte();
}

int32_t ImageOutputStreamImpl::readUnsignedByte() {
	 return this->$ImageInputStreamImpl::readUnsignedByte();
}

int16_t ImageOutputStreamImpl::readShort() {
	 return this->$ImageInputStreamImpl::readShort();
}

int32_t ImageOutputStreamImpl::readUnsignedShort() {
	 return this->$ImageInputStreamImpl::readUnsignedShort();
}

char16_t ImageOutputStreamImpl::readChar() {
	 return this->$ImageInputStreamImpl::readChar();
}

int32_t ImageOutputStreamImpl::readInt() {
	 return this->$ImageInputStreamImpl::readInt();
}

int64_t ImageOutputStreamImpl::readUnsignedInt() {
	 return this->$ImageInputStreamImpl::readUnsignedInt();
}

int64_t ImageOutputStreamImpl::readLong() {
	 return this->$ImageInputStreamImpl::readLong();
}

float ImageOutputStreamImpl::readFloat() {
	 return this->$ImageInputStreamImpl::readFloat();
}

double ImageOutputStreamImpl::readDouble() {
	 return this->$ImageInputStreamImpl::readDouble();
}

$String* ImageOutputStreamImpl::readLine() {
	 return this->$ImageInputStreamImpl::readLine();
}

$String* ImageOutputStreamImpl::readUTF() {
	 return this->$ImageInputStreamImpl::readUTF();
}

void ImageOutputStreamImpl::readFully($bytes* b, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(b, off, len);
}

void ImageOutputStreamImpl::readFully($bytes* b) {
	this->$ImageInputStreamImpl::readFully(b);
}

void ImageOutputStreamImpl::readFully($shorts* s, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(s, off, len);
}

void ImageOutputStreamImpl::readFully($chars* c, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(c, off, len);
}

void ImageOutputStreamImpl::readFully($ints* i, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(i, off, len);
}

void ImageOutputStreamImpl::readFully($longs* l, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(l, off, len);
}

void ImageOutputStreamImpl::readFully($floats* f, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(f, off, len);
}

void ImageOutputStreamImpl::readFully($doubles* d, int32_t off, int32_t len) {
	this->$ImageInputStreamImpl::readFully(d, off, len);
}

int64_t ImageOutputStreamImpl::getStreamPosition() {
	 return this->$ImageInputStreamImpl::getStreamPosition();
}

int32_t ImageOutputStreamImpl::getBitOffset() {
	 return this->$ImageInputStreamImpl::getBitOffset();
}

void ImageOutputStreamImpl::setBitOffset(int32_t bitOffset) {
	this->$ImageInputStreamImpl::setBitOffset(bitOffset);
}

int32_t ImageOutputStreamImpl::readBit() {
	 return this->$ImageInputStreamImpl::readBit();
}

int64_t ImageOutputStreamImpl::readBits(int32_t numBits) {
	 return this->$ImageInputStreamImpl::readBits(numBits);
}

int64_t ImageOutputStreamImpl::length() {
	 return this->$ImageInputStreamImpl::length();
}

int32_t ImageOutputStreamImpl::skipBytes(int32_t n) {
	 return this->$ImageInputStreamImpl::skipBytes(n);
}

int64_t ImageOutputStreamImpl::skipBytes(int64_t n) {
	 return this->$ImageInputStreamImpl::skipBytes(n);
}

void ImageOutputStreamImpl::seek(int64_t pos) {
	this->$ImageInputStreamImpl::seek(pos);
}

void ImageOutputStreamImpl::mark() {
	this->$ImageInputStreamImpl::mark();
}

void ImageOutputStreamImpl::reset() {
	this->$ImageInputStreamImpl::reset();
}

void ImageOutputStreamImpl::flushBefore(int64_t pos) {
	this->$ImageInputStreamImpl::flushBefore(pos);
}

void ImageOutputStreamImpl::flush() {
	this->$ImageInputStreamImpl::flush();
}

int64_t ImageOutputStreamImpl::getFlushedPosition() {
	 return this->$ImageInputStreamImpl::getFlushedPosition();
}

bool ImageOutputStreamImpl::isCached() {
	 return this->$ImageInputStreamImpl::isCached();
}

bool ImageOutputStreamImpl::isCachedMemory() {
	 return this->$ImageInputStreamImpl::isCachedMemory();
}

bool ImageOutputStreamImpl::isCachedFile() {
	 return this->$ImageInputStreamImpl::isCachedFile();
}

void ImageOutputStreamImpl::close() {
	this->$ImageInputStreamImpl::close();
}

void ImageOutputStreamImpl::finalize() {
	this->$ImageInputStreamImpl::finalize();
}

int32_t ImageOutputStreamImpl::hashCode() {
	 return this->$ImageInputStreamImpl::hashCode();
}

bool ImageOutputStreamImpl::equals(Object$* arg0) {
	 return this->$ImageInputStreamImpl::equals(arg0);
}

$Object* ImageOutputStreamImpl::clone() {
	 return this->$ImageInputStreamImpl::clone();
}

$String* ImageOutputStreamImpl::toString() {
	 return this->$ImageInputStreamImpl::toString();
}

void ImageOutputStreamImpl::init$() {
	$ImageInputStreamImpl::init$();
}

void ImageOutputStreamImpl::write($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void ImageOutputStreamImpl::writeBoolean(bool v) {
	write(v ? 1 : 0);
}

void ImageOutputStreamImpl::writeByte(int32_t v) {
	write(v);
}

void ImageOutputStreamImpl::writeShort(int32_t v) {
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		$nc(this->byteBuf)->set(0, (int8_t)((int32_t)((uint32_t)v >> 8)));
		$nc(this->byteBuf)->set(1, (int8_t)((int32_t)((uint32_t)v >> 0)));
	} else {
		$nc(this->byteBuf)->set(0, (int8_t)((int32_t)((uint32_t)v >> 0)));
		$nc(this->byteBuf)->set(1, (int8_t)((int32_t)((uint32_t)v >> 8)));
	}
	write(this->byteBuf, 0, 2);
}

void ImageOutputStreamImpl::writeChar(int32_t v) {
	writeShort(v);
}

void ImageOutputStreamImpl::writeInt(int32_t v) {
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		$nc(this->byteBuf)->set(0, (int8_t)((int32_t)((uint32_t)v >> 24)));
		$nc(this->byteBuf)->set(1, (int8_t)((int32_t)((uint32_t)v >> 16)));
		$nc(this->byteBuf)->set(2, (int8_t)((int32_t)((uint32_t)v >> 8)));
		$nc(this->byteBuf)->set(3, (int8_t)((int32_t)((uint32_t)v >> 0)));
	} else {
		$nc(this->byteBuf)->set(0, (int8_t)((int32_t)((uint32_t)v >> 0)));
		$nc(this->byteBuf)->set(1, (int8_t)((int32_t)((uint32_t)v >> 8)));
		$nc(this->byteBuf)->set(2, (int8_t)((int32_t)((uint32_t)v >> 16)));
		$nc(this->byteBuf)->set(3, (int8_t)((int32_t)((uint32_t)v >> 24)));
	}
	write(this->byteBuf, 0, 4);
}

void ImageOutputStreamImpl::writeLong(int64_t v) {
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		$nc(this->byteBuf)->set(0, (int8_t)((int64_t)((uint64_t)v >> 56)));
		$nc(this->byteBuf)->set(1, (int8_t)((int64_t)((uint64_t)v >> 48)));
		$nc(this->byteBuf)->set(2, (int8_t)((int64_t)((uint64_t)v >> 40)));
		$nc(this->byteBuf)->set(3, (int8_t)((int64_t)((uint64_t)v >> 32)));
		$nc(this->byteBuf)->set(4, (int8_t)((int64_t)((uint64_t)v >> 24)));
		$nc(this->byteBuf)->set(5, (int8_t)((int64_t)((uint64_t)v >> 16)));
		$nc(this->byteBuf)->set(6, (int8_t)((int64_t)((uint64_t)v >> 8)));
		$nc(this->byteBuf)->set(7, (int8_t)((int64_t)((uint64_t)v >> 0)));
	} else {
		$nc(this->byteBuf)->set(0, (int8_t)((int64_t)((uint64_t)v >> 0)));
		$nc(this->byteBuf)->set(1, (int8_t)((int64_t)((uint64_t)v >> 8)));
		$nc(this->byteBuf)->set(2, (int8_t)((int64_t)((uint64_t)v >> 16)));
		$nc(this->byteBuf)->set(3, (int8_t)((int64_t)((uint64_t)v >> 24)));
		$nc(this->byteBuf)->set(4, (int8_t)((int64_t)((uint64_t)v >> 32)));
		$nc(this->byteBuf)->set(5, (int8_t)((int64_t)((uint64_t)v >> 40)));
		$nc(this->byteBuf)->set(6, (int8_t)((int64_t)((uint64_t)v >> 48)));
		$nc(this->byteBuf)->set(7, (int8_t)((int64_t)((uint64_t)v >> 56)));
	}
	write(this->byteBuf, 0, 4);
	write(this->byteBuf, 4, 4);
}

void ImageOutputStreamImpl::writeFloat(float v) {
	writeInt($Float::floatToIntBits(v));
}

void ImageOutputStreamImpl::writeDouble(double v) {
	writeLong($Double::doubleToLongBits(v));
}

void ImageOutputStreamImpl::writeBytes($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)(int8_t)s->charAt(i));
	}
}

void ImageOutputStreamImpl::writeChars($String* s) {
	int32_t len = $nc(s)->length();
	$var($bytes, b, $new($bytes, len * 2));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t i = 0; i < len; ++i) {
			int32_t v = s->charAt(i);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			int32_t v = s->charAt(i);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
		}
	}
	write(b, 0, len * 2);
}

void ImageOutputStreamImpl::writeUTF($String* s) {
	$useLocalCurrentObjectStackCache();
	int32_t strlen = $nc(s)->length();
	int32_t utflen = 0;
	$var($chars, charr, $new($chars, strlen));
	int32_t c = 0;
	int32_t boff = 0;
	s->getChars(0, strlen, charr, 0);
	for (int32_t i = 0; i < strlen; ++i) {
		c = charr->get(i);
		if ((c >= 1) && (c <= 127)) {
			++utflen;
		} else if (c > 2047) {
			utflen += 3;
		} else {
			utflen += 2;
		}
	}
	if (utflen > 0x0000FFFF) {
		$throwNew($UTFDataFormatException, "utflen > 65536!"_s);
	}
	$var($bytes, b, $new($bytes, utflen + 2));
	b->set(boff++, (int8_t)((int32_t)(((int32_t)((uint32_t)utflen >> 8)) & (uint32_t)255)));
	b->set(boff++, (int8_t)((int32_t)(((int32_t)((uint32_t)utflen >> 0)) & (uint32_t)255)));
	for (int32_t i = 0; i < strlen; ++i) {
		c = charr->get(i);
		if ((c >= 1) && (c <= 127)) {
			b->set(boff++, (int8_t)c);
		} else if (c > 2047) {
			b->set(boff++, (int8_t)(224 | ((int32_t)((c >> 12) & (uint32_t)15))));
			b->set(boff++, (int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
			b->set(boff++, (int8_t)(128 | ((int32_t)((c >> 0) & (uint32_t)63))));
		} else {
			b->set(boff++, (int8_t)(192 | ((int32_t)((c >> 6) & (uint32_t)31))));
			b->set(boff++, (int8_t)(128 | ((int32_t)((c >> 0) & (uint32_t)63))));
		}
	}
	write(b, 0, utflen + 2);
}

void ImageOutputStreamImpl::writeShorts($shorts* s, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(s)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > s.length!"_s);
	}
	$var($bytes, b, $new($bytes, len * 2));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t i = 0; i < len; ++i) {
			int16_t v = $nc(s)->get(off + i);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			int16_t v = $nc(s)->get(off + i);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
		}
	}
	write(b, 0, len * 2);
}

void ImageOutputStreamImpl::writeChars($chars* c, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(c)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > c.length!"_s);
	}
	$var($bytes, b, $new($bytes, len * 2));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t i = 0; i < len; ++i) {
			char16_t v = $nc(c)->get(off + i);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			char16_t v = $nc(c)->get(off + i);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
		}
	}
	write(b, 0, len * 2);
}

void ImageOutputStreamImpl::writeInts($ints* i, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(i)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > i.length!"_s);
	}
	$var($bytes, b, $new($bytes, len * 4));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t v = $nc(i)->get(off + j);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 24)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 16)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t v = $nc(i)->get(off + j);
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 16)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 24)));
		}
	}
	write(b, 0, len * 4);
}

void ImageOutputStreamImpl::writeLongs($longs* l, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(l)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > l.length!"_s);
	}
	$var($bytes, b, $new($bytes, len * 8));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t i = 0; i < len; ++i) {
			int64_t v = $nc(l)->get(off + i);
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 56)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 48)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 40)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 32)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 24)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 16)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 8)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 0)));
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			int64_t v = $nc(l)->get(off + i);
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 0)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 8)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 16)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 24)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 32)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 40)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 48)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 56)));
		}
	}
	write(b, 0, len * 8);
}

void ImageOutputStreamImpl::writeFloats($floats* f, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(f)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > f.length!"_s);
	}
	$var($bytes, b, $new($bytes, len * 4));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t i = 0; i < len; ++i) {
			int32_t v = $Float::floatToIntBits($nc(f)->get(off + i));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 24)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 16)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			int32_t v = $Float::floatToIntBits($nc(f)->get(off + i));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 0)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 8)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 16)));
			b->set(boff++, (int8_t)((int32_t)((uint32_t)v >> 24)));
		}
	}
	write(b, 0, len * 4);
}

void ImageOutputStreamImpl::writeDoubles($doubles* d, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(d)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > d.length!"_s);
	}
	$var($bytes, b, $new($bytes, len * 8));
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t i = 0; i < len; ++i) {
			int64_t v = $Double::doubleToLongBits($nc(d)->get(off + i));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 56)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 48)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 40)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 32)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 24)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 16)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 8)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 0)));
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			int64_t v = $Double::doubleToLongBits($nc(d)->get(off + i));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 0)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 8)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 16)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 24)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 32)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 40)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 48)));
			b->set(boff++, (int8_t)((int64_t)((uint64_t)v >> 56)));
		}
	}
	write(b, 0, len * 8);
}

void ImageOutputStreamImpl::writeBit(int32_t bit) {
	writeBits(((int64_t)((int64_t)1 & (uint64_t)(int64_t)bit)), 1);
}

void ImageOutputStreamImpl::writeBits(int64_t bits, int32_t numBits) {
	checkClosed();
	if (numBits < 0 || numBits > 64) {
		$throwNew($IllegalArgumentException, "Bad value for numBits!"_s);
	}
	if (numBits == 0) {
		return;
	}
	if ((getStreamPosition() > 0) || (this->bitOffset > 0)) {
		int32_t offset = this->bitOffset;
		int32_t partialByte = read();
		if (partialByte != -1) {
			seek(getStreamPosition() - 1);
		} else {
			partialByte = 0;
		}
		if (numBits + offset < 8) {
			int32_t shift = 8 - (offset + numBits);
			int32_t mask = $usr(-1, 32 - numBits);
			partialByte &= (uint32_t)~($sl(mask, shift));
			partialByte |= ($sl((int64_t)(bits & (uint64_t)(int64_t)mask), shift));
			write(partialByte);
			seek(getStreamPosition() - 1);
			this->bitOffset = offset + numBits;
			numBits = 0;
		} else {
			int32_t num = 8 - offset;
			int32_t mask = $usr(-1, 32 - num);
			partialByte &= (uint32_t)~mask;
			partialByte |= ((int64_t)(($sr(bits, numBits - num)) & (uint64_t)(int64_t)mask));
			write(partialByte);
			numBits -= num;
		}
	}
	if (numBits > 7) {
		int32_t extra = numBits % 8;
		for (int32_t numBytes = numBits / 8; numBytes > 0; --numBytes) {
			int32_t shift = (numBytes - 1) * 8 + extra;
			int32_t value = (int32_t)((shift == 0) ? (int64_t)(bits & (uint64_t)(int64_t)255) : (int64_t)(($sr(bits, shift)) & (uint64_t)(int64_t)255));
			write(value);
		}
		numBits = extra;
	}
	if (numBits != 0) {
		int32_t partialByte = 0;
		partialByte = read();
		if (partialByte != -1) {
			seek(getStreamPosition() - 1);
		} else {
			partialByte = 0;
		}
		int32_t shift = 8 - numBits;
		int32_t mask = $usr(-1, 32 - numBits);
		partialByte &= (uint32_t)~($sl(mask, shift));
		partialByte |= $sl((int64_t)(bits & (uint64_t)(int64_t)mask), shift);
		write(partialByte);
		seek(getStreamPosition() - 1);
		this->bitOffset = numBits;
	}
}

void ImageOutputStreamImpl::flushBits() {
	checkClosed();
	if (this->bitOffset != 0) {
		int32_t offset = this->bitOffset;
		int32_t partialByte = read();
		if (partialByte < 0) {
			partialByte = 0;
			this->bitOffset = 0;
		} else {
			seek(getStreamPosition() - 1);
			partialByte &= (uint32_t)$sl(-1, 8 - offset);
		}
		write(partialByte);
	}
}

ImageOutputStreamImpl::ImageOutputStreamImpl() {
}

$Class* ImageOutputStreamImpl::load$($String* name, bool initialize) {
	$loadClass(ImageOutputStreamImpl, name, initialize, &_ImageOutputStreamImpl_ClassInfo_, allocate$ImageOutputStreamImpl);
	return class$;
}

$Class* ImageOutputStreamImpl::class$ = nullptr;

		} // stream
	} // imageio
} // javax