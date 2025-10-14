#include <javax/swing/RowFilter$ComparisonType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

#undef AFTER
#undef BEFORE
#undef EQUAL
#undef NOT_EQUAL

using $RowFilter$ComparisonTypeArray = $Array<::javax::swing::RowFilter$ComparisonType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$ComparisonType_FieldInfo_[] = {
	{"BEFORE", "Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowFilter$ComparisonType, BEFORE)},
	{"AFTER", "Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowFilter$ComparisonType, AFTER)},
	{"EQUAL", "Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowFilter$ComparisonType, EQUAL)},
	{"NOT_EQUAL", "Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowFilter$ComparisonType, NOT_EQUAL)},
	{"$VALUES", "[Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RowFilter$ComparisonType, $VALUES)},
	{}
};

$MethodInfo _RowFilter$ComparisonType_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RowFilter$ComparisonTypeArray*(*)()>(&RowFilter$ComparisonType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(RowFilter$ComparisonType::*)($String*,int32_t)>(&RowFilter$ComparisonType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RowFilter$ComparisonType*(*)($String*)>(&RowFilter$ComparisonType::valueOf))},
	{"values", "()[Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RowFilter$ComparisonTypeArray*(*)()>(&RowFilter$ComparisonType::values))},
	{}
};

$InnerClassInfo _RowFilter$ComparisonType_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$ComparisonType", "javax.swing.RowFilter", "ComparisonType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RowFilter$ComparisonType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.RowFilter$ComparisonType",
	"java.lang.Enum",
	nullptr,
	_RowFilter$ComparisonType_FieldInfo_,
	_RowFilter$ComparisonType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/RowFilter$ComparisonType;>;",
	nullptr,
	_RowFilter$ComparisonType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$ComparisonType($Class* clazz) {
	return $of($alloc(RowFilter$ComparisonType));
}


RowFilter$ComparisonType* RowFilter$ComparisonType::BEFORE = nullptr;

RowFilter$ComparisonType* RowFilter$ComparisonType::AFTER = nullptr;

RowFilter$ComparisonType* RowFilter$ComparisonType::EQUAL = nullptr;

RowFilter$ComparisonType* RowFilter$ComparisonType::NOT_EQUAL = nullptr;
$RowFilter$ComparisonTypeArray* RowFilter$ComparisonType::$VALUES = nullptr;

$RowFilter$ComparisonTypeArray* RowFilter$ComparisonType::$values() {
	$init(RowFilter$ComparisonType);
	return $new($RowFilter$ComparisonTypeArray, {
		RowFilter$ComparisonType::BEFORE,
		RowFilter$ComparisonType::AFTER,
		RowFilter$ComparisonType::EQUAL,
		RowFilter$ComparisonType::NOT_EQUAL
	});
}

$RowFilter$ComparisonTypeArray* RowFilter$ComparisonType::values() {
	$init(RowFilter$ComparisonType);
	return $cast($RowFilter$ComparisonTypeArray, RowFilter$ComparisonType::$VALUES->clone());
}

RowFilter$ComparisonType* RowFilter$ComparisonType::valueOf($String* name) {
	$init(RowFilter$ComparisonType);
	return $cast(RowFilter$ComparisonType, $Enum::valueOf(RowFilter$ComparisonType::class$, name));
}

void RowFilter$ComparisonType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$RowFilter$ComparisonType($Class* class$) {
	$assignStatic(RowFilter$ComparisonType::BEFORE, $new(RowFilter$ComparisonType, "BEFORE"_s, 0));
	$assignStatic(RowFilter$ComparisonType::AFTER, $new(RowFilter$ComparisonType, "AFTER"_s, 1));
	$assignStatic(RowFilter$ComparisonType::EQUAL, $new(RowFilter$ComparisonType, "EQUAL"_s, 2));
	$assignStatic(RowFilter$ComparisonType::NOT_EQUAL, $new(RowFilter$ComparisonType, "NOT_EQUAL"_s, 3));
	$assignStatic(RowFilter$ComparisonType::$VALUES, RowFilter$ComparisonType::$values());
}

RowFilter$ComparisonType::RowFilter$ComparisonType() {
}

$Class* RowFilter$ComparisonType::load$($String* name, bool initialize) {
	$loadClass(RowFilter$ComparisonType, name, initialize, &_RowFilter$ComparisonType_ClassInfo_, clinit$RowFilter$ComparisonType, allocate$RowFilter$ComparisonType);
	return class$;
}

$Class* RowFilter$ComparisonType::class$ = nullptr;

	} // swing
} // javax