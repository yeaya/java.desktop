#include <java/awt/desktop/QuitStrategy.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLOSE_ALL_WINDOWS
#undef NORMAL_EXIT

using $QuitStrategyArray = $Array<::java::awt::desktop::QuitStrategy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _QuitStrategy_FieldInfo_[] = {
	{"NORMAL_EXIT", "Ljava/awt/desktop/QuitStrategy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(QuitStrategy, NORMAL_EXIT)},
	{"CLOSE_ALL_WINDOWS", "Ljava/awt/desktop/QuitStrategy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(QuitStrategy, CLOSE_ALL_WINDOWS)},
	{"$VALUES", "[Ljava/awt/desktop/QuitStrategy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(QuitStrategy, $VALUES)},
	{}
};

$MethodInfo _QuitStrategy_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/desktop/QuitStrategy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$QuitStrategyArray*(*)()>(&QuitStrategy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(QuitStrategy::*)($String*,int32_t)>(&QuitStrategy::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/desktop/QuitStrategy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<QuitStrategy*(*)($String*)>(&QuitStrategy::valueOf))},
	{"values", "()[Ljava/awt/desktop/QuitStrategy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QuitStrategyArray*(*)()>(&QuitStrategy::values))},
	{}
};

$ClassInfo _QuitStrategy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.desktop.QuitStrategy",
	"java.lang.Enum",
	nullptr,
	_QuitStrategy_FieldInfo_,
	_QuitStrategy_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/desktop/QuitStrategy;>;"
};

$Object* allocate$QuitStrategy($Class* clazz) {
	return $of($alloc(QuitStrategy));
}

QuitStrategy* QuitStrategy::NORMAL_EXIT = nullptr;
QuitStrategy* QuitStrategy::CLOSE_ALL_WINDOWS = nullptr;
$QuitStrategyArray* QuitStrategy::$VALUES = nullptr;

$QuitStrategyArray* QuitStrategy::$values() {
	$init(QuitStrategy);
	return $new($QuitStrategyArray, {
		QuitStrategy::NORMAL_EXIT,
		QuitStrategy::CLOSE_ALL_WINDOWS
	});
}

$QuitStrategyArray* QuitStrategy::values() {
	$init(QuitStrategy);
	return $cast($QuitStrategyArray, QuitStrategy::$VALUES->clone());
}

QuitStrategy* QuitStrategy::valueOf($String* name) {
	$init(QuitStrategy);
	return $cast(QuitStrategy, $Enum::valueOf(QuitStrategy::class$, name));
}

void QuitStrategy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$QuitStrategy($Class* class$) {
	$assignStatic(QuitStrategy::NORMAL_EXIT, $new(QuitStrategy, "NORMAL_EXIT"_s, 0));
	$assignStatic(QuitStrategy::CLOSE_ALL_WINDOWS, $new(QuitStrategy, "CLOSE_ALL_WINDOWS"_s, 1));
	$assignStatic(QuitStrategy::$VALUES, QuitStrategy::$values());
}

QuitStrategy::QuitStrategy() {
}

$Class* QuitStrategy::load$($String* name, bool initialize) {
	$loadClass(QuitStrategy, name, initialize, &_QuitStrategy_ClassInfo_, clinit$QuitStrategy, allocate$QuitStrategy);
	return class$;
}

$Class* QuitStrategy::class$ = nullptr;

		} // desktop
	} // awt
} // java