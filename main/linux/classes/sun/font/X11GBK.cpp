#include <sun/font/X11GBK.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11GBK$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/GBK.h>
#include <jcpp.h>

#undef X11GBK

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11GBK$Encoder = ::sun::font::X11GBK$Encoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $GBK = ::sun::nio::cs::GBK;

namespace sun {
	namespace font {

$MethodInfo _X11GBK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11GBK::*)()>(&X11GBK::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11GBK_InnerClassesInfo_[] = {
	{"sun.font.X11GBK$Encoder", "sun.font.X11GBK", "Encoder", $PRIVATE},
	{}
};

$ClassInfo _X11GBK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11GBK",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_X11GBK_MethodInfo_,
	nullptr,
	nullptr,
	_X11GBK_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11GBK$Encoder"
};

$Object* allocate$X11GBK($Class* clazz) {
	return $of($alloc(X11GBK));
}

void X11GBK::init$() {
	$Charset::init$("X11GBK"_s, nullptr);
}

$CharsetEncoder* X11GBK::newEncoder() {
	return $new($X11GBK$Encoder, this, this);
}

$CharsetDecoder* X11GBK::newDecoder() {
	return $$new($GBK)->newDecoder();
}

bool X11GBK::contains($Charset* cs) {
	return $instanceOf(X11GBK, cs);
}

X11GBK::X11GBK() {
}

$Class* X11GBK::load$($String* name, bool initialize) {
	$loadClass(X11GBK, name, initialize, &_X11GBK_ClassInfo_, allocate$X11GBK);
	return class$;
}

$Class* X11GBK::class$ = nullptr;

	} // font
} // sun