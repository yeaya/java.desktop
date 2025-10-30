#include <sun/awt/image/ByteArrayImageSource.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ByteArrayImageSource_FieldInfo_[] = {
	{"imagedata", "[B", nullptr, 0, $field(ByteArrayImageSource, imagedata)},
	{"imageoffset", "I", nullptr, 0, $field(ByteArrayImageSource, imageoffset)},
	{"imagelength", "I", nullptr, 0, $field(ByteArrayImageSource, imagelength)},
	{}
};

$MethodInfo _ByteArrayImageSource_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayImageSource::*)($bytes*)>(&ByteArrayImageSource::init$))},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayImageSource::*)($bytes*,int32_t,int32_t)>(&ByteArrayImageSource::init$))},
	{"checkSecurity", "(Ljava/lang/Object;Z)Z", nullptr, $FINAL},
	{"getDecoder", "()Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ByteArrayImageSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ByteArrayImageSource",
	"sun.awt.image.InputStreamImageSource",
	nullptr,
	_ByteArrayImageSource_FieldInfo_,
	_ByteArrayImageSource_MethodInfo_
};

$Object* allocate$ByteArrayImageSource($Class* clazz) {
	return $of($alloc(ByteArrayImageSource));
}

void ByteArrayImageSource::init$($bytes* data) {
	ByteArrayImageSource::init$(data, 0, $nc(data)->length);
}

void ByteArrayImageSource::init$($bytes* data, int32_t offset, int32_t length) {
	$InputStreamImageSource::init$();
	$set(this, imagedata, data);
	this->imageoffset = offset;
	this->imagelength = length;
}

bool ByteArrayImageSource::checkSecurity(Object$* context, bool quiet) {
	return true;
}

$ImageDecoder* ByteArrayImageSource::getDecoder() {
	$var($InputStream, is, $new($ByteArrayInputStream, this->imagedata, this->imageoffset, this->imagelength));
	return getDecoder(is);
}

ByteArrayImageSource::ByteArrayImageSource() {
}

$Class* ByteArrayImageSource::load$($String* name, bool initialize) {
	$loadClass(ByteArrayImageSource, name, initialize, &_ByteArrayImageSource_ClassInfo_, allocate$ByteArrayImageSource);
	return class$;
}

$Class* ByteArrayImageSource::class$ = nullptr;

		} // image
	} // awt
} // sun