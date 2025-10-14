#include <com/sun/media/sound/SoftMixingMixer.h>

#include <com/sun/media/sound/SoftAudioPusher.h>
#include <com/sun/media/sound/SoftMixingClip.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <com/sun/media/sound/SoftMixingMainMixer.h>
#include <com/sun/media/sound/SoftMixingMixer$Info.h>
#include <com/sun/media/sound/SoftMixingMixerProvider.h>
#include <com/sun/media/sound/SoftMixingSourceDataLine.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/DataLine.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

#undef CLOSE
#undef INFO_DESCRIPTION
#undef INFO_NAME
#undef INFO_VENDOR
#undef INFO_VERSION
#undef NOT_SPECIFIED
#undef OPEN
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $SoftMixingDataLineArray = $Array<::com::sun::media::sound::SoftMixingDataLine>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $LineArray = $Array<::javax::sound::sampled::Line>;
using $LineListenerArray = $Array<::javax::sound::sampled::LineListener>;
using $SoftAudioPusher = ::com::sun::media::sound::SoftAudioPusher;
using $SoftMixingClip = ::com::sun::media::sound::SoftMixingClip;
using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $SoftMixingMainMixer = ::com::sun::media::sound::SoftMixingMainMixer;
using $SoftMixingMixer$Info = ::com::sun::media::sound::SoftMixingMixer$Info;
using $SoftMixingMixerProvider = ::com::sun::media::sound::SoftMixingMixerProvider;
using $SoftMixingSourceDataLine = ::com::sun::media::sound::SoftMixingSourceDataLine;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Clip = ::javax::sound::sampled::Clip;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine = ::javax::sound::sampled::DataLine;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;
using $LineListener = ::javax::sound::sampled::LineListener;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingMixer_FieldInfo_[] = {
	{"INFO_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixer, INFO_NAME)},
	{"INFO_VENDOR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixer, INFO_VENDOR)},
	{"INFO_DESCRIPTION", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixer, INFO_DESCRIPTION)},
	{"INFO_VERSION", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixer, INFO_VERSION)},
	{"info", "Ljavax/sound/sampled/Mixer$Info;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixer, info)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $FINAL, $field(SoftMixingMixer, control_mutex)},
	{"implicitOpen", "Z", nullptr, 0, $field(SoftMixingMixer, implicitOpen)},
	{"open", "Z", nullptr, $PRIVATE, $field(SoftMixingMixer, open$)},
	{"mainmixer", "Lcom/sun/media/sound/SoftMixingMainMixer;", nullptr, $PRIVATE, $field(SoftMixingMixer, mainmixer)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftMixingMixer, format)},
	{"sourceDataLine", "Ljavax/sound/sampled/SourceDataLine;", nullptr, $PRIVATE, $field(SoftMixingMixer, sourceDataLine)},
	{"pusher", "Lcom/sun/media/sound/SoftAudioPusher;", nullptr, $PRIVATE, $field(SoftMixingMixer, pusher)},
	{"pusher_stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $field(SoftMixingMixer, pusher_stream)},
	{"controlrate", "F", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMixer, controlrate)},
	{"latency", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SoftMixingMixer, latency)},
	{"jitter_correction", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SoftMixingMixer, jitter_correction)},
	{"listeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/sound/sampled/LineListener;>;", $PRIVATE | $FINAL, $field(SoftMixingMixer, listeners)},
	{"sourceLineInfo", "[Ljavax/sound/sampled/Line$Info;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingMixer, sourceLineInfo)},
	{}
};

