#include <javax/imageio/stream/ImageInputStreamImpl.h>

#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Stack.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/stream/IIOByteBuffer.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef BYTE_BUF_LENGTH

using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteOrder = ::java::nio::ByteOrder;
using $Stack = ::java::util::Stack;
using $IIOException = ::javax::imageio::IIOException;
using $IIOByteBuffer = ::javax::imageio::stream::IIOByteBuffer;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {
		namespace stream {

$NamedAttribute ImageInputStreamImpl_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ImageInputStreamImpl_MethodAnnotations_finalize3[] = {
	{"Ljava/lang/Deprecated;", ImageInputStreamImpl_Attribute_var$0},
	{}
};

$FieldInfo _ImageInputStreamImpl_FieldInfo_[] = {
	{"markByteStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Long;>;", $PRIVATE, $field(ImageInputStreamImpl, markByteStack)},
	{"markBitStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Integer;>;", $PRIVATE, $field(ImageInputStreamImpl, markBitStack)},
	{"isClosed", "Z", nullptr, $PRIVATE, $field(ImageInputStreamImpl, isClosed)},
	{"BYTE_BUF_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageInputStreamImpl, BYTE_BUF_LENGTH)},
	{"byteBuf", "[B", nullptr, 0, $field(ImageInputStreamImpl, byteBuf)},
	{"byteOrder", "Ljava/nio/ByteOrder;", nullptr, $PROTECTED, $field(ImageInputStreamImpl, byteOrder)},
	{"streamPos", "J", nullptr, $PROTECTED, $field(ImageInputStreamImpl, streamPos)},
	{"bitOffset", "I", nullptr, $PROTECTED, $field(ImageInputStreamImpl, bitOffset)},
	{"flushedPos", "J", nullptr, $PROTECTED, $field(ImageInputStreamImpl, flushedPos)},
	{}
};

$MethodInfo _ImageInputStreamImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageInputStreamImpl::*)()>(&ImageInputStreamImpl::init$))},
	{"checkClosed", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(ImageInputStreamImpl::*)()>(&ImageInputStreamImpl::checkClosed)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, "java.lang.Throwable", nullptr, _ImageInputStreamImpl_MethodAnnotations_finalize3},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flushBefore", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBitOffset", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"getFlushedPosition", "()J", nullptr, $PUBLIC},
	{"getStreamPosition", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isCached", "()Z", nullptr, $PUBLIC},
	{"isCachedFile", "()Z", nullptr, $PUBLIC},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC},
	{"length", "()J", nullptr, $PUBLIC},
	{"mark", "()V", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readBit", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readBits", "(I)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readByte", "()B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readBytes", "(Ljavax/imageio/stream/IIOByteBuffer;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readDouble", "()D", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFloat", "()F", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([SII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([III)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([JII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([FII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([DII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLong", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readShort", "()S", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUnsignedInt", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setBitOffset", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setByteOrder", "(Ljava/nio/ByteOrder;)V", nullptr, $PUBLIC},
	{"skipBytes", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skipBytes", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toChars", "([B[CII)V", nullptr, $PRIVATE, $method(static_cast<void(ImageInputStreamImpl::*)($bytes*,$chars*,int32_t,int32_t)>(&ImageInputStreamImpl::toChars))},
	{"toDoubles", "([B[DII)V", nullptr, $PRIVATE, $method(static_cast<void(ImageInputStreamImpl::*)($bytes*,$doubles*,int32_t,int32_t)>(&ImageInputStreamImpl::toDoubles))},
	{"toFloats", "([B[FII)V", nullptr, $PRIVATE, $method(static_cast<void(ImageInputStreamImpl::*)($bytes*,$floats*,int32_t,int32_t)>(&ImageInputStreamImpl::toFloats))},
	{"toInts", "([B[III)V", nullptr, $PRIVATE, $method(static_cast<void(ImageInputStreamImpl::*)($bytes*,$ints*,int32_t,int32_t)>(&ImageInputStreamImpl::toInts))},
	{"toLongs", "([B[JII)V", nullptr, $PRIVATE, $method(static_cast<void(ImageInputStreamImpl::*)($bytes*,$longs*,int32_t,int32_t)>(&ImageInputStreamImpl::toLongs))},
	{"toShorts", "([B[SII)V", nullptr, $PRIVATE, $method(static_cast<void(ImageInputStreamImpl::*)($bytes*,$shorts*,int32_t,int32_t)>(&ImageInputStreamImpl::toShorts))},
	{}
};

