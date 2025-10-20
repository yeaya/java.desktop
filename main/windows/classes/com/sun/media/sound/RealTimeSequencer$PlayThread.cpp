#include <com/sun/media/sound/RealTimeSequencer$PlayThread.h>

#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/Printer.h>
#include <com/sun/media/sound/RealTimeSequencer$DataPump.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <jcpp.h>

#undef EOM
#undef MAX_PRIORITY
#undef META_END_OF_TRACK_TYPE
#undef NORM_PRIORITY

using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $MidiUtils$TempoCache = ::com::sun::media::sound::MidiUtils$TempoCache;
using $Printer = ::com::sun::media::sound::Printer;
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $RealTimeSequencer$DataPump = ::com::sun::media::sound::RealTimeSequencer$DataPump;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Sequence = ::javax::sound::midi::Sequence;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RealTimeSequencer$PlayThread_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/RealTimeSequencer;", nullptr, $FINAL | $SYNTHETIC, $field(RealTimeSequencer$PlayThread, this$0)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(RealTimeSequencer$PlayThread, thread)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(RealTimeSequencer$PlayThread, lock)},
	{"interrupted", "Z", nullptr, 0, $field(RealTimeSequencer$PlayThread, interrupted)},
	{"isPumping", "Z", nullptr, 0, $field(RealTimeSequencer$PlayThread, isPumping)},
	{"dataPump", "Lcom/sun/media/sound/RealTimeSequencer$DataPump;", nullptr, $PRIVATE | $FINAL, $field(RealTimeSequencer$PlayThread, dataPump)},
	{}
};

$MethodInfo _RealTimeSequencer$PlayThread_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/RealTimeSequencer;)V", nullptr, 0, $method(static_cast<void(RealTimeSequencer$PlayThread::*)($RealTimeSequencer*)>(&RealTimeSequencer$PlayThread::init$))},
	{"close", "()V", nullptr, 0, $method(static_cast<void(RealTimeSequencer$PlayThread::*)()>(&RealTimeSequencer$PlayThread::close))},
	{"getDataPump", "()Lcom/sun/media/sound/RealTimeSequencer$DataPump;", nullptr, 0, $method(static_cast<$RealTimeSequencer$DataPump*(RealTimeSequencer$PlayThread::*)()>(&RealTimeSequencer$PlayThread::getDataPump))},
	{"playThreadImplStop", "()V", nullptr, 0, $method(static_cast<void(RealTimeSequencer$PlayThread::*)()>(&RealTimeSequencer$PlayThread::playThreadImplStop))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setSequence", "(Ljavax/sound/midi/Sequence;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(RealTimeSequencer$PlayThread::*)($Sequence*)>(&RealTimeSequencer$PlayThread::setSequence))},
	{"start", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(RealTimeSequencer$PlayThread::*)()>(&RealTimeSequencer$PlayThread::start))},
	{"stop", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(RealTimeSequencer$PlayThread::*)()>(&RealTimeSequencer$PlayThread::stop))},
	{}
};

$InnerClassInfo _RealTimeSequencer$PlayThread_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RealTimeSequencer$PlayThread", "com.sun.media.sound.RealTimeSequencer", "PlayThread", $FINAL},
	{}
};

$ClassInfo _RealTimeSequencer$PlayThread_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.RealTimeSequencer$PlayThread",
	"java.lang.Object",
	"java.lang.Runnable",
	_RealTimeSequencer$PlayThread_FieldInfo_,
	_RealTimeSequencer$PlayThread_MethodInfo_,
	nullptr,
	nullptr,
	_RealTimeSequencer$PlayThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RealTimeSequencer"
};

$Object* allocate$RealTimeSequencer$PlayThread($Class* clazz) {
	return $of($alloc(RealTimeSequencer$PlayThread));
}

void RealTimeSequencer$PlayThread::init$($RealTimeSequencer* this$0) {
	$set(this, this$0, this$0);
	$set(this, lock, $new($Object));
	this->interrupted = false;
	this->isPumping = false;
	$set(this, dataPump, $new($RealTimeSequencer$DataPump, this->this$0));
	int32_t priority = $Thread::NORM_PRIORITY + (($Thread::MAX_PRIORITY - $Thread::NORM_PRIORITY) * 3) / 4;
	$set(this, thread, $JSSecurityManager::createThread(this, "Java Sound Sequencer"_s, false, priority, true));
}