$MethodInfo _SoftMixingMixer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMixer::*)()>(&SoftMixingMixer::init$))},
	{"addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC},
	{"getControlRate", "()F", nullptr, 0, $method(static_cast<float(SoftMixingMixer::*)()>(&SoftMixingMixer::getControlRate))},
	{"getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $method(static_cast<$AudioFormat*(SoftMixingMixer::*)()>(&SoftMixingMixer::getFormat))},
	{"getLatency", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SoftMixingMixer::*)()>(&SoftMixingMixer::getLatency))},
	{"getLine", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line;", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC},
	{"getMainMixer", "()Lcom/sun/media/sound/SoftMixingMainMixer;", nullptr, 0, $method(static_cast<$SoftMixingMainMixer*(SoftMixingMixer::*)()>(&SoftMixingMixer::getMainMixer))},
	{"getMaxLines", "(Ljavax/sound/sampled/Line$Info;)I", nullptr, $PUBLIC},
	{"getMixerInfo", "()Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC},
	{"getSourceLineInfo", "()[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC},
	{"getSourceLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC},
	{"getSourceLines", "()[Ljavax/sound/sampled/Line;", nullptr, $PUBLIC},
	{"getTargetLineInfo", "()[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC},
	{"getTargetLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC},
	{"getTargetLines", "()[Ljavax/sound/sampled/Line;", nullptr, $PUBLIC},
	{"isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC},
	{"isLineSupported", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isSynchronizationSupported", "([Ljavax/sound/sampled/Line;Z)Z", nullptr, $PUBLIC},
	{"open", "()V", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/SourceDataLine;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMixer::*)($SourceDataLine*)>(&SoftMixingMixer::open)), "javax.sound.sampled.LineUnavailableException"},
	{"openStream", "(Ljavax/sound/sampled/AudioFormat;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $method(static_cast<$AudioInputStream*(SoftMixingMixer::*)($AudioFormat*)>(&SoftMixingMixer::openStream)), "javax.sound.sampled.LineUnavailableException"},
	{"removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC},
	{"sendEvent", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingMixer::*)($LineEvent*)>(&SoftMixingMixer::sendEvent))},
	{"synchronize", "([Ljavax/sound/sampled/Line;Z)V", nullptr, $PUBLIC},
	{"unsynchronize", "([Ljavax/sound/sampled/Line;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingMixer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingMixer$Info", "com.sun.media.sound.SoftMixingMixer", "Info", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftMixingMixer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingMixer",
	"java.lang.Object",
	"javax.sound.sampled.Mixer",
	_SoftMixingMixer_FieldInfo_,
	_SoftMixingMixer_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingMixer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingMixer$Info"
};

$Object* allocate$SoftMixingMixer($Class* clazz) {
	return $of($alloc(SoftMixingMixer));
}

$String* SoftMixingMixer::INFO_NAME = nullptr;
$String* SoftMixingMixer::INFO_VENDOR = nullptr;
$String* SoftMixingMixer::INFO_DESCRIPTION = nullptr;
$String* SoftMixingMixer::INFO_VERSION = nullptr;
$Mixer$Info* SoftMixingMixer::info = nullptr;

void SoftMixingMixer::init$() {
	$set(this, control_mutex, this);
	this->implicitOpen = false;
	this->open$ = false;
	$set(this, mainmixer, nullptr);
	$set(this, format, $new($AudioFormat, (float)0x0000AC44, 16, 2, true, false));
	$set(this, sourceDataLine, nullptr);
	$set(this, pusher, nullptr);
	$set(this, pusher_stream, nullptr);
	this->controlrate = 147.0f;
	$set(this, listeners, $new($ArrayList));
	$set(this, sourceLineInfo, $new($Line$InfoArray, 2));
	$var($ArrayList, formats, $new($ArrayList));
	for (int32_t channels = 1; channels <= 2; ++channels) {
		$init($AudioFormat$Encoding);
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)$AudioSystem::NOT_SPECIFIED, 8, channels, channels, (float)$AudioSystem::NOT_SPECIFIED, false));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)$AudioSystem::NOT_SPECIFIED, 8, channels, channels, (float)$AudioSystem::NOT_SPECIFIED, false));
		for (int32_t bits = 16; bits < 32; bits += 8) {
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, false));
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, false));
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, true));
			formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)$AudioSystem::NOT_SPECIFIED, bits, channels, channels * bits / 8, (float)$AudioSystem::NOT_SPECIFIED, true));
		}
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 32, channels, channels * 4, (float)$AudioSystem::NOT_SPECIFIED, false));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 32, channels, channels * 4, (float)$AudioSystem::NOT_SPECIFIED, true));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 64, channels, channels * 8, (float)$AudioSystem::NOT_SPECIFIED, false));
		formats->add($$new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)$AudioSystem::NOT_SPECIFIED, 64, channels, channels * 8, (float)$AudioSystem::NOT_SPECIFIED, true));
	}
	$var($AudioFormatArray, formats_array, $fcast($AudioFormatArray, formats->toArray($$new($AudioFormatArray, formats->size()))));
	$load($SourceDataLine);
	$nc(this->sourceLineInfo)->set(0, $$new($DataLine$Info, $SourceDataLine::class$, formats_array, $AudioSystem::NOT_SPECIFIED, $AudioSystem::NOT_SPECIFIED));
	$load($Clip);
	$nc(this->sourceLineInfo)->set(1, $$new($DataLine$Info, $Clip::class$, formats_array, $AudioSystem::NOT_SPECIFIED, $AudioSystem::NOT_SPECIFIED));
}