$ClassInfo _ImageInputStreamImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.stream.ImageInputStreamImpl",
	"java.lang.Object",
	"javax.imageio.stream.ImageInputStream",
	_ImageInputStreamImpl_FieldInfo_,
	_ImageInputStreamImpl_MethodInfo_
};

$Object* allocate$ImageInputStreamImpl($Class* clazz) {
	return $of($alloc(ImageInputStreamImpl));
}

void ImageInputStreamImpl::init$() {
	$set(this, markByteStack, $new($Stack));
	$set(this, markBitStack, $new($Stack));
	this->isClosed = false;
	$set(this, byteBuf, $new($bytes, ImageInputStreamImpl::BYTE_BUF_LENGTH));
	$init($ByteOrder);
	$set(this, byteOrder, $ByteOrder::BIG_ENDIAN);
	this->flushedPos = 0;
}

void ImageInputStreamImpl::checkClosed() {
	if (this->isClosed) {
		$throwNew($IOException, "closed"_s);
	}
}

void ImageInputStreamImpl::setByteOrder($ByteOrder* byteOrder) {
	$set(this, byteOrder, byteOrder);
}

$ByteOrder* ImageInputStreamImpl::getByteOrder() {
	return this->byteOrder;
}

int32_t ImageInputStreamImpl::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

void ImageInputStreamImpl::readBytes($IIOByteBuffer* buf, int32_t len) {
	if (len < 0) {
		$throwNew($IndexOutOfBoundsException, "len < 0!"_s);
	}
	if (buf == nullptr) {
		$throwNew($NullPointerException, "buf == null!"_s);
	}
	$var($bytes, data, $new($bytes, len));
	len = read(data, 0, len);
	$nc(buf)->setData(data);
	buf->setOffset(0);
	buf->setLength(len);
}

bool ImageInputStreamImpl::readBoolean() {
	int32_t ch = this->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (ch != 0);
}

int8_t ImageInputStreamImpl::readByte() {
	int32_t ch = this->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (int8_t)ch;
}

int32_t ImageInputStreamImpl::readUnsignedByte() {
	int32_t ch = this->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return ch;
}

int16_t ImageInputStreamImpl::readShort() {
	if (read(this->byteBuf, 0, 2) != 2) {
		$throwNew($EOFException);
	}
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		return (int16_t)((((int32_t)($nc(this->byteBuf)->get(0) & (uint32_t)255)) << 8) | (((int32_t)($nc(this->byteBuf)->get(1) & (uint32_t)255)) << 0));
	} else {
		return (int16_t)((((int32_t)($nc(this->byteBuf)->get(1) & (uint32_t)255)) << 8) | (((int32_t)($nc(this->byteBuf)->get(0) & (uint32_t)255)) << 0));
	}
}

int32_t ImageInputStreamImpl::readUnsignedShort() {
	return (int32_t)(((int32_t)readShort()) & (uint32_t)0x0000FFFF);
}

char16_t ImageInputStreamImpl::readChar() {
	return (char16_t)readShort();
}

