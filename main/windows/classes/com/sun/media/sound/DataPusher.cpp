#include <com/sun/media/sound/DataPusher.h>

#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/Printer.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/Arrays.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

#undef AUTO_CLOSE_TIME
#undef BUFFER_SIZE
#undef STATE_NONE
#undef STATE_PLAYING
#undef STATE_STOPPED
#undef STATE_STOPPING
#undef STATE_WAITING

using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Printer = ::com::sun::media::sound::Printer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $DataLine = ::javax::sound::sampled::DataLine;
using $Line = ::javax::sound::sampled::Line;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DataPusher_FieldInfo_[] = {
	{"AUTO_CLOSE_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, AUTO_CLOSE_TIME)},
	{"source", "Ljavax/sound/sampled/SourceDataLine;", nullptr, $PRIVATE | $FINAL, $field(DataPusher, source)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(DataPusher, format)},
	{"ais", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(DataPusher, ais)},
	{"audioData", "[B", nullptr, $PRIVATE | $FINAL, $field(DataPusher, audioData)},
	{"audioDataByteLength", "I", nullptr, $PRIVATE | $FINAL, $field(DataPusher, audioDataByteLength)},
	{"pos", "I", nullptr, $PRIVATE, $field(DataPusher, pos)},
	{"newPos", "I", nullptr, $PRIVATE, $field(DataPusher, newPos)},
	{"looping", "Z", nullptr, $PRIVATE, $field(DataPusher, looping)},
	{"pushThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(DataPusher, pushThread)},
	{"wantedState", "I", nullptr, $PRIVATE, $field(DataPusher, wantedState)},
	{"threadState", "I", nullptr, $PRIVATE, $field(DataPusher, threadState)},
	{"STATE_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, STATE_NONE)},
	{"STATE_PLAYING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, STATE_PLAYING)},
	{"STATE_WAITING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, STATE_WAITING)},
	{"STATE_STOPPING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, STATE_STOPPING)},
	{"STATE_STOPPED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, STATE_STOPPED)},
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataPusher, BUFFER_SIZE)},
	{}
};

$MethodInfo _DataPusher_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/SourceDataLine;Ljavax/sound/sampled/AudioFormat;[BI)V", nullptr, $PUBLIC, $method(static_cast<void(DataPusher::*)($SourceDataLine*,$AudioFormat*,$bytes*,int32_t)>(&DataPusher::init$))},
	{"<init>", "(Ljavax/sound/sampled/SourceDataLine;Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DataPusher::*)($SourceDataLine*,$AudioInputStream*)>(&DataPusher::init$))},
	{"<init>", "(Ljavax/sound/sampled/SourceDataLine;Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;[BI)V", nullptr, $PRIVATE, $method(static_cast<void(DataPusher::*)($SourceDataLine*,$AudioFormat*,$AudioInputStream*,$bytes*,int32_t)>(&DataPusher::init$))},
	{"close", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(DataPusher::*)()>(&DataPusher::close))},
	{"run", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DataPusher::*)()>(&DataPusher::start))},
	{"start", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DataPusher::*)(bool)>(&DataPusher::start))},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DataPusher::*)()>(&DataPusher::stop))},
	{}
};

$ClassInfo _DataPusher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DataPusher",
	"java.lang.Object",
	"java.lang.Runnable",
	_DataPusher_FieldInfo_,
	_DataPusher_MethodInfo_
};

$Object* allocate$DataPusher($Class* clazz) {
	return $of($alloc(DataPusher));
}

void DataPusher::init$($SourceDataLine* sourceLine, $AudioFormat* format, $bytes* audioData, int32_t byteLength) {
	DataPusher::init$(sourceLine, format, nullptr, audioData, byteLength);
}

void DataPusher::init$($SourceDataLine* sourceLine, $AudioInputStream* ais) {
	DataPusher::init$(sourceLine, $($nc(ais)->getFormat()), ais, nullptr, 0);
}

void DataPusher::init$($SourceDataLine* source, $AudioFormat* format, $AudioInputStream* ais, $bytes* audioData, int32_t audioDataByteLength) {
	this->newPos = -1;
	$set(this, pushThread, nullptr);
	$set(this, source, source);
	$set(this, format, format);
	$set(this, ais, ais);
	this->audioDataByteLength = audioDataByteLength;
	$set(this, audioData, audioData == nullptr ? ($bytes*)nullptr : $Arrays::copyOf(audioData, $nc(audioData)->length));
}

