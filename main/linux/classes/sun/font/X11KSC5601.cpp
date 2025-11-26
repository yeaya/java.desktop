#include <sun/font/X11KSC5601.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11KSC5601$Decoder.h>
#include <sun/font/X11KSC5601$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11KSC5601$Decoder = ::sun::font::X11KSC5601$Decoder;
using $X11KSC5601$Encoder = ::sun::font::X11KSC5601$Encoder;

namespace sun {
	namespace font {

$MethodInfo _X11KSC5601_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11KSC5601::*)()>(&X11KSC5601::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11KSC5601_InnerClassesInfo_[] = {
	{"sun.font.X11KSC5601$Decoder", "sun.font.X11KSC5601", "Decoder", $PRIVATE},
	{"sun.font.X11KSC5601$Encoder", "sun.font.X11KSC5601", "Encoder", $PRIVATE},
	{}
};

$ClassInfo _X11KSC5601_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11KSC5601",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_X11KSC5601_MethodInfo_,
	nullptr,
	nullptr,
	_X11KSC5601_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11KSC5601$Decoder,sun.font.X11KSC5601$Encoder"
};

$Object* allocate$X11KSC5601($Class* clazz) {
	return $of($alloc(X11KSC5601));
}

void X11KSC5601::init$() {
	$Charset::init$("X11KSC5601"_s, nullptr);
}

$CharsetEncoder* X11KSC5601::newEncoder() {
	return $new($X11KSC5601$Encoder, this, this);
}

$CharsetDecoder* X11KSC5601::newDecoder() {
	return $new($X11KSC5601$Decoder, this, this);
}

bool X11KSC5601::contains($Charset* cs) {
	return $instanceOf(X11KSC5601, cs);
}

X11KSC5601::X11KSC5601() {
}

$Class* X11KSC5601::load$($String* name, bool initialize) {
	$loadClass(X11KSC5601, name, initialize, &_X11KSC5601_ClassInfo_, allocate$X11KSC5601);
	return class$;
}

$Class* X11KSC5601::class$ = nullptr;

	} // font
} // sun