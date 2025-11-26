#include <CloseOnMouseClickPropertyTest$TestType.h>

#include <CloseOnMouseClickPropertyTest.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CHECK_BOX_MENU_ITEM
#undef MENU_ITEM
#undef RADIO_BUTTON_MENU_ITEM

using $CloseOnMouseClickPropertyTest = ::CloseOnMouseClickPropertyTest;
using $CloseOnMouseClickPropertyTest$TestTypeArray = $Array<CloseOnMouseClickPropertyTest$TestType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _CloseOnMouseClickPropertyTest$TestType_FieldInfo_[] = {
	{"MENU_ITEM", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CloseOnMouseClickPropertyTest$TestType, MENU_ITEM)},
	{"CHECK_BOX_MENU_ITEM", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CloseOnMouseClickPropertyTest$TestType, CHECK_BOX_MENU_ITEM)},
	{"RADIO_BUTTON_MENU_ITEM", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CloseOnMouseClickPropertyTest$TestType, RADIO_BUTTON_MENU_ITEM)},
	{"$VALUES", "[LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CloseOnMouseClickPropertyTest$TestType, $VALUES)},
	{}
};

$MethodInfo _CloseOnMouseClickPropertyTest$TestType_MethodInfo_[] = {
	{"$values", "()[LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CloseOnMouseClickPropertyTest$TestTypeArray*(*)()>(&CloseOnMouseClickPropertyTest$TestType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CloseOnMouseClickPropertyTest$TestType::*)($String*,int32_t)>(&CloseOnMouseClickPropertyTest$TestType::init$))},
	{"valueOf", "(Ljava/lang/String;)LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CloseOnMouseClickPropertyTest$TestType*(*)($String*)>(&CloseOnMouseClickPropertyTest$TestType::valueOf))},
	{"values", "()[LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CloseOnMouseClickPropertyTest$TestTypeArray*(*)()>(&CloseOnMouseClickPropertyTest$TestType::values))},
	{}
};

$InnerClassInfo _CloseOnMouseClickPropertyTest$TestType_InnerClassesInfo_[] = {
	{"CloseOnMouseClickPropertyTest$TestType", "CloseOnMouseClickPropertyTest", "TestType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CloseOnMouseClickPropertyTest$TestType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"CloseOnMouseClickPropertyTest$TestType",
	"java.lang.Enum",
	nullptr,
	_CloseOnMouseClickPropertyTest$TestType_FieldInfo_,
	_CloseOnMouseClickPropertyTest$TestType_MethodInfo_,
	"Ljava/lang/Enum<LCloseOnMouseClickPropertyTest$TestType;>;",
	nullptr,
	_CloseOnMouseClickPropertyTest$TestType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseOnMouseClickPropertyTest"
};

$Object* allocate$CloseOnMouseClickPropertyTest$TestType($Class* clazz) {
	return $of($alloc(CloseOnMouseClickPropertyTest$TestType));
}

CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::MENU_ITEM = nullptr;
CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM = nullptr;
CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM = nullptr;
$CloseOnMouseClickPropertyTest$TestTypeArray* CloseOnMouseClickPropertyTest$TestType::$VALUES = nullptr;

$CloseOnMouseClickPropertyTest$TestTypeArray* CloseOnMouseClickPropertyTest$TestType::$values() {
	$init(CloseOnMouseClickPropertyTest$TestType);
	return $new($CloseOnMouseClickPropertyTest$TestTypeArray, {
		CloseOnMouseClickPropertyTest$TestType::MENU_ITEM,
		CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM,
		CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM
	});
}

$CloseOnMouseClickPropertyTest$TestTypeArray* CloseOnMouseClickPropertyTest$TestType::values() {
	$init(CloseOnMouseClickPropertyTest$TestType);
	return $cast($CloseOnMouseClickPropertyTest$TestTypeArray, CloseOnMouseClickPropertyTest$TestType::$VALUES->clone());
}

CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::valueOf($String* name) {
	$init(CloseOnMouseClickPropertyTest$TestType);
	return $cast(CloseOnMouseClickPropertyTest$TestType, $Enum::valueOf(CloseOnMouseClickPropertyTest$TestType::class$, name));
}

void CloseOnMouseClickPropertyTest$TestType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CloseOnMouseClickPropertyTest$TestType($Class* class$) {
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::MENU_ITEM, $new(CloseOnMouseClickPropertyTest$TestType, "MENU_ITEM"_s, 0));
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM, $new(CloseOnMouseClickPropertyTest$TestType, "CHECK_BOX_MENU_ITEM"_s, 1));
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM, $new(CloseOnMouseClickPropertyTest$TestType, "RADIO_BUTTON_MENU_ITEM"_s, 2));
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::$VALUES, CloseOnMouseClickPropertyTest$TestType::$values());
}

CloseOnMouseClickPropertyTest$TestType::CloseOnMouseClickPropertyTest$TestType() {
}

$Class* CloseOnMouseClickPropertyTest$TestType::load$($String* name, bool initialize) {
	$loadClass(CloseOnMouseClickPropertyTest$TestType, name, initialize, &_CloseOnMouseClickPropertyTest$TestType_ClassInfo_, clinit$CloseOnMouseClickPropertyTest$TestType, allocate$CloseOnMouseClickPropertyTest$TestType);
	return class$;
}

$Class* CloseOnMouseClickPropertyTest$TestType::class$ = nullptr;