#include <sun/font/X11GBK$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11GBK.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/GBK.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $X11GBK = ::sun::font::X11GBK;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $GBK = ::sun::nio::cs::GBK;

namespace sun {
	namespace font {

$FieldInfo _X11GBK$Encoder_FieldInfo_[] = {
	{"this$0", "Lsun/font/X11GBK;", nullptr, $FINAL | $SYNTHETIC, $field(X11GBK$Encoder, this$0)},
	{"enc", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE, $field(X11GBK$Encoder, enc)},
	{}
};

$MethodInfo _X11GBK$Encoder_MethodInfo_[] = {
	{"<init>", "(Lsun/font/X11GBK;Ljava/nio/charset/Charset;)V", nullptr, 0, $method(static_cast<void(X11GBK$Encoder::*)($X11GBK*,$Charset*)>(&X11GBK$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeChar", "(C)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11GBK$Encoder_InnerClassesInfo_[] = {
	{"sun.font.X11GBK$Encoder", "sun.font.X11GBK", "Encoder", $PRIVATE},
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11GBK$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.X11GBK$Encoder",
	"sun.nio.cs.DoubleByte$Encoder",
	nullptr,
	_X11GBK$Encoder_FieldInfo_,
	_X11GBK$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_X11GBK$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.X11GBK"
};

$Object* allocate$X11GBK$Encoder($Class* clazz) {
	return $of($alloc(X11GBK$Encoder));
}

void X11GBK$Encoder::init$($X11GBK* this$0, $Charset* cs) {
	$set(this, this$0, this$0);
	$DoubleByte$Encoder::init$(cs, ($chars*)nullptr, ($chars*)nullptr);
	$set(this, enc, $cast($DoubleByte$Encoder, $$new($GBK)->newEncoder()));
}

bool X11GBK$Encoder::canEncode(char16_t ch) {
	if (ch < 128) {
		return false;
	}
	return $nc(this->enc)->canEncode(ch);
}

int32_t X11GBK$Encoder::encodeChar(char16_t ch) {
	if (ch < 128) {
		return 0x0000FFFD;
	}
	return $nc(this->enc)->encodeChar(ch);
}

X11GBK$Encoder::X11GBK$Encoder() {
}

$Class* X11GBK$Encoder::load$($String* name, bool initialize) {
	$loadClass(X11GBK$Encoder, name, initialize, &_X11GBK$Encoder_ClassInfo_, allocate$X11GBK$Encoder);
	return class$;
}

$Class* X11GBK$Encoder::class$ = nullptr;

	} // font
} // sun