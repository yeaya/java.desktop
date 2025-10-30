#include <javax/imageio/stream/ImageOutputStream.h>

#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $DataOutput = ::java::io::DataOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {
		namespace stream {

$MethodInfo _ImageOutputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flushBefore", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeBit", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeBits", "(JI)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeBoolean", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeByte", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeChar", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeChars", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeDouble", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeDoubles", "([DII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeFloat", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeFloats", "([FII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeInts", "([III)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeLongs", "([JII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeShort", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeShorts", "([SII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageOutputStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.stream.ImageOutputStream",
	nullptr,
	"javax.imageio.stream.ImageInputStream,java.io.DataOutput",
	nullptr,
	_ImageOutputStream_MethodInfo_
};

$Object* allocate$ImageOutputStream($Class* clazz) {
	return $of($alloc(ImageOutputStream));
}

int32_t ImageOutputStream::hashCode() {
	 return this->$ImageInputStream::hashCode();
}

bool ImageOutputStream::equals(Object$* arg0) {
	 return this->$ImageInputStream::equals(arg0);
}

$Object* ImageOutputStream::clone() {
	 return this->$ImageInputStream::clone();
}

$String* ImageOutputStream::toString() {
	 return this->$ImageInputStream::toString();
}

void ImageOutputStream::finalize() {
	this->$ImageInputStream::finalize();
}

$Class* ImageOutputStream::load$($String* name, bool initialize) {
	$loadClass(ImageOutputStream, name, initialize, &_ImageOutputStream_ClassInfo_, allocate$ImageOutputStream);
	return class$;
}

$Class* ImageOutputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax