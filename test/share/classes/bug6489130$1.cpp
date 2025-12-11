#include <bug6489130$1.h>

#include <bug6489130$1$1.h>
#include <bug6489130.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef MUX

using $WindowArray = $Array<::java::awt::Window>;
using $bug6489130 = ::bug6489130;
using $bug6489130$1$1 = ::bug6489130$1$1;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6489130$1_FieldInfo_[] = {
	{"this$0", "Lbug6489130;", nullptr, $FINAL | $SYNTHETIC, $field(bug6489130$1, this$0)},
	{}
};

$MethodInfo _bug6489130$1_MethodInfo_[] = {
	{"<init>", "(Lbug6489130;)V", nullptr, 0, $method(static_cast<void(bug6489130$1::*)($bug6489130*)>(&bug6489130$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6489130$1_EnclosingMethodInfo_ = {
	"bug6489130",
	nullptr,
	nullptr
};

$InnerClassInfo _bug6489130$1_InnerClassesInfo_[] = {
	{"bug6489130$1", nullptr, nullptr, 0},
	{"bug6489130$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6489130$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6489130$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug6489130$1_FieldInfo_,
	_bug6489130$1_MethodInfo_,
	nullptr,
	&_bug6489130$1_EnclosingMethodInfo_,
	_bug6489130$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6489130"
};

$Object* allocate$bug6489130$1($Class* clazz) {
	return $of($alloc(bug6489130$1));
}

void bug6489130$1::init$($bug6489130* this$0) {
	$set(this, this$0, this$0);
}

void bug6489130$1::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	switch (this->this$0->state) {
	case 0:
		{}
	case 1:
		{
			{
				$SwingUtilities::invokeLater($$new($bug6489130$1$1, this));
				break;
			}
		}
	case 2:
		{}
	case 3:
		{
			{
				$var($WindowArray, windows, $Frame::getWindows());
				if ($nc(windows)->length > 0) {
					$nc(windows->get(0))->dispose();
				}
				break;
			}
		}
	case 4:
		{
			{
				$init($bug6489130);
				$nc($bug6489130::MUX)->countDown();
				break;
			}
		}
	}
	++this->this$0->state;
}

bug6489130$1::bug6489130$1() {
}

$Class* bug6489130$1::load$($String* name, bool initialize) {
	$loadClass(bug6489130$1, name, initialize, &_bug6489130$1_ClassInfo_, allocate$bug6489130$1);
	return class$;
}

$Class* bug6489130$1::class$ = nullptr;