#include <sun/font/FontManagerFactory.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory$1.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef DEFAULT_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory$1 = ::sun::font::FontManagerFactory$1;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

$FieldInfo _FontManagerFactory_FieldInfo_[] = {
	{"instance", "Lsun/font/FontManager;", nullptr, $PRIVATE | $STATIC, $staticField(FontManagerFactory, instance)},
	{"DEFAULT_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontManagerFactory, DEFAULT_CLASS)},
	{}
};

$MethodInfo _FontManagerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontManagerFactory::*)()>(&FontManagerFactory::init$))},
	{"getInstance", "()Lsun/font/FontManager;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$FontManager*(*)()>(&FontManagerFactory::getInstance))},
	{}
};

$InnerClassInfo _FontManagerFactory_InnerClassesInfo_[] = {
	{"sun.font.FontManagerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontManagerFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.FontManagerFactory",
	"java.lang.Object",
	nullptr,
	_FontManagerFactory_FieldInfo_,
	_FontManagerFactory_MethodInfo_,
	nullptr,
	nullptr,
	_FontManagerFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.FontManagerFactory$1"
};

$Object* allocate$FontManagerFactory($Class* clazz) {
	return $of($alloc(FontManagerFactory));
}

$FontManager* FontManagerFactory::instance = nullptr;
$String* FontManagerFactory::DEFAULT_CLASS = nullptr;

void FontManagerFactory::init$() {
}

$FontManager* FontManagerFactory::getInstance() {
	$load(FontManagerFactory);
	$synchronized(class$) {
		$init(FontManagerFactory);
		$beforeCallerSensitive();
		if (FontManagerFactory::instance != nullptr) {
			return FontManagerFactory::instance;
		}
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FontManagerFactory$1)));
		return FontManagerFactory::instance;
	}
}

void clinit$FontManagerFactory($Class* class$) {
	$assignStatic(FontManagerFactory::instance, nullptr);
	{
		$init($FontUtilities);
		if ($FontUtilities::isWindows) {
			$assignStatic(FontManagerFactory::DEFAULT_CLASS, "sun.awt.Win32FontManager"_s);
		} else {
			if ($FontUtilities::isMacOSX) {
				$assignStatic(FontManagerFactory::DEFAULT_CLASS, "sun.font.CFontManager"_s);
			} else {
				$assignStatic(FontManagerFactory::DEFAULT_CLASS, "sun.awt.X11FontManager"_s);
			}
		}
	}
}

FontManagerFactory::FontManagerFactory() {
}

$Class* FontManagerFactory::load$($String* name, bool initialize) {
	$loadClass(FontManagerFactory, name, initialize, &_FontManagerFactory_ClassInfo_, clinit$FontManagerFactory, allocate$FontManagerFactory);
	return class$;
}

$Class* FontManagerFactory::class$ = nullptr;

	} // font
} // sun