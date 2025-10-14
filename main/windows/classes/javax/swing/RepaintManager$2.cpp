#include <javax/swing/RepaintManager$2.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/RepaintManager$2$1.h>
#include <javax/swing/RepaintManager.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RepaintManager$2$1 = ::javax::swing::RepaintManager$2$1;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2, this$0)},
	{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2, val$r)},
	{"val$c", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2, val$c)},
	{}
};

$MethodInfo _RepaintManager$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RepaintManager;Ljava/awt/Component;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(RepaintManager$2::*)($RepaintManager*,$Component*,$Runnable*)>(&RepaintManager$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManager$2_EnclosingMethodInfo_ = {
	"javax.swing.RepaintManager",
	"nativeQueueSurfaceDataRunnable",
	"(Lsun/awt/AppContext;Ljava/awt/Component;Ljava/lang/Runnable;)V"
};

$InnerClassInfo _RepaintManager$2_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$2", nullptr, nullptr, 0},
	{"javax.swing.RepaintManager$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_RepaintManager$2_FieldInfo_,
	_RepaintManager$2_MethodInfo_,
	nullptr,
	&_RepaintManager$2_EnclosingMethodInfo_,
	_RepaintManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$2($Class* clazz) {
	return $of($alloc(RepaintManager$2));
}

void RepaintManager$2::init$($RepaintManager* this$0, $Component* val$c, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
	$set(this, val$r, val$r);
}

void RepaintManager$2::run() {
	$var($AccessControlContext, stack, $AccessController::getContext());
	$var($AccessControlContext, acc, $nc($($AWTAccessor::getComponentAccessor()))->getAccessControlContext(this->val$c));
	$init($RepaintManager);
	$nc($RepaintManager::javaSecurityAccess)->doIntersectionPrivilege($$new($RepaintManager$2$1, this), stack, acc);
}

RepaintManager$2::RepaintManager$2() {
}

$Class* RepaintManager$2::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$2, name, initialize, &_RepaintManager$2_ClassInfo_, allocate$RepaintManager$2);
	return class$;
}

$Class* RepaintManager$2::class$ = nullptr;

	} // swing
} // javax