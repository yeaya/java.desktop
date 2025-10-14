#include <sun/font/ScriptRun.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Script.h>
#include <sun/font/ScriptRunData.h>
#include <jcpp.h>

#undef COMMON
#undef DONE
#undef INHERITED
#undef INVALID_CODE
#undef LEAD_LIMIT
#undef LEAD_START
#undef LEAD_SURROGATE_SHIFT
#undef SURROGATE_OFFSET
#undef SURROGATE_START
#undef TAIL_LIMIT
#undef TAIL_START

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Script = ::sun::font::Script;
using $ScriptRunData = ::sun::font::ScriptRunData;

namespace sun {
	namespace font {

$FieldInfo _ScriptRun_FieldInfo_[] = {
	{"text", "[C", nullptr, $PRIVATE, $field(ScriptRun, text)},
	{"textStart", "I", nullptr, $PRIVATE, $field(ScriptRun, textStart)},
	{"textLimit", "I", nullptr, $PRIVATE, $field(ScriptRun, textLimit)},
	{"scriptStart", "I", nullptr, $PRIVATE, $field(ScriptRun, scriptStart)},
	{"scriptLimit", "I", nullptr, $PRIVATE, $field(ScriptRun, scriptLimit)},
	{"scriptCode", "I", nullptr, $PRIVATE, $field(ScriptRun, scriptCode)},
	{"stack", "[I", nullptr, $PRIVATE, $field(ScriptRun, stack)},
	{"parenSP", "I", nullptr, $PRIVATE, $field(ScriptRun, parenSP)},
	{"SURROGATE_START", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, SURROGATE_START)},
	{"LEAD_START", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, LEAD_START)},
	{"LEAD_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, LEAD_LIMIT)},
	{"TAIL_START", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, TAIL_START)},
	{"TAIL_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, TAIL_LIMIT)},
	{"LEAD_SURROGATE_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, LEAD_SURROGATE_SHIFT)},
	{"SURROGATE_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, SURROGATE_OFFSET)},
	{"DONE", "I", nullptr, $STATIC | $FINAL, $constField(ScriptRun, DONE)},
	{"pairedChars", "[I", nullptr, $PRIVATE | $STATIC, $staticField(ScriptRun, pairedChars)},
	{"pairedCharPower", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScriptRun, pairedCharPower)},
	{"pairedCharExtra", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScriptRun, pairedCharExtra)},
	{}
};

$MethodInfo _ScriptRun_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptRun::*)()>(&ScriptRun::init$))},
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptRun::*)($chars*,int32_t,int32_t)>(&ScriptRun::init$))},
	{"getPairIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ScriptRun::getPairIndex))},
	{"getScriptCode", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ScriptRun::*)()>(&ScriptRun::getScriptCode))},
	{"getScriptLimit", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ScriptRun::*)()>(&ScriptRun::getScriptLimit))},
	{"getScriptStart", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ScriptRun::*)()>(&ScriptRun::getScriptStart))},
	{"highBit", "(I)B", nullptr, $PRIVATE | $STATIC, $method(static_cast<int8_t(*)(int32_t)>(&ScriptRun::highBit))},
	{"init", "([CII)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptRun::*)($chars*,int32_t,int32_t)>(&ScriptRun::init))},
	{"next", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ScriptRun::*)()>(&ScriptRun::next))},
	{"nextCodePoint", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScriptRun::*)()>(&ScriptRun::nextCodePoint))},
	{"pushback", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ScriptRun::*)(int32_t)>(&ScriptRun::pushback))},
	{"sameScript", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&ScriptRun::sameScript))},
	{}
};

$ClassInfo _ScriptRun_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.ScriptRun",
	"java.lang.Object",
	nullptr,
	_ScriptRun_FieldInfo_,
	_ScriptRun_MethodInfo_
};

$Object* allocate$ScriptRun($Class* clazz) {
	return $of($alloc(ScriptRun));
}

$ints* ScriptRun::pairedChars = nullptr;
int32_t ScriptRun::pairedCharPower = 0;
int32_t ScriptRun::pairedCharExtra = 0;

void ScriptRun::init$() {
}

void ScriptRun::init$($chars* chars, int32_t start, int32_t count) {
	init(chars, start, count);
}

void ScriptRun::init($chars* chars, int32_t start, int32_t count) {
	if (chars == nullptr || start < 0 || count < 0 || count > $nc(chars)->length - start) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, text, chars);
	this->textStart = start;
	this->textLimit = start + count;
	this->scriptStart = this->textStart;
	this->scriptLimit = this->textStart;
	this->scriptCode = $Script::INVALID_CODE;
	this->parenSP = 0;
}

int32_t ScriptRun::getScriptStart() {
	return this->scriptStart;
}

int32_t ScriptRun::getScriptLimit() {
	return this->scriptLimit;
}

int32_t ScriptRun::getScriptCode() {
	return this->scriptCode;
}

