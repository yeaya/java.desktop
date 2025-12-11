#include <sun/font/SunFontManager$11.h>

#include <sun/font/Font2D.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef TYPE1_RANK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$11_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$11, this$0)},
	{}
};

$MethodInfo _SunFontManager$11_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(static_cast<void(SunFontManager$11::*)($SunFontManager*)>(&SunFontManager$11::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$11_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"register1dot0Fonts",
	"()V"
};

$InnerClassInfo _SunFontManager$11_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$11_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$11",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$11_FieldInfo_,
	_SunFontManager$11_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$11_EnclosingMethodInfo_,
	_SunFontManager$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$11($Class* clazz) {
	return $of($alloc(SunFontManager$11));
}

void SunFontManager$11::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$11::run() {
	$var($String, type1Dir, "/usr/openwin/lib/X11/fonts/Type1"_s);
	this->this$0->registerFontsInDir(type1Dir, true, $Font2D::TYPE1_RANK, false, false);
	return $of(nullptr);
}

SunFontManager$11::SunFontManager$11() {
}

$Class* SunFontManager$11::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$11, name, initialize, &_SunFontManager$11_ClassInfo_, allocate$SunFontManager$11);
	return class$;
}

$Class* SunFontManager$11::class$ = nullptr;

	} // font
} // sun