$RealTimeSequencer$DataPump* RealTimeSequencer$PlayThread::getDataPump() {
	return this->dataPump;
}

void RealTimeSequencer$PlayThread::setSequence($Sequence* seq) {
	$synchronized(this) {
		$nc(this->dataPump)->setSequence(seq);
	}
}

void RealTimeSequencer$PlayThread::start() {
	$synchronized(this) {
		this->this$0->running = true;
		if (!$nc(this->dataPump)->hasCachedTempo()) {
			int64_t tickPos = this->this$0->getTickPosition();
			$nc(this->dataPump)->setTempoMPQ($nc(this->this$0->tempoCache)->getTempoMPQAt(tickPos));
		}
		$nc(this->dataPump)->checkPointMillis = 0;
		$nc(this->dataPump)->clearNoteOnCache();
		$nc(this->dataPump)->needReindex = true;
		$nc(this->dataPump)->resetLoopCount();
		$synchronized(this->lock) {
			$nc($of(this->lock))->notifyAll();
		}
	}
}

void RealTimeSequencer$PlayThread::stop() {
	$synchronized(this) {
		playThreadImplStop();
		int64_t t = $div($System::nanoTime(), (int64_t)1000000);
		while (this->isPumping) {
			$synchronized(this->lock) {
				try {
					$nc($of(this->lock))->wait(2000);
				} catch ($InterruptedException&) {
					$catch();
				}
			}
			if (($div($System::nanoTime(), (int64_t)1000000)) - t > 1900) {
				$init($Printer);
				if ($Printer::err$) {
					$Printer::err("Waited more than 2 seconds in RealTimeSequencer.PlayThread.stop()!"_s);
				}
			}
		}
	}
}

void RealTimeSequencer$PlayThread::playThreadImplStop() {
	this->this$0->running = false;
	$synchronized(this->lock) {
		$nc($of(this->lock))->notifyAll();
	}
}

void RealTimeSequencer$PlayThread::close() {
	$var($Thread, oldThread, nullptr);
	$synchronized(this) {
		this->interrupted = true;
		$assign(oldThread, this->thread);
		$set(this, thread, nullptr);
	}
	if (oldThread != nullptr) {
		$synchronized(this->lock) {
			$nc($of(this->lock))->notifyAll();
		}
	}
	if (oldThread != nullptr) {
		try {
			oldThread->join(2000);
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

void RealTimeSequencer$PlayThread::run() {
	$useLocalCurrentObjectStackCache();
	while (!this->interrupted) {
		bool EOM = false;
		bool wasRunning = this->this$0->running;
		this->isPumping = !this->interrupted && this->this$0->running;
		while (!EOM && !this->interrupted && this->this$0->running) {
			EOM = $nc(this->dataPump)->pump();
			try {
				$Thread::sleep(1);
			} catch ($InterruptedException&) {
				$catch();
			}
		}
		playThreadImplStop();
		if (wasRunning) {
			$nc(this->dataPump)->notesOff(true);
		}
		if (EOM) {
			$nc(this->dataPump)->setTickPos($nc(this->this$0->sequence)->getTickLength());
			$var($MetaMessage, message, $new($MetaMessage));
			try {
				message->setMessage($MidiUtils::META_END_OF_TRACK_TYPE, $$new($bytes, 0), 0);
			} catch ($InvalidMidiDataException&) {
				$catch();
			}
			this->this$0->sendMetaEvents(message);
		}
		$synchronized(this->lock) {
			this->isPumping = false;
			$nc($of(this->lock))->notifyAll();
			while (!this->this$0->running && !this->interrupted) {
				try {
					$nc($of(this->lock))->wait();
				} catch ($Exception&) {
					$catch();
				}
			}
		}
	}
}

RealTimeSequencer$PlayThread::RealTimeSequencer$PlayThread() {
}

$Class* RealTimeSequencer$PlayThread::load$($String* name, bool initialize) {
	$loadClass(RealTimeSequencer$PlayThread, name, initialize, &_RealTimeSequencer$PlayThread_ClassInfo_, allocate$RealTimeSequencer$PlayThread);
	return class$;
}

$Class* RealTimeSequencer$PlayThread::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com