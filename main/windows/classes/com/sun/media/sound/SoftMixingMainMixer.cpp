#include <com/sun/media/sound/SoftMixingMainMixer.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftAudioProcessor.h>
#include <com/sun/media/sound/SoftChorus.h>
#include <com/sun/media/sound/SoftLimiter.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <com/sun/media/sound/SoftMixingMainMixer$1.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <com/sun/media/sound/SoftReverb.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Line.h>
#include <jcpp.h>

#undef CHANNEL_CHANNELMIXER_LEFT
#undef CHANNEL_CHANNELMIXER_RIGHT
#undef CHANNEL_EFFECT1
#undef CHANNEL_EFFECT2
#undef CHANNEL_EFFECT3
#undef CHANNEL_EFFECT4
#undef CHANNEL_LEFT
#undef CHANNEL_LEFT_DRY
#undef CHANNEL_RIGHT
#undef CHANNEL_RIGHT_DRY
#undef CHANNEL_SCRATCH1
#undef CHANNEL_SCRATCH2
#undef NOT_SPECIFIED

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $SoftMixingDataLineArray = $Array<::com::sun::media::sound::SoftMixingDataLine>;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftAudioProcessor = ::com::sun::media::sound::SoftAudioProcessor;
using $SoftChorus = ::com::sun::media::sound::SoftChorus;
using $SoftLimiter = ::com::sun::media::sound::SoftLimiter;
using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $SoftMixingMainMixer$1 = ::com::sun::media::sound::SoftMixingMainMixer$1;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $SoftReverb = ::com::sun::media::sound::SoftReverb;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Line = ::javax::sound::sampled::Line;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingMainMixer_FieldInfo_[] = {
	{"CHANNEL_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_LEFT)},
	{"CHANNEL_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_RIGHT)},
	{"CHANNEL_EFFECT1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_EFFECT1)},
	{"CHANNEL_EFFECT2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_EFFECT2)},
	{"CHANNEL_EFFECT3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_EFFECT3)},
	{"CHANNEL_EFFECT4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_EFFECT4)},
	{"CHANNEL_LEFT_DRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_LEFT_DRY)},
	{"CHANNEL_RIGHT_DRY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_RIGHT_DRY)},
	{"CHANNEL_SCRATCH1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_SCRATCH1)},
	{"CHANNEL_SCRATCH2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_SCRATCH2)},
	{"CHANNEL_CHANNELMIXER_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_CHANNELMIXER_LEFT)},
	{"CHANNEL_CHANNELMIXER_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftMixingMainMixer, CHANNEL_CHANNELMIXER_RIGHT)},
	{"mixer", "Lcom/sun/media/sound/SoftMixingMixer;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, mixer)},
	{"ais", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, ais)},
	{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, buffers)},
	{"reverb", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, reverb)},
	{"chorus", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, chorus)},
	{"agc", "Lcom/sun/media/sound/SoftAudioProcessor;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, agc)},
	{"nrofchannels", "I", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, nrofchannels)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMainMixer, control_mutex)},
	{"openLinesList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SoftMixingDataLine;>;", $PRIVATE | $FINAL, $field(SoftMixingMainMixer, openLinesList)},
	{"openLines", "[Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $PRIVATE, $field(SoftMixingMainMixer, openLines)},
	{}
};

$MethodInfo _SoftMixingMainMixer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingMixer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMainMixer::*)($SoftMixingMixer*)>(&SoftMixingMainMixer::init$))},
	{"close", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMainMixer::*)()>(&SoftMixingMainMixer::close))},
	{"closeLine", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMainMixer::*)($SoftMixingDataLine*)>(&SoftMixingMainMixer::closeLine))},
	{"getInputStream", "()Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $method(static_cast<$AudioInputStream*(SoftMixingMainMixer::*)()>(&SoftMixingMainMixer::getInputStream))},
	{"getOpenLines", "()[Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $PUBLIC, $method(static_cast<$SoftMixingDataLineArray*(SoftMixingMainMixer::*)()>(&SoftMixingMainMixer::getOpenLines))},
	{"openLine", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMainMixer::*)($SoftMixingDataLine*)>(&SoftMixingMainMixer::openLine))},
	{"processAudioBuffers", "()V", nullptr, 0, $method(static_cast<void(SoftMixingMainMixer::*)()>(&SoftMixingMainMixer::processAudioBuffers))},
	{}
};

$InnerClassInfo _SoftMixingMainMixer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingMainMixer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingMainMixer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingMainMixer",
	"java.lang.Object",
	nullptr,
	_SoftMixingMainMixer_FieldInfo_,
	_SoftMixingMainMixer_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingMainMixer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingMainMixer$1"
};

$Object* allocate$SoftMixingMainMixer($Class* clazz) {
	return $of($alloc(SoftMixingMainMixer));
}

$AudioInputStream* SoftMixingMainMixer::getInputStream() {
	return this->ais;
}

