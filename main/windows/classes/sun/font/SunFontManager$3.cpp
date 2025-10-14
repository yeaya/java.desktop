#include <sun/font/SunFontManager$3.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$3_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$3, this$0)},
	{}
};

$MethodInfo _SunFontManager$3_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(static_cast<void(SunFontManager$3::*)($SunFontManager*)>(&SunFontManager$3::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$3_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"<init>",
	"()V"
};

$InnerClassInfo _SunFontManager$3_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$3_FieldInfo_,
	_SunFontManager$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_SunFontManager$3_EnclosingMethodInfo_,
	_SunFontManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$3($Class* clazz) {
	return $of($alloc(SunFontManager$3));
}

void SunFontManager$3::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$3::run() {
	$var($String, prop, $System::getProperty("java2d.font.usePlatformFont"_s));
	$var($String, env, $System::getenv("JAVA2D_USEPLATFORMFONT"_s));
	return $of($Boolean::valueOf("true"_s->equals(prop) || env != nullptr));
}

SunFontManager$3::SunFontManager$3() {
}

$Class* SunFontManager$3::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$3, name, initialize, &_SunFontManager$3_ClassInfo_, allocate$SunFontManager$3);
	return class$;
}

$Class* SunFontManager$3::class$ = nullptr;

	} // font
} // sun