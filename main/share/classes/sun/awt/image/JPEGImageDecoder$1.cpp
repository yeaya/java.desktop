#include <sun/awt/image/JPEGImageDecoder$1.h>

#include <sun/awt/image/JPEGImageDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JPEGImageDecoder = ::sun::awt::image::JPEGImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _JPEGImageDecoder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JPEGImageDecoder$1::*)()>(&JPEGImageDecoder$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JPEGImageDecoder$1_EnclosingMethodInfo_ = {
	"sun.awt.image.JPEGImageDecoder",
	nullptr,
	nullptr
};

$InnerClassInfo _JPEGImageDecoder$1_InnerClassesInfo_[] = {
	{"sun.awt.image.JPEGImageDecoder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPEGImageDecoder$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.JPEGImageDecoder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_JPEGImageDecoder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_JPEGImageDecoder$1_EnclosingMethodInfo_,
	_JPEGImageDecoder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.JPEGImageDecoder"
};

$Object* allocate$JPEGImageDecoder$1($Class* clazz) {
	return $of($alloc(JPEGImageDecoder$1));
}

void JPEGImageDecoder$1::init$() {
}

$Object* JPEGImageDecoder$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("javajpeg"_s);
	return $of(nullptr);
}

JPEGImageDecoder$1::JPEGImageDecoder$1() {
}

$Class* JPEGImageDecoder$1::load$($String* name, bool initialize) {
	$loadClass(JPEGImageDecoder$1, name, initialize, &_JPEGImageDecoder$1_ClassInfo_, allocate$JPEGImageDecoder$1);
	return class$;
}

$Class* JPEGImageDecoder$1::class$ = nullptr;

		} // image
	} // awt
} // sun