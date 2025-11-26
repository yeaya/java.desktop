#include <sun/font/X11Dingbats.h>

#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11Dingbats$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11Dingbats$Encoder = ::sun::font::X11Dingbats$Encoder;

namespace sun {
	namespace font {

$MethodInfo _X11Dingbats_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11Dingbats::*)()>(&X11Dingbats::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11Dingbats_InnerClassesInfo_[] = {
	{"sun.font.X11Dingbats$Encoder", "sun.font.X11Dingbats", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11Dingbats_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.X11Dingbats",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_X11Dingbats_MethodInfo_,
	nullptr,
	nullptr,
	_X11Dingbats_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.X11Dingbats$Encoder"
};

$Object* allocate$X11Dingbats($Class* clazz) {
	return $of($alloc(X11Dingbats));
}

void X11Dingbats::init$() {
	$Charset::init$("X11Dingbats"_s, nullptr);
}

$CharsetEncoder* X11Dingbats::newEncoder() {
	return $new($X11Dingbats$Encoder, this);
}

$CharsetDecoder* X11Dingbats::newDecoder() {
	$throwNew($Error, "Decoder is not supported by X11Dingbats Charset"_s);
	$shouldNotReachHere();
}

bool X11Dingbats::contains($Charset* cs) {
	return $instanceOf(X11Dingbats, cs);
}

X11Dingbats::X11Dingbats() {
}

$Class* X11Dingbats::load$($String* name, bool initialize) {
	$loadClass(X11Dingbats, name, initialize, &_X11Dingbats_ClassInfo_, allocate$X11Dingbats);
	return class$;
}

$Class* X11Dingbats::class$ = nullptr;

	} // font
} // sun