void DataPusher::start() {
	$synchronized(this) {
		start(false);
	}
}

void DataPusher::start(bool loop) {
	$synchronized(this) {
		try {
			if (this->threadState == this->STATE_STOPPING) {
				stop();
			}
			this->looping = loop;
			this->newPos = 0;
			this->wantedState = this->STATE_PLAYING;
			if (!$nc(this->source)->isOpen()) {
				$nc(this->source)->open(this->format);
			}
			$nc(this->source)->flush();
			$nc(this->source)->start();
			if (this->pushThread == nullptr) {
				$set(this, pushThread, $JSSecurityManager::createThread(this, nullptr, false, -1, true));
			}
			$of(this)->notifyAll();
		} catch ($Exception& e) {
			$init($Printer);
			if ($Printer::err$) {
				e->printStackTrace();
			}
		}
	}
}

void DataPusher::stop() {
	$synchronized(this) {
		if (this->threadState == this->STATE_STOPPING || this->threadState == this->STATE_STOPPED || this->pushThread == nullptr) {
			return;
		}
		this->wantedState = this->STATE_WAITING;
		if (this->source != nullptr) {
			$nc(this->source)->flush();
		}
		$of(this)->notifyAll();
		int32_t maxWaitCount = 50;
		while ((maxWaitCount-- >= 0) && (this->threadState == this->STATE_PLAYING)) {
			try {
				$of(this)->wait(100);
			} catch ($InterruptedException& e) {
			}
		}
	}
}

void DataPusher::close() {
	$synchronized(this) {
		if (this->source != nullptr) {
			$nc(this->source)->close();
		}
	}
}

void DataPusher::run() {
	$var($bytes, buffer, nullptr);
	bool useStream = (this->ais != nullptr);
	if (useStream) {
		$assign(buffer, $new($bytes, this->BUFFER_SIZE));
	} else {
		$assign(buffer, this->audioData);
	}
	while (this->wantedState != this->STATE_STOPPING) {
		if (this->wantedState == this->STATE_WAITING) {
			try {
				$synchronized(this) {
					this->threadState = this->STATE_WAITING;
					this->wantedState = this->STATE_STOPPING;
					$of(this)->wait(DataPusher::AUTO_CLOSE_TIME);
				}
			} catch ($InterruptedException& ie) {
			}
			continue;
		}
		if (this->newPos >= 0) {
			this->pos = this->newPos;
			this->newPos = -1;
		}
		this->threadState = this->STATE_PLAYING;
		int32_t toWrite = this->BUFFER_SIZE;
		if (useStream) {
			try {
				this->pos = 0;
				toWrite = $nc(this->ais)->read(buffer, 0, $nc(buffer)->length);
			} catch ($IOException& ioe) {
				toWrite = -1;
			}
		} else {
			if (toWrite > this->audioDataByteLength - this->pos) {
				toWrite = this->audioDataByteLength - this->pos;
			}
			if (toWrite == 0) {
				toWrite = -1;
			}
		}
		if (toWrite < 0) {
			if (!useStream && this->looping) {
				this->pos = 0;
				continue;
			}
			this->wantedState = this->STATE_WAITING;
			$nc(this->source)->drain();
			continue;
		}
		int32_t bytesWritten = $nc(this->source)->write(buffer, this->pos, toWrite);
		this->pos += bytesWritten;
	}
	this->threadState = this->STATE_STOPPING;
	$nc(this->source)->flush();
	$nc(this->source)->stop();
	$nc(this->source)->flush();
	$nc(this->source)->close();
	this->threadState = this->STATE_STOPPED;
	$synchronized(this) {
		$set(this, pushThread, nullptr);
		$of(this)->notifyAll();
	}
}

DataPusher::DataPusher() {
}

$Class* DataPusher::load$($String* name, bool initialize) {
	$loadClass(DataPusher, name, initialize, &_DataPusher_ClassInfo_, allocate$DataPusher);
	return class$;
}

$Class* DataPusher::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com