int32_t ImageInputStreamImpl::readInt() {
	if (read(this->byteBuf, 0, 4) != 4) {
		$throwNew($EOFException);
	}
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		return ((((((int32_t)($nc(this->byteBuf)->get(0) & (uint32_t)255)) << 24) | (((int32_t)($nc(this->byteBuf)->get(1) & (uint32_t)255)) << 16)) | (((int32_t)($nc(this->byteBuf)->get(2) & (uint32_t)255)) << 8)) | (((int32_t)($nc(this->byteBuf)->get(3) & (uint32_t)255)) << 0));
	} else {
		return ((((((int32_t)($nc(this->byteBuf)->get(3) & (uint32_t)255)) << 24) | (((int32_t)($nc(this->byteBuf)->get(2) & (uint32_t)255)) << 16)) | (((int32_t)($nc(this->byteBuf)->get(1) & (uint32_t)255)) << 8)) | (((int32_t)($nc(this->byteBuf)->get(0) & (uint32_t)255)) << 0));
	}
}

int64_t ImageInputStreamImpl::readUnsignedInt() {
	return (int64_t)(((int64_t)readInt()) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int64_t ImageInputStreamImpl::readLong() {
	int32_t i1 = readInt();
	int32_t i2 = readInt();
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		return ((int64_t)i1 << 32) + ((int64_t)(i2 & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	} else {
		return ((int64_t)i2 << 32) + ((int64_t)(i1 & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	}
}

float ImageInputStreamImpl::readFloat() {
	return $Float::intBitsToFloat(readInt());
}

double ImageInputStreamImpl::readDouble() {
	return $Double::longBitsToDouble(readLong());
}

$String* ImageInputStreamImpl::readLine() {
	$var($StringBuilder, input, $new($StringBuilder));
	int32_t c = -1;
	bool eol = false;
	while (!eol) {
		{
			int64_t cur = 0;
			switch (c = read()) {
			case -1:
				{}
			case u'\n':
				{
					eol = true;
					break;
				}
			case u'\r':
				{
					eol = true;
					cur = getStreamPosition();
					if ((read()) != u'\n') {
						seek(cur);
					}
					break;
				}
			default:
				{
					input->append((char16_t)c);
					break;
				}
			}
		}
	}
	if ((c == -1) && (input->length() == 0)) {
		return nullptr;
	}
	return input->toString();
}

$String* ImageInputStreamImpl::readUTF() {
	$useLocalCurrentObjectStackCache();
	this->bitOffset = 0;
	$var($ByteOrder, oldByteOrder, getByteOrder());
	$init($ByteOrder);
	setByteOrder($ByteOrder::BIG_ENDIAN);
	$var($String, ret, nullptr);
	try {
		$assign(ret, $DataInputStream::readUTF(this));
	} catch ($IOException& e) {
		setByteOrder(oldByteOrder);
		$throw(e);
	}
	setByteOrder(oldByteOrder);
	return ret;
}

void ImageInputStreamImpl::readFully($bytes* b, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(b)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > b.length!"_s);
	}
	while (len > 0) {
		int32_t nbytes = read(b, off, len);
		if (nbytes == -1) {
			$throwNew($EOFException);
		}
		off += nbytes;
		len -= nbytes;
	}
}

void ImageInputStreamImpl::readFully($bytes* b) {
	readFully(b, 0, $nc(b)->length);
}

void ImageInputStreamImpl::readFully($shorts* s, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(s)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > s.length!"_s);
	}
	while (len > 0) {
		int32_t nelts = $Math::min(len, $nc(this->byteBuf)->length / 2);
		readFully(this->byteBuf, 0, nelts * 2);
		toShorts(this->byteBuf, s, off, nelts);
		off += nelts;
		len -= nelts;
	}
}

void ImageInputStreamImpl::readFully($chars* c, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(c)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > c.length!"_s);
	}
	while (len > 0) {
		int32_t nelts = $Math::min(len, $nc(this->byteBuf)->length / 2);
		readFully(this->byteBuf, 0, nelts * 2);
		toChars(this->byteBuf, c, off, nelts);
		off += nelts;
		len -= nelts;
	}
}

void ImageInputStreamImpl::readFully($ints* i, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(i)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > i.length!"_s);
	}
	while (len > 0) {
		int32_t nelts = $Math::min(len, $nc(this->byteBuf)->length / 4);
		readFully(this->byteBuf, 0, nelts * 4);
		toInts(this->byteBuf, i, off, nelts);
		off += nelts;
		len -= nelts;
	}
}

void ImageInputStreamImpl::readFully($longs* l, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(l)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > l.length!"_s);
	}
	while (len > 0) {
		int32_t nelts = $Math::min(len, $nc(this->byteBuf)->length / 8);
		readFully(this->byteBuf, 0, nelts * 8);
		toLongs(this->byteBuf, l, off, nelts);
		off += nelts;
		len -= nelts;
	}
}

