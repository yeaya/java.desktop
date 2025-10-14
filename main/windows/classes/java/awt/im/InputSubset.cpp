#include <java/awt/im/InputSubset.h>

#include <java/lang/Character$Subset.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FULLWIDTH_DIGITS
#undef FULLWIDTH_LATIN
#undef HALFWIDTH_KATAKANA
#undef HANJA
#undef KANJI
#undef LATIN
#undef LATIN_DIGITS
#undef SIMPLIFIED_HANZI
#undef TRADITIONAL_HANZI

using $Character$Subset = ::java::lang::Character$Subset;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace im {

$FieldInfo _InputSubset_FieldInfo_[] = {
	{"LATIN", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, LATIN)},
	{"LATIN_DIGITS", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, LATIN_DIGITS)},
	{"TRADITIONAL_HANZI", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, TRADITIONAL_HANZI)},
	{"SIMPLIFIED_HANZI", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, SIMPLIFIED_HANZI)},
	{"KANJI", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, KANJI)},
	{"HANJA", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, HANJA)},
	{"HALFWIDTH_KATAKANA", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, HALFWIDTH_KATAKANA)},
	{"FULLWIDTH_LATIN", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, FULLWIDTH_LATIN)},
	{"FULLWIDTH_DIGITS", "Ljava/awt/im/InputSubset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputSubset, FULLWIDTH_DIGITS)},
	{}
};

$MethodInfo _InputSubset_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(InputSubset::*)($String*)>(&InputSubset::init$))},
	{}
};

$InnerClassInfo _InputSubset_InnerClassesInfo_[] = {
	{"java.lang.Character$Subset", "java.lang.Character", "Subset", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _InputSubset_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.im.InputSubset",
	"java.lang.Character$Subset",
	nullptr,
	_InputSubset_FieldInfo_,
	_InputSubset_MethodInfo_,
	nullptr,
	nullptr,
	_InputSubset_InnerClassesInfo_
};

$Object* allocate$InputSubset($Class* clazz) {
	return $of($alloc(InputSubset));
}


InputSubset* InputSubset::LATIN = nullptr;

InputSubset* InputSubset::LATIN_DIGITS = nullptr;

InputSubset* InputSubset::TRADITIONAL_HANZI = nullptr;

InputSubset* InputSubset::SIMPLIFIED_HANZI = nullptr;

InputSubset* InputSubset::KANJI = nullptr;

InputSubset* InputSubset::HANJA = nullptr;

InputSubset* InputSubset::HALFWIDTH_KATAKANA = nullptr;

InputSubset* InputSubset::FULLWIDTH_LATIN = nullptr;

InputSubset* InputSubset::FULLWIDTH_DIGITS = nullptr;

void InputSubset::init$($String* name) {
	$Character$Subset::init$(name);
}

void clinit$InputSubset($Class* class$) {
	$assignStatic(InputSubset::LATIN, $new(InputSubset, "LATIN"_s));
	$assignStatic(InputSubset::LATIN_DIGITS, $new(InputSubset, "LATIN_DIGITS"_s));
	$assignStatic(InputSubset::TRADITIONAL_HANZI, $new(InputSubset, "TRADITIONAL_HANZI"_s));
	$assignStatic(InputSubset::SIMPLIFIED_HANZI, $new(InputSubset, "SIMPLIFIED_HANZI"_s));
	$assignStatic(InputSubset::KANJI, $new(InputSubset, "KANJI"_s));
	$assignStatic(InputSubset::HANJA, $new(InputSubset, "HANJA"_s));
	$assignStatic(InputSubset::HALFWIDTH_KATAKANA, $new(InputSubset, "HALFWIDTH_KATAKANA"_s));
	$assignStatic(InputSubset::FULLWIDTH_LATIN, $new(InputSubset, "FULLWIDTH_LATIN"_s));
	$assignStatic(InputSubset::FULLWIDTH_DIGITS, $new(InputSubset, "FULLWIDTH_DIGITS"_s));
}

InputSubset::InputSubset() {
}

$Class* InputSubset::load$($String* name, bool initialize) {
	$loadClass(InputSubset, name, initialize, &_InputSubset_ClassInfo_, clinit$InputSubset, allocate$InputSubset);
	return class$;
}

$Class* InputSubset::class$ = nullptr;

		} // im
	} // awt
} // java