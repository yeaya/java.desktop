#include <java/awt/ImageCapabilities.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _ImageCapabilities_FieldInfo_[] = {
	{"accelerated", "Z", nullptr, $PRIVATE, $field(ImageCapabilities, accelerated)},
	{}
};

$MethodInfo _ImageCapabilities_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ImageCapabilities::*)(bool)>(&ImageCapabilities::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isAccelerated", "()Z", nullptr, $PUBLIC},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageCapabilities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.ImageCapabilities",
	"java.lang.Object",
	"java.lang.Cloneable",
	_ImageCapabilities_FieldInfo_,
	_ImageCapabilities_MethodInfo_
};

$Object* allocate$ImageCapabilities($Class* clazz) {
	return $of($alloc(ImageCapabilities));
}

void ImageCapabilities::init$(bool accelerated) {
	this->accelerated = false;
	this->accelerated = accelerated;
}

bool ImageCapabilities::isAccelerated() {
	return this->accelerated;
}

bool ImageCapabilities::isTrueVolatile() {
	return false;
}

$Object* ImageCapabilities::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

ImageCapabilities::ImageCapabilities() {
}

$Class* ImageCapabilities::load$($String* name, bool initialize) {
	$loadClass(ImageCapabilities, name, initialize, &_ImageCapabilities_ClassInfo_, allocate$ImageCapabilities);
	return class$;
}

$Class* ImageCapabilities::class$ = nullptr;

	} // awt
} // java