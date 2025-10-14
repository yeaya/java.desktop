#include <sun/font/SunFontManager$9.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashSet.h>
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
using $HashSet = ::java::util::HashSet;
using $Font2D = ::sun::font::Font2D;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$9_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$9, this$0)},
	{}
};

$MethodInfo _SunFontManager$9_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(static_cast<void(SunFontManager$9::*)($SunFontManager*)>(&SunFontManager$9::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$9_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"loadFonts",
	"()V"
};

$InnerClassInfo _SunFontManager$9_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$9",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$9_FieldInfo_,
	_SunFontManager$9_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$9_EnclosingMethodInfo_,
	_SunFontManager$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$9($Class* clazz) {
	return $of($alloc(SunFontManager$9));
}

void SunFontManager$9::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$9::run() {
	if (this->this$0->fontPath == nullptr) {
		$init($SunFontManager);
		$set(this->this$0, fontPath, this->this$0->getPlatformFontPath($SunFontManager::noType1Font));
		this->this$0->registerFontDirs(this->this$0->fontPath);
	}
	if (this->this$0->fontPath != nullptr) {
		if (!this->this$0->gotFontsFromPlatform()) {
			this->this$0->registerFontsOnPath(this->this$0->fontPath, false, $Font2D::UNKNOWN_RANK, false, true);
			this->this$0->loadedAllFontFiles = true;
		}
	}
	this->this$0->registerOtherFontFiles(this->this$0->registeredFontFiles);
	this->this$0->discoveredAllFonts = true;
	return $of(nullptr);
}

SunFontManager$9::SunFontManager$9() {
}

$Class* SunFontManager$9::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$9, name, initialize, &_SunFontManager$9_ClassInfo_, allocate$SunFontManager$9);
	return class$;
}

$Class* SunFontManager$9::class$ = nullptr;

	} // font
} // sun