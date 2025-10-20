#include <sun/awt/image/FileImageSource.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _FileImageSource_FieldInfo_[] = {
	{"imagefile", "Ljava/lang/String;", nullptr, 0, $field(FileImageSource, imagefile)},
	{}
};

$MethodInfo _FileImageSource_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileImageSource::*)($String*)>(&FileImageSource::init$))},
	{"checkSecurity", "(Ljava/lang/Object;Z)Z", nullptr, $FINAL},
	{"getDecoder", "()Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _FileImageSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.FileImageSource",
	"sun.awt.image.InputStreamImageSource",
	nullptr,
	_FileImageSource_FieldInfo_,
	_FileImageSource_MethodInfo_
};

$Object* allocate$FileImageSource($Class* clazz) {
	return $of($alloc(FileImageSource));
}

void FileImageSource::init$($String* filename) {
	$InputStreamImageSource::init$();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
	$set(this, imagefile, filename);
}

bool FileImageSource::checkSecurity(Object$* context, bool quiet) {
	return true;
}

$ImageDecoder* FileImageSource::getDecoder() {
	$useLocalCurrentObjectStackCache();
	if (this->imagefile == nullptr) {
		return nullptr;
	}
	$var($InputStream, is, nullptr);
	try {
		$assign(is, $new($BufferedInputStream, $$new($FileInputStream, this->imagefile)));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return nullptr;
	}
	return getDecoder(is);
}

FileImageSource::FileImageSource() {
}

$Class* FileImageSource::load$($String* name, bool initialize) {
	$loadClass(FileImageSource, name, initialize, &_FileImageSource_ClassInfo_, allocate$FileImageSource);
	return class$;
}

$Class* FileImageSource::class$ = nullptr;

		} // image
	} // awt
} // sun