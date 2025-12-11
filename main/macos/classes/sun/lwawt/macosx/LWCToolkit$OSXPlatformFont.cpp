#include <sun/lwawt/macosx/LWCToolkit$OSXPlatformFont.h>

#include <sun/awt/PlatformFont.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformFont = ::sun::awt::PlatformFont;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _LWCToolkit$OSXPlatformFont_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/LWCToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$OSXPlatformFont, this$0)},
	{}
};

$MethodInfo _LWCToolkit$OSXPlatformFont_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/LWCToolkit;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(LWCToolkit$OSXPlatformFont::*)($LWCToolkit*,$String*,int32_t)>(&LWCToolkit$OSXPlatformFont::init$))},
	{"getMissingGlyphCharacter", "()C", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _LWCToolkit$OSXPlatformFont_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$OSXPlatformFont", "sun.lwawt.macosx.LWCToolkit", "OSXPlatformFont", 0},
	{}
};

$ClassInfo _LWCToolkit$OSXPlatformFont_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit$OSXPlatformFont",
	"sun.awt.PlatformFont",
	nullptr,
	_LWCToolkit$OSXPlatformFont_FieldInfo_,
	_LWCToolkit$OSXPlatformFont_MethodInfo_,
	nullptr,
	nullptr,
	_LWCToolkit$OSXPlatformFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit"
};

$Object* allocate$LWCToolkit$OSXPlatformFont($Class* clazz) {
	return $of($alloc(LWCToolkit$OSXPlatformFont));
}

void LWCToolkit$OSXPlatformFont::init$($LWCToolkit* this$0, $String* name, int32_t style) {
	$set(this, this$0, this$0);
	$PlatformFont::init$(name, style);
}

char16_t LWCToolkit$OSXPlatformFont::getMissingGlyphCharacter() {
	return (char16_t)0x0000FFF8;
}

LWCToolkit$OSXPlatformFont::LWCToolkit$OSXPlatformFont() {
}

$Class* LWCToolkit$OSXPlatformFont::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$OSXPlatformFont, name, initialize, &_LWCToolkit$OSXPlatformFont_ClassInfo_, allocate$LWCToolkit$OSXPlatformFont);
	return class$;
}

$Class* LWCToolkit$OSXPlatformFont::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun