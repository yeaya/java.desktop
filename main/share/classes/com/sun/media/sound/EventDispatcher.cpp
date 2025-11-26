#include <com/sun/media/sound/EventDispatcher.h>

#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/EventDispatcher$ClipInfo.h>
#include <com/sun/media/sound/EventDispatcher$EventInfo.h>
#include <com/sun/media/sound/EventDispatcher$LineMonitor.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/Printer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/sound/midi/ControllerEventListener.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/sampled/DataLine.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

#undef AUTO_CLOSE_TIME
#undef LINE_MONITOR_TIME

using $AutoClosingClip = ::com::sun::media::sound::AutoClosingClip;
using $EventDispatcher$ClipInfo = ::com::sun::media::sound::EventDispatcher$ClipInfo;
using $EventDispatcher$EventInfo = ::com::sun::media::sound::EventDispatcher$EventInfo;
using $EventDispatcher$LineMonitor = ::com::sun::media::sound::EventDispatcher$LineMonitor;
using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Printer = ::com::sun::media::sound::Printer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ControllerEventListener = ::javax::sound::midi::ControllerEventListener;
using $MetaEventListener = ::javax::sound::midi::MetaEventListener;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $DataLine = ::javax::sound::sampled::DataLine;
using $Line = ::javax::sound::sampled::Line;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineListener = ::javax::sound::sampled::LineListener;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _EventDispatcher_FieldInfo_[] = {
	{"AUTO_CLOSE_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventDispatcher, AUTO_CLOSE_TIME)},
	{"eventQueue", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/EventDispatcher$EventInfo;>;", $PRIVATE | $FINAL, $field(EventDispatcher, eventQueue)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(EventDispatcher, thread)},
	{"autoClosingClips", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/EventDispatcher$ClipInfo;>;", $PRIVATE | $FINAL, $field(EventDispatcher, autoClosingClips)},
	{"lineMonitors", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/EventDispatcher$LineMonitor;>;", $PRIVATE | $FINAL, $field(EventDispatcher, lineMonitors)},
	{"LINE_MONITOR_TIME", "I", nullptr, $STATIC | $FINAL, $constField(EventDispatcher, LINE_MONITOR_TIME)},
	{}
};

$MethodInfo _EventDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)()>(&EventDispatcher::init$))},
	{"addLineMonitor", "(Lcom/sun/media/sound/EventDispatcher$LineMonitor;)V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)($EventDispatcher$LineMonitor*)>(&EventDispatcher::addLineMonitor))},
	{"autoClosingClipClosed", "(Lcom/sun/media/sound/AutoClosingClip;)V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)($AutoClosingClip*)>(&EventDispatcher::autoClosingClipClosed))},
	{"autoClosingClipOpened", "(Lcom/sun/media/sound/AutoClosingClip;)V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)($AutoClosingClip*)>(&EventDispatcher::autoClosingClipOpened))},
	{"closeAutoClosingClips", "()V", nullptr, $PRIVATE, $method(static_cast<void(EventDispatcher::*)()>(&EventDispatcher::closeAutoClosingClips))},
	{"dispatchEvents", "()V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)()>(&EventDispatcher::dispatchEvents))},
	{"getAutoClosingClipIndex", "(Lcom/sun/media/sound/AutoClosingClip;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(EventDispatcher::*)($AutoClosingClip*)>(&EventDispatcher::getAutoClosingClipIndex))},
	{"monitorLines", "()V", nullptr, $PRIVATE, $method(static_cast<void(EventDispatcher::*)()>(&EventDispatcher::monitorLines))},
	{"postEvent", "(Lcom/sun/media/sound/EventDispatcher$EventInfo;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(EventDispatcher::*)($EventDispatcher$EventInfo*)>(&EventDispatcher::postEvent))},
	{"processEvent", "(Lcom/sun/media/sound/EventDispatcher$EventInfo;)V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)($EventDispatcher$EventInfo*)>(&EventDispatcher::processEvent))},
	{"removeLineMonitor", "(Lcom/sun/media/sound/EventDispatcher$LineMonitor;)V", nullptr, 0, $method(static_cast<void(EventDispatcher::*)($EventDispatcher$LineMonitor*)>(&EventDispatcher::removeLineMonitor))},
	{"run", "()V", nullptr, $PUBLIC},
	{"sendAudioEvents", "(Ljava/lang/Object;Ljava/util/List;)V", "(Ljava/lang/Object;Ljava/util/List<Ljava/lang/Object;>;)V", 0, $method(static_cast<void(EventDispatcher::*)(Object$*,$List*)>(&EventDispatcher::sendAudioEvents))},
	{"start", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventDispatcher::*)()>(&EventDispatcher::start))},
	{}
};

$InnerClassInfo _EventDispatcher_InnerClassesInfo_[] = {
	{"com.sun.media.sound.EventDispatcher$LineMonitor", "com.sun.media.sound.EventDispatcher", "LineMonitor", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.media.sound.EventDispatcher$ClipInfo", "com.sun.media.sound.EventDispatcher", "ClipInfo", $PRIVATE},
	{"com.sun.media.sound.EventDispatcher$EventInfo", "com.sun.media.sound.EventDispatcher", "EventInfo", $PRIVATE},
	{}
};

$ClassInfo _EventDispatcher_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.EventDispatcher",
	"java.lang.Object",
	"java.lang.Runnable",
	_EventDispatcher_FieldInfo_,
	_EventDispatcher_MethodInfo_,
	nullptr,
	nullptr,
	_EventDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.EventDispatcher$LineMonitor,com.sun.media.sound.EventDispatcher$ClipInfo,com.sun.media.sound.EventDispatcher$EventInfo"
};

$Object* allocate$EventDispatcher($Class* clazz) {
	return $of($alloc(EventDispatcher));
}

void EventDispatcher::init$() {
	$set(this, eventQueue, $new($ArrayList));
	$set(this, thread, nullptr);
	$set(this, autoClosingClips, $new($ArrayList));
	$set(this, lineMonitors, $new($ArrayList));
}

void EventDispatcher::start() {
	$synchronized(this) {
		if (this->thread == nullptr) {
			$set(this, thread, $JSSecurityManager::createThread(this, "Java Sound Event Dispatcher"_s, true, -1, true));
		}
	}
}

void EventDispatcher::processEvent($EventDispatcher$EventInfo* eventInfo) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(eventInfo)->getListenerCount();
	if ($instanceOf($LineEvent, $(eventInfo->getEvent()))) {
		$var($LineEvent, event, $cast($LineEvent, eventInfo->getEvent()));
		for (int32_t i = 0; i < count; ++i) {
			try {
				$nc(($cast($LineListener, $(eventInfo->getListener(i)))))->update(event);
			} catch ($Throwable& t) {
				$init($Printer);
				if ($Printer::err$) {
					t->printStackTrace();
				}
			}
		}
		return;
	}
	if ($instanceOf($MetaMessage, $(eventInfo->getEvent()))) {
		$var($MetaMessage, event, $cast($MetaMessage, eventInfo->getEvent()));
		for (int32_t i = 0; i < count; ++i) {
			try {
				$nc(($cast($MetaEventListener, $(eventInfo->getListener(i)))))->meta(event);
			} catch ($Throwable& t) {
				$init($Printer);
				if ($Printer::err$) {
					t->printStackTrace();
				}
			}
		}
		return;
	}
	if ($instanceOf($ShortMessage, $(eventInfo->getEvent()))) {
		$var($ShortMessage, event, $cast($ShortMessage, eventInfo->getEvent()));
		int32_t status = $nc(event)->getStatus();
		if (((int32_t)(status & (uint32_t)240)) == 176) {
			for (int32_t i = 0; i < count; ++i) {
				try {
					$nc(($cast($ControllerEventListener, $(eventInfo->getListener(i)))))->controlChange(event);
				} catch ($Throwable& t) {
					$init($Printer);
					if ($Printer::err$) {
						t->printStackTrace();
					}
				}
			}
		}
		return;
	}
	$Printer::err($$str({"Unknown event type: "_s, $(eventInfo->getEvent())}));
}

void EventDispatcher::dispatchEvents() {
	$var($EventDispatcher$EventInfo, eventInfo, nullptr);
	$synchronized(this) {
		try {
			if ($nc(this->eventQueue)->size() == 0) {
				bool var$0 = $nc(this->autoClosingClips)->size() > 0;
				if (var$0 || $nc(this->lineMonitors)->size() > 0) {
					int32_t waitTime = EventDispatcher::AUTO_CLOSE_TIME;
					if ($nc(this->lineMonitors)->size() > 0) {
						waitTime = EventDispatcher::LINE_MONITOR_TIME;
					}
					$of(this)->wait(waitTime);
				} else {
					$of(this)->wait();
				}
			}
		} catch ($InterruptedException& e) {
		}
		if ($nc(this->eventQueue)->size() > 0) {
			$assign(eventInfo, $cast($EventDispatcher$EventInfo, $nc(this->eventQueue)->remove(0)));
		}
	}
	if (eventInfo != nullptr) {
		processEvent(eventInfo);
	} else {
		if ($nc(this->autoClosingClips)->size() > 0) {
			closeAutoClosingClips();
		}
		if ($nc(this->lineMonitors)->size() > 0) {
			monitorLines();
		}
	}
}

void EventDispatcher::postEvent($EventDispatcher$EventInfo* eventInfo) {
	$synchronized(this) {
		$nc(this->eventQueue)->add(eventInfo);
		$of(this)->notifyAll();
	}
}

void EventDispatcher::run() {
	while (true) {
		try {
			dispatchEvents();
		} catch ($Throwable& t) {
			$init($Printer);
			if ($Printer::err$) {
				t->printStackTrace();
			}
		}
	}
}

void EventDispatcher::sendAudioEvents(Object$* event, $List* listeners) {
	if ((listeners == nullptr) || ($nc(listeners)->size() == 0)) {
		return;
	}
	start();
	$var($EventDispatcher$EventInfo, eventInfo, $new($EventDispatcher$EventInfo, this, event, listeners));
	postEvent(eventInfo);
}

void EventDispatcher::closeAutoClosingClips() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->autoClosingClips) {
		int64_t currTime = $System::currentTimeMillis();
		for (int32_t i = $nc(this->autoClosingClips)->size() - 1; i >= 0; --i) {
			$var($EventDispatcher$ClipInfo, info, $cast($EventDispatcher$ClipInfo, $nc(this->autoClosingClips)->get(i)));
			if ($nc(info)->isExpired(currTime)) {
				$var($AutoClosingClip, clip, info->getClip());
				bool var$0 = !$nc(clip)->isOpen();
				if (var$0 || !$nc(clip)->isAutoClosing()) {
					$nc(this->autoClosingClips)->remove(i);
				} else {
					bool var$4 = !clip->isRunning();
					bool var$3 = var$4 && !clip->isActive();
					if (var$3 && clip->isAutoClosing()) {
						clip->close();
					} else {
					}
				}
			}
		}
	}
}

int32_t EventDispatcher::getAutoClosingClipIndex($AutoClosingClip* clip) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->autoClosingClips) {
		for (int32_t i = $nc(this->autoClosingClips)->size() - 1; i >= 0; --i) {
			if ($nc($of(clip))->equals($($nc(($cast($EventDispatcher$ClipInfo, $($nc(this->autoClosingClips)->get(i)))))->getClip()))) {
				return i;
			}
		}
	}
	return -1;
}

