#include <sun/font/FontManagerNativeLibrary.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/font/FontManagerNativeLibrary$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontManagerNativeLibrary$1 = ::sun::font::FontManagerNativeLibrary$1;

namespace sun {
	namespace font {

$MethodInfo _FontManagerNativeLibrary_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontManagerNativeLibrary::*)()>(&FontManagerNativeLibrary::init$))},
	{"load", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&FontManagerNativeLibrary::load))},
	{}
};

$InnerClassInfo _FontManagerNativeLibrary_InnerClassesInfo_[] = {
	{"sun.font.FontManagerNativeLibrary$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontManagerNativeLibrary_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontManagerNativeLibrary",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FontManagerNativeLibrary_MethodInfo_,
	nullptr,
	nullptr,
	_FontManagerNativeLibrary_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.FontManagerNativeLibrary$1"
};

$Object* allocate$FontManagerNativeLibrary($Class* clazz) {
	return $of($alloc(FontManagerNativeLibrary));
}

void FontManagerNativeLibrary::init$() {
}

void FontManagerNativeLibrary::load() {
	$init(FontManagerNativeLibrary);
}

void clinit$FontManagerNativeLibrary($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FontManagerNativeLibrary$1)));
	}
}

FontManagerNativeLibrary::FontManagerNativeLibrary() {
}

$Class* FontManagerNativeLibrary::load$($String* name, bool initialize) {
	$loadClass(FontManagerNativeLibrary, name, initialize, &_FontManagerNativeLibrary_ClassInfo_, clinit$FontManagerNativeLibrary, allocate$FontManagerNativeLibrary);
	return class$;
}

$Class* FontManagerNativeLibrary::class$ = nullptr;

	} // font
} // sun