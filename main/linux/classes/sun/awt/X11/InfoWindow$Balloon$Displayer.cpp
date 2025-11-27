#include <sun/awt/X11/InfoWindow$Balloon$Displayer.h>

#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Balloon$Message.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef MAX_CONCURRENT_MSGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $InfoWindow$Balloon$Message = ::sun::awt::X11::InfoWindow$Balloon$Message;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Balloon$Displayer_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$Displayer, this$0)},
	{"MAX_CONCURRENT_MSGS", "I", nullptr, $STATIC | $FINAL, $constField(InfoWindow$Balloon$Displayer, MAX_CONCURRENT_MSGS)},
	{"messageQueue", "Ljava/util/concurrent/ArrayBlockingQueue;", "Ljava/util/concurrent/ArrayBlockingQueue<Lsun/awt/X11/InfoWindow$Balloon$Message;>;", 0, $field(InfoWindow$Balloon$Displayer, messageQueue)},
	{"isDisplayed", "Z", nullptr, 0, $field(InfoWindow$Balloon$Displayer, isDisplayed)},
	{"thread", "Ljava/lang/Thread;", nullptr, $FINAL, $field(InfoWindow$Balloon$Displayer, thread)},
	{}
};

$MethodInfo _InfoWindow$Balloon$Displayer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Balloon$Displayer::*)($InfoWindow$Balloon*)>(&InfoWindow$Balloon$Displayer::init$))},
	{"display", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InfoWindow$Balloon$Displayer_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$Displayer", "sun.awt.X11.InfoWindow$Balloon", "Displayer", $PRIVATE},
	{}
};

$ClassInfo _InfoWindow$Balloon$Displayer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Balloon$Displayer",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Balloon$Displayer_FieldInfo_,
	_InfoWindow$Balloon$Displayer_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$Balloon$Displayer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Balloon$Displayer($Class* clazz) {
	return $of($alloc(InfoWindow$Balloon$Displayer));
}

void InfoWindow$Balloon$Displayer::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
	$set(this, messageQueue, $new($ArrayBlockingQueue, this->MAX_CONCURRENT_MSGS));
	$set(this, thread, $new($Thread, nullptr, this, "Displayer"_s, 0, false));
	$nc(this->thread)->setDaemon(true);
}

void InfoWindow$Balloon$Displayer::run() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		$var($InfoWindow$Balloon$Message, msg, nullptr);
		try {
			$assign(msg, $cast($InfoWindow$Balloon$Message, $nc(this->messageQueue)->take()));
		} catch ($InterruptedException& e) {
			return;
		}
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				while (this->isDisplayed) {
					try {
						$XToolkit::awtLockWait();
					} catch ($InterruptedException& e) {
						return$1 = true;
						goto $finally;
					}
				}
				this->isDisplayed = true;
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
		this->this$0->_display($nc(msg)->caption, msg->text, msg->messageType);
	}
}

void InfoWindow$Balloon$Displayer::display($String* caption, $String* text, $String* messageType) {
	$nc(this->messageQueue)->offer($$new($InfoWindow$Balloon$Message, caption, text, messageType));
}

InfoWindow$Balloon$Displayer::InfoWindow$Balloon$Displayer() {
}

$Class* InfoWindow$Balloon$Displayer::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Balloon$Displayer, name, initialize, &_InfoWindow$Balloon$Displayer_ClassInfo_, allocate$InfoWindow$Balloon$Displayer);
	return class$;
}

$Class* InfoWindow$Balloon$Displayer::class$ = nullptr;

		} // X11
	} // awt
} // sun