void SoftMixingMainMixer::processAudioBuffers() {
	for (int32_t i = 0; i < $nc(this->buffers)->length; ++i) {
		$nc($nc(this->buffers)->get(i))->clear();
	}
	$var($SoftMixingDataLineArray, openLines, nullptr);
	$synchronized(this->control_mutex) {
		$assign(openLines, this->openLines);
		for (int32_t i = 0; i < $nc(openLines)->length; ++i) {
			$nc(openLines->get(i))->processControlLogic();
		}
		$nc(this->chorus)->processControlLogic();
		$nc(this->reverb)->processControlLogic();
		$nc(this->agc)->processControlLogic();
	}
	for (int32_t i = 0; i < $nc(openLines)->length; ++i) {
		$nc(openLines->get(i))->processAudioLogic(this->buffers);
	}
	$nc(this->chorus)->processAudio();
	$nc(this->reverb)->processAudio();
	$nc(this->agc)->processAudio();
}

void SoftMixingMainMixer::init$($SoftMixingMixer* mixer) {
	$set(this, openLinesList, $new($ArrayList));
	$set(this, openLines, $new($SoftMixingDataLineArray, 0));
	$set(this, mixer, mixer);
	this->nrofchannels = $nc($($nc(mixer)->getFormat()))->getChannels();
	float var$0 = $nc($(mixer->getFormat()))->getSampleRate();
	int32_t buffersize = $cast(int32_t, (var$0 / mixer->getControlRate()));
	$set(this, control_mutex, mixer->control_mutex);
	$set(this, buffers, $new($SoftAudioBufferArray, 16));
	for (int32_t i = 0; i < $nc(this->buffers)->length; ++i) {
		$nc(this->buffers)->set(i, $$new($SoftAudioBuffer, buffersize, $(mixer->getFormat())));
	}
	$set(this, reverb, $new($SoftReverb));
	$set(this, chorus, $new($SoftChorus));
	$set(this, agc, $new($SoftLimiter));
	float samplerate = $nc($(mixer->getFormat()))->getSampleRate();
	float controlrate = mixer->getControlRate();
	$nc(this->reverb)->init(samplerate, controlrate);
	$nc(this->chorus)->init(samplerate, controlrate);
	$nc(this->agc)->init(samplerate, controlrate);
	$nc(this->reverb)->setMixMode(true);
	$nc(this->chorus)->setMixMode(true);
	$nc(this->agc)->setMixMode(false);
	$nc(this->chorus)->setInput(0, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_EFFECT2));
	$nc(this->chorus)->setOutput(0, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->chorus)->setOutput(1, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_RIGHT));
	}
	$nc(this->chorus)->setOutput(2, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_EFFECT1));
	$nc(this->reverb)->setInput(0, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_EFFECT1));
	$nc(this->reverb)->setOutput(0, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->reverb)->setOutput(1, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_RIGHT));
	}
	$nc(this->agc)->setInput(0, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->agc)->setInput(1, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_RIGHT));
	}
	$nc(this->agc)->setOutput(0, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_LEFT));
	if (this->nrofchannels != 1) {
		$nc(this->agc)->setOutput(1, $nc(this->buffers)->get(SoftMixingMainMixer::CHANNEL_RIGHT));
	}
	$var($InputStream, in, $new($SoftMixingMainMixer$1, this));
	$set(this, ais, $new($AudioInputStream, in, $(mixer->getFormat()), $AudioSystem::NOT_SPECIFIED));
}

void SoftMixingMainMixer::openLine($SoftMixingDataLine* line) {
	$synchronized(this->control_mutex) {
		$nc(this->openLinesList)->add(line);
		$set(this, openLines, $fcast($SoftMixingDataLineArray, $nc(this->openLinesList)->toArray($$new($SoftMixingDataLineArray, $nc(this->openLinesList)->size()))));
	}
}

void SoftMixingMainMixer::closeLine($SoftMixingDataLine* line) {
	$synchronized(this->control_mutex) {
		$nc(this->openLinesList)->remove($of(line));
		$set(this, openLines, $fcast($SoftMixingDataLineArray, $nc(this->openLinesList)->toArray($$new($SoftMixingDataLineArray, $nc(this->openLinesList)->size()))));
		if ($nc(this->openLines)->length == 0) {
			if ($nc(this->mixer)->implicitOpen) {
				$nc(this->mixer)->close();
			}
		}
	}
}

$SoftMixingDataLineArray* SoftMixingMainMixer::getOpenLines() {
	$synchronized(this->control_mutex) {
		return this->openLines;
	}
}

void SoftMixingMainMixer::close() {
	$var($SoftMixingDataLineArray, openLines, this->openLines);
	for (int32_t i = 0; i < $nc(openLines)->length; ++i) {
		$nc(openLines->get(i))->close();
	}
}

SoftMixingMainMixer::SoftMixingMainMixer() {
}

$Class* SoftMixingMainMixer::load$($String* name, bool initialize) {
	$loadClass(SoftMixingMainMixer, name, initialize, &_SoftMixingMainMixer_ClassInfo_, allocate$SoftMixingMainMixer);
	return class$;
}

$Class* SoftMixingMainMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com