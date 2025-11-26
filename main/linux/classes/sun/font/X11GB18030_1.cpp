#include <sun/font/X11GB18030_1.h>

#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/DoubleByteEncoder.h>
#include <sun/font/X11GB18030_1$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByteEncoder = ::sun::font::DoubleByteEncoder;
using $X11GB18030_1$Encoder = ::sun::font::X11GB18030_1$Encoder;

namespace sun {
	namespace font {

$MethodInfo _X11GB18030_1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11GB18030_1::*)()>(&X11GB18030_1::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11GB18030_1_InnerClassesInfo_[] = {
	{"sun.font.X11GB18030_1$Encoder", "sun.font.X11GB18030_1", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11GB18030_1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11GB18030_1",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_X11GB18030_1_MethodInfo_,
	nullptr,
	nullptr,
	_X11GB18030_1_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11GB18030_1$Encoder"
};

$Object* allocate$X11GB18030_1($Class* clazz) {
	return $of($alloc(X11GB18030_1));
}

void X11GB18030_1::init$() {
	$Charset::init$("X11GB18030_1"_s, nullptr);
}

$CharsetEncoder* X11GB18030_1::newEncoder() {
	return $new($X11GB18030_1$Encoder, this);
}

$CharsetDecoder* X11GB18030_1::newDecoder() {
	$throwNew($Error, "Decoder is not implemented for X11GB18030_1 Charset"_s);
	$shouldNotReachHere();
}

bool X11GB18030_1::contains($Charset* cs) {
	return $instanceOf(X11GB18030_1, cs);
}

X11GB18030_1::X11GB18030_1() {
}

$Class* X11GB18030_1::load$($String* name, bool initialize) {
	$loadClass(X11GB18030_1, name, initialize, &_X11GB18030_1_ClassInfo_, allocate$X11GB18030_1);
	return class$;
}

$Class* X11GB18030_1::class$ = nullptr;

	} // font
} // sun