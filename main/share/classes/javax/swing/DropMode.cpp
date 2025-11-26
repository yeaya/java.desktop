#include <javax/swing/DropMode.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INSERT
#undef INSERT_COLS
#undef INSERT_ROWS
#undef ON
#undef ON_OR_INSERT
#undef ON_OR_INSERT_COLS
#undef ON_OR_INSERT_ROWS
#undef USE_SELECTION

using $DropModeArray = $Array<::javax::swing::DropMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _DropMode_FieldInfo_[] = {
	{"USE_SELECTION", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, USE_SELECTION)},
	{"ON", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, ON)},
	{"INSERT", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, INSERT)},
	{"INSERT_ROWS", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, INSERT_ROWS)},
	{"INSERT_COLS", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, INSERT_COLS)},
	{"ON_OR_INSERT", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, ON_OR_INSERT)},
	{"ON_OR_INSERT_ROWS", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, ON_OR_INSERT_ROWS)},
	{"ON_OR_INSERT_COLS", "Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DropMode, ON_OR_INSERT_COLS)},
	{"$VALUES", "[Ljavax/swing/DropMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DropMode, $VALUES)},
	{}
};

$MethodInfo _DropMode_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/DropMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DropModeArray*(*)()>(&DropMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DropMode::*)($String*,int32_t)>(&DropMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DropMode*(*)($String*)>(&DropMode::valueOf))},
	{"values", "()[Ljavax/swing/DropMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DropModeArray*(*)()>(&DropMode::values))},
	{}
};

$ClassInfo _DropMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.DropMode",
	"java.lang.Enum",
	nullptr,
	_DropMode_FieldInfo_,
	_DropMode_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/DropMode;>;"
};

$Object* allocate$DropMode($Class* clazz) {
	return $of($alloc(DropMode));
}

DropMode* DropMode::USE_SELECTION = nullptr;
DropMode* DropMode::ON = nullptr;
DropMode* DropMode::INSERT = nullptr;
DropMode* DropMode::INSERT_ROWS = nullptr;
DropMode* DropMode::INSERT_COLS = nullptr;
DropMode* DropMode::ON_OR_INSERT = nullptr;
DropMode* DropMode::ON_OR_INSERT_ROWS = nullptr;
DropMode* DropMode::ON_OR_INSERT_COLS = nullptr;
$DropModeArray* DropMode::$VALUES = nullptr;

$DropModeArray* DropMode::$values() {
	$init(DropMode);
	return $new($DropModeArray, {
		DropMode::USE_SELECTION,
		DropMode::ON,
		DropMode::INSERT,
		DropMode::INSERT_ROWS,
		DropMode::INSERT_COLS,
		DropMode::ON_OR_INSERT,
		DropMode::ON_OR_INSERT_ROWS,
		DropMode::ON_OR_INSERT_COLS
	});
}

$DropModeArray* DropMode::values() {
	$init(DropMode);
	return $cast($DropModeArray, DropMode::$VALUES->clone());
}

DropMode* DropMode::valueOf($String* name) {
	$init(DropMode);
	return $cast(DropMode, $Enum::valueOf(DropMode::class$, name));
}

void DropMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DropMode($Class* class$) {
	$assignStatic(DropMode::USE_SELECTION, $new(DropMode, "USE_SELECTION"_s, 0));
	$assignStatic(DropMode::ON, $new(DropMode, "ON"_s, 1));
	$assignStatic(DropMode::INSERT, $new(DropMode, "INSERT"_s, 2));
	$assignStatic(DropMode::INSERT_ROWS, $new(DropMode, "INSERT_ROWS"_s, 3));
	$assignStatic(DropMode::INSERT_COLS, $new(DropMode, "INSERT_COLS"_s, 4));
	$assignStatic(DropMode::ON_OR_INSERT, $new(DropMode, "ON_OR_INSERT"_s, 5));
	$assignStatic(DropMode::ON_OR_INSERT_ROWS, $new(DropMode, "ON_OR_INSERT_ROWS"_s, 6));
	$assignStatic(DropMode::ON_OR_INSERT_COLS, $new(DropMode, "ON_OR_INSERT_COLS"_s, 7));
	$assignStatic(DropMode::$VALUES, DropMode::$values());
}

DropMode::DropMode() {
}

$Class* DropMode::load$($String* name, bool initialize) {
	$loadClass(DropMode, name, initialize, &_DropMode_ClassInfo_, clinit$DropMode, allocate$DropMode);
	return class$;
}

$Class* DropMode::class$ = nullptr;

	} // swing
} // javax