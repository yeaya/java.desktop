#include <javax/swing/JTree$TreeTimer.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/JTree.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $Timer = ::javax::swing::Timer;

namespace javax {
	namespace swing {

$FieldInfo _JTree$TreeTimer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTree;", nullptr, $FINAL | $SYNTHETIC, $field(JTree$TreeTimer, this$0)},
	{}
};

$MethodInfo _JTree$TreeTimer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree$TreeTimer::*)($JTree*)>(&JTree$TreeTimer::init$))},
	{"fireActionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTree$TreeTimer_InnerClassesInfo_[] = {
	{"javax.swing.JTree$TreeTimer", "javax.swing.JTree", "TreeTimer", $PRIVATE},
	{}
};

$ClassInfo _JTree$TreeTimer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTree$TreeTimer",
	"javax.swing.Timer",
	nullptr,
	_JTree$TreeTimer_FieldInfo_,
	_JTree$TreeTimer_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$TreeTimer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$TreeTimer($Class* clazz) {
	return $of($alloc(JTree$TreeTimer));
}

void JTree$TreeTimer::init$($JTree* this$0) {
	$set(this, this$0, this$0);
	$Timer::init$(2000, nullptr);
	setRepeats(false);
}

void JTree$TreeTimer::fireActionPerformed($ActionEvent* ae) {
	this->this$0->expandRow(this->this$0->expandRow$);
}

JTree$TreeTimer::JTree$TreeTimer() {
}

$Class* JTree$TreeTimer::load$($String* name, bool initialize) {
	$loadClass(JTree$TreeTimer, name, initialize, &_JTree$TreeTimer_ClassInfo_, allocate$JTree$TreeTimer);
	return class$;
}

$Class* JTree$TreeTimer::class$ = nullptr;

	} // swing
} // javax