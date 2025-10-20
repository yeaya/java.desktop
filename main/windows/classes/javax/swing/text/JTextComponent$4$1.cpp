#include <javax/swing/text/JTextComponent$4$1.h>

#include <java/awt/event/InputMethodEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/JTextComponent$4.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JTextComponent$4 = ::javax::swing::text::JTextComponent$4;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$4$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent$4;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$4$1, this$0)},
	{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$4$1, val$type)},
	{}
};

$MethodInfo _JTextComponent$4$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent$4;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(JTextComponent$4$1::*)($JTextComponent$4*,$Class*)>(&JTextComponent$4$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextComponent$4$1_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent$4",
	"create",
	"(Ljava/lang/Class;)Ljava/lang/Boolean;"
};

$InnerClassInfo _JTextComponent$4$1_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$4", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$4$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JTextComponent$4$1_FieldInfo_,
	_JTextComponent$4$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_JTextComponent$4$1_EnclosingMethodInfo_,
	_JTextComponent$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$4$1($Class* clazz) {
	return $of($alloc(JTextComponent$4$1));
}

void JTextComponent$4$1::init$($JTextComponent$4* this$0, $Class* val$type) {
	$set(this, this$0, this$0);
	$set(this, val$type, val$type);
}

$Object* JTextComponent$4$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($InputMethodEvent);
		$nc(this->val$type)->getDeclaredMethod("processInputMethodEvent"_s, $$new($ClassArray, {$InputMethodEvent::class$}));
		$init($Boolean);
		return $of($Boolean::TRUE);
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, exception, $catch());
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	$shouldNotReachHere();
}

JTextComponent$4$1::JTextComponent$4$1() {
}

$Class* JTextComponent$4$1::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$4$1, name, initialize, &_JTextComponent$4$1_ClassInfo_, allocate$JTextComponent$4$1);
	return class$;
}

$Class* JTextComponent$4$1::class$ = nullptr;

		} // text
	} // swing
} // javax