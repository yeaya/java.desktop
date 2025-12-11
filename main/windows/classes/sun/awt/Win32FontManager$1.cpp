#include <sun/awt/Win32FontManager$1.h>

#include <java/awt/FontFormatException.h>
#include <sun/awt/Win32FontManager.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $FontFormatException = ::java::awt::FontFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace awt {

$MethodInfo _Win32FontManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Win32FontManager$1::*)()>(&Win32FontManager$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32FontManager$1_EnclosingMethodInfo_ = {
	"sun.awt.Win32FontManager",
	nullptr,
	nullptr
};

$InnerClassInfo _Win32FontManager$1_InnerClassesInfo_[] = {
	{"sun.awt.Win32FontManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32FontManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Win32FontManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Win32FontManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Win32FontManager$1_EnclosingMethodInfo_,
	_Win32FontManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Win32FontManager"
};

$Object* allocate$Win32FontManager$1($Class* clazz) {
	return $of($alloc(Win32FontManager$1));
}

void Win32FontManager$1::init$() {
}

$Object* Win32FontManager$1::run() {
	$var($String, eudcFile, $Win32FontManager::getEUDCFontFile());
	if (eudcFile != nullptr) {
		try {
			$assignStatic($Win32FontManager::eudcFont, $new($TrueTypeFont, eudcFile, nullptr, 0, true, false));
		} catch ($FontFormatException& e) {
		}
	}
	return $of(nullptr);
}

Win32FontManager$1::Win32FontManager$1() {
}

$Class* Win32FontManager$1::load$($String* name, bool initialize) {
	$loadClass(Win32FontManager$1, name, initialize, &_Win32FontManager$1_ClassInfo_, allocate$Win32FontManager$1);
	return class$;
}

$Class* Win32FontManager$1::class$ = nullptr;

	} // awt
} // sun