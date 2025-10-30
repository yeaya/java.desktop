#include <sun/font/SunFontManager$10.h>

#include <sun/font/Font2D.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef UNKNOWN_RANK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Font2D = ::sun::font::Font2D;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$10_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$10, this$0)},
	{}
};

$MethodInfo _SunFontManager$10_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(static_cast<void(SunFontManager$10::*)($SunFontManager*)>(&SunFontManager$10::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$10_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"loadFontFiles",
	"()V"
};

$InnerClassInfo _SunFontManager$10_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$10",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$10_FieldInfo_,
	_SunFontManager$10_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$10_EnclosingMethodInfo_,
	_SunFontManager$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$10($Class* clazz) {
	return $of($alloc(SunFontManager$10));
}

void SunFontManager$10::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$10::run() {
	if (this->this$0->fontPath == nullptr) {
		$init($SunFontManager);
		$set(this->this$0, fontPath, this->this$0->getPlatformFontPath($SunFontManager::noType1Font));
	}
	if (this->this$0->fontPath != nullptr) {
		this->this$0->registerFontsOnPath(this->this$0->fontPath, false, $Font2D::UNKNOWN_RANK, false, true);
	}
	this->this$0->loadedAllFontFiles = true;
	return $of(nullptr);
}

SunFontManager$10::SunFontManager$10() {
}

$Class* SunFontManager$10::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$10, name, initialize, &_SunFontManager$10_ClassInfo_, allocate$SunFontManager$10);
	return class$;
}

$Class* SunFontManager$10::class$ = nullptr;

	} // font
} // sun