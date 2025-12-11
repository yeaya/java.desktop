#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$1.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
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

$MethodInfo _JPEGImageReader$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JPEGImageReader$1::*)()>(&JPEGImageReader$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JPEGImageReader$1_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.jpeg.JPEGImageReader",
	"initStatic",
	"()V"
};

$InnerClassInfo _JPEGImageReader$1_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPEGImageReader$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_JPEGImageReader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_JPEGImageReader$1_EnclosingMethodInfo_,
	_JPEGImageReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader"
};

$Object* allocate$JPEGImageReader$1($Class* clazz) {
	return $of($alloc(JPEGImageReader$1));
}

void JPEGImageReader$1::init$() {
}

$Object* JPEGImageReader$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("javajpeg"_s);
	return $of(nullptr);
}

JPEGImageReader$1::JPEGImageReader$1() {
}

$Class* JPEGImageReader$1::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReader$1, name, initialize, &_JPEGImageReader$1_ClassInfo_, allocate$JPEGImageReader$1);
	return class$;
}

$Class* JPEGImageReader$1::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com