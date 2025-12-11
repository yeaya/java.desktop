#include <sun/font/DoubleByteEncoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/Surrogate.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate = ::sun::nio::cs::Surrogate;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace font {

$FieldInfo _DoubleByteEncoder_FieldInfo_[] = {
	{"index1", "[S", nullptr, $PRIVATE, $field(DoubleByteEncoder, index1)},
	{"index2", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(DoubleByteEncoder, index2)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(DoubleByteEncoder, sgp)},
	{}
};

$MethodInfo _DoubleByteEncoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[S[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(DoubleByteEncoder::*)($Charset*,$shorts*,$StringArray*)>(&DoubleByteEncoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[S[Ljava/lang/String;FF)V", nullptr, $PROTECTED, $method(static_cast<void(DoubleByteEncoder::*)($Charset*,$shorts*,$StringArray*,float,float)>(&DoubleByteEncoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[S[Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(static_cast<void(DoubleByteEncoder::*)($Charset*,$shorts*,$StringArray*,$bytes*)>(&DoubleByteEncoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[S[Ljava/lang/String;[BFF)V", nullptr, $PROTECTED, $method(static_cast<void(DoubleByteEncoder::*)($Charset*,$shorts*,$StringArray*,$bytes*,float,float)>(&DoubleByteEncoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(DoubleByteEncoder::*)($CharBuffer*,$ByteBuffer*)>(&DoubleByteEncoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(DoubleByteEncoder::*)($CharBuffer*,$ByteBuffer*)>(&DoubleByteEncoder::encodeBufferLoop))},
	{"encodeDouble", "(C)I", nullptr, $PROTECTED},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeSingle", "(C)I", nullptr, $PROTECTED},
	{"encodeSurrogate", "(CC)[B", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DoubleByteEncoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.DoubleByteEncoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_DoubleByteEncoder_FieldInfo_,
	_DoubleByteEncoder_MethodInfo_
};

$Object* allocate$DoubleByteEncoder($Class* clazz) {
	return $of($alloc(DoubleByteEncoder));
}

void DoubleByteEncoder::init$($Charset* cs, $shorts* index1, $StringArray* index2) {
	$CharsetEncoder::init$(cs, 2.0f, 2.0f);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, index1, index1);
	$set(this, index2, index2);
}

void DoubleByteEncoder::init$($Charset* cs, $shorts* index1, $StringArray* index2, float avg, float max) {
	$CharsetEncoder::init$(cs, avg, max);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, index1, index1);
	$set(this, index2, index2);
}

void DoubleByteEncoder::init$($Charset* cs, $shorts* index1, $StringArray* index2, $bytes* repl) {
	$CharsetEncoder::init$(cs, 2.0f, 2.0f, repl);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, index1, index1);
	$set(this, index2, index2);
}

void DoubleByteEncoder::init$($Charset* cs, $shorts* index1, $StringArray* index2, $bytes* repl, float avg, float max) {
	$CharsetEncoder::init$(cs, avg, max, repl);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, index1, index1);
	$set(this, index2, index2);
}

bool DoubleByteEncoder::canEncode(char16_t c) {
	bool var$0 = encodeSingle(c) != -1;
	return (var$0 || encodeDouble(c) != 0);
}

$CoderResult* DoubleByteEncoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
				if ($Character::isSurrogate(c)) {
					if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
						$assign(var$6, $nc(this->sgp)->error());
						return$5 = true;
						goto $finally;
					}
					if (sl - sp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					char16_t c2 = sa->get(sp + 1);
					$var($bytes, outputBytes, $new($bytes, 2));
					$assign(outputBytes, encodeSurrogate(c, c2));
					if (outputBytes == nullptr) {
						$assign(var$6, $nc(this->sgp)->unmappableResult());
						return$5 = true;
						goto $finally;
					} else {
						if (dl - dp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, $nc(outputBytes)->get(0));
						da->set(dp++, outputBytes->get(1));
						sp += 2;
						continue;
					}
				}
				if (c >= (char16_t)0xFFFE) {
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				}
				int32_t b = encodeSingle(c);
				if (b != -1) {
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)b);
					++sp;
					continue;
				}
				int32_t ncode = encodeDouble(c);
				if (ncode != 0 && c != u'\0') {
					if (dl - dp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
					da->set(dp++, (int8_t)((int32_t)(ncode & (uint32_t)255)));
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

$CoderResult* DoubleByteEncoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				if ($Character::isSurrogate(c)) {
					int32_t surr = 0;
					if ((surr = $nc(this->sgp)->parse(c, src)) < 0) {
						$assign(var$2, $nc(this->sgp)->error());
						return$1 = true;
						goto $finally;
					}
					char16_t c2 = $Surrogate::low(surr);
					$var($bytes, outputBytes, $new($bytes, 2));
					$assign(outputBytes, encodeSurrogate(c, c2));
					if (outputBytes == nullptr) {
						$assign(var$2, $nc(this->sgp)->unmappableResult());
						return$1 = true;
						goto $finally;
					} else {
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						mark += 2;
						$nc(dst)->put($nc(outputBytes)->get(0));
						dst->put($nc(outputBytes)->get(1));
						continue;
					}
				}
				if (c >= (char16_t)0xFFFE) {
					$assign(var$2, $CoderResult::unmappableForLength(1));
					return$1 = true;
					goto $finally;
				}
				int32_t b = encodeSingle(c);
				if (b != -1) {
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					++mark;
					$nc(dst)->put((int8_t)b);
					continue;
				}
				int32_t ncode = encodeDouble(c);
				if (ncode != 0 && c != u'\0') {
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					++mark;
					$nc(dst)->put((int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
					dst->put((int8_t)ncode);
					continue;
				}
				$assign(var$2, $CoderResult::unmappableForLength(1));
				return$1 = true;
				goto $finally;
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			src->position(mark);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$CoderResult* DoubleByteEncoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

int32_t DoubleByteEncoder::encodeDouble(char16_t ch) {
	int32_t offset = $nc(this->index1)->get(((int32_t)(ch & (uint32_t)0x0000FF00)) >> 8) << 8;
	return $nc($nc(this->index2)->get(offset >> 12))->charAt(((int32_t)(offset & (uint32_t)4095)) + ((int32_t)(ch & (uint32_t)255)));
}

int32_t DoubleByteEncoder::encodeSingle(char16_t inputChar) {
	if (inputChar < 128) {
		return (int8_t)inputChar;
	} else {
		return -1;
	}
}

$bytes* DoubleByteEncoder::encodeSurrogate(char16_t highSurrogate, char16_t lowSurrogate) {
	return nullptr;
}

DoubleByteEncoder::DoubleByteEncoder() {
}

$Class* DoubleByteEncoder::load$($String* name, bool initialize) {
	$loadClass(DoubleByteEncoder, name, initialize, &_DoubleByteEncoder_ClassInfo_, allocate$DoubleByteEncoder);
	return class$;
}

$Class* DoubleByteEncoder::class$ = nullptr;

	} // font
} // sun