void ImageInputStreamImpl::readFully($floats* f, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(f)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > f.length!"_s);
	}
	while (len > 0) {
		int32_t nelts = $Math::min(len, $nc(this->byteBuf)->length / 4);
		readFully(this->byteBuf, 0, nelts * 4);
		toFloats(this->byteBuf, f, off, nelts);
		off += nelts;
		len -= nelts;
	}
}

void ImageInputStreamImpl::readFully($doubles* d, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off + len > $nc(d)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off + len > d.length!"_s);
	}
	while (len > 0) {
		int32_t nelts = $Math::min(len, $nc(this->byteBuf)->length / 8);
		readFully(this->byteBuf, 0, nelts * 8);
		toDoubles(this->byteBuf, d, off, nelts);
		off += nelts;
		len -= nelts;
	}
}

void ImageInputStreamImpl::toShorts($bytes* b, $shorts* s, int32_t off, int32_t len) {
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff);
			int32_t b1 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			$nc(s)->set(off + j, (int16_t)((b0 << 8) | b1));
			boff += 2;
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff + 1);
			int32_t b1 = (int32_t)(b->get(boff) & (uint32_t)255);
			$nc(s)->set(off + j, (int16_t)((b0 << 8) | b1));
			boff += 2;
		}
	}
}

void ImageInputStreamImpl::toChars($bytes* b, $chars* c, int32_t off, int32_t len) {
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff);
			int32_t b1 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			$nc(c)->set(off + j, (char16_t)((b0 << 8) | b1));
			boff += 2;
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff + 1);
			int32_t b1 = (int32_t)(b->get(boff) & (uint32_t)255);
			$nc(c)->set(off + j, (char16_t)((b0 << 8) | b1));
			boff += 2;
		}
	}
}

void ImageInputStreamImpl::toInts($bytes* b, $ints* i, int32_t off, int32_t len) {
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff);
			int32_t b1 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 3) & (uint32_t)255);
			$nc(i)->set(off + j, (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3);
			boff += 4;
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff + 3);
			int32_t b1 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff) & (uint32_t)255);
			$nc(i)->set(off + j, (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3);
			boff += 4;
		}
	}
}

void ImageInputStreamImpl::toLongs($bytes* b, $longs* l, int32_t off, int32_t len) {
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff);
			int32_t b1 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 3) & (uint32_t)255);
			int32_t b4 = b->get(boff + 4);
			int32_t b5 = (int32_t)(b->get(boff + 5) & (uint32_t)255);
			int32_t b6 = (int32_t)(b->get(boff + 6) & (uint32_t)255);
			int32_t b7 = (int32_t)(b->get(boff + 7) & (uint32_t)255);
			int32_t i0 = (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3;
			int32_t i1 = (((b4 << 24) | (b5 << 16)) | (b6 << 8)) | b7;
			$nc(l)->set(off + j, ((int64_t)i0 << 32) | ((int64_t)(i1 & (uint64_t)(int64_t)0x00000000FFFFFFFF)));
			boff += 8;
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff + 7);
			int32_t b1 = (int32_t)(b->get(boff + 6) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 5) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 4) & (uint32_t)255);
			int32_t b4 = b->get(boff + 3);
			int32_t b5 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b6 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b7 = (int32_t)(b->get(boff) & (uint32_t)255);
			int32_t i0 = (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3;
			int32_t i1 = (((b4 << 24) | (b5 << 16)) | (b6 << 8)) | b7;
			$nc(l)->set(off + j, ((int64_t)i0 << 32) | ((int64_t)(i1 & (uint64_t)(int64_t)0x00000000FFFFFFFF)));
			boff += 8;
		}
	}
}

