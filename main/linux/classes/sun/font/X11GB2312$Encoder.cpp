#include <sun/font/X11GB2312$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/font/X11GB2312.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/EUC_CN.h>
#include <jcpp.h>

#undef UNDERFLOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $X11GB2312 = ::sun::font::X11GB2312;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $EUC_CN = ::sun::nio::cs::EUC_CN;

namespace sun {
	namespace font {

$FieldInfo _X11GB2312$Encoder_FieldInfo_[] = {
	{"this$0", "Lsun/font/X11GB2312;", nullptr, $FINAL | $SYNTHETIC, $field(X11GB2312$Encoder, this$0)},
	{"enc", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE, $field(X11GB2312$Encoder, enc)},
	{}
};

$MethodInfo _X11GB2312$Encoder_MethodInfo_[] = {
	{"<init>", "(Lsun/font/X11GB2312;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(X11GB2312$Encoder::*)($X11GB2312*,$Charset*)>(&X11GB2312$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeDouble", "(C)I", nullptr, $PROTECTED},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11GB2312$Encoder_InnerClassesInfo_[] = {
	{"sun.font.X11GB2312$Encoder", "sun.font.X11GB2312", "Encoder", $PRIVATE},
	{}
};

$ClassInfo _X11GB2312$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.X11GB2312$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_X11GB2312$Encoder_FieldInfo_,
	_X11GB2312$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_X11GB2312$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.X11GB2312"
};

$Object* allocate$X11GB2312$Encoder($Class* clazz) {
	return $of($alloc(X11GB2312$Encoder));
}

void X11GB2312$Encoder::init$($X11GB2312* this$0, $Charset* cs) {
	$set(this, this$0, this$0);
	$CharsetEncoder::init$(cs, 2.0f, 2.0f);
	$set(this, enc, $cast($DoubleByte$Encoder, $$new($EUC_CN)->newEncoder()));
}

bool X11GB2312$Encoder::canEncode(char16_t c) {
	if (c <= 127) {
		return false;
	}
	return $nc(this->enc)->canEncode(c);
}

int32_t X11GB2312$Encoder::encodeDouble(char16_t c) {
	return $nc(this->enc)->encodeChar(c);
}

$CoderResult* X11GB2312$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				if (c <= (char16_t)0x7F) {
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				}
				int32_t ncode = encodeDouble(c);
				if (ncode != 0 && c != u'\0') {
					$nc(da)->set(dp++, (int8_t)((int32_t)((ncode >> 8) & (uint32_t)127)));
					da->set(dp++, (int8_t)((int32_t)(ncode & (uint32_t)127)));
					++sp;
					continue;
				}
				$assign(var$6, $CoderResult::unmappableForLength(1));
				return$5 = true;
				goto $finally;
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

bool X11GB2312$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

X11GB2312$Encoder::X11GB2312$Encoder() {
}

$Class* X11GB2312$Encoder::load$($String* name, bool initialize) {
	$loadClass(X11GB2312$Encoder, name, initialize, &_X11GB2312$Encoder_ClassInfo_, allocate$X11GB2312$Encoder);
	return class$;
}

$Class* X11GB2312$Encoder::class$ = nullptr;

	} // font
} // sun