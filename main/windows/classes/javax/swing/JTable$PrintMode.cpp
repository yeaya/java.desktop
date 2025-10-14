#include <javax/swing/JTable$PrintMode.h>

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
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef FIT_WIDTH
#undef NORMAL

using $JTable$PrintModeArray = $Array<::javax::swing::JTable$PrintMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

namespace javax {
	namespace swing {

$FieldInfo _JTable$PrintMode_FieldInfo_[] = {
	{"NORMAL", "Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JTable$PrintMode, NORMAL)},
	{"FIT_WIDTH", "Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JTable$PrintMode, FIT_WIDTH)},
	{"$VALUES", "[Ljavax/swing/JTable$PrintMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JTable$PrintMode, $VALUES)},
	{}
};

$MethodInfo _JTable$PrintMode_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/JTable$PrintMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JTable$PrintModeArray*(*)()>(&JTable$PrintMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JTable$PrintMode::*)($String*,int32_t)>(&JTable$PrintMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JTable$PrintMode*(*)($String*)>(&JTable$PrintMode::valueOf))},
	{"values", "()[Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JTable$PrintModeArray*(*)()>(&JTable$PrintMode::values))},
	{}
};

$InnerClassInfo _JTable$PrintMode_InnerClassesInfo_[] = {
	{"javax.swing.JTable$PrintMode", "javax.swing.JTable", "PrintMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JTable$PrintMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.JTable$PrintMode",
	"java.lang.Enum",
	nullptr,
	_JTable$PrintMode_FieldInfo_,
	_JTable$PrintMode_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/JTable$PrintMode;>;",
	nullptr,
	_JTable$PrintMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$PrintMode($Class* clazz) {
	return $of($alloc(JTable$PrintMode));
}


JTable$PrintMode* JTable$PrintMode::NORMAL = nullptr;

JTable$PrintMode* JTable$PrintMode::FIT_WIDTH = nullptr;
$JTable$PrintModeArray* JTable$PrintMode::$VALUES = nullptr;

$JTable$PrintModeArray* JTable$PrintMode::$values() {
	$init(JTable$PrintMode);
	return $new($JTable$PrintModeArray, {
		JTable$PrintMode::NORMAL,
		JTable$PrintMode::FIT_WIDTH
	});
}

$JTable$PrintModeArray* JTable$PrintMode::values() {
	$init(JTable$PrintMode);
	return $cast($JTable$PrintModeArray, JTable$PrintMode::$VALUES->clone());
}

JTable$PrintMode* JTable$PrintMode::valueOf($String* name) {
	$init(JTable$PrintMode);
	return $cast(JTable$PrintMode, $Enum::valueOf(JTable$PrintMode::class$, name));
}

void JTable$PrintMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JTable$PrintMode($Class* class$) {
	$assignStatic(JTable$PrintMode::NORMAL, $new(JTable$PrintMode, "NORMAL"_s, 0));
	$assignStatic(JTable$PrintMode::FIT_WIDTH, $new(JTable$PrintMode, "FIT_WIDTH"_s, 1));
	$assignStatic(JTable$PrintMode::$VALUES, JTable$PrintMode::$values());
}

JTable$PrintMode::JTable$PrintMode() {
}

$Class* JTable$PrintMode::load$($String* name, bool initialize) {
	$loadClass(JTable$PrintMode, name, initialize, &_JTable$PrintMode_ClassInfo_, clinit$JTable$PrintMode, allocate$JTable$PrintMode);
	return class$;
}

$Class* JTable$PrintMode::class$ = nullptr;

	} // swing
} // javax