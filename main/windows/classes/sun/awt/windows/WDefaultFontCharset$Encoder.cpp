#include <sun/awt/windows/WDefaultFontCharset$Encoder.h>

#include <sun/awt/AWTCharset$Encoder.h>
#include <sun/awt/AWTCharset.h>
#include <sun/awt/windows/WDefaultFontCharset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTCharset = ::sun::awt::AWTCharset;
using $AWTCharset$Encoder = ::sun::awt::AWTCharset$Encoder;
using $WDefaultFontCharset = ::sun::awt::windows::WDefaultFontCharset;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDefaultFontCharset$Encoder_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WDefaultFontCharset;", nullptr, $FINAL | $SYNTHETIC, $field(WDefaultFontCharset$Encoder, this$0)},
	{}
};

$MethodInfo _WDefaultFontCharset$Encoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WDefaultFontCharset;)V", nullptr, $PRIVATE, $method(static_cast<void(WDefaultFontCharset$Encoder::*)($WDefaultFontCharset*)>(&WDefaultFontCharset$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WDefaultFontCharset$Encoder_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDefaultFontCharset$Encoder", "sun.awt.windows.WDefaultFontCharset", "Encoder", $PRIVATE},
	{"sun.awt.AWTCharset$Encoder", "sun.awt.AWTCharset", "Encoder", $PUBLIC},
	{}
};

$ClassInfo _WDefaultFontCharset$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WDefaultFontCharset$Encoder",
	"sun.awt.AWTCharset$Encoder",
	nullptr,
	_WDefaultFontCharset$Encoder_FieldInfo_,
	_WDefaultFontCharset$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_WDefaultFontCharset$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WDefaultFontCharset"
};

$Object* allocate$WDefaultFontCharset$Encoder($Class* clazz) {
	return $of($alloc(WDefaultFontCharset$Encoder));
}

void WDefaultFontCharset$Encoder::init$($WDefaultFontCharset* this$0) {
	$set(this, this$0, this$0);
	$AWTCharset$Encoder::init$(this$0);
}

bool WDefaultFontCharset$Encoder::canEncode(char16_t c) {
	return this->this$0->canConvert(c);
}

WDefaultFontCharset$Encoder::WDefaultFontCharset$Encoder() {
}

$Class* WDefaultFontCharset$Encoder::load$($String* name, bool initialize) {
	$loadClass(WDefaultFontCharset$Encoder, name, initialize, &_WDefaultFontCharset$Encoder_ClassInfo_, allocate$WDefaultFontCharset$Encoder);
	return class$;
}

$Class* WDefaultFontCharset$Encoder::class$ = nullptr;

		} // windows
	} // awt
} // sun