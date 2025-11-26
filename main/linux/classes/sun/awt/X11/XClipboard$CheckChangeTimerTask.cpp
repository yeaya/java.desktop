#include <sun/awt/X11/XClipboard$CheckChangeTimerTask.h>

#include <java/lang/Runnable.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XClipboard.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $XClipboard = ::sun::awt::X11::XClipboard;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XClipboard$CheckChangeTimerTask_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XClipboard$CheckChangeTimerTask::*)()>(&XClipboard$CheckChangeTimerTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XClipboard$CheckChangeTimerTask_InnerClassesInfo_[] = {
	{"sun.awt.X11.XClipboard$CheckChangeTimerTask", "sun.awt.X11.XClipboard", "CheckChangeTimerTask", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XClipboard$CheckChangeTimerTask_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XClipboard$CheckChangeTimerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_XClipboard$CheckChangeTimerTask_MethodInfo_,
	nullptr,
	nullptr,
	_XClipboard$CheckChangeTimerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XClipboard"
};

$Object* allocate$XClipboard$CheckChangeTimerTask($Class* clazz) {
	return $of($alloc(XClipboard$CheckChangeTimerTask));
}

void XClipboard$CheckChangeTimerTask::init$() {
}

void XClipboard$CheckChangeTimerTask::run() {
	$useLocalCurrentObjectStackCache();
	{
		$init($XClipboard);
		$var($Iterator, i$, $nc($($nc($XClipboard::targetsAtom2Clipboard)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XClipboard, clpbrd, $cast($XClipboard, i$->next()));
			{
				$nc(clpbrd)->getTargetsDelayed();
			}
		}
	}
	$init($XClipboard);
	$synchronized($XClipboard::classLock) {
		if ($XClipboard::targetsAtom2Clipboard != nullptr && !$nc($XClipboard::targetsAtom2Clipboard)->isEmpty()) {
			$XToolkit::schedule(this, $XClipboard::getPollInterval());
		}
	}
}

XClipboard$CheckChangeTimerTask::XClipboard$CheckChangeTimerTask() {
}

$Class* XClipboard$CheckChangeTimerTask::load$($String* name, bool initialize) {
	$loadClass(XClipboard$CheckChangeTimerTask, name, initialize, &_XClipboard$CheckChangeTimerTask_ClassInfo_, allocate$XClipboard$CheckChangeTimerTask);
	return class$;
}

$Class* XClipboard$CheckChangeTimerTask::class$ = nullptr;

		} // X11
	} // awt
} // sun