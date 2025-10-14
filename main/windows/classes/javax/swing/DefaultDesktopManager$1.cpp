#include <javax/swing/DefaultDesktopManager$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$FieldInfo _DefaultDesktopManager$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/DefaultDesktopManager;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultDesktopManager$1, this$0)},
	{"val$f", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultDesktopManager$1, val$f)},
	{}
};

$MethodInfo _DefaultDesktopManager$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultDesktopManager;Ljavax/swing/JComponent;)V", "()V", 0, $method(static_cast<void(DefaultDesktopManager$1::*)($DefaultDesktopManager*,$JComponent*)>(&DefaultDesktopManager$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultDesktopManager$1_EnclosingMethodInfo_ = {
	"javax.swing.DefaultDesktopManager",
	"emergencyCleanup",
	"(Ljavax/swing/JComponent;)V"
};

$InnerClassInfo _DefaultDesktopManager$1_InnerClassesInfo_[] = {
	{"javax.swing.DefaultDesktopManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultDesktopManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DefaultDesktopManager$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_DefaultDesktopManager$1_FieldInfo_,
	_DefaultDesktopManager$1_MethodInfo_,
	nullptr,
	&_DefaultDesktopManager$1_EnclosingMethodInfo_,
	_DefaultDesktopManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultDesktopManager"
};

$Object* allocate$DefaultDesktopManager$1($Class* clazz) {
	return $of($alloc(DefaultDesktopManager$1));
}

void DefaultDesktopManager$1::init$($DefaultDesktopManager* this$0, $JComponent* val$f) {
	$set(this, this$0, this$0);
	$set(this, val$f, val$f);
}

void DefaultDesktopManager$1::run() {
	$nc(($cast($JInternalFrame, this->val$f)))->isDragging = false;
	int32_t var$0 = $nc(this->val$f)->getWidth();
	$nc(this->val$f)->paintImmediately(0, 0, var$0, $nc(this->val$f)->getHeight());
	$nc(($cast($JInternalFrame, this->val$f)))->isDragging = true;
}

DefaultDesktopManager$1::DefaultDesktopManager$1() {
}

$Class* DefaultDesktopManager$1::load$($String* name, bool initialize) {
	$loadClass(DefaultDesktopManager$1, name, initialize, &_DefaultDesktopManager$1_ClassInfo_, allocate$DefaultDesktopManager$1);
	return class$;
}

$Class* DefaultDesktopManager$1::class$ = nullptr;

	} // swing
} // javax