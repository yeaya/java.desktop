#include <sun/font/FontManagerNativeLibrary$1.h>

#include <sun/font/FontManagerNativeLibrary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _FontManagerNativeLibrary$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontManagerNativeLibrary$1::*)()>(&FontManagerNativeLibrary$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontManagerNativeLibrary$1_EnclosingMethodInfo_ = {
	"sun.font.FontManagerNativeLibrary",
	nullptr,
	nullptr
};

$InnerClassInfo _FontManagerNativeLibrary$1_InnerClassesInfo_[] = {
	{"sun.font.FontManagerNativeLibrary$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontManagerNativeLibrary$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FontManagerNativeLibrary$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FontManagerNativeLibrary$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_FontManagerNativeLibrary$1_EnclosingMethodInfo_,
	_FontManagerNativeLibrary$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontManagerNativeLibrary"
};

$Object* allocate$FontManagerNativeLibrary$1($Class* clazz) {
	return $of($alloc(FontManagerNativeLibrary$1));
}

void FontManagerNativeLibrary$1::init$() {
}

$Object* FontManagerNativeLibrary$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	if ($nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s)) {
		$System::loadLibrary("freetype"_s);
	}
	$System::loadLibrary("fontmanager"_s);
	return $of(nullptr);
}

FontManagerNativeLibrary$1::FontManagerNativeLibrary$1() {
}

$Class* FontManagerNativeLibrary$1::load$($String* name, bool initialize) {
	$loadClass(FontManagerNativeLibrary$1, name, initialize, &_FontManagerNativeLibrary$1_ClassInfo_, allocate$FontManagerNativeLibrary$1);
	return class$;
}

$Class* FontManagerNativeLibrary$1::class$ = nullptr;

	} // font
} // sun