#include <com/sun/media/sound/SoftAudioPusher.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftAudioPusher_FieldInfo_[] = {
	{"active", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SoftAudioPusher, active)},
	{"sourceDataLine", "Ljavax/sound/sampled/SourceDataLine;", nullptr, $PRIVATE, $field(SoftAudioPusher, sourceDataLine)},
	{"audiothread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(SoftAudioPusher, audiothread)},
	{"ais", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(SoftAudioPusher, ais)},
	{"buffer", "[B", nullptr, $PRIVATE | $FINAL, $field(SoftAudioPusher, buffer)},
	{}
};

$MethodInfo _SoftAudioPusher_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/SourceDataLine;Ljavax/sound/sampled/AudioInputStream;I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftAudioPusher::*)($SourceDataLine*,$AudioInputStream*,int32_t)>(&SoftAudioPusher::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(SoftAudioPusher::*)()>(&SoftAudioPusher::start))},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(SoftAudioPusher::*)()>(&SoftAudioPusher::stop))},
	{}
};

$ClassInfo _SoftAudioPusher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftAudioPusher",
	"java.lang.Object",
	"java.lang.Runnable",
	_SoftAudioPusher_FieldInfo_,
	_SoftAudioPusher_MethodInfo_
};

$Object* allocate$SoftAudioPusher($Class* clazz) {
	return $of($alloc(SoftAudioPusher));
}

void SoftAudioPusher::init$($SourceDataLine* sourceDataLine, $AudioInputStream* ais, int32_t workbuffersizer) {
	this->active = false;
	$set(this, sourceDataLine, nullptr);
	$set(this, ais, ais);
	$set(this, buffer, $new($bytes, workbuffersizer));
	$set(this, sourceDataLine, sourceDataLine);
}

void SoftAudioPusher::start() {
	$synchronized(this) {
		if (this->active) {
			return;
		}
		this->active = true;
		$set(this, audiothread, $new($Thread, nullptr, this, "AudioPusher"_s, 0, false));
		$nc(this->audiothread)->setDaemon(true);
		$nc(this->audiothread)->setPriority($Thread::MAX_PRIORITY);
		$nc(this->audiothread)->start();
	}
}

void SoftAudioPusher::stop() {
	$synchronized(this) {
		if (!this->active) {
			return;
		}
		this->active = false;
		try {
			$nc(this->audiothread)->join();
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

void SoftAudioPusher::run() {
	$var($bytes, buffer, this->buffer);
	$var($AudioInputStream, ais, this->ais);
	$var($SourceDataLine, sourceDataLine, this->sourceDataLine);
	try {
		while (this->active) {
			int32_t count = $nc(ais)->read(buffer);
			if (count < 0) {
				break;
			}
			$nc(sourceDataLine)->write(buffer, 0, count);
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		this->active = false;
	}
}

SoftAudioPusher::SoftAudioPusher() {
}

$Class* SoftAudioPusher::load$($String* name, bool initialize) {
	$loadClass(SoftAudioPusher, name, initialize, &_SoftAudioPusher_ClassInfo_, allocate$SoftAudioPusher);
	return class$;
}

$Class* SoftAudioPusher::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com