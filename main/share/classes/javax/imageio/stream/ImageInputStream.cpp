#include <javax/imageio/stream/ImageInputStream.h>

#include <java/io/DataInput.h>
#include <java/nio/ByteOrder.h>
#include <javax/imageio/stream/IIOByteBuffer.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $IIOByteBuffer = ::javax::imageio::stream::IIOByteBuffer;

namespace javax {
	namespace imageio {
		namespace stream {

$MethodInfo _ImageInputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"flushBefore", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getBitOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFlushedPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getStreamPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isCached", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCachedFile", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"mark", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readBit", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readBits", "(I)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"readByte", "()B", nullptr, $PUBLIC | $ABSTRACT},
	{"readBytes", "(Ljavax/imageio/stream/IIOByteBuffer;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"readDouble", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"readFloat", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"readFully", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"readFully", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"readFully", "([SII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([III)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([JII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([FII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readFully", "([DII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"readLong", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"readShort", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"readUnsignedInt", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setBitOffset", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setByteOrder", "(Ljava/nio/ByteOrder;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"skipBytes", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"skipBytes", "(J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageInputStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.stream.ImageInputStream",
	nullptr,
	"java.io.DataInput,java.io.Closeable",
	nullptr,
	_ImageInputStream_MethodInfo_
};

$Object* allocate$ImageInputStream($Class* clazz) {
	return $of($alloc(ImageInputStream));
}

int32_t ImageInputStream::hashCode() {
	 return this->$DataInput::hashCode();
}

bool ImageInputStream::equals(Object$* arg0) {
	 return this->$DataInput::equals(arg0);
}

$Object* ImageInputStream::clone() {
	 return this->$DataInput::clone();
}

$String* ImageInputStream::toString() {
	 return this->$DataInput::toString();
}

void ImageInputStream::finalize() {
	this->$DataInput::finalize();
}

$Class* ImageInputStream::load$($String* name, bool initialize) {
	$loadClass(ImageInputStream, name, initialize, &_ImageInputStream_ClassInfo_, allocate$ImageInputStream);
	return class$;
}

$Class* ImageInputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax