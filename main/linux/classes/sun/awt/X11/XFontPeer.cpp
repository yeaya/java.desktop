#include <sun/awt/X11/XFontPeer.h>

#include <sun/awt/PlatformFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformFont = ::sun::awt::PlatformFont;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XFontPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(XFontPeer::*)($String*,int32_t)>(&XFontPeer::init$))},
	{"getMissingGlyphCharacter", "()C", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XFontPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XFontPeer",
	"sun.awt.PlatformFont",
	nullptr,
	nullptr,
	_XFontPeer_MethodInfo_
};

$Object* allocate$XFontPeer($Class* clazz) {
	return $of($alloc(XFontPeer));
}

void XFontPeer::init$($String* name, int32_t style) {
	$PlatformFont::init$(name, style);
}

char16_t XFontPeer::getMissingGlyphCharacter() {
	return (char16_t)0x274F;
}

XFontPeer::XFontPeer() {
}

$Class* XFontPeer::load$($String* name, bool initialize) {
	$loadClass(XFontPeer, name, initialize, &_XFontPeer_ClassInfo_, allocate$XFontPeer);
	return class$;
}

$Class* XFontPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun