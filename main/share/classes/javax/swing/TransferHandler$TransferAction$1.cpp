#include <javax/swing/TransferHandler$TransferAction$1.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/TransferHandler$TransferAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$TransferAction = ::javax::swing::TransferHandler$TransferAction;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$TransferAction$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/TransferHandler$TransferAction;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$1, this$0)},
	{"val$e", "Ljava/awt/event/ActionEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$1, val$e)},
	{}
};

$MethodInfo _TransferHandler$TransferAction$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/TransferHandler$TransferAction;Ljava/awt/event/ActionEvent;)V", "()V", 0, $method(static_cast<void(TransferHandler$TransferAction$1::*)($TransferHandler$TransferAction*,$ActionEvent*)>(&TransferHandler$TransferAction$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransferHandler$TransferAction$1_EnclosingMethodInfo_ = {
	"javax.swing.TransferHandler$TransferAction",
	"actionPerformed",
	"(Ljava/awt/event/ActionEvent;)V"
};

$InnerClassInfo _TransferHandler$TransferAction$1_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$TransferAction", "javax.swing.TransferHandler", "TransferAction", $STATIC},
	{"javax.swing.TransferHandler$TransferAction$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransferHandler$TransferAction$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$TransferAction$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_TransferHandler$TransferAction$1_FieldInfo_,
	_TransferHandler$TransferAction$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_TransferHandler$TransferAction$1_EnclosingMethodInfo_,
	_TransferHandler$TransferAction$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$TransferAction$1($Class* clazz) {
	return $of($alloc(TransferHandler$TransferAction$1));
}

void TransferHandler$TransferAction$1::init$($TransferHandler$TransferAction* this$0, $ActionEvent* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

$Object* TransferHandler$TransferAction$1::run() {
	this->this$0->actionPerformedImpl(this->val$e);
	return $of(nullptr);
}

TransferHandler$TransferAction$1::TransferHandler$TransferAction$1() {
}

$Class* TransferHandler$TransferAction$1::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$TransferAction$1, name, initialize, &_TransferHandler$TransferAction$1_ClassInfo_, allocate$TransferHandler$TransferAction$1);
	return class$;
}

$Class* TransferHandler$TransferAction$1::class$ = nullptr;

	} // swing
} // javax