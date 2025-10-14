#include <sun/awt/windows/WingDings.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/windows/WingDings$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $WingDings$Encoder = ::sun::awt::windows::WingDings$Encoder;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WingDings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WingDings::*)()>(&WingDings::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WingDings_InnerClassesInfo_[] = {
	{"sun.awt.windows.WingDings$Encoder", "sun.awt.windows.WingDings", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WingDings_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.WingDings",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_WingDings_MethodInfo_,
	nullptr,
	nullptr,
	_WingDings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WingDings$Encoder"
};

$Object* allocate$WingDings($Class* clazz) {
	return $of($alloc(WingDings));
}

void WingDings::init$() {
	$Charset::init$("WingDings"_s, nullptr);
}

$CharsetEncoder* WingDings::newEncoder() {
	return $new($WingDings$Encoder, this);
}

$CharsetDecoder* WingDings::newDecoder() {
	$throwNew($Error, "Decoder isn\'t implemented for WingDings Charset"_s);
	$shouldNotReachHere();
}

bool WingDings::contains($Charset* cs) {
	return $instanceOf(WingDings, cs);
}

WingDings::WingDings() {
}

$Class* WingDings::load$($String* name, bool initialize) {
	$loadClass(WingDings, name, initialize, &_WingDings_ClassInfo_, allocate$WingDings);
	return class$;
}

$Class* WingDings::class$ = nullptr;

		} // windows
	} // awt
} // sun