$Line* SoftMixingMixer::getLine($Line$Info* info) {
	if (!isLineSupported(info)) {
		$throwNew($IllegalArgumentException, $$str({"Line unsupported: "_s, info}));
	}
	$load($SourceDataLine);
	if ($nc(info)->getLineClass() == $SourceDataLine::class$) {
		return static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>($new($SoftMixingSourceDataLine, this, $cast($DataLine$Info, info)))));
	}
	$load($Clip);
	if ($nc(info)->getLineClass() == $Clip::class$) {
		return static_cast<$Line*>(static_cast<$DataLine*>(static_cast<$SoftMixingDataLine*>($new($SoftMixingClip, this, $cast($DataLine$Info, info)))));
	}
	$throwNew($IllegalArgumentException, $$str({"Line unsupported: "_s, info}));
}

int32_t SoftMixingMixer::getMaxLines($Line$Info* info) {
	$load($SourceDataLine);
	if ($nc(info)->getLineClass() == $SourceDataLine::class$) {
		return $AudioSystem::NOT_SPECIFIED;
	}
	$load($Clip);
	if ($nc(info)->getLineClass() == $Clip::class$) {
		return $AudioSystem::NOT_SPECIFIED;
	}
	return 0;
}

$Mixer$Info* SoftMixingMixer::getMixerInfo() {
	return SoftMixingMixer::info;
}

$Line$InfoArray* SoftMixingMixer::getSourceLineInfo() {
	$var($Line$InfoArray, localArray, $new($Line$InfoArray, $nc(this->sourceLineInfo)->length));
	$System::arraycopy(this->sourceLineInfo, 0, localArray, 0, $nc(this->sourceLineInfo)->length);
	return localArray;
}

$Line$InfoArray* SoftMixingMixer::getSourceLineInfo($Line$Info* info) {
	int32_t i = 0;
	$var($ArrayList, infos, $new($ArrayList));
	for (i = 0; i < $nc(this->sourceLineInfo)->length; ++i) {
		if ($nc(info)->matches($nc(this->sourceLineInfo)->get(i))) {
			infos->add($nc(this->sourceLineInfo)->get(i));
		}
	}
	return $fcast($Line$InfoArray, infos->toArray($$new($Line$InfoArray, infos->size())));
}

