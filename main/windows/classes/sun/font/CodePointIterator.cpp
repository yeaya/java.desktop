#include <sun/font/CodePointIterator.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/CharacterIterator.h>
#include <sun/font/CharArrayCodePointIterator.h>
#include <sun/font/CharSequenceCodePointIterator.h>
#include <sun/font/CharacterIteratorCodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CharArrayCodePointIterator = ::sun::font::CharArrayCodePointIterator;
using $CharSequenceCodePointIterator = ::sun::font::CharSequenceCodePointIterator;
using $CharacterIteratorCodePointIterator = ::sun::font::CharacterIteratorCodePointIterator;

namespace sun {
	namespace font {

$FieldInfo _CodePointIterator_FieldInfo_[] = {
	{"DONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CodePointIterator, DONE)},
	{}
};

$MethodInfo _CodePointIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CodePointIterator::*)()>(&CodePointIterator::init$))},
	{"charIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"create", "([C)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointIterator*(*)($chars*)>(&CodePointIterator::create))},
	{"create", "([CII)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointIterator*(*)($chars*,int32_t,int32_t)>(&CodePointIterator::create))},
	{"create", "(Ljava/lang/CharSequence;)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointIterator*(*)($CharSequence*)>(&CodePointIterator::create))},
	{"create", "(Ljava/text/CharacterIterator;)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointIterator*(*)($CharacterIterator*)>(&CodePointIterator::create))},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"prev", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"setToLimit", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setToStart", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.CodePointIterator",
	"java.lang.Object",
	nullptr,
	_CodePointIterator_FieldInfo_,
	_CodePointIterator_MethodInfo_
};

$Object* allocate$CodePointIterator($Class* clazz) {
	return $of($alloc(CodePointIterator));
}

void CodePointIterator::init$() {
}

CodePointIterator* CodePointIterator::create($chars* text) {
	return $new($CharArrayCodePointIterator, text);
}

CodePointIterator* CodePointIterator::create($chars* text, int32_t start, int32_t limit) {
	return $new($CharArrayCodePointIterator, text, start, limit);
}

CodePointIterator* CodePointIterator::create($CharSequence* text) {
	return $new($CharSequenceCodePointIterator, text);
}

CodePointIterator* CodePointIterator::create($CharacterIterator* iter) {
	return $new($CharacterIteratorCodePointIterator, iter);
}

CodePointIterator::CodePointIterator() {
}

$Class* CodePointIterator::load$($String* name, bool initialize) {
	$loadClass(CodePointIterator, name, initialize, &_CodePointIterator_ClassInfo_, allocate$CodePointIterator);
	return class$;
}

$Class* CodePointIterator::class$ = nullptr;

	} // font
} // sun