void EventDispatcher::autoClosingClipOpened($AutoClosingClip* clip) {
	int32_t index = 0;
	$synchronized(this->autoClosingClips) {
		index = getAutoClosingClipIndex(clip);
		if (index == -1) {
			$nc(this->autoClosingClips)->add($$new($EventDispatcher$ClipInfo, this, clip));
		}
	}
	if (index == -1) {
		$synchronized(this) {
			$of(this)->notifyAll();
		}
	}
}

void EventDispatcher::autoClosingClipClosed($AutoClosingClip* clip) {
	$synchronized(this->autoClosingClips) {
		int32_t index = getAutoClosingClipIndex(clip);
		if (index != -1) {
			$nc(this->autoClosingClips)->remove(index);
		}
	}
}

void EventDispatcher::monitorLines() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lineMonitors) {
		for (int32_t i = 0; i < $nc(this->lineMonitors)->size(); ++i) {
			$nc(($cast($EventDispatcher$LineMonitor, $($nc(this->lineMonitors)->get(i)))))->checkLine();
		}
	}
}

void EventDispatcher::addLineMonitor($EventDispatcher$LineMonitor* lm) {
	$synchronized(this->lineMonitors) {
		if ($nc(this->lineMonitors)->indexOf(lm) >= 0) {
			return;
		}
		$nc(this->lineMonitors)->add(lm);
	}
	$synchronized(this) {
		$of(this)->notifyAll();
	}
}

void EventDispatcher::removeLineMonitor($EventDispatcher$LineMonitor* lm) {
	$synchronized(this->lineMonitors) {
		if ($nc(this->lineMonitors)->indexOf(lm) < 0) {
			return;
		}
		$nc(this->lineMonitors)->remove($of(lm));
	}
}

EventDispatcher::EventDispatcher() {
}

$Class* EventDispatcher::load$($String* name, bool initialize) {
	$loadClass(EventDispatcher, name, initialize, &_EventDispatcher_ClassInfo_, allocate$EventDispatcher);
	return class$;
}

$Class* EventDispatcher::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com