void ImageInputStreamImpl::toFloats($bytes* b, $floats* f, int32_t off, int32_t len) {
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff);
			int32_t b1 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 3) & (uint32_t)255);
			int32_t i = (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3;
			$nc(f)->set(off + j, $Float::intBitsToFloat(i));
			boff += 4;
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff + 3);
			int32_t b1 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 0) & (uint32_t)255);
			int32_t i = (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3;
			$nc(f)->set(off + j, $Float::intBitsToFloat(i));
			boff += 4;
		}
	}
}

void ImageInputStreamImpl::toDoubles($bytes* b, $doubles* d, int32_t off, int32_t len) {
	int32_t boff = 0;
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff);
			int32_t b1 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 3) & (uint32_t)255);
			int32_t b4 = b->get(boff + 4);
			int32_t b5 = (int32_t)(b->get(boff + 5) & (uint32_t)255);
			int32_t b6 = (int32_t)(b->get(boff + 6) & (uint32_t)255);
			int32_t b7 = (int32_t)(b->get(boff + 7) & (uint32_t)255);
			int32_t i0 = (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3;
			int32_t i1 = (((b4 << 24) | (b5 << 16)) | (b6 << 8)) | b7;
			int64_t l = ((int64_t)i0 << 32) | ((int64_t)(i1 & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			$nc(d)->set(off + j, $Double::longBitsToDouble(l));
			boff += 8;
		}
	} else {
		for (int32_t j = 0; j < len; ++j) {
			int32_t b0 = $nc(b)->get(boff + 7);
			int32_t b1 = (int32_t)(b->get(boff + 6) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(boff + 5) & (uint32_t)255);
			int32_t b3 = (int32_t)(b->get(boff + 4) & (uint32_t)255);
			int32_t b4 = b->get(boff + 3);
			int32_t b5 = (int32_t)(b->get(boff + 2) & (uint32_t)255);
			int32_t b6 = (int32_t)(b->get(boff + 1) & (uint32_t)255);
			int32_t b7 = (int32_t)(b->get(boff) & (uint32_t)255);
			int32_t i0 = (((b0 << 24) | (b1 << 16)) | (b2 << 8)) | b3;
			int32_t i1 = (((b4 << 24) | (b5 << 16)) | (b6 << 8)) | b7;
			int64_t l = ((int64_t)i0 << 32) | ((int64_t)(i1 & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			$nc(d)->set(off + j, $Double::longBitsToDouble(l));
			boff += 8;
		}
	}
}

int64_t ImageInputStreamImpl::getStreamPosition() {
	checkClosed();
	return this->streamPos;
}

int32_t ImageInputStreamImpl::getBitOffset() {
	checkClosed();
	return this->bitOffset;
}

void ImageInputStreamImpl::setBitOffset(int32_t bitOffset) {
	checkClosed();
	if (bitOffset < 0 || bitOffset > 7) {
		$throwNew($IllegalArgumentException, "bitOffset must be betwwen 0 and 7!"_s);
	}
	this->bitOffset = bitOffset;
}

int32_t ImageInputStreamImpl::readBit() {
	checkClosed();
	int32_t newBitOffset = (int32_t)((this->bitOffset + 1) & (uint32_t)7);
	int32_t val = read();
	if (val == -1) {
		$throwNew($EOFException);
	}
	if (newBitOffset != 0) {
		seek(getStreamPosition() - 1);
		val >>= 8 - newBitOffset;
	}
	this->bitOffset = newBitOffset;
	return (int32_t)(val & (uint32_t)1);
}

int64_t ImageInputStreamImpl::readBits(int32_t numBits) {
	checkClosed();
	if (numBits < 0 || numBits > 64) {
		$throwNew($IllegalArgumentException);
	}
	if (numBits == 0) {
		return 0;
	}
	int32_t bitsToRead = numBits + this->bitOffset;
	int32_t newBitOffset = (int32_t)((this->bitOffset + numBits) & (uint32_t)7);
	int64_t accum = 0;
	while (bitsToRead > 0) {
		int32_t val = read();
		if (val == -1) {
			$throwNew($EOFException);
		}
		accum <<= 8;
		accum |= val;
		bitsToRead -= 8;
	}
	if (newBitOffset != 0) {
		seek(getStreamPosition() - 1);
	}
	this->bitOffset = newBitOffset;
	$usrAssign(accum, -bitsToRead);
	accum &= (uint64_t)($usr((int64_t)-1, 64 - numBits));
	return accum;
}

int64_t ImageInputStreamImpl::length() {
	return -1;
}

int32_t ImageInputStreamImpl::skipBytes(int32_t n) {
	int64_t pos = getStreamPosition();
	seek(pos + n);
	return (int32_t)(getStreamPosition() - pos);
}

int64_t ImageInputStreamImpl::skipBytes(int64_t n) {
	int64_t pos = getStreamPosition();
	seek(pos + n);
	return getStreamPosition() - pos;
}

void ImageInputStreamImpl::seek(int64_t pos) {
	checkClosed();
	if (pos < this->flushedPos) {
		$throwNew($IndexOutOfBoundsException, "pos < flushedPos!"_s);
	}
	this->streamPos = pos;
	this->bitOffset = 0;
}

void ImageInputStreamImpl::mark() {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->markByteStack)->push($($Long::valueOf(getStreamPosition())));
		$nc(this->markBitStack)->push($($Integer::valueOf(getBitOffset())));
	} catch ($IOException& e) {
	}
}

