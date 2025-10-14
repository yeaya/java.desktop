#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef BUFFER_SIZE
#undef EOI

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGBuffer_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE, $field(JPEGBuffer, debug)},
	{"BUFFER_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(JPEGBuffer, BUFFER_SIZE)},
	{"buf", "[B", nullptr, 0, $field(JPEGBuffer, buf)},
	{"bufAvail", "I", nullptr, 0, $field(JPEGBuffer, bufAvail)},
	{"bufPtr", "I", nullptr, 0, $field(JPEGBuffer, bufPtr)},
	{"iis", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(JPEGBuffer, iis)},
	{}
};

$MethodInfo _JPEGBuffer_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, 0, $method(static_cast<void(JPEGBuffer::*)($ImageInputStream*)>(&JPEGBuffer::init$))},
	{"getStreamPosition", "()J", nullptr, 0, nullptr, "java.io.IOException"},
	{"loadBuf", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"print", "(I)V", nullptr, 0},
	{"pushBack", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readData", "([B)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"scanForFF", "(Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"skipData", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JPEGBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGBuffer",
	"java.lang.Object",
	nullptr,
	_JPEGBuffer_FieldInfo_,
	_JPEGBuffer_MethodInfo_
};

$Object* allocate$JPEGBuffer($Class* clazz) {
	return $of($alloc(JPEGBuffer));
}

void JPEGBuffer::init$($ImageInputStream* iis) {
	this->debug = false;
	$set(this, buf, $new($bytes, this->BUFFER_SIZE));
	this->bufAvail = 0;
	this->bufPtr = 0;
	$set(this, iis, iis);
}

void JPEGBuffer::loadBuf(int32_t count) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->print("loadbuf called with "_s);
		$nc($System::out)->print($$str({"count "_s, $$str(count), ", "_s}));
		$nc($System::out)->println($$str({"bufAvail "_s, $$str(this->bufAvail), ", "_s}));
	}
	if (count != 0) {
		if (this->bufAvail >= count) {
			return;
		}
	} else if (this->bufAvail == this->BUFFER_SIZE) {
		return;
	}
	if ((this->bufAvail > 0) && (this->bufAvail < this->BUFFER_SIZE)) {
		$System::arraycopy(this->buf, this->bufPtr, this->buf, 0, this->bufAvail);
	}
	int32_t ret = $nc(this->iis)->read(this->buf, this->bufAvail, $nc(this->buf)->length - this->bufAvail);
	if (this->debug) {
		$init($System);
		$nc($System::out)->println($$str({"iis.read returned "_s, $$str(ret)}));
	}
	if (ret != -1) {
		this->bufAvail += ret;
	}
	this->bufPtr = 0;
	int32_t minimum = $Math::min(this->BUFFER_SIZE, count);
	if (this->bufAvail < minimum) {
		$throwNew($IIOException, "Image Format Error"_s);
	}
}

void JPEGBuffer::readData($bytes* data) {
	int32_t count = $nc(data)->length;
	if (this->bufAvail >= count) {
		$System::arraycopy(this->buf, this->bufPtr, data, 0, count);
		this->bufAvail -= count;
		this->bufPtr += count;
		return;
	}
	int32_t offset = 0;
	if (this->bufAvail > 0) {
		$System::arraycopy(this->buf, this->bufPtr, data, 0, this->bufAvail);
		offset = this->bufAvail;
		count -= this->bufAvail;
		this->bufAvail = 0;
		this->bufPtr = 0;
	}
	if ($nc(this->iis)->read(data, offset, count) != count) {
		$throwNew($IIOException, "Image format Error"_s);
	}
}

void JPEGBuffer::skipData(int32_t count) {
	if (this->bufAvail >= count) {
		this->bufAvail -= count;
		this->bufPtr += count;
		return;
	}
	if (this->bufAvail > 0) {
		count -= this->bufAvail;
		this->bufAvail = 0;
		this->bufPtr = 0;
	}
	if ($nc(this->iis)->skipBytes(count) != count) {
		$throwNew($IIOException, "Image format Error"_s);
	}
}

void JPEGBuffer::pushBack() {
	$nc(this->iis)->seek($nc(this->iis)->getStreamPosition() - this->bufAvail);
	this->bufAvail = 0;
	this->bufPtr = 0;
}

int64_t JPEGBuffer::getStreamPosition() {
	return ($nc(this->iis)->getStreamPosition() - this->bufAvail);
}

bool JPEGBuffer::scanForFF($JPEGImageReader* reader) {
	bool retval = false;
	bool foundFF = false;
	while (foundFF == false) {
		while (this->bufAvail > 0) {
			if (((int32_t)($nc(this->buf)->get(this->bufPtr++) & (uint32_t)255)) == 255) {
				--this->bufAvail;
				foundFF = true;
				break;
			}
			--this->bufAvail;
		}
		loadBuf(0);
		if (foundFF == true) {
			while ((this->bufAvail > 0) && ((int32_t)($nc(this->buf)->get(this->bufPtr) & (uint32_t)255)) == 255) {
				++this->bufPtr;
				--this->bufAvail;
			}
		}
		if (this->bufAvail == 0) {
			retval = true;
			$nc(this->buf)->set(0, (int8_t)$JPEG::EOI);
			this->bufAvail = 1;
			this->bufPtr = 0;
			foundFF = true;
		}
	}
	return retval;
}

void JPEGBuffer::print(int32_t count) {
	$init($System);
	$nc($System::out)->print("buffer has "_s);
	$nc($System::out)->print(this->bufAvail);
	$nc($System::out)->println(" bytes available"_s);
	if (this->bufAvail < count) {
		count = this->bufAvail;
	}
	for (int32_t ptr = this->bufPtr; count > 0; --count) {
		int32_t val = (int32_t)((int32_t)$nc(this->buf)->get(ptr++) & (uint32_t)255);
		$nc($System::out)->print($$str({" "_s, $($Integer::toHexString(val))}));
	}
	$nc($System::out)->println();
}

JPEGBuffer::JPEGBuffer() {
}

$Class* JPEGBuffer::load$($String* name, bool initialize) {
	$loadClass(JPEGBuffer, name, initialize, &_JPEGBuffer_ClassInfo_, allocate$JPEGBuffer);
	return class$;
}

$Class* JPEGBuffer::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com