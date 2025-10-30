#include <sun/font/FontManagerFactory$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <jcpp.h>

#undef DEFAULT_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;

namespace sun {
	namespace font {

$MethodInfo _FontManagerFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontManagerFactory$1::*)()>(&FontManagerFactory$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontManagerFactory$1_EnclosingMethodInfo_ = {
	"sun.font.FontManagerFactory",
	"getInstance",
	"()Lsun/font/FontManager;"
};

$InnerClassInfo _FontManagerFactory$1_InnerClassesInfo_[] = {
	{"sun.font.FontManagerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontManagerFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FontManagerFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FontManagerFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_FontManagerFactory$1_EnclosingMethodInfo_,
	_FontManagerFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontManagerFactory"
};

$Object* allocate$FontManagerFactory$1($Class* clazz) {
	return $of($alloc(FontManagerFactory$1));
}

void FontManagerFactory$1::init$() {
}

$Object* FontManagerFactory$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$init($FontManagerFactory);
		$var($String, fmClassName, $System::getProperty("sun.font.fontmanager"_s, $FontManagerFactory::DEFAULT_CLASS));
		$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
		$Class* fmClass = $Class::forName(fmClassName, true, cl);
		$assignStatic($FontManagerFactory::instance, $cast($FontManager, $nc($($nc(fmClass)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
	} catch ($ReflectiveOperationException& ex) {
		$throwNew($InternalError, static_cast<$Throwable*>(ex));
	}
	return $of(nullptr);
}

FontManagerFactory$1::FontManagerFactory$1() {
}

$Class* FontManagerFactory$1::load$($String* name, bool initialize) {
	$loadClass(FontManagerFactory$1, name, initialize, &_FontManagerFactory$1_ClassInfo_, allocate$FontManagerFactory$1);
	return class$;
}

$Class* FontManagerFactory$1::class$ = nullptr;

	} // font
} // sun