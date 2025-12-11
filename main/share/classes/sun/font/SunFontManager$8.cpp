#include <sun/font/SunFontManager$8.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/font/SunFontManager$8$1.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunFontManager = ::sun::font::SunFontManager;
using $SunFontManager$8$1 = ::sun::font::SunFontManager$8$1;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$8_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$8, this$0)},
	{}
};

$MethodInfo _SunFontManager$8_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(static_cast<void(SunFontManager$8::*)($SunFontManager*)>(&SunFontManager$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$8_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"createFont2D",
	"(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;"
};

$InnerClassInfo _SunFontManager$8_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$8", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$8$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$8",
	"java.lang.Object",
	"java.lang.Runnable",
	_SunFontManager$8_FieldInfo_,
	_SunFontManager$8_MethodInfo_,
	nullptr,
	&_SunFontManager$8_EnclosingMethodInfo_,
	_SunFontManager$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$8($Class* clazz) {
	return $of($alloc(SunFontManager$8));
}

void SunFontManager$8::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

void SunFontManager$8::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$8$1, this)));
}

SunFontManager$8::SunFontManager$8() {
}

$Class* SunFontManager$8::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$8, name, initialize, &_SunFontManager$8_ClassInfo_, allocate$SunFontManager$8);
	return class$;
}

$Class* SunFontManager$8::class$ = nullptr;

	} // font
} // sun