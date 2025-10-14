#include <com/sun/imageio/plugins/png/PNGImageDataEnumeration.h>

#include <com/sun/imageio/plugins/common/InputStreamAdapter.h>
#include <com/sun/imageio/plugins/common/SubImageInputStream.h>
#include <com/sun/imageio/plugins/png/PNGImageReader.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <jcpp.h>

#undef IDAT_TYPE

using $InputStreamAdapter = ::com::sun::imageio::plugins::common::InputStreamAdapter;
using $SubImageInputStream = ::com::sun::imageio::plugins::common::SubImageInputStream;
using $PNGImageReader = ::com::sun::imageio::plugins::png::PNGImageReader;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _PNGImageDataEnumeration_FieldInfo_[] = {
	{"firstTime", "Z", nullptr, 0, $field(PNGImageDataEnumeration, firstTime)},
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(PNGImageDataEnumeration, stream)},
	{"length", "I", nullptr, 0, $field(PNGImageDataEnumeration, length)},
	{}
};

$MethodInfo _PNGImageDataEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PNGImageDataEnumeration::*)($ImageInputStream*)>(&PNGImageDataEnumeration::init$)), "java.io.IOException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PNGImageDataEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGImageDataEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_PNGImageDataEnumeration_FieldInfo_,
	_PNGImageDataEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/io/InputStream;>;"
};

$Object* allocate$PNGImageDataEnumeration($Class* clazz) {
	return $of($alloc(PNGImageDataEnumeration));
}

void PNGImageDataEnumeration::init$($ImageInputStream* stream) {
	this->firstTime = true;
	$set(this, stream, stream);
	this->length = $nc(stream)->readInt();
	int32_t type = stream->readInt();
}

$Object* PNGImageDataEnumeration::nextElement() {
	try {
		this->firstTime = false;
		$var($ImageInputStream, iis, $new($SubImageInputStream, this->stream, this->length));
		return $of($new($InputStreamAdapter, iis));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

bool PNGImageDataEnumeration::hasMoreElements() {
	if (this->firstTime) {
		return true;
	}
	try {
		int32_t crc = $nc(this->stream)->readInt();
		this->length = $nc(this->stream)->readInt();
		int32_t type = $nc(this->stream)->readInt();
		if (type == $PNGImageReader::IDAT_TYPE) {
			return true;
		} else {
			return false;
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

PNGImageDataEnumeration::PNGImageDataEnumeration() {
}

$Class* PNGImageDataEnumeration::load$($String* name, bool initialize) {
	$loadClass(PNGImageDataEnumeration, name, initialize, &_PNGImageDataEnumeration_ClassInfo_, allocate$PNGImageDataEnumeration);
	return class$;
}

$Class* PNGImageDataEnumeration::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com