$LineArray* SoftMixingMixer::getSourceLines() {
	$var($LineArray, localLines, nullptr);
	$synchronized(this->control_mutex) {
		if (this->mainmixer == nullptr) {
			return $new($LineArray, 0);
		}
		$var($SoftMixingDataLineArray, sourceLines, $nc(this->mainmixer)->getOpenLines());
		$assign(localLines, $new($LineArray, $nc(sourceLines)->length));
		for (int32_t i = 0; i < localLines->length; ++i) {
			localLines->set(i, sourceLines->get(i));
		}
	}
	return localLines;
}

$Line$InfoArray* SoftMixingMixer::getTargetLineInfo() {
	return $new($Line$InfoArray, 0);
}

$Line$InfoArray* SoftMixingMixer::getTargetLineInfo($Line$Info* info) {
	return $new($Line$InfoArray, 0);
}

$LineArray* SoftMixingMixer::getTargetLines() {
	return $new($LineArray, 0);
}

bool SoftMixingMixer::isLineSupported($Line$Info* info) {
	if (info != nullptr) {
		for (int32_t i = 0; i < $nc(this->sourceLineInfo)->length; ++i) {
			if (info->matches($nc(this->sourceLineInfo)->get(i))) {
				return true;
			}
		}
	}
	return false;
}

bool SoftMixingMixer::isSynchronizationSupported($LineArray* lines, bool maintainSync) {
	return false;
}

void SoftMixingMixer::synchronize($LineArray* lines, bool maintainSync) {
	$throwNew($IllegalArgumentException, "Synchronization not supported by this mixer."_s);
}

void SoftMixingMixer::unsynchronize($LineArray* lines) {
	$throwNew($IllegalArgumentException, "Synchronization not supported by this mixer."_s);
}

void SoftMixingMixer::addLineListener($LineListener* listener) {
	$synchronized(this->control_mutex) {
		$nc(this->listeners)->add(listener);
	}
}

void SoftMixingMixer::sendEvent($LineEvent* event) {
	if ($nc(this->listeners)->size() == 0) {
		return;
	}
	$var($LineListenerArray, listener_array, $fcast($LineListenerArray, $nc(this->listeners)->toArray($$new($LineListenerArray, $nc(this->listeners)->size()))));
	{
		$var($LineListenerArray, arr$, listener_array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LineListener, listener, arr$->get(i$));
			{
				$nc(listener)->update(event);
			}
		}
	}
}

void SoftMixingMixer::close() {
	if (!isOpen()) {
		return;
	}
	$init($LineEvent$Type);
	sendEvent($$new($LineEvent, this, $LineEvent$Type::CLOSE, $AudioSystem::NOT_SPECIFIED));
	$var($SoftAudioPusher, pusher_to_be_closed, nullptr);
	$var($AudioInputStream, pusher_stream_to_be_closed, nullptr);
	$synchronized(this->control_mutex) {
		if (this->pusher != nullptr) {
			$assign(pusher_to_be_closed, this->pusher);
			$assign(pusher_stream_to_be_closed, this->pusher_stream);
			$set(this, pusher, nullptr);
			$set(this, pusher_stream, nullptr);
		}
	}
	if (pusher_to_be_closed != nullptr) {
		pusher_to_be_closed->stop();
		try {
			$nc(pusher_stream_to_be_closed)->close();
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			e->printStackTrace();
		}
	}
	$synchronized(this->control_mutex) {
		if (this->mainmixer != nullptr) {
			$nc(this->mainmixer)->close();
		}
		this->open$ = false;
		if (this->sourceDataLine != nullptr) {
			$nc(this->sourceDataLine)->drain();
			$nc(this->sourceDataLine)->close();
			$set(this, sourceDataLine, nullptr);
		}
	}
}

$Control* SoftMixingMixer::getControl($Control$Type* control) {
	$throwNew($IllegalArgumentException, $$str({"Unsupported control type : "_s, control}));
	$shouldNotReachHere();
}

$ControlArray* SoftMixingMixer::getControls() {
	return $new($ControlArray, 0);
}

$Line$Info* SoftMixingMixer::getLineInfo() {
	$load($Mixer);
	return $new($Line$Info, $Mixer::class$);
}

