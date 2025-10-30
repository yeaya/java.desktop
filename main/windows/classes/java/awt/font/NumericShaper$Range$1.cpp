#include <java/awt/font/NumericShaper$Range$1.h>

#include <java/awt/font/NumericShaper$Range.h>
#include <jcpp.h>

using $NumericShaper$Range = ::java::awt::font::NumericShaper$Range;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _NumericShaper$Range$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(NumericShaper$Range$1::*)($String*,int32_t,int32_t,int32_t,int32_t)>(&NumericShaper$Range$1::init$))},
	{"getNumericBase", "()C", nullptr, 0},
	{}
};

$EnclosingMethodInfo _NumericShaper$Range$1_EnclosingMethodInfo_ = {
	"java.awt.font.NumericShaper$Range",
	nullptr,
	nullptr
};

$InnerClassInfo _NumericShaper$Range$1_InnerClassesInfo_[] = {
	{"java.awt.font.NumericShaper$Range", "java.awt.font.NumericShaper", "Range", $PUBLIC | $STATIC | $ENUM},
	{"java.awt.font.NumericShaper$Range$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _NumericShaper$Range$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.awt.font.NumericShaper$Range$1",
	"java.awt.font.NumericShaper$Range",
	nullptr,
	nullptr,
	_NumericShaper$Range$1_MethodInfo_,
	nullptr,
	&_NumericShaper$Range$1_EnclosingMethodInfo_,
	_NumericShaper$Range$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.NumericShaper"
};

$Object* allocate$NumericShaper$Range$1($Class* clazz) {
	return $of($alloc(NumericShaper$Range$1));
}

void NumericShaper$Range$1::init$($String* $enum$name, int32_t $enum$ordinal, int32_t base, int32_t start, int32_t end) {
	$NumericShaper$Range::init$($enum$name, $enum$ordinal, base, start, end);
}

char16_t NumericShaper$Range$1::getNumericBase() {
	return (char16_t)1;
}

NumericShaper$Range$1::NumericShaper$Range$1() {
}

$Class* NumericShaper$Range$1::load$($String* name, bool initialize) {
	$loadClass(NumericShaper$Range$1, name, initialize, &_NumericShaper$Range$1_ClassInfo_, allocate$NumericShaper$Range$1);
	return class$;
}

$Class* NumericShaper$Range$1::class$ = nullptr;

		} // font
	} // awt
} // java