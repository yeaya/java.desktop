#include <java/awt/font/NumericShaper$1.h>

#include <java/awt/font/NumericShaper$Range.h>
#include <java/awt/font/NumericShaper.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $NumericShaper = ::java::awt::font::NumericShaper;
using $NumericShaper$Range = ::java::awt::font::NumericShaper$Range;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _NumericShaper$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/font/NumericShaper;", nullptr, $FINAL | $SYNTHETIC, $field(NumericShaper$1, this$0)},
	{}
};

$MethodInfo _NumericShaper$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/font/NumericShaper;)V", nullptr, 0, $method(static_cast<void(NumericShaper$1::*)($NumericShaper*)>(&NumericShaper$1::init$))},
	{"compare", "(Ljava/awt/font/NumericShaper$Range;Ljava/awt/font/NumericShaper$Range;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _NumericShaper$1_EnclosingMethodInfo_ = {
	"java.awt.font.NumericShaper",
	"<init>",
	"(Ljava/awt/font/NumericShaper$Range;Ljava/util/Set;)V"
};

$InnerClassInfo _NumericShaper$1_InnerClassesInfo_[] = {
	{"java.awt.font.NumericShaper$1", nullptr, nullptr, 0},
	{"java.awt.font.NumericShaper$Range", "java.awt.font.NumericShaper", "Range", $PUBLIC | $STATIC | $ENUM},
	{}
};

$ClassInfo _NumericShaper$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.NumericShaper$1",
	"java.lang.Object",
	"java.util.Comparator",
	_NumericShaper$1_FieldInfo_,
	_NumericShaper$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/awt/font/NumericShaper$Range;>;",
	&_NumericShaper$1_EnclosingMethodInfo_,
	_NumericShaper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.NumericShaper"
};

$Object* allocate$NumericShaper$1($Class* clazz) {
	return $of($alloc(NumericShaper$1));
}

void NumericShaper$1::init$($NumericShaper* this$0) {
	$set(this, this$0, this$0);
}

int32_t NumericShaper$1::compare($NumericShaper$Range* s1, $NumericShaper$Range* s2) {
	return $nc(s1)->base > $nc(s2)->base ? 1 : $nc(s1)->base == $nc(s2)->base ? 0 : -1;
}

int32_t NumericShaper$1::compare(Object$* s1, Object$* s2) {
	return this->compare($cast($NumericShaper$Range, s1), $cast($NumericShaper$Range, s2));
}

NumericShaper$1::NumericShaper$1() {
}

$Class* NumericShaper$1::load$($String* name, bool initialize) {
	$loadClass(NumericShaper$1, name, initialize, &_NumericShaper$1_ClassInfo_, allocate$NumericShaper$1);
	return class$;
}

$Class* NumericShaper$1::class$ = nullptr;

		} // font
	} // awt
} // java