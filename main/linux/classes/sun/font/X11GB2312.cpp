#include <sun/font/X11GB2312.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11GB2312$Decoder.h>
#include <sun/font/X11GB2312$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11GB2312$Decoder = ::sun::font::X11GB2312$Decoder;
using $X11GB2312$Encoder = ::sun::font::X11GB2312$Encoder;

namespace sun {
	namespace font {

$MethodInfo _X11GB2312_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11GB2312::*)()>(&X11GB2312::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11GB2312_InnerClassesInfo_[] = {
	{"sun.font.X11GB2312$Decoder", "sun.font.X11GB2312", "Decoder", $PRIVATE},
	{"sun.font.X11GB2312$Encoder", "sun.font.X11GB2312", "Encoder", $PRIVATE},
	{}
};

$ClassInfo _X11GB2312_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11GB2312",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_X11GB2312_MethodInfo_,
	nullptr,
	nullptr,
	_X11GB2312_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11GB2312$Decoder,sun.font.X11GB2312$Encoder"
};

$Object* allocate$X11GB2312($Class* clazz) {
	return $of($alloc(X11GB2312));
}

void X11GB2312::init$() {
	$Charset::init$("X11GB2312"_s, nullptr);
}

$CharsetEncoder* X11GB2312::newEncoder() {
	return $new($X11GB2312$Encoder, this, this);
}

$CharsetDecoder* X11GB2312::newDecoder() {
	return $new($X11GB2312$Decoder, this, this);
}

bool X11GB2312::contains($Charset* cs) {
	return $instanceOf(X11GB2312, cs);
}

X11GB2312::X11GB2312() {
}

$Class* X11GB2312::load$($String* name, bool initialize) {
	$loadClass(X11GB2312, name, initialize, &_X11GB2312_ClassInfo_, allocate$X11GB2312);
	return class$;
}

$Class* X11GB2312::class$ = nullptr;

	} // font
} // sun