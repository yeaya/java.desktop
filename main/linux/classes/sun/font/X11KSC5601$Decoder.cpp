#include <sun/font/X11KSC5601$Decoder.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/font/X11KSC5601.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/EUC_KR.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $X11KSC5601 = ::sun::font::X11KSC5601;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $EUC_KR = ::sun::nio::cs::EUC_KR;

namespace sun {
	namespace font {

$FieldInfo _X11KSC5601$Decoder_FieldInfo_[] = {
	{"this$0", "Lsun/font/X11KSC5601;", nullptr, $FINAL | $SYNTHETIC, $field(X11KSC5601$Decoder, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(X11KSC5601$Decoder, $assertionsDisabled)},
	{"dec", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE, $field(X11KSC5601$Decoder, dec)},
	{}
};

$MethodInfo _X11KSC5601$Decoder_MethodInfo_[] = {
	{"<init>", "(Lsun/font/X11KSC5601;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(X11KSC5601$Decoder::*)($X11KSC5601*,$Charset*)>(&X11KSC5601$Decoder::init$))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _X11KSC5601$Decoder_InnerClassesInfo_[] = {
	{"sun.font.X11KSC5601$Decoder", "sun.font.X11KSC5601", "Decoder", $PRIVATE},
	{}
};

$ClassInfo _X11KSC5601$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.X11KSC5601$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_X11KSC5601$Decoder_FieldInfo_,
	_X11KSC5601$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_X11KSC5601$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.X11KSC5601"
};

$Object* allocate$X11KSC5601$Decoder($Class* clazz) {
	return $of($alloc(X11KSC5601$Decoder));
}

bool X11KSC5601$Decoder::$assertionsDisabled = false;

void X11KSC5601$Decoder::init$($X11KSC5601* this$0, $Charset* cs) {
	$set(this, this$0, this$0);
	$CharsetDecoder::init$(cs, 0.5f, 1.0f);
	$set(this, dec, $cast($DoubleByte$Decoder, $$new($EUC_KR)->newDecoder()));
}

char16_t X11KSC5601$Decoder::decodeDouble(int32_t b1, int32_t b2) {
	return $nc(this->dec)->decodeDouble(b1, b2);
}

$CoderResult* X11KSC5601$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	if (!X11KSC5601$Decoder::$assertionsDisabled && !(sp <= sl)) {
		$throwNew($AssertionError);
	}
	sp = (sp <= sl ? sp : sl);
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	if (!X11KSC5601$Decoder::$assertionsDisabled && !(dp <= dl)) {
		$throwNew($AssertionError);
	}
	dp = (dp <= dl ? dp : dl);
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				if (sl - sp < 2) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::UNDERFLOW);
					return$5 = true;
					goto $finally;
				}
				int32_t b1 = ((int32_t)($nc(sa)->get(sp) & (uint32_t)255)) | 128;
				int32_t b2 = ((int32_t)(sa->get(sp + 1) & (uint32_t)255)) | 128;
				char16_t c = decodeDouble(b1, b2);
				if (c == (char16_t)0xFFFD) {
					$assign(var$6, $CoderResult::unmappableForLength(2));
					return$5 = true;
					goto $finally;
				}
				if (dl - dp < 1) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				$nc(da)->set(dp++, c);
				sp += 2;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$4, var$7);
		} $finally: {
			src->position(sp - src->arrayOffset());
			dst->position(dp - dst->arrayOffset());
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
		if (return$5) {
			return var$6;
		}
	}
	$shouldNotReachHere();
}

void clinit$X11KSC5601$Decoder($Class* class$) {
	$load($X11KSC5601);
	X11KSC5601$Decoder::$assertionsDisabled = !$X11KSC5601::class$->desiredAssertionStatus();
}

X11KSC5601$Decoder::X11KSC5601$Decoder() {
}

$Class* X11KSC5601$Decoder::load$($String* name, bool initialize) {
	$loadClass(X11KSC5601$Decoder, name, initialize, &_X11KSC5601$Decoder_ClassInfo_, clinit$X11KSC5601$Decoder, allocate$X11KSC5601$Decoder);
	return class$;
}

$Class* X11KSC5601$Decoder::class$ = nullptr;

	} // font
} // sun