bool ScriptRun::next() {
	int32_t startSP = this->parenSP;
	if (this->scriptLimit >= this->textLimit) {
		return false;
	}
	this->scriptCode = $Script::COMMON;
	this->scriptStart = this->scriptLimit;
	int32_t ch = 0;
	while ((ch = nextCodePoint()) != ScriptRun::DONE) {
		int32_t sc = $ScriptRunData::getScript(ch);
		int32_t pairIndex = sc == $Script::COMMON ? getPairIndex(ch) : -1;
		if (pairIndex >= 0) {
			if (((int32_t)(pairIndex & (uint32_t)1)) == 0) {
				if (this->stack == nullptr) {
					$set(this, stack, $new($ints, 32));
				} else if (this->parenSP == $nc(this->stack)->length) {
					$var($ints, newstack, $new($ints, $nc(this->stack)->length + 32));
					$System::arraycopy(this->stack, 0, newstack, 0, $nc(this->stack)->length);
					$set(this, stack, newstack);
				}
				$nc(this->stack)->set(this->parenSP++, pairIndex);
				$nc(this->stack)->set(this->parenSP++, this->scriptCode);
			} else if (this->parenSP > 0) {
				int32_t pi = (int32_t)(pairIndex & (uint32_t)~1);
				while (true) {
					bool var$0 = (this->parenSP -= 2) >= 0;
					if (!(var$0 && $nc(this->stack)->get(this->parenSP) != pi)) {
						break;
					}
					{
					}
				}
				if (this->parenSP >= 0) {
					sc = $nc(this->stack)->get(this->parenSP + 1);
				} else {
					this->parenSP = 0;
				}
				if (this->parenSP < startSP) {
					startSP = this->parenSP;
				}
			}
		}
		if (sameScript(this->scriptCode, sc)) {
			if (this->scriptCode <= $Script::INHERITED && sc > $Script::INHERITED) {
				this->scriptCode = sc;
				while (startSP < this->parenSP) {
					$nc(this->stack)->set(startSP + 1, this->scriptCode);
					startSP += 2;
				}
			}
			if (pairIndex > 0 && ((int32_t)(pairIndex & (uint32_t)1)) != 0 && this->parenSP > 0) {
				this->parenSP -= 2;
			}
		} else {
			pushback(ch);
			break;
		}
	}
	return true;
}

int32_t ScriptRun::nextCodePoint() {
	if (this->scriptLimit >= this->textLimit) {
		return ScriptRun::DONE;
	}
	int32_t ch = $nc(this->text)->get(this->scriptLimit++);
	if (ch >= ScriptRun::LEAD_START && ch < ScriptRun::LEAD_LIMIT && this->scriptLimit < this->textLimit) {
		int32_t nch = $nc(this->text)->get(this->scriptLimit);
		if (nch >= ScriptRun::TAIL_START && nch < ScriptRun::TAIL_LIMIT) {
			++this->scriptLimit;
			ch = ($sl(ch, ScriptRun::LEAD_SURROGATE_SHIFT)) + nch + ScriptRun::SURROGATE_OFFSET;
		}
	}
	return ch;
}

void ScriptRun::pushback(int32_t ch) {
	if (ch >= 0) {
		if (ch >= 0x00010000) {
			this->scriptLimit -= 2;
		} else {
			this->scriptLimit -= 1;
		}
	}
}

bool ScriptRun::sameScript(int32_t scriptOne, int32_t scriptTwo) {
	$init(ScriptRun);
	return scriptOne == scriptTwo || scriptOne <= $Script::INHERITED || scriptTwo <= $Script::INHERITED;
}

int8_t ScriptRun::highBit(int32_t n) {
	$init(ScriptRun);
	if (n <= 0) {
		return (int8_t)-32;
	}
	int8_t bit = (int8_t)0;
	if (n >= 1 << 16) {
		n >>= 16;
		bit += 16;
	}
	if (n >= 1 << 8) {
		n >>= 8;
		bit += 8;
	}
	if (n >= 1 << 4) {
		n >>= 4;
		bit += 4;
	}
	if (n >= 1 << 2) {
		n >>= 2;
		bit += 2;
	}
	if (n >= 1 << 1) {
		n >>= 1;
		bit += 1;
	}
	return bit;
}

int32_t ScriptRun::getPairIndex(int32_t ch) {
	$init(ScriptRun);
	int32_t probe = ScriptRun::pairedCharPower;
	int32_t index = 0;
	if (ch >= $nc(ScriptRun::pairedChars)->get(ScriptRun::pairedCharExtra)) {
		index = ScriptRun::pairedCharExtra;
	}
	while (probe > (1 << 0)) {
		probe >>= 1;
		if (ch >= $nc(ScriptRun::pairedChars)->get(index + probe)) {
			index += probe;
		}
	}
	if ($nc(ScriptRun::pairedChars)->get(index) != ch) {
		index = -1;
	}
	return index;
}

void clinit$ScriptRun($Class* class$) {
	$assignStatic(ScriptRun::pairedChars, $new($ints, {
		40,
		41,
		60,
		62,
		91,
		93,
		123,
		125,
		171,
		187,
		8216,
		8217,
		8220,
		8221,
		8249,
		8250,
		12296,
		12297,
		12298,
		12299,
		12300,
		12301,
		12302,
		12303,
		12304,
		12305,
		12308,
		12309,
		12310,
		12311,
		12312,
		12313,
		12314,
		12315
	}));
	ScriptRun::pairedCharPower = $sl(1, ScriptRun::highBit($nc(ScriptRun::pairedChars)->length));
	ScriptRun::pairedCharExtra = $nc(ScriptRun::pairedChars)->length - ScriptRun::pairedCharPower;
}

ScriptRun::ScriptRun() {
}

$Class* ScriptRun::load$($String* name, bool initialize) {
	$loadClass(ScriptRun, name, initialize, &_ScriptRun_ClassInfo_, clinit$ScriptRun, allocate$ScriptRun);
	return class$;
}

$Class* ScriptRun::class$ = nullptr;

	} // font
} // sun