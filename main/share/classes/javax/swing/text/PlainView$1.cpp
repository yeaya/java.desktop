#include <javax/swing/text/PlainView$1.h>

#include <javax/swing/text/PlainView$FPMethodArgs.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PlainView = ::javax::swing::text::PlainView;
using $PlainView$FPMethodArgs = ::javax::swing::text::PlainView$FPMethodArgs;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _PlainView$1_FieldInfo_[] = {
	{"val$methodArgs", "Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $FINAL | $SYNTHETIC, $field(PlainView$1, val$methodArgs)},
	{"val$className", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(PlainView$1, val$className)},
	{"val$methodName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(PlainView$1, val$methodName)},
	{}
};

$MethodInfo _PlainView$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;Ljavax/swing/text/PlainView$FPMethodArgs;)V", "()V", 0, $method(static_cast<void(PlainView$1::*)($String*,$Class*,$PlainView$FPMethodArgs*)>(&PlainView$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PlainView$1_EnclosingMethodInfo_ = {
	"javax.swing.text.PlainView",
	"checkFPMethodOverridden",
	"(Ljava/lang/Class;Ljava/lang/String;Ljavax/swing/text/PlainView$FPMethodArgs;)Z"
};

$InnerClassInfo _PlainView$1_InnerClassesInfo_[] = {
	{"javax.swing.text.PlainView$1", nullptr, nullptr, 0},
	{"javax.swing.text.PlainView$FPMethodArgs", "javax.swing.text.PlainView", "FPMethodArgs", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PlainView$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.PlainView$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PlainView$1_FieldInfo_,
	_PlainView$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_PlainView$1_EnclosingMethodInfo_,
	_PlainView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.PlainView"
};

$Object* allocate$PlainView$1($Class* clazz) {
	return $of($alloc(PlainView$1));
}

void PlainView$1::init$($String* val$methodName, $Class* val$className, $PlainView$FPMethodArgs* val$methodArgs) {
	$set(this, val$methodName, val$methodName);
	$set(this, val$className, val$className);
	$set(this, val$methodArgs, val$methodArgs);
}

$Object* PlainView$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, this->val$methodName);
	$Class* var$1 = this->val$className;
	$var($ClassArray, var$2, this->val$methodArgs->getMethodArguments(false));
	return $of($Boolean::valueOf($PlainView::isFPMethodOverridden(var$0, var$1, var$2, $(this->val$methodArgs->getMethodArguments(true)))));
}

PlainView$1::PlainView$1() {
}

$Class* PlainView$1::load$($String* name, bool initialize) {
	$loadClass(PlainView$1, name, initialize, &_PlainView$1_ClassInfo_, allocate$PlainView$1);
	return class$;
}

$Class* PlainView$1::class$ = nullptr;

		} // text
	} // swing
} // javax