void ImageInputStreamImpl::reset() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->markByteStack)->empty()) {
		return;
	}
	int64_t pos = $nc(($cast($Long, $($nc(this->markByteStack)->pop()))))->longValue();
	if (pos < this->flushedPos) {
		$throwNew($IIOException, "Previous marked position has been discarded!"_s);
	}
	seek(pos);
	int32_t offset = $nc(($cast($Integer, $($nc(this->markBitStack)->pop()))))->intValue();
	setBitOffset(offset);
}

void ImageInputStreamImpl::flushBefore(int64_t pos) {
	checkClosed();
	if (pos < this->flushedPos) {
		$throwNew($IndexOutOfBoundsException, "pos < flushedPos!"_s);
	}
	if (pos > getStreamPosition()) {
		$throwNew($IndexOutOfBoundsException, "pos > getStreamPosition()!"_s);
	}
	this->flushedPos = pos;
}

void ImageInputStreamImpl::flush() {
	flushBefore(getStreamPosition());
}

int64_t ImageInputStreamImpl::getFlushedPosition() {
	return this->flushedPos;
}

bool ImageInputStreamImpl::isCached() {
	return false;
}

bool ImageInputStreamImpl::isCachedMemory() {
	return false;
}

bool ImageInputStreamImpl::isCachedFile() {
	return false;
}

void ImageInputStreamImpl::close() {
	checkClosed();
	this->isClosed = true;
}

void ImageInputStreamImpl::finalize() {
	if (!this->isClosed) {
		try {
			close();
		} catch ($IOException& e) {
		}
	}
	$ImageInputStream::finalize();
}

ImageInputStreamImpl::ImageInputStreamImpl() {
}

$Class* ImageInputStreamImpl::load$($String* name, bool initialize) {
	$loadClass(ImageInputStreamImpl, name, initialize, &_ImageInputStreamImpl_ClassInfo_, allocate$ImageInputStreamImpl);
	return class$;
}

$Class* ImageInputStreamImpl::class$ = nullptr;

		} // stream
	} // imageio
} // javax