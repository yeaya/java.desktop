#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor$IIOByteArrayOutputStream.h>

#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $TIFFBaseJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::*)()>(&TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::*)(int32_t)>(&TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::init$))},
	{"writeTo", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor$IIOByteArrayOutputStream", "com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor", "IIOByteArrayOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor$IIOByteArrayOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	nullptr,
	_TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor"
};

$Object* allocate$TIFFBaseJPEGCompressor$IIOByteArrayOutputStream($Class* clazz) {
	return $of($alloc(TIFFBaseJPEGCompressor$IIOByteArrayOutputStream));
}

void TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::init$() {
	$ByteArrayOutputStream::init$();
}

void TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::init$(int32_t size) {
	$ByteArrayOutputStream::init$(size);
}

void TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::writeTo($ImageOutputStream* ios) {
	$synchronized(this) {
		$nc(ios)->write(this->buf, 0, this->count);
	}
}

TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::TIFFBaseJPEGCompressor$IIOByteArrayOutputStream() {
}

$Class* TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::load$($String* name, bool initialize) {
	$loadClass(TIFFBaseJPEGCompressor$IIOByteArrayOutputStream, name, initialize, &_TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_ClassInfo_, allocate$TIFFBaseJPEGCompressor$IIOByteArrayOutputStream);
	return class$;
}

$Class* TIFFBaseJPEGCompressor$IIOByteArrayOutputStream::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com