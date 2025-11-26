#include <java/awt/Window$Type.h>

#include <java/awt/Window.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NORMAL
#undef POPUP
#undef UTILITY

using $Window$TypeArray = $Array<::java::awt::Window$Type>;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Window$Type_FieldInfo_[] = {
	{"NORMAL", "Ljava/awt/Window$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Window$Type, NORMAL)},
	{"UTILITY", "Ljava/awt/Window$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Window$Type, UTILITY)},
	{"POPUP", "Ljava/awt/Window$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Window$Type, POPUP)},
	{"$VALUES", "[Ljava/awt/Window$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Window$Type, $VALUES)},
	{}
};

$MethodInfo _Window$Type_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/Window$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Window$TypeArray*(*)()>(&Window$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Window$Type::*)($String*,int32_t)>(&Window$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/Window$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Window$Type*(*)($String*)>(&Window$Type::valueOf))},
	{"values", "()[Ljava/awt/Window$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Window$TypeArray*(*)()>(&Window$Type::values))},
	{}
};

$InnerClassInfo _Window$Type_InnerClassesInfo_[] = {
	{"java.awt.Window$Type", "java.awt.Window", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Window$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.Window$Type",
	"java.lang.Enum",
	nullptr,
	_Window$Type_FieldInfo_,
	_Window$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/Window$Type;>;",
	nullptr,
	_Window$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Window"
};

$Object* allocate$Window$Type($Class* clazz) {
	return $of($alloc(Window$Type));
}

Window$Type* Window$Type::NORMAL = nullptr;
Window$Type* Window$Type::UTILITY = nullptr;
Window$Type* Window$Type::POPUP = nullptr;
$Window$TypeArray* Window$Type::$VALUES = nullptr;

$Window$TypeArray* Window$Type::$values() {
	$init(Window$Type);
	return $new($Window$TypeArray, {
		Window$Type::NORMAL,
		Window$Type::UTILITY,
		Window$Type::POPUP
	});
}

$Window$TypeArray* Window$Type::values() {
	$init(Window$Type);
	return $cast($Window$TypeArray, Window$Type::$VALUES->clone());
}

Window$Type* Window$Type::valueOf($String* name) {
	$init(Window$Type);
	return $cast(Window$Type, $Enum::valueOf(Window$Type::class$, name));
}

void Window$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Window$Type($Class* class$) {
	$assignStatic(Window$Type::NORMAL, $new(Window$Type, "NORMAL"_s, 0));
	$assignStatic(Window$Type::UTILITY, $new(Window$Type, "UTILITY"_s, 1));
	$assignStatic(Window$Type::POPUP, $new(Window$Type, "POPUP"_s, 2));
	$assignStatic(Window$Type::$VALUES, Window$Type::$values());
}

Window$Type::Window$Type() {
}

$Class* Window$Type::load$($String* name, bool initialize) {
	$loadClass(Window$Type, name, initialize, &_Window$Type_ClassInfo_, clinit$Window$Type, allocate$Window$Type);
	return class$;
}

$Class* Window$Type::class$ = nullptr;

	} // awt
} // java