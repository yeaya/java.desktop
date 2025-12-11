#include <sun/font/X11Dingbats$Encoder.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/font/X11Dingbats.h>
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $X11Dingbats = ::sun::font::X11Dingbats;

namespace sun {
	namespace font {

$FieldInfo _X11Dingbats$Encoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(X11Dingbats$Encoder, $assertionsDisabled)},
	{"table", "[B", nullptr, $PRIVATE | $STATIC, $staticField(X11Dingbats$Encoder, table)},
	{}
};

$MethodInfo _X11Dingbats$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(X11Dingbats$Encoder::*)($Charset*)>(&X11Dingbats$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11Dingbats$Encoder_InnerClassesInfo_[] = {
	{"sun.font.X11Dingbats$Encoder", "sun.font.X11Dingbats", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11Dingbats$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.X11Dingbats$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_X11Dingbats$Encoder_FieldInfo_,
	_X11Dingbats$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_X11Dingbats$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.X11Dingbats"
};

$Object* allocate$X11Dingbats$Encoder($Class* clazz) {
	return $of($alloc(X11Dingbats$Encoder));
}

bool X11Dingbats$Encoder::$assertionsDisabled = false;
$bytes* X11Dingbats$Encoder::table = nullptr;

void X11Dingbats$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.0f, 1.0f);
}

bool X11Dingbats$Encoder::canEncode(char16_t ch) {
	if (ch >= 9985 && ch <= 10078) {
		return true;
	}
	if (ch >= 10081 && ch <= 10174) {
		return ($nc(X11Dingbats$Encoder::table)->get(ch - 10081) != 0);
	}
	return false;
}

$CoderResult* X11Dingbats$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	if (!X11Dingbats$Encoder::$assertionsDisabled && !(sp <= sl)) {
		$throwNew($AssertionError);
	}
	sp = (sp <= sl ? sp : sl);
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	if (!X11Dingbats$Encoder::$assertionsDisabled && !(dp <= dl)) {
		$throwNew($AssertionError);
	}
	dp = (dp <= dl ? dp : dl);
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				if (dl - dp < 1) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				if (!canEncode(c)) {
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				}
				++sp;
				if (c >= 10081) {
					$nc(da)->set(dp++, $nc(X11Dingbats$Encoder::table)->get(c - 10081));
				} else {
					$nc(da)->set(dp++, (int8_t)(c + 32 - 9984));
				}
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

bool X11Dingbats$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

void clinit$X11Dingbats$Encoder($Class* class$) {
	$load($X11Dingbats);
	X11Dingbats$Encoder::$assertionsDisabled = !$X11Dingbats::class$->desiredAssertionStatus();
	$assignStatic(X11Dingbats$Encoder::table, $new($bytes, {
		(int8_t)161,
		(int8_t)162,
		(int8_t)163,
		(int8_t)164,
		(int8_t)165,
		(int8_t)166,
		(int8_t)167,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)182,
		(int8_t)183,
		(int8_t)184,
		(int8_t)185,
		(int8_t)186,
		(int8_t)187,
		(int8_t)188,
		(int8_t)189,
		(int8_t)190,
		(int8_t)191,
		(int8_t)192,
		(int8_t)193,
		(int8_t)194,
		(int8_t)195,
		(int8_t)196,
		(int8_t)197,
		(int8_t)198,
		(int8_t)199,
		(int8_t)200,
		(int8_t)201,
		(int8_t)202,
		(int8_t)203,
		(int8_t)204,
		(int8_t)205,
		(int8_t)206,
		(int8_t)207,
		(int8_t)208,
		(int8_t)209,
		(int8_t)210,
		(int8_t)211,
		(int8_t)212,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)216,
		(int8_t)217,
		(int8_t)218,
		(int8_t)219,
		(int8_t)220,
		(int8_t)221,
		(int8_t)222,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
}

X11Dingbats$Encoder::X11Dingbats$Encoder() {
}

$Class* X11Dingbats$Encoder::load$($String* name, bool initialize) {
	$loadClass(X11Dingbats$Encoder, name, initialize, &_X11Dingbats$Encoder_ClassInfo_, clinit$X11Dingbats$Encoder, allocate$X11Dingbats$Encoder);
	return class$;
}

$Class* X11Dingbats$Encoder::class$ = nullptr;

	} // font
} // sun