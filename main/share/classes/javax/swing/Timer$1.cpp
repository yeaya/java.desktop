#include <javax/swing/Timer$1.h>

#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

namespace javax {
	namespace swing {

$FieldInfo _Timer$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/Timer;", nullptr, $FINAL | $SYNTHETIC, $field(Timer$1, this$0)},
	{}
};

$MethodInfo _Timer$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Timer;)V", nullptr, 0, $method(static_cast<void(Timer$1::*)($Timer*)>(&Timer$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Timer$1_EnclosingMethodInfo_ = {
	"javax.swing.Timer",
	"post",
	"()V"
};

$InnerClassInfo _Timer$1_InnerClassesInfo_[] = {
	{"javax.swing.Timer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Timer$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Timer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Timer$1_FieldInfo_,
	_Timer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Timer$1_EnclosingMethodInfo_,
	_Timer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Timer"
};

$Object* allocate$Timer$1($Class* clazz) {
	return $of($alloc(Timer$1));
}

void Timer$1::init$($Timer* this$0) {
	$set(this, this$0, this$0);
}

$Object* Timer$1::run() {
	$SwingUtilities::invokeLater(this->this$0->doPostEvent);
	return $of(nullptr);
}

Timer$1::Timer$1() {
}

$Class* Timer$1::load$($String* name, bool initialize) {
	$loadClass(Timer$1, name, initialize, &_Timer$1_ClassInfo_, allocate$Timer$1);
	return class$;
}

$Class* Timer$1::class$ = nullptr;

	} // swing
} // javax