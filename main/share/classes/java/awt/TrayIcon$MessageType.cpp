#include <java/awt/TrayIcon$MessageType.h>

#include <java/awt/TrayIcon.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ERROR
#undef INFO
#undef NONE
#undef WARNING

using $TrayIcon$MessageTypeArray = $Array<::java::awt::TrayIcon$MessageType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _TrayIcon$MessageType_FieldInfo_[] = {
	{"ERROR", "Ljava/awt/TrayIcon$MessageType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TrayIcon$MessageType, ERROR)},
	{"WARNING", "Ljava/awt/TrayIcon$MessageType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TrayIcon$MessageType, WARNING)},
	{"INFO", "Ljava/awt/TrayIcon$MessageType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TrayIcon$MessageType, INFO)},
	{"NONE", "Ljava/awt/TrayIcon$MessageType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TrayIcon$MessageType, NONE)},
	{"$VALUES", "[Ljava/awt/TrayIcon$MessageType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TrayIcon$MessageType, $VALUES)},
	{}
};

$MethodInfo _TrayIcon$MessageType_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/TrayIcon$MessageType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TrayIcon$MessageTypeArray*(*)()>(&TrayIcon$MessageType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TrayIcon$MessageType::*)($String*,int32_t)>(&TrayIcon$MessageType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/TrayIcon$MessageType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TrayIcon$MessageType*(*)($String*)>(&TrayIcon$MessageType::valueOf))},
	{"values", "()[Ljava/awt/TrayIcon$MessageType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TrayIcon$MessageTypeArray*(*)()>(&TrayIcon$MessageType::values))},
	{}
};

$InnerClassInfo _TrayIcon$MessageType_InnerClassesInfo_[] = {
	{"java.awt.TrayIcon$MessageType", "java.awt.TrayIcon", "MessageType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TrayIcon$MessageType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.TrayIcon$MessageType",
	"java.lang.Enum",
	nullptr,
	_TrayIcon$MessageType_FieldInfo_,
	_TrayIcon$MessageType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/TrayIcon$MessageType;>;",
	nullptr,
	_TrayIcon$MessageType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TrayIcon"
};

$Object* allocate$TrayIcon$MessageType($Class* clazz) {
	return $of($alloc(TrayIcon$MessageType));
}

TrayIcon$MessageType* TrayIcon$MessageType::ERROR = nullptr;
TrayIcon$MessageType* TrayIcon$MessageType::WARNING = nullptr;
TrayIcon$MessageType* TrayIcon$MessageType::INFO = nullptr;
TrayIcon$MessageType* TrayIcon$MessageType::NONE = nullptr;
$TrayIcon$MessageTypeArray* TrayIcon$MessageType::$VALUES = nullptr;

$TrayIcon$MessageTypeArray* TrayIcon$MessageType::$values() {
	$init(TrayIcon$MessageType);
	return $new($TrayIcon$MessageTypeArray, {
		TrayIcon$MessageType::ERROR,
		TrayIcon$MessageType::WARNING,
		TrayIcon$MessageType::INFO,
		TrayIcon$MessageType::NONE
	});
}

$TrayIcon$MessageTypeArray* TrayIcon$MessageType::values() {
	$init(TrayIcon$MessageType);
	return $cast($TrayIcon$MessageTypeArray, TrayIcon$MessageType::$VALUES->clone());
}

TrayIcon$MessageType* TrayIcon$MessageType::valueOf($String* name) {
	$init(TrayIcon$MessageType);
	return $cast(TrayIcon$MessageType, $Enum::valueOf(TrayIcon$MessageType::class$, name));
}

void TrayIcon$MessageType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TrayIcon$MessageType($Class* class$) {
	$assignStatic(TrayIcon$MessageType::ERROR, $new(TrayIcon$MessageType, "ERROR"_s, 0));
	$assignStatic(TrayIcon$MessageType::WARNING, $new(TrayIcon$MessageType, "WARNING"_s, 1));
	$assignStatic(TrayIcon$MessageType::INFO, $new(TrayIcon$MessageType, "INFO"_s, 2));
	$assignStatic(TrayIcon$MessageType::NONE, $new(TrayIcon$MessageType, "NONE"_s, 3));
	$assignStatic(TrayIcon$MessageType::$VALUES, TrayIcon$MessageType::$values());
}

TrayIcon$MessageType::TrayIcon$MessageType() {
}

$Class* TrayIcon$MessageType::load$($String* name, bool initialize) {
	$loadClass(TrayIcon$MessageType, name, initialize, &_TrayIcon$MessageType_ClassInfo_, clinit$TrayIcon$MessageType, allocate$TrayIcon$MessageType);
	return class$;
}

$Class* TrayIcon$MessageType::class$ = nullptr;

	} // awt
} // java