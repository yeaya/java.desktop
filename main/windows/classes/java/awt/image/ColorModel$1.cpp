#include <java/awt/image/ColorModel$1.h>

#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _ColorModel$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorModel$1::*)()>(&ColorModel$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ColorModel$1_EnclosingMethodInfo_ = {
	"java.awt.image.ColorModel",
	"loadLibraries",
	"()V"
};

$InnerClassInfo _ColorModel$1_InnerClassesInfo_[] = {
	{"java.awt.image.ColorModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorModel$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.image.ColorModel$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ColorModel$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ColorModel$1_EnclosingMethodInfo_,
	_ColorModel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.image.ColorModel"
};

$Object* allocate$ColorModel$1($Class* clazz) {
	return $of($alloc(ColorModel$1));
}

void ColorModel$1::init$() {
}

$Object* ColorModel$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

ColorModel$1::ColorModel$1() {
}

$Class* ColorModel$1::load$($String* name, bool initialize) {
	$loadClass(ColorModel$1, name, initialize, &_ColorModel$1_ClassInfo_, allocate$ColorModel$1);
	return class$;
}

$Class* ColorModel$1::class$ = nullptr;

		} // image
	} // awt
} // java