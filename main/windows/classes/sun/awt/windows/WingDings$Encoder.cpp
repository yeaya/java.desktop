#include <sun/awt/windows/WingDings$Encoder.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/awt/windows/WingDings.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $WingDings = ::sun::awt::windows::WingDings;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WingDings$Encoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WingDings$Encoder, $assertionsDisabled)},
	{"table", "[B", nullptr, $PRIVATE | $STATIC, $staticField(WingDings$Encoder, table)},
	{}
};

$MethodInfo _WingDings$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(WingDings$Encoder::*)($Charset*)>(&WingDings$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WingDings$Encoder_InnerClassesInfo_[] = {
	{"sun.awt.windows.WingDings$Encoder", "sun.awt.windows.WingDings", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WingDings$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WingDings$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_WingDings$Encoder_FieldInfo_,
	_WingDings$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_WingDings$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WingDings"
};

$Object* allocate$WingDings$Encoder($Class* clazz) {
	return $of($alloc(WingDings$Encoder));
}

bool WingDings$Encoder::$assertionsDisabled = false;
$bytes* WingDings$Encoder::table = nullptr;

void WingDings$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.0f, 1.0f);
}

bool WingDings$Encoder::canEncode(char16_t c) {
	if (c >= 9985 && c <= 10174) {
		if ($nc(WingDings$Encoder::table)->get(c - 9984) != 0) {
			return true;
		} else {
			return false;
		}
	}
	return false;
}

$CoderResult* WingDings$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	if (!WingDings$Encoder::$assertionsDisabled && !(sp <= sl)) {
		$throwNew($AssertionError);
	}
	sp = (sp <= sl ? sp : sl);
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	if (!WingDings$Encoder::$assertionsDisabled && !(dp <= dl)) {
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
				$nc(da)->set(dp++, $nc(WingDings$Encoder::table)->get(c - 9984));
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$4, $catch());
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

bool WingDings$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

void clinit$WingDings$Encoder($Class* class$) {
	$load($WingDings);
	WingDings$Encoder::$assertionsDisabled = !$WingDings::class$->desiredAssertionStatus();
	$assignStatic(WingDings$Encoder::table, $new($bytes, {
		(int8_t)0,
		(int8_t)35,
		(int8_t)34,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)41,
		(int8_t)62,
		(int8_t)81,
		(int8_t)42,
		(int8_t)0,
		(int8_t)0,
		(int8_t)65,
		(int8_t)63,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)252,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)251,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)86,
		(int8_t)0,
		(int8_t)88,
		(int8_t)89,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)181,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)182,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)173,
		(int8_t)175,
		(int8_t)172,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)124,
		(int8_t)123,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)84,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)166,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)113,
		(int8_t)114,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)117,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)125,
		(int8_t)126,
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
		(int8_t)140,
		(int8_t)141,
		(int8_t)142,
		(int8_t)143,
		(int8_t)144,
		(int8_t)145,
		(int8_t)146,
		(int8_t)147,
		(int8_t)148,
		(int8_t)149,
		(int8_t)129,
		(int8_t)130,
		(int8_t)131,
		(int8_t)132,
		(int8_t)133,
		(int8_t)134,
		(int8_t)135,
		(int8_t)136,
		(int8_t)137,
		(int8_t)138,
		(int8_t)140,
		(int8_t)141,
		(int8_t)142,
		(int8_t)143,
		(int8_t)144,
		(int8_t)145,
		(int8_t)146,
		(int8_t)147,
		(int8_t)148,
		(int8_t)149,
		(int8_t)232,
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
		(int8_t)232,
		(int8_t)216,
		(int8_t)0,
		(int8_t)0,
		(int8_t)196,
		(int8_t)198,
		(int8_t)0,
		(int8_t)0,
		(int8_t)240,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)220,
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

WingDings$Encoder::WingDings$Encoder() {
}

$Class* WingDings$Encoder::load$($String* name, bool initialize) {
	$loadClass(WingDings$Encoder, name, initialize, &_WingDings$Encoder_ClassInfo_, clinit$WingDings$Encoder, allocate$WingDings$Encoder);
	return class$;
}

$Class* WingDings$Encoder::class$ = nullptr;

		} // windows
	} // awt
} // sun