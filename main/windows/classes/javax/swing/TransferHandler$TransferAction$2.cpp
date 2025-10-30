#include <javax/swing/TransferHandler$TransferAction$2.h>

#include <java/security/AccessControlContext.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/TransferHandler$TransferAction.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $TransferHandler$TransferAction = ::javax::swing::TransferHandler$TransferAction;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$TransferAction$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/TransferHandler$TransferAction;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$2, this$0)},
	{"val$eventAcc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$2, val$eventAcc)},
	{"val$action", "Ljava/security/PrivilegedAction;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$2, val$action)},
	{}
};

$MethodInfo _TransferHandler$TransferAction$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/TransferHandler$TransferAction;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)V", "()V", 0, $method(static_cast<void(TransferHandler$TransferAction$2::*)($TransferHandler$TransferAction*,$PrivilegedAction*,$AccessControlContext*)>(&TransferHandler$TransferAction$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransferHandler$TransferAction$2_EnclosingMethodInfo_ = {
	"javax.swing.TransferHandler$TransferAction",
	"actionPerformed",
	"(Ljava/awt/event/ActionEvent;)V"
};

$InnerClassInfo _TransferHandler$TransferAction$2_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$TransferAction", "javax.swing.TransferHandler", "TransferAction", $STATIC},
	{"javax.swing.TransferHandler$TransferAction$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransferHandler$TransferAction$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$TransferAction$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_TransferHandler$TransferAction$2_FieldInfo_,
	_TransferHandler$TransferAction$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_TransferHandler$TransferAction$2_EnclosingMethodInfo_,
	_TransferHandler$TransferAction$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$TransferAction$2($Class* clazz) {
	return $of($alloc(TransferHandler$TransferAction$2));
}

void TransferHandler$TransferAction$2::init$($TransferHandler$TransferAction* this$0, $PrivilegedAction* val$action, $AccessControlContext* val$eventAcc) {
	$set(this, this$0, this$0);
	$set(this, val$action, val$action);
	$set(this, val$eventAcc, val$eventAcc);
}

$Object* TransferHandler$TransferAction$2::run() {
	$init($TransferHandler$TransferAction);
	$nc($TransferHandler$TransferAction::javaSecurityAccess)->doIntersectionPrivilege(this->val$action, this->val$eventAcc);
	return $of(nullptr);
}

TransferHandler$TransferAction$2::TransferHandler$TransferAction$2() {
}

$Class* TransferHandler$TransferAction$2::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$TransferAction$2, name, initialize, &_TransferHandler$TransferAction$2_ClassInfo_, allocate$TransferHandler$TransferAction$2);
	return class$;
}

$Class* TransferHandler$TransferAction$2::class$ = nullptr;

	} // swing
} // javax