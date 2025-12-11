#include <javax/swing/event/RowSorterEvent$Type.h>

#include <java/lang/Enum.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <jcpp.h>

#undef SORTED
#undef SORT_ORDER_CHANGED

using $RowSorterEvent$TypeArray = $Array<::javax::swing::event::RowSorterEvent$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _RowSorterEvent$Type_FieldInfo_[] = {
	{"SORT_ORDER_CHANGED", "Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowSorterEvent$Type, SORT_ORDER_CHANGED)},
	{"SORTED", "Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowSorterEvent$Type, SORTED)},
	{"$VALUES", "[Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RowSorterEvent$Type, $VALUES)},
	{}
};

$MethodInfo _RowSorterEvent$Type_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RowSorterEvent$TypeArray*(*)()>(&RowSorterEvent$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(RowSorterEvent$Type::*)($String*,int32_t)>(&RowSorterEvent$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RowSorterEvent$Type*(*)($String*)>(&RowSorterEvent$Type::valueOf))},
	{"values", "()[Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RowSorterEvent$TypeArray*(*)()>(&RowSorterEvent$Type::values))},
	{}
};

$InnerClassInfo _RowSorterEvent$Type_InnerClassesInfo_[] = {
	{"javax.swing.event.RowSorterEvent$Type", "javax.swing.event.RowSorterEvent", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RowSorterEvent$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.event.RowSorterEvent$Type",
	"java.lang.Enum",
	nullptr,
	_RowSorterEvent$Type_FieldInfo_,
	_RowSorterEvent$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/event/RowSorterEvent$Type;>;",
	nullptr,
	_RowSorterEvent$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.event.RowSorterEvent"
};

$Object* allocate$RowSorterEvent$Type($Class* clazz) {
	return $of($alloc(RowSorterEvent$Type));
}

RowSorterEvent$Type* RowSorterEvent$Type::SORT_ORDER_CHANGED = nullptr;
RowSorterEvent$Type* RowSorterEvent$Type::SORTED = nullptr;
$RowSorterEvent$TypeArray* RowSorterEvent$Type::$VALUES = nullptr;

$RowSorterEvent$TypeArray* RowSorterEvent$Type::$values() {
	$init(RowSorterEvent$Type);
	return $new($RowSorterEvent$TypeArray, {
		RowSorterEvent$Type::SORT_ORDER_CHANGED,
		RowSorterEvent$Type::SORTED
	});
}

$RowSorterEvent$TypeArray* RowSorterEvent$Type::values() {
	$init(RowSorterEvent$Type);
	return $cast($RowSorterEvent$TypeArray, RowSorterEvent$Type::$VALUES->clone());
}

RowSorterEvent$Type* RowSorterEvent$Type::valueOf($String* name) {
	$init(RowSorterEvent$Type);
	return $cast(RowSorterEvent$Type, $Enum::valueOf(RowSorterEvent$Type::class$, name));
}

void RowSorterEvent$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$RowSorterEvent$Type($Class* class$) {
	$assignStatic(RowSorterEvent$Type::SORT_ORDER_CHANGED, $new(RowSorterEvent$Type, "SORT_ORDER_CHANGED"_s, 0));
	$assignStatic(RowSorterEvent$Type::SORTED, $new(RowSorterEvent$Type, "SORTED"_s, 1));
	$assignStatic(RowSorterEvent$Type::$VALUES, RowSorterEvent$Type::$values());
}

RowSorterEvent$Type::RowSorterEvent$Type() {
}

$Class* RowSorterEvent$Type::load$($String* name, bool initialize) {
	$loadClass(RowSorterEvent$Type, name, initialize, &_RowSorterEvent$Type_ClassInfo_, clinit$RowSorterEvent$Type, allocate$RowSorterEvent$Type);
	return class$;
}

$Class* RowSorterEvent$Type::class$ = nullptr;

		} // event
	} // swing
} // javax