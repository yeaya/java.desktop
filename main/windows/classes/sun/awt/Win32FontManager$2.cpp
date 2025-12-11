#include <sun/awt/Win32FontManager$2.h>

#include <sun/awt/Win32FontManager.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

$FieldInfo _Win32FontManager$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/Win32FontManager;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$2, this$0)},
	{}
};

$MethodInfo _Win32FontManager$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/Win32FontManager;)V", nullptr, 0, $method(static_cast<void(Win32FontManager$2::*)($Win32FontManager*)>(&Win32FontManager$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32FontManager$2_EnclosingMethodInfo_ = {
	"sun.awt.Win32FontManager",
	"<init>",
	"()V"
};

$InnerClassInfo _Win32FontManager$2_InnerClassesInfo_[] = {
	{"sun.awt.Win32FontManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32FontManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Win32FontManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Win32FontManager$2_FieldInfo_,
	_Win32FontManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Win32FontManager$2_EnclosingMethodInfo_,
	_Win32FontManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Win32FontManager"
};

$Object* allocate$Win32FontManager$2($Class* clazz) {
	return $of($alloc(Win32FontManager$2));
}

void Win32FontManager$2::init$($Win32FontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32FontManager$2::run() {
	$init($SunFontManager);
	this->this$0->registerJREFontsWithPlatform($SunFontManager::jreFontDirName);
	return $of(nullptr);
}

Win32FontManager$2::Win32FontManager$2() {
}

$Class* Win32FontManager$2::load$($String* name, bool initialize) {
	$loadClass(Win32FontManager$2, name, initialize, &_Win32FontManager$2_ClassInfo_, allocate$Win32FontManager$2);
	return class$;
}

$Class* Win32FontManager$2::class$ = nullptr;

	} // awt
} // sun