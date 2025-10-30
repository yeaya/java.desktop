#include <java/awt/image/Kernel.h>

#include <java/awt/image/ColorModel.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _Kernel_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE, $field(Kernel, width)},
	{"height", "I", nullptr, $PRIVATE, $field(Kernel, height)},
	{"xOrigin", "I", nullptr, $PRIVATE, $field(Kernel, xOrigin)},
	{"yOrigin", "I", nullptr, $PRIVATE, $field(Kernel, yOrigin)},
	{"data", "[F", nullptr, $PRIVATE, $field(Kernel, data)},
	{}
};

$MethodInfo _Kernel_MethodInfo_[] = {
	{"<init>", "(II[F)V", nullptr, $PUBLIC, $method(static_cast<void(Kernel::*)(int32_t,int32_t,$floats*)>(&Kernel::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Kernel::*)()>(&Kernel::getHeight))},
	{"getKernelData", "([F)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(Kernel::*)($floats*)>(&Kernel::getKernelData))},
	{"getWidth", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Kernel::*)()>(&Kernel::getWidth))},
	{"getXOrigin", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Kernel::*)()>(&Kernel::getXOrigin))},
	{"getYOrigin", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Kernel::*)()>(&Kernel::getYOrigin))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Kernel::initIDs))},
	{}
};

#define _METHOD_INDEX_initIDs 7

$ClassInfo _Kernel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.Kernel",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Kernel_FieldInfo_,
	_Kernel_MethodInfo_
};

$Object* allocate$Kernel($Class* clazz) {
	return $of($alloc(Kernel));
}

void Kernel::initIDs() {
	$init(Kernel);
	$prepareNativeStatic(Kernel, initIDs, void);
	$invokeNativeStatic(Kernel, initIDs);
	$finishNativeStatic();
}

void Kernel::init$(int32_t width, int32_t height, $floats* data) {
	$useLocalCurrentObjectStackCache();
	this->width = width;
	this->height = height;
	this->xOrigin = (width - 1) >> 1;
	this->yOrigin = (height - 1) >> 1;
	int32_t len = width * height;
	if ($nc(data)->length < len) {
		$throwNew($IllegalArgumentException, $$str({"Data array too small (is "_s, $$str(data->length), " and should be "_s, $$str(len)}));
	}
	$set(this, data, $new($floats, len));
	$System::arraycopy(data, 0, this->data, 0, len);
}

int32_t Kernel::getXOrigin() {
	return this->xOrigin;
}

int32_t Kernel::getYOrigin() {
	return this->yOrigin;
}

int32_t Kernel::getWidth() {
	return this->width;
}

int32_t Kernel::getHeight() {
	return this->height;
}

$floats* Kernel::getKernelData($floats* data$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($floats, data, data$renamed);
	if (data == nullptr) {
		$assign(data, $new($floats, $nc(this->data)->length));
	} else if ($nc(data)->length < $nc(this->data)->length) {
		$throwNew($IllegalArgumentException, $$str({"Data array too small (should be "_s, $$str($nc(this->data)->length), " but is "_s, $$str(data->length), " )"_s}));
	}
	$System::arraycopy(this->data, 0, data, 0, $nc(this->data)->length);
	return data;
}

$Object* Kernel::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$Kernel($Class* class$) {
	{
		$ColorModel::loadLibraries();
		Kernel::initIDs();
	}
}

Kernel::Kernel() {
}

$Class* Kernel::load$($String* name, bool initialize) {
	$loadClass(Kernel, name, initialize, &_Kernel_ClassInfo_, clinit$Kernel, allocate$Kernel);
	return class$;
}

$Class* Kernel::class$ = nullptr;

		} // image
	} // awt
} // java