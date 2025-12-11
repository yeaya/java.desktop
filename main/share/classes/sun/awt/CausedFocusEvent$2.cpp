#include <sun/awt/CausedFocusEvent$2.h>

#include <java/awt/event/FocusEvent.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/Field.h>
#include <sun/awt/CausedFocusEvent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $CausedFocusEvent = ::sun::awt::CausedFocusEvent;

namespace sun {
	namespace awt {

$FieldInfo _CausedFocusEvent$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/CausedFocusEvent;", nullptr, $FINAL | $SYNTHETIC, $field(CausedFocusEvent$2, this$0)},
	{"val$focusEvent", "Ljava/awt/event/FocusEvent;", nullptr, $FINAL | $SYNTHETIC, $field(CausedFocusEvent$2, val$focusEvent)},
	{"val$consumedField", "Ljava/lang/reflect/Field;", nullptr, $FINAL | $SYNTHETIC, $field(CausedFocusEvent$2, val$consumedField)},
	{}
};

$MethodInfo _CausedFocusEvent$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/CausedFocusEvent;Ljava/lang/reflect/Field;Ljava/awt/event/FocusEvent;)V", "()V", 0, $method(static_cast<void(CausedFocusEvent$2::*)($CausedFocusEvent*,$Field*,$FocusEvent*)>(&CausedFocusEvent$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CausedFocusEvent$2_EnclosingMethodInfo_ = {
	"sun.awt.CausedFocusEvent",
	"readResolve",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _CausedFocusEvent$2_InnerClassesInfo_[] = {
	{"sun.awt.CausedFocusEvent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CausedFocusEvent$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.CausedFocusEvent$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CausedFocusEvent$2_FieldInfo_,
	_CausedFocusEvent$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_CausedFocusEvent$2_EnclosingMethodInfo_,
	_CausedFocusEvent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.CausedFocusEvent"
};

$Object* allocate$CausedFocusEvent$2($Class* clazz) {
	return $of($alloc(CausedFocusEvent$2));
}

void CausedFocusEvent$2::init$($CausedFocusEvent* this$0, $Field* val$consumedField, $FocusEvent* val$focusEvent) {
	$set(this, this$0, this$0);
	$set(this, val$consumedField, val$consumedField);
	$set(this, val$focusEvent, val$focusEvent);
}

$Object* CausedFocusEvent$2::run() {
	$beforeCallerSensitive();
	$nc(this->val$consumedField)->setAccessible(true);
	try {
		$nc(this->val$consumedField)->set(this->val$focusEvent, $($Boolean::valueOf($CausedFocusEvent::access$000(this->this$0))));
	} catch ($IllegalAccessException& e) {
	}
	return $of(nullptr);
}

CausedFocusEvent$2::CausedFocusEvent$2() {
}

$Class* CausedFocusEvent$2::load$($String* name, bool initialize) {
	$loadClass(CausedFocusEvent$2, name, initialize, &_CausedFocusEvent$2_ClassInfo_, allocate$CausedFocusEvent$2);
	return class$;
}

$Class* CausedFocusEvent$2::class$ = nullptr;

	} // awt
} // sun