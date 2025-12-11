#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$1.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$MethodInfo _JPEGImageWriter$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JPEGImageWriter$1::*)()>(&JPEGImageWriter$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JPEGImageWriter$1_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter",
	"initStatic",
	"()V"
};

$InnerClassInfo _JPEGImageWriter$1_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPEGImageWriter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_JPEGImageWriter$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_JPEGImageWriter$1_EnclosingMethodInfo_,
	_JPEGImageWriter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
};

$Object* allocate$JPEGImageWriter$1($Class* clazz) {
	return $of($alloc(JPEGImageWriter$1));
}

void JPEGImageWriter$1::init$() {
}

$Object* JPEGImageWriter$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("javajpeg"_s);
	return $of(nullptr);
}

JPEGImageWriter$1::JPEGImageWriter$1() {
}

$Class* JPEGImageWriter$1::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriter$1, name, initialize, &_JPEGImageWriter$1_ClassInfo_, allocate$JPEGImageWriter$1);
	return class$;
}

$Class* JPEGImageWriter$1::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com