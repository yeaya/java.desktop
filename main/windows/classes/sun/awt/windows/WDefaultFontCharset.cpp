#include <sun/awt/windows/WDefaultFontCharset.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/AWTCharset$Encoder.h>
#include <sun/awt/AWTCharset.h>
#include <sun/awt/windows/WDefaultFontCharset$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AWTCharset = ::sun::awt::AWTCharset;
using $AWTCharset$Encoder = ::sun::awt::AWTCharset$Encoder;
using $WDefaultFontCharset$Encoder = ::sun::awt::windows::WDefaultFontCharset$Encoder;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDefaultFontCharset_FieldInfo_[] = {
	{"fontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WDefaultFontCharset, fontName)},
	{}
};

$MethodInfo _WDefaultFontCharset_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WDefaultFontCharset::*)($String*)>(&WDefaultFontCharset::init$))},
	{"canConvert", "(C)Z", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<bool(WDefaultFontCharset::*)(char16_t)>(&WDefaultFontCharset::canConvert))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WDefaultFontCharset::initIDs))},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_canConvert 1
#define _METHOD_INDEX_initIDs 2

$InnerClassInfo _WDefaultFontCharset_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDefaultFontCharset$Encoder", "sun.awt.windows.WDefaultFontCharset", "Encoder", $PRIVATE},
	{}
};

$ClassInfo _WDefaultFontCharset_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDefaultFontCharset",
	"sun.awt.AWTCharset",
	nullptr,
	_WDefaultFontCharset_FieldInfo_,
	_WDefaultFontCharset_MethodInfo_,
	nullptr,
	nullptr,
	_WDefaultFontCharset_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WDefaultFontCharset$Encoder"
};

$Object* allocate$WDefaultFontCharset($Class* clazz) {
	return $of($alloc(WDefaultFontCharset));
}

void WDefaultFontCharset::init$($String* name) {
	$AWTCharset::init$("WDefaultFontCharset"_s, $($Charset::forName("windows-1252"_s)));
	$set(this, fontName, name);
}

$CharsetEncoder* WDefaultFontCharset::newEncoder() {
	return $new($WDefaultFontCharset$Encoder, this);
}

bool WDefaultFontCharset::canConvert(char16_t ch) {
	bool $ret = false;
	$prepareNative(WDefaultFontCharset, canConvert, bool, char16_t ch);
	$ret = $invokeNative(WDefaultFontCharset, canConvert, ch);
	$finishNative();
	return $ret;
}

void WDefaultFontCharset::initIDs() {
	$init(WDefaultFontCharset);
	$prepareNativeStatic(WDefaultFontCharset, initIDs, void);
	$invokeNativeStatic(WDefaultFontCharset, initIDs);
	$finishNativeStatic();
}

void clinit$WDefaultFontCharset($Class* class$) {
	{
		WDefaultFontCharset::initIDs();
	}
}

WDefaultFontCharset::WDefaultFontCharset() {
}

$Class* WDefaultFontCharset::load$($String* name, bool initialize) {
	$loadClass(WDefaultFontCharset, name, initialize, &_WDefaultFontCharset_ClassInfo_, clinit$WDefaultFontCharset, allocate$WDefaultFontCharset);
	return class$;
}

$Class* WDefaultFontCharset::class$ = nullptr;

		} // windows
	} // awt
} // sun