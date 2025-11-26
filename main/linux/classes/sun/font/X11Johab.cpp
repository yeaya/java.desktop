#include <sun/font/X11Johab.h>

#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/DoubleByteEncoder.h>
#include <sun/font/X11GB18030_1.h>
#include <sun/font/X11Johab$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByteEncoder = ::sun::font::DoubleByteEncoder;
using $X11GB18030_1 = ::sun::font::X11GB18030_1;
using $X11Johab$Encoder = ::sun::font::X11Johab$Encoder;

namespace sun {
	namespace font {

$MethodInfo _X11Johab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11Johab::*)()>(&X11Johab::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11Johab_InnerClassesInfo_[] = {
	{"sun.font.X11Johab$Encoder", "sun.font.X11Johab", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11Johab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11Johab",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_X11Johab_MethodInfo_,
	nullptr,
	nullptr,
	_X11Johab_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11Johab$Encoder"
};

$Object* allocate$X11Johab($Class* clazz) {
	return $of($alloc(X11Johab));
}

void X11Johab::init$() {
	$Charset::init$("X11Johab"_s, nullptr);
}

$CharsetEncoder* X11Johab::newEncoder() {
	return $new($X11Johab$Encoder, this);
}

$CharsetDecoder* X11Johab::newDecoder() {
	$throwNew($Error, "Decoder is not supported by X11Johab Charset"_s);
	$shouldNotReachHere();
}

bool X11Johab::contains($Charset* cs) {
	return $instanceOf($X11GB18030_1, cs);
}

X11Johab::X11Johab() {
}

$Class* X11Johab::load$($String* name, bool initialize) {
	$loadClass(X11Johab, name, initialize, &_X11Johab_ClassInfo_, allocate$X11Johab);
	return class$;
}

$Class* X11Johab::class$ = nullptr;

	} // font
} // sun