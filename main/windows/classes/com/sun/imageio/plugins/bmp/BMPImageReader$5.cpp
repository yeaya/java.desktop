#include <com/sun/imageio/plugins/bmp/BMPImageReader$5.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <java/lang/Boolean.h>
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

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$MethodInfo _BMPImageReader$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BMPImageReader$5::*)()>(&BMPImageReader$5::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageReader$5_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageReader",
	"isUncOrDevicePath",
	"([B)Z"
};

$InnerClassInfo _BMPImageReader$5_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageReader$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_BMPImageReader$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_BMPImageReader$5_EnclosingMethodInfo_,
	_BMPImageReader$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader"
};

$Object* allocate$BMPImageReader$5($Class* clazz) {
	return $of($alloc(BMPImageReader$5));
}

void BMPImageReader$5::init$() {
}

$Object* BMPImageReader$5::run() {
	$var($String, osname, $System::getProperty("os.name"_s));
	return $of($Boolean::valueOf((osname != nullptr && $(osname->toLowerCase())->startsWith("win"_s))));
}

BMPImageReader$5::BMPImageReader$5() {
}

$Class* BMPImageReader$5::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader$5, name, initialize, &_BMPImageReader$5_ClassInfo_, allocate$BMPImageReader$5);
	return class$;
}

$Class* BMPImageReader$5::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com