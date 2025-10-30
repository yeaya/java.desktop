#include <javax/swing/RowFilter$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/RowFilter$ComparisonType.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

#undef AFTER
#undef BEFORE
#undef EQUAL
#undef NOT_EQUAL

using $RowFilter$ComparisonTypeArray = $Array<::javax::swing::RowFilter$ComparisonType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$ComparisonType = ::javax::swing::RowFilter$ComparisonType;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$RowFilter$ComparisonType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RowFilter$1, $SwitchMap$javax$swing$RowFilter$ComparisonType)},
	{}
};

$EnclosingMethodInfo _RowFilter$1_EnclosingMethodInfo_ = {
	"javax.swing.RowFilter",
	nullptr,
	nullptr
};

$InnerClassInfo _RowFilter$1_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _RowFilter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.RowFilter$1",
	"java.lang.Object",
	nullptr,
	_RowFilter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_RowFilter$1_EnclosingMethodInfo_,
	_RowFilter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$1($Class* clazz) {
	return $of($alloc(RowFilter$1));
}

$ints* RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType = nullptr;

void clinit$RowFilter$1($Class* class$) {
	$assignStatic(RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType, $new($ints, $($RowFilter$ComparisonType::values())->length));
	{
		try {
			$nc(RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType)->set($RowFilter$ComparisonType::BEFORE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType)->set($RowFilter$ComparisonType::AFTER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType)->set($RowFilter$ComparisonType::EQUAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType)->set($RowFilter$ComparisonType::NOT_EQUAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

RowFilter$1::RowFilter$1() {
}

$Class* RowFilter$1::load$($String* name, bool initialize) {
	$loadClass(RowFilter$1, name, initialize, &_RowFilter$1_ClassInfo_, clinit$RowFilter$1, allocate$RowFilter$1);
	return class$;
}

$Class* RowFilter$1::class$ = nullptr;

	} // swing
} // javax