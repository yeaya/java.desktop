#include <javax/swing/SortOrder.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef UNSORTED

using $SortOrderArray = $Array<::javax::swing::SortOrder>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _SortOrder_FieldInfo_[] = {
	{"ASCENDING", "Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SortOrder, ASCENDING)},
	{"DESCENDING", "Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SortOrder, DESCENDING)},
	{"UNSORTED", "Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SortOrder, UNSORTED)},
	{"$VALUES", "[Ljavax/swing/SortOrder;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SortOrder, $VALUES)},
	{}
};

$MethodInfo _SortOrder_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/SortOrder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SortOrderArray*(*)()>(&SortOrder::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SortOrder::*)($String*,int32_t)>(&SortOrder::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SortOrder*(*)($String*)>(&SortOrder::valueOf))},
	{"values", "()[Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SortOrderArray*(*)()>(&SortOrder::values))},
	{}
};

$ClassInfo _SortOrder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.SortOrder",
	"java.lang.Enum",
	nullptr,
	_SortOrder_FieldInfo_,
	_SortOrder_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/SortOrder;>;"
};

$Object* allocate$SortOrder($Class* clazz) {
	return $of($alloc(SortOrder));
}

SortOrder* SortOrder::ASCENDING = nullptr;
SortOrder* SortOrder::DESCENDING = nullptr;
SortOrder* SortOrder::UNSORTED = nullptr;
$SortOrderArray* SortOrder::$VALUES = nullptr;

$SortOrderArray* SortOrder::$values() {
	$init(SortOrder);
	return $new($SortOrderArray, {
		SortOrder::ASCENDING,
		SortOrder::DESCENDING,
		SortOrder::UNSORTED
	});
}

$SortOrderArray* SortOrder::values() {
	$init(SortOrder);
	return $cast($SortOrderArray, SortOrder::$VALUES->clone());
}

SortOrder* SortOrder::valueOf($String* name) {
	$init(SortOrder);
	return $cast(SortOrder, $Enum::valueOf(SortOrder::class$, name));
}

void SortOrder::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SortOrder($Class* class$) {
	$assignStatic(SortOrder::ASCENDING, $new(SortOrder, "ASCENDING"_s, 0));
	$assignStatic(SortOrder::DESCENDING, $new(SortOrder, "DESCENDING"_s, 1));
	$assignStatic(SortOrder::UNSORTED, $new(SortOrder, "UNSORTED"_s, 2));
	$assignStatic(SortOrder::$VALUES, SortOrder::$values());
}

SortOrder::SortOrder() {
}

$Class* SortOrder::load$($String* name, bool initialize) {
	$loadClass(SortOrder, name, initialize, &_SortOrder_ClassInfo_, clinit$SortOrder, allocate$SortOrder);
	return class$;
}

$Class* SortOrder::class$ = nullptr;

	} // swing
} // javax