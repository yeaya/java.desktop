#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFColorConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFColorConverter::*)()>(&TIFFColorConverter::init$))},
	{"fromRGB", "(FFF[F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"toRGB", "(FFF[F)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TIFFColorConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.tiff.TIFFColorConverter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TIFFColorConverter_MethodInfo_
};

$Object* allocate$TIFFColorConverter($Class* clazz) {
	return $of($alloc(TIFFColorConverter));
}

void TIFFColorConverter::init$() {
}

TIFFColorConverter::TIFFColorConverter() {
}

$Class* TIFFColorConverter::load$($String* name, bool initialize) {
	$loadClass(TIFFColorConverter, name, initialize, &_TIFFColorConverter_ClassInfo_, allocate$TIFFColorConverter);
	return class$;
}

$Class* TIFFColorConverter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com