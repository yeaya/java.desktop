#include <sun/awt/Symbol$Encoder.h>

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
#include <sun/awt/Symbol.h>
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
using $Symbol = ::sun::awt::Symbol;

namespace sun {
	namespace awt {

$FieldInfo _Symbol$Encoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$Encoder, $assertionsDisabled)},
	{"table_math", "[B", nullptr, $PRIVATE | $STATIC, $staticField(Symbol$Encoder, table_math)},
	{"table_greek", "[B", nullptr, $PRIVATE | $STATIC, $staticField(Symbol$Encoder, table_greek)},
	{}
};

$MethodInfo _Symbol$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$Encoder::*)($Charset*)>(&Symbol$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$Encoder_InnerClassesInfo_[] = {
	{"sun.awt.Symbol$Encoder", "sun.awt.Symbol", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Symbol$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Symbol$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_Symbol$Encoder_FieldInfo_,
	_Symbol$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Symbol"
};

$Object* allocate$Symbol$Encoder($Class* clazz) {
	return $of($alloc(Symbol$Encoder));
}

bool Symbol$Encoder::$assertionsDisabled = false;
$bytes* Symbol$Encoder::table_math = nullptr;
$bytes* Symbol$Encoder::table_greek = nullptr;

void Symbol$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.0f, 1.0f);
}

bool Symbol$Encoder::canEncode(char16_t c) {
	if (c >= 8704 && c <= 8943) {
		if ($nc(Symbol$Encoder::table_math)->get(c - 8704) != 0) {
			return true;
		}
	} else if (c >= 913 && c <= 982) {
		if ($nc(Symbol$Encoder::table_greek)->get(c - 913) != 0) {
			return true;
		}
	}
	return false;
}

$CoderResult* Symbol$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	if (!Symbol$Encoder::$assertionsDisabled && !(sp <= sl)) {
		$throwNew($AssertionError);
	}
	sp = (sp <= sl ? sp : sl);
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	if (!Symbol$Encoder::$assertionsDisabled && !(dp <= dl)) {
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
				if (c >= 8704 && c <= 8943) {
					$nc(da)->set(dp++, $nc(Symbol$Encoder::table_math)->get(c - 8704));
				} else if (c >= 913 && c <= 982) {
					$nc(da)->set(dp++, $nc(Symbol$Encoder::table_greek)->get(c - 913));
				}
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

bool Symbol$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

void clinit$Symbol$Encoder($Class* class$) {
	$load($Symbol);
	Symbol$Encoder::$assertionsDisabled = !$Symbol::class$->desiredAssertionStatus();
	$assignStatic(Symbol$Encoder::table_math, $new($bytes, {
		(int8_t)34,
		(int8_t)0,
		(int8_t)100,
		(int8_t)36,
		(int8_t)0,
		(int8_t)198,
		(int8_t)68,
		(int8_t)209,
		(int8_t)206,
		(int8_t)207,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)39,
		(int8_t)0,
		(int8_t)80,
		(int8_t)0,
		(int8_t)229,
		(int8_t)45,
		(int8_t)0,
		(int8_t)0,
		(int8_t)164,
		(int8_t)0,
		(int8_t)42,
		(int8_t)176,
		(int8_t)183,
		(int8_t)214,
		(int8_t)0,
		(int8_t)0,
		(int8_t)181,
		(int8_t)165,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)189,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)217,
		(int8_t)218,
		(int8_t)199,
		(int8_t)200,
		(int8_t)242,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)92,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)126,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)64,
		(int8_t)0,
		(int8_t)0,
		(int8_t)187,
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
		(int8_t)185,
		(int8_t)186,
		(int8_t)0,
		(int8_t)0,
		(int8_t)163,
		(int8_t)179,
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
		(int8_t)204,
		(int8_t)201,
		(int8_t)203,
		(int8_t)0,
		(int8_t)205,
		(int8_t)202,
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
		(int8_t)197,
		(int8_t)0,
		(int8_t)196,
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
		(int8_t)94,
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
		(int8_t)224,
		(int8_t)215,
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
		(int8_t)188
	}));
	$assignStatic(Symbol$Encoder::table_greek, $new($bytes, {
		(int8_t)65,
		(int8_t)66,
		(int8_t)71,
		(int8_t)68,
		(int8_t)69,
		(int8_t)90,
		(int8_t)72,
		(int8_t)81,
		(int8_t)73,
		(int8_t)75,
		(int8_t)76,
		(int8_t)77,
		(int8_t)78,
		(int8_t)88,
		(int8_t)79,
		(int8_t)80,
		(int8_t)82,
		(int8_t)0,
		(int8_t)83,
		(int8_t)84,
		(int8_t)85,
		(int8_t)70,
		(int8_t)67,
		(int8_t)89,
		(int8_t)87,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)97,
		(int8_t)98,
		(int8_t)103,
		(int8_t)100,
		(int8_t)101,
		(int8_t)122,
		(int8_t)104,
		(int8_t)113,
		(int8_t)105,
		(int8_t)107,
		(int8_t)108,
		(int8_t)109,
		(int8_t)110,
		(int8_t)120,
		(int8_t)111,
		(int8_t)112,
		(int8_t)114,
		(int8_t)86,
		(int8_t)115,
		(int8_t)116,
		(int8_t)117,
		(int8_t)102,
		(int8_t)99,
		(int8_t)121,
		(int8_t)119,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)74,
		(int8_t)161,
		(int8_t)0,
		(int8_t)0,
		(int8_t)106,
		(int8_t)118
	}));
}

Symbol$Encoder::Symbol$Encoder() {
}

$Class* Symbol$Encoder::load$($String* name, bool initialize) {
	$loadClass(Symbol$Encoder, name, initialize, &_Symbol$Encoder_ClassInfo_, clinit$Symbol$Encoder, allocate$Symbol$Encoder);
	return class$;
}

$Class* Symbol$Encoder::class$ = nullptr;

	} // awt
} // sun