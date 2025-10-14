#include <javax/swing/SwingWorker$StateValue.h>

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
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

#undef DONE
#undef PENDING
#undef STARTED

using $SwingWorker$StateValueArray = $Array<::javax::swing::SwingWorker$StateValue>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingWorker = ::javax::swing::SwingWorker;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$StateValue_FieldInfo_[] = {
	{"PENDING", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingWorker$StateValue, PENDING)},
	{"STARTED", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingWorker$StateValue, STARTED)},
	{"DONE", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingWorker$StateValue, DONE)},
	{"$VALUES", "[Ljavax/swing/SwingWorker$StateValue;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingWorker$StateValue, $VALUES)},
	{}
};

$MethodInfo _SwingWorker$StateValue_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/SwingWorker$StateValue;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SwingWorker$StateValueArray*(*)()>(&SwingWorker$StateValue::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SwingWorker$StateValue::*)($String*,int32_t)>(&SwingWorker$StateValue::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SwingWorker$StateValue*(*)($String*)>(&SwingWorker$StateValue::valueOf))},
	{"values", "()[Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SwingWorker$StateValueArray*(*)()>(&SwingWorker$StateValue::values))},
	{}
};

$InnerClassInfo _SwingWorker$StateValue_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$StateValue", "javax.swing.SwingWorker", "StateValue", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SwingWorker$StateValue_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.SwingWorker$StateValue",
	"java.lang.Enum",
	nullptr,
	_SwingWorker$StateValue_FieldInfo_,
	_SwingWorker$StateValue_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/SwingWorker$StateValue;>;",
	nullptr,
	_SwingWorker$StateValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$StateValue($Class* clazz) {
	return $of($alloc(SwingWorker$StateValue));
}


SwingWorker$StateValue* SwingWorker$StateValue::PENDING = nullptr;

SwingWorker$StateValue* SwingWorker$StateValue::STARTED = nullptr;

SwingWorker$StateValue* SwingWorker$StateValue::DONE = nullptr;
$SwingWorker$StateValueArray* SwingWorker$StateValue::$VALUES = nullptr;

$SwingWorker$StateValueArray* SwingWorker$StateValue::$values() {
	$init(SwingWorker$StateValue);
	return $new($SwingWorker$StateValueArray, {
		SwingWorker$StateValue::PENDING,
		SwingWorker$StateValue::STARTED,
		SwingWorker$StateValue::DONE
	});
}

$SwingWorker$StateValueArray* SwingWorker$StateValue::values() {
	$init(SwingWorker$StateValue);
	return $cast($SwingWorker$StateValueArray, SwingWorker$StateValue::$VALUES->clone());
}

SwingWorker$StateValue* SwingWorker$StateValue::valueOf($String* name) {
	$init(SwingWorker$StateValue);
	return $cast(SwingWorker$StateValue, $Enum::valueOf(SwingWorker$StateValue::class$, name));
}

void SwingWorker$StateValue::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SwingWorker$StateValue($Class* class$) {
	$assignStatic(SwingWorker$StateValue::PENDING, $new(SwingWorker$StateValue, "PENDING"_s, 0));
	$assignStatic(SwingWorker$StateValue::STARTED, $new(SwingWorker$StateValue, "STARTED"_s, 1));
	$assignStatic(SwingWorker$StateValue::DONE, $new(SwingWorker$StateValue, "DONE"_s, 2));
	$assignStatic(SwingWorker$StateValue::$VALUES, SwingWorker$StateValue::$values());
}

SwingWorker$StateValue::SwingWorker$StateValue() {
}

$Class* SwingWorker$StateValue::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$StateValue, name, initialize, &_SwingWorker$StateValue_ClassInfo_, clinit$SwingWorker$StateValue, allocate$SwingWorker$StateValue);
	return class$;
}

$Class* SwingWorker$StateValue::class$ = nullptr;

	} // swing
} // javax