bool SoftMixingMixer::isControlSupported($Control$Type* control) {
	return false;
}

bool SoftMixingMixer::isOpen() {
	$synchronized(this->control_mutex) {
		return this->open$;
	}
}

void SoftMixingMixer::open() {
	if (isOpen()) {
		this->implicitOpen = false;
		return;
	}
	open(nullptr);
}

void SoftMixingMixer::open($SourceDataLine* line$renamed) {
	$var($SourceDataLine, line, line$renamed);
	if (isOpen()) {
		this->implicitOpen = false;
		return;
	}
	$synchronized(this->control_mutex) {
		try {
			if (line != nullptr) {
				$set(this, format, line->getFormat());
			}
			$var($AudioInputStream, ais, openStream($(getFormat())));
			if (line == nullptr) {
				$init($SoftMixingMixerProvider);
				$synchronized($SoftMixingMixerProvider::mutex) {
					$assignStatic($SoftMixingMixerProvider::lockthread, $Thread::currentThread());
				}
				{
					$var($Throwable, var$0, nullptr);
					try {
						$var($Mixer, defaultmixer, $AudioSystem::getMixer(nullptr));
						if (defaultmixer != nullptr) {
							$var($DataLine$Info, idealinfo, nullptr);
							$var($AudioFormat, idealformat, nullptr);
							$var($Line$InfoArray, lineinfos, defaultmixer->getSourceLineInfo());
							bool idealFound$break = false;
							for (int32_t i = 0; i < $nc(lineinfos)->length; ++i) {
								$load($SourceDataLine);
								if ($nc(lineinfos->get(i))->getLineClass() == $SourceDataLine::class$) {
									$var($DataLine$Info, info, $cast($DataLine$Info, lineinfos->get(i)));
									$var($AudioFormatArray, formats, $nc(info)->getFormats());
									for (int32_t j = 0; j < $nc(formats)->length; ++j) {
										$var($AudioFormat, format, formats->get(j));
										bool var$1 = $nc(format)->getChannels() == 2;
										if (var$1 || $nc(format)->getChannels() == $AudioSystem::NOT_SPECIFIED) {
											$init($AudioFormat$Encoding);
											bool var$2 = $nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
											if (var$2 || $nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
												bool var$3 = format->getSampleRate() == $AudioSystem::NOT_SPECIFIED;
												if (var$3 || format->getSampleRate() == 48000.0) {
													bool var$4 = format->getSampleSizeInBits() == $AudioSystem::NOT_SPECIFIED;
													if (var$4 || format->getSampleSizeInBits() == 16) {
														$assign(idealinfo, info);
														int32_t ideal_channels = format->getChannels();
														bool ideal_signed = $nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
														float ideal_rate = format->getSampleRate();
														bool ideal_endian = format->isBigEndian();
														int32_t ideal_bits = format->getSampleSizeInBits();
														if (ideal_bits == $AudioSystem::NOT_SPECIFIED) {
															ideal_bits = 16;
														}
														if (ideal_channels == $AudioSystem::NOT_SPECIFIED) {
															ideal_channels = 2;
														}
														if (ideal_rate == $AudioSystem::NOT_SPECIFIED) {
															ideal_rate = (float)0x0000BB80;
														}
														$assign(idealformat, $new($AudioFormat, ideal_rate, ideal_bits, ideal_channels, ideal_signed, ideal_endian));
														idealFound$break = true;
														break;
													}
												}
											}
										}
									}
									if (idealFound$break) {
										break;
									}
								}
							}
							if (idealformat != nullptr) {
								$set(this, format, idealformat);
								$assign(line, $cast($SourceDataLine, defaultmixer->getLine(idealinfo)));
							}
						}
						if (line == nullptr) {
							$assign(line, $AudioSystem::getSourceDataLine(this->format));
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						$synchronized($SoftMixingMixerProvider::mutex) {
							$assignStatic($SoftMixingMixerProvider::lockthread, nullptr);
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				if (line == nullptr) {
					$throwNew($IllegalArgumentException, $$str({"No line matching "_s, $($nc(SoftMixingMixer::info)->toString()), " is supported."_s}));
				}
			}
			double latency = (double)this->latency;
			if (!$nc(line)->isOpen()) {
				int32_t var$5 = $nc($(getFormat()))->getFrameSize();
				int32_t bufferSize = var$5 * $cast(int32_t, ($nc($(getFormat()))->getFrameRate() * (latency / 1000000.0f)));
				line->open($(getFormat()), bufferSize);
				$set(this, sourceDataLine, line);
			}
			if (!$nc(line)->isActive()) {
				line->start();
			}
			int32_t controlbuffersize = 512;
			try {
				controlbuffersize = $nc(ais)->available();
			} catch ($IOException&) {
				$catch();
			}
			int32_t buffersize = $nc(line)->getBufferSize();
			buffersize -= $mod(buffersize, controlbuffersize);
			if (buffersize < 3 * controlbuffersize) {
				buffersize = 3 * controlbuffersize;
			}
			$set(this, pusher, $new($SoftAudioPusher, line, ais, controlbuffersize));
			$set(this, pusher_stream, ais);
			$nc(this->pusher)->start();
		} catch ($LineUnavailableException&) {
			$var($LineUnavailableException, e, $catch());
			if (isOpen()) {
				close();
			}
			$throwNew($LineUnavailableException, $(e->toString()));
		}
	}
}

$AudioInputStream* SoftMixingMixer::openStream($AudioFormat* targetFormat) {
	if (isOpen()) {
		$throwNew($LineUnavailableException, "Mixer is already open"_s);
	}
	$synchronized(this->control_mutex) {
		this->open$ = true;
		this->implicitOpen = false;
		if (targetFormat != nullptr) {
			$set(this, format, targetFormat);
		}
		$set(this, mainmixer, $new($SoftMixingMainMixer, this));
		$init($LineEvent$Type);
		sendEvent($$new($LineEvent, this, $LineEvent$Type::OPEN, $AudioSystem::NOT_SPECIFIED));
		return $nc(this->mainmixer)->getInputStream();
	}
}

void SoftMixingMixer::removeLineListener($LineListener* listener) {
	$synchronized(this->control_mutex) {
		$nc(this->listeners)->remove($of(listener));
	}
}

int64_t SoftMixingMixer::getLatency() {
	$synchronized(this->control_mutex) {
		return this->latency;
	}
}

$AudioFormat* SoftMixingMixer::getFormat() {
	$synchronized(this->control_mutex) {
		return this->format;
	}
}

float SoftMixingMixer::getControlRate() {
	return this->controlrate;
}

$SoftMixingMainMixer* SoftMixingMixer::getMainMixer() {
	if (!isOpen()) {
		return nullptr;
	}
	return this->mainmixer;
}

void clinit$SoftMixingMixer($Class* class$) {
	$assignStatic(SoftMixingMixer::INFO_NAME, "Gervill Sound Mixer"_s);
	$assignStatic(SoftMixingMixer::INFO_VENDOR, "OpenJDK Proposal"_s);
	$assignStatic(SoftMixingMixer::INFO_DESCRIPTION, "Software Sound Mixer"_s);
	$assignStatic(SoftMixingMixer::INFO_VERSION, "1.0"_s);
	$assignStatic(SoftMixingMixer::info, $new($SoftMixingMixer$Info));
}

SoftMixingMixer::SoftMixingMixer() {
}

$Class* SoftMixingMixer::load$($String* name, bool initialize) {
	$loadClass(SoftMixingMixer, name, initialize, &_SoftMixingMixer_ClassInfo_, clinit$SoftMixingMixer, allocate$SoftMixingMixer);
	return class$;
}

$Class* SoftMixingMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com