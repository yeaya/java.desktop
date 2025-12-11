#include <com/sun/imageio/plugins/bmp/BMPImageReader$4.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$MethodInfo _BMPImageReader$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BMPImageReader$4::*)()>(&BMPImageReader$4::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageReader$4_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageReader",
	"isLinkedProfileAllowed",
	"()Z"
};

$InnerClassInfo _BMPImageReader$4_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageReader$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_BMPImageReader$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_BMPImageReader$4_EnclosingMethodInfo_,
	_BMPImageReader$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader"
};

$Object* allocate$BMPImageReader$4($Class* clazz) {
	return $of($alloc(BMPImageReader$4));
}

void BMPImageReader$4::init$() {
}

$Object* BMPImageReader$4::run() {
	return $of($Boolean::valueOf($Boolean::getBoolean("sun.imageio.plugins.bmp.disableLinkedProfiles"_s)));
}

BMPImageReader$4::BMPImageReader$4() {
}

$Class* BMPImageReader$4::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader$4, name, initialize, &_BMPImageReader$4_ClassInfo_, allocate$BMPImageReader$4);
	return class$;
}

$Class* BMPImageReader$4::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com