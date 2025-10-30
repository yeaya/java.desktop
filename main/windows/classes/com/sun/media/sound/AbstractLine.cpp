#include <com/sun/media/sound/AbstractLine.h>

#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <java/util/WeakHashMap.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

#undef CLOSE
#undef NOT_SPECIFIED
#undef OPEN

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $WeakHashMap = ::java::util::WeakHashMap;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;
using $LineListener = ::javax::sound::sampled::LineListener;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractLine_FieldInfo_[] = {
	{"info", "Ljavax/sound/sampled/Line$Info;", nullptr, $PROTECTED | $FINAL, $field(AbstractLine, info)},
	{"controls", "[Ljavax/sound/sampled/Control;", nullptr, $PROTECTED, $field(AbstractLine, controls)},
	{"mixer", "Lcom/sun/media/sound/AbstractMixer;", nullptr, 0, $field(AbstractLine, mixer)},
	{"open", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractLine, open$)},
	{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(AbstractLine, listeners)},
	{"dispatchers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ThreadGroup;Lcom/sun/media/sound/EventDispatcher;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AbstractLine, dispatchers)},
	{}
};

$MethodInfo _AbstractLine_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljavax/sound/sampled/Line$Info;Lcom/sun/media/sound/AbstractMixer;[Ljavax/sound/sampled/Control;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractLine::*)($Line$Info*,$AbstractMixer*,$ControlArray*)>(&AbstractLine::init$))},
	{"addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"getEventDispatcher", "()Lcom/sun/media/sound/EventDispatcher;", nullptr, $FINAL, $method(static_cast<$EventDispatcher*(AbstractLine::*)()>(&AbstractLine::getEventDispatcher))},
	{"getFramePosition", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AbstractLine::*)()>(&AbstractLine::getFramePosition))},
	{"getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"getMixer", "()Lcom/sun/media/sound/AbstractMixer;", nullptr, $FINAL, $method(static_cast<$AbstractMixer*(AbstractLine::*)()>(&AbstractLine::getMixer))},
	{"isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"open", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"sendEvents", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $FINAL, $method(static_cast<void(AbstractLine::*)($LineEvent*)>(&AbstractLine::sendEvents))},
	{"setOpen", "(Z)V", nullptr, $FINAL, $method(static_cast<void(AbstractLine::*)(bool)>(&AbstractLine::setOpen))},
	{}
};

$ClassInfo _AbstractLine_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AbstractLine",
	"java.lang.Object",
	"javax.sound.sampled.Line",
	_AbstractLine_FieldInfo_,
	_AbstractLine_MethodInfo_
};

$Object* allocate$AbstractLine($Class* clazz) {
	return $of($alloc(AbstractLine));
}

$Map* AbstractLine::dispatchers = nullptr;

void AbstractLine::init$($Line$Info* info, $AbstractMixer* mixer, $ControlArray* controls$renamed) {
	$var($ControlArray, controls, controls$renamed);
	$set(this, listeners, $new($Vector));
	if (controls == nullptr) {
		$assign(controls, $new($ControlArray, 0));
	}
	$set(this, info, info);
	$set(this, mixer, mixer);
	$set(this, controls, controls);
}

$Line$Info* AbstractLine::getLineInfo() {
	return this->info;
}

bool AbstractLine::isOpen() {
	return this->open$;
}

void AbstractLine::addLineListener($LineListener* listener) {
	$synchronized(this->listeners) {
		if (!($nc(this->listeners)->contains(listener))) {
			$nc(this->listeners)->addElement(listener);
		}
	}
}

void AbstractLine::removeLineListener($LineListener* listener) {
	$nc(this->listeners)->removeElement(listener);
}

$ControlArray* AbstractLine::getControls() {
	$var($ControlArray, returnedArray, $new($ControlArray, $nc(this->controls)->length));
	for (int32_t i = 0; i < $nc(this->controls)->length; ++i) {
		returnedArray->set(i, $nc(this->controls)->get(i));
	}
	return returnedArray;
}

bool AbstractLine::isControlSupported($Control$Type* controlType) {
	if (controlType == nullptr) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->controls)->length; ++i) {
		if (controlType == $nc($nc(this->controls)->get(i))->getType()) {
			return true;
		}
	}
	return false;
}

$Control* AbstractLine::getControl($Control$Type* controlType) {
	if (controlType != nullptr) {
		for (int32_t i = 0; i < $nc(this->controls)->length; ++i) {
			if (controlType == $nc($nc(this->controls)->get(i))->getType()) {
				return $nc(this->controls)->get(i);
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Unsupported control type: "_s, controlType}));
}

void AbstractLine::setOpen(bool open) {
	$useLocalCurrentObjectStackCache();
	bool sendEvents = false;
	int64_t position = getLongFramePosition();
	if (this->open$ != open) {
		this->open$ = open;
		sendEvents = true;
	}
	if (sendEvents) {
		if (open) {
			$init($LineEvent$Type);
			this->sendEvents($$new($LineEvent, this, $LineEvent$Type::OPEN, position));
		} else {
			$init($LineEvent$Type);
			this->sendEvents($$new($LineEvent, this, $LineEvent$Type::CLOSE, position));
		}
	}
}

void AbstractLine::sendEvents($LineEvent* event) {
	$nc($(getEventDispatcher()))->sendAudioEvents(event, this->listeners);
}

int32_t AbstractLine::getFramePosition() {
	return (int32_t)getLongFramePosition();
}

int64_t AbstractLine::getLongFramePosition() {
	return $AudioSystem::NOT_SPECIFIED;
}

$AbstractMixer* AbstractLine::getMixer() {
	return this->mixer;
}

$EventDispatcher* AbstractLine::getEventDispatcher() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	$synchronized(AbstractLine::dispatchers) {
		$var($EventDispatcher, eventDispatcher, $cast($EventDispatcher, $nc(AbstractLine::dispatchers)->get(tg)));
		if (eventDispatcher == nullptr) {
			$assign(eventDispatcher, $new($EventDispatcher));
			$nc(AbstractLine::dispatchers)->put(tg, eventDispatcher);
			eventDispatcher->start();
		}
		return eventDispatcher;
	}
}

void clinit$AbstractLine($Class* class$) {
	$assignStatic(AbstractLine::dispatchers, $new($WeakHashMap));
}

AbstractLine::AbstractLine() {
}

$Class* AbstractLine::load$($String* name, bool initialize) {
	$loadClass(AbstractLine, name, initialize, &_AbstractLine_ClassInfo_, clinit$AbstractLine, allocate$AbstractLine);
	return class$;
}

$Class* AbstractLine::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com