#include <sun/awt/windows/WFontPeer.h>

#include <sun/awt/FontConfiguration.h>
#include <sun/awt/PlatformFont.h>
#include <sun/awt/windows/WFontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $PlatformFont = ::sun::awt::PlatformFont;
using $WFontConfiguration = ::sun::awt::windows::WFontConfiguration;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WFontPeer_FieldInfo_[] = {
	{"textComponentFontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WFontPeer, textComponentFontName)},
	{}
};

$MethodInfo _WFontPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(WFontPeer::*)($String*,int32_t)>(&WFontPeer::init$))},
	{"getMissingGlyphCharacter", "()C", nullptr, $PROTECTED},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WFontPeer::initIDs))},
	{}
};

#define _METHOD_INDEX_initIDs 2

$ClassInfo _WFontPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WFontPeer",
	"sun.awt.PlatformFont",
	nullptr,
	_WFontPeer_FieldInfo_,
	_WFontPeer_MethodInfo_
};

$Object* allocate$WFontPeer($Class* clazz) {
	return $of($alloc(WFontPeer));
}

void WFontPeer::init$($String* name, int32_t style) {
	$PlatformFont::init$(name, style);
	if (this->fontConfig != nullptr) {
		$set(this, textComponentFontName, $nc(($cast($WFontConfiguration, this->fontConfig)))->getTextComponentFontName(this->familyName, style));
	}
}

char16_t WFontPeer::getMissingGlyphCharacter() {
	return (char16_t)0x2751;
}

void WFontPeer::initIDs() {
	$init(WFontPeer);
	$prepareNativeStatic(WFontPeer, initIDs, void);
	$invokeNativeStatic(WFontPeer, initIDs);
	$finishNativeStatic();
}

void clinit$WFontPeer($Class* class$) {
	{
		WFontPeer::initIDs();
	}
}

WFontPeer::WFontPeer() {
}

$Class* WFontPeer::load$($String* name, bool initialize) {
	$loadClass(WFontPeer, name, initialize, &_WFontPeer_ClassInfo_, clinit$WFontPeer, allocate$WFontPeer);
	return class$;
}

$Class* WFontPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun