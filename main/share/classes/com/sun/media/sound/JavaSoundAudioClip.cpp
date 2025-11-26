#include <com/sun/media/sound/JavaSoundAudioClip.h>

#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/DataPusher.h>
#include <com/sun/media/sound/JavaSoundAudioClip$DirectBAOS.h>
#include <com/sun/media/sound/Printer.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/applet/AudioClip.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiFileFormat.h>
#include <javax/sound/midi/MidiSystem.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Sequencer.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

#undef CLIP_THRESHOLD
#undef LOOP_CONTINUOUSLY
#undef MINIMUM_PLAY_DELAY
#undef NOT_SPECIFIED
#undef STREAM_BUFFER_SIZE

using $AutoClosingClip = ::com::sun::media::sound::AutoClosingClip;
using $DataPusher = ::com::sun::media::sound::DataPusher;
using $JavaSoundAudioClip$DirectBAOS = ::com::sun::media::sound::JavaSoundAudioClip$DirectBAOS;
using $Printer = ::com::sun::media::sound::Printer;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $AudioClip = ::java::applet::AudioClip;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaEventListener = ::javax::sound::midi::MetaEventListener;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiFileFormat = ::javax::sound::midi::MidiFileFormat;
using $MidiSystem = ::javax::sound::midi::MidiSystem;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Sequence = ::javax::sound::midi::Sequence;
using $Sequencer = ::javax::sound::midi::Sequencer;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Clip = ::javax::sound::sampled::Clip;
using $DataLine = ::javax::sound::sampled::DataLine;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineListener = ::javax::sound::sampled::LineListener;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _JavaSoundAudioClip_FieldInfo_[] = {
	{"lastPlayCall", "J", nullptr, $PRIVATE, $field(JavaSoundAudioClip, lastPlayCall)},
	{"MINIMUM_PLAY_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavaSoundAudioClip, MINIMUM_PLAY_DELAY)},
	{"loadedAudio", "[B", nullptr, $PRIVATE, $field(JavaSoundAudioClip, loadedAudio)},
	{"loadedAudioByteLength", "I", nullptr, $PRIVATE, $field(JavaSoundAudioClip, loadedAudioByteLength)},
	{"loadedAudioFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(JavaSoundAudioClip, loadedAudioFormat)},
	{"clip", "Lcom/sun/media/sound/AutoClosingClip;", nullptr, $PRIVATE, $field(JavaSoundAudioClip, clip)},
	{"clipLooping", "Z", nullptr, $PRIVATE, $field(JavaSoundAudioClip, clipLooping)},
	{"datapusher", "Lcom/sun/media/sound/DataPusher;", nullptr, $PRIVATE, $field(JavaSoundAudioClip, datapusher)},
	{"sequencer", "Ljavax/sound/midi/Sequencer;", nullptr, $PRIVATE, $field(JavaSoundAudioClip, sequencer)},
	{"sequence", "Ljavax/sound/midi/Sequence;", nullptr, $PRIVATE, $field(JavaSoundAudioClip, sequence)},
	{"sequencerloop", "Z", nullptr, $PRIVATE, $field(JavaSoundAudioClip, sequencerloop)},
	{"success", "Z", nullptr, $PRIVATE | $VOLATILE, $field(JavaSoundAudioClip, success)},
	{"CLIP_THRESHOLD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavaSoundAudioClip, CLIP_THRESHOLD)},
	{"STREAM_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavaSoundAudioClip, STREAM_BUFFER_SIZE)},
	{}
};

$MethodInfo _JavaSoundAudioClip_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaSoundAudioClip::*)()>(&JavaSoundAudioClip::init$))},
	{"create", "(Ljava/net/URLConnection;)Lcom/sun/media/sound/JavaSoundAudioClip;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavaSoundAudioClip*(*)($URLConnection*)>(&JavaSoundAudioClip::create))},
	{"create", "(Ljava/net/URL;)Lcom/sun/media/sound/JavaSoundAudioClip;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavaSoundAudioClip*(*)($URL*)>(&JavaSoundAudioClip::create))},
	{"createClip", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaSoundAudioClip::*)()>(&JavaSoundAudioClip::createClip))},
	{"createSequencer", "(Ljava/io/BufferedInputStream;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaSoundAudioClip::*)($BufferedInputStream*)>(&JavaSoundAudioClip::createSequencer)), "java.io.IOException"},
	{"createSourceDataLine", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaSoundAudioClip::*)()>(&JavaSoundAudioClip::createSourceDataLine))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"init", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JavaSoundAudioClip::*)($InputStream*)>(&JavaSoundAudioClip::init)), "java.io.IOException"},
	{"loadAudioData", "(Ljavax/sound/sampled/AudioInputStream;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavaSoundAudioClip::*)($AudioInputStream*)>(&JavaSoundAudioClip::loadAudioData)), "java.io.IOException,javax.sound.sampled.UnsupportedAudioFileException"},
	{"loop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"meta", "(Ljavax/sound/midi/MetaMessage;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"play", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"readStream", "(Ljavax/sound/sampled/AudioInputStream;J)V", nullptr, $PRIVATE, $method(static_cast<void(JavaSoundAudioClip::*)($AudioInputStream*,int64_t)>(&JavaSoundAudioClip::readStream)), "java.io.IOException"},
	{"readStream", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JavaSoundAudioClip::*)($AudioInputStream*)>(&JavaSoundAudioClip::readStream)), "java.io.IOException"},
	{"startImpl", "(Z)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(JavaSoundAudioClip::*)(bool)>(&JavaSoundAudioClip::startImpl))},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _JavaSoundAudioClip_InnerClassesInfo_[] = {
	{"com.sun.media.sound.JavaSoundAudioClip$DirectBAOS", "com.sun.media.sound.JavaSoundAudioClip", "DirectBAOS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavaSoundAudioClip_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.JavaSoundAudioClip",
	"java.lang.Object",
	"java.applet.AudioClip,javax.sound.midi.MetaEventListener,javax.sound.sampled.LineListener",
	_JavaSoundAudioClip_FieldInfo_,
	_JavaSoundAudioClip_MethodInfo_,
	nullptr,
	nullptr,
	_JavaSoundAudioClip_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.JavaSoundAudioClip$DirectBAOS"
};

$Object* allocate$JavaSoundAudioClip($Class* clazz) {
	return $of($alloc(JavaSoundAudioClip));
}

int32_t JavaSoundAudioClip::hashCode() {
	 return this->$AudioClip::hashCode();
}

bool JavaSoundAudioClip::equals(Object$* arg0) {
	 return this->$AudioClip::equals(arg0);
}

$Object* JavaSoundAudioClip::clone() {
	 return this->$AudioClip::clone();
}

void JavaSoundAudioClip::init$() {
	this->lastPlayCall = 0;
	$set(this, loadedAudio, nullptr);
	this->loadedAudioByteLength = 0;
	$set(this, loadedAudioFormat, nullptr);
	$set(this, clip, nullptr);
	this->clipLooping = false;
	$set(this, datapusher, nullptr);
	$set(this, sequencer, nullptr);
	$set(this, sequence, nullptr);
	this->sequencerloop = false;
}

JavaSoundAudioClip* JavaSoundAudioClip::create($URLConnection* uc) {
	$init(JavaSoundAudioClip);
	$useLocalCurrentObjectStackCache();
	$var(JavaSoundAudioClip, clip, $new(JavaSoundAudioClip));
	try {
		clip->init($($nc(uc)->getInputStream()));
	} catch ($Exception& ignored) {
	}
	return clip;
}

JavaSoundAudioClip* JavaSoundAudioClip::create($URL* url) {
	$init(JavaSoundAudioClip);
	$useLocalCurrentObjectStackCache();
	$var(JavaSoundAudioClip, clip, $new(JavaSoundAudioClip));
	try {
		clip->init($($nc(url)->openStream()));
	} catch ($Exception& ignored) {
	}
	return clip;
}

void JavaSoundAudioClip::init($InputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedInputStream, bis, $new($BufferedInputStream, in, JavaSoundAudioClip::STREAM_BUFFER_SIZE));
	bis->mark(JavaSoundAudioClip::STREAM_BUFFER_SIZE);
	try {
		$var($AudioInputStream, as, $AudioSystem::getAudioInputStream(static_cast<$InputStream*>(bis)));
		this->success = loadAudioData(as);
		if (this->success) {
			this->success = false;
			if (this->loadedAudioByteLength < JavaSoundAudioClip::CLIP_THRESHOLD) {
				this->success = createClip();
			}
			if (!this->success) {
				this->success = createSourceDataLine();
			}
		}
	} catch ($UnsupportedAudioFileException& e) {
		try {
			$var($MidiFileFormat, mff, $MidiSystem::getMidiFileFormat(static_cast<$InputStream*>(bis)));
			this->success = createSequencer(bis);
		} catch ($InvalidMidiDataException& e1) {
			this->success = false;
		}
	}
}

void JavaSoundAudioClip::play() {
	$synchronized(this) {
		if (!this->success) {
			return;
		}
		startImpl(false);
	}
}

void JavaSoundAudioClip::loop() {
	$synchronized(this) {
		if (!this->success) {
			return;
		}
		startImpl(true);
	}
}

void JavaSoundAudioClip::startImpl(bool loop) {
	$synchronized(this) {
		int64_t currentTime = $System::currentTimeMillis();
		int64_t diff = currentTime - this->lastPlayCall;
		if (diff < JavaSoundAudioClip::MINIMUM_PLAY_DELAY) {
			return;
		}
		this->lastPlayCall = currentTime;
		try {
			if (this->clip != nullptr) {
				$nc(this->clip)->setAutoClosing(false);
				{
					$var($Throwable, var$0, nullptr);
					try {
						if (!$nc(this->clip)->isOpen()) {
							$nc(this->clip)->open(this->loadedAudioFormat, this->loadedAudio, 0, this->loadedAudioByteLength);
						} else {
							$nc(this->clip)->flush();
							if (loop != this->clipLooping) {
								$nc(this->clip)->stop();
							}
						}
						$nc(this->clip)->setFramePosition(0);
						if (loop) {
							$nc(this->clip)->loop($Clip::LOOP_CONTINUOUSLY);
						} else {
							$nc(this->clip)->start();
						}
						this->clipLooping = loop;
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$nc(this->clip)->setAutoClosing(true);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			} else if (this->datapusher != nullptr) {
				$nc(this->datapusher)->start(loop);
			} else if (this->sequencer != nullptr) {
				this->sequencerloop = loop;
				if ($nc(this->sequencer)->isRunning()) {
					$nc(this->sequencer)->setMicrosecondPosition(0);
				}
				if (!$nc(this->sequencer)->isOpen()) {
					try {
						$nc(this->sequencer)->open();
						$nc(this->sequencer)->setSequence(this->sequence);
					} catch ($InvalidMidiDataException& e1) {
						$init($Printer);
						if ($Printer::err$) {
							e1->printStackTrace();
						}
					} catch ($MidiUnavailableException& e2) {
						$init($Printer);
						if ($Printer::err$) {
							e2->printStackTrace();
						}
					}
				}
				$nc(this->sequencer)->addMetaEventListener(this);
				try {
					$nc(this->sequencer)->start();
				} catch ($Exception& e) {
					$init($Printer);
					if ($Printer::err$) {
						e->printStackTrace();
					}
				}
			}
		} catch ($Exception& e) {
			$init($Printer);
			if ($Printer::err$) {
				e->printStackTrace();
			}
		}
	}
}

void JavaSoundAudioClip::stop() {
	$synchronized(this) {
		if (!this->success) {
			return;
		}
		this->lastPlayCall = 0;
		if (this->clip != nullptr) {
			try {
				$nc(this->clip)->flush();
			} catch ($Exception& e1) {
				$init($Printer);
				if ($Printer::err$) {
					e1->printStackTrace();
				}
			}
			try {
				$nc(this->clip)->stop();
			} catch ($Exception& e2) {
				$init($Printer);
				if ($Printer::err$) {
					e2->printStackTrace();
				}
			}
		} else if (this->datapusher != nullptr) {
			$nc(this->datapusher)->stop();
		} else if (this->sequencer != nullptr) {
			try {
				this->sequencerloop = false;
				$nc(this->sequencer)->removeMetaEventListener(this);
				$nc(this->sequencer)->stop();
			} catch ($Exception& e3) {
				$init($Printer);
				if ($Printer::err$) {
					e3->printStackTrace();
				}
			}
			try {
				$nc(this->sequencer)->close();
			} catch ($Exception& e4) {
				$init($Printer);
				if ($Printer::err$) {
					e4->printStackTrace();
				}
			}
		}
	}
}

void JavaSoundAudioClip::update($LineEvent* event) {
	$synchronized(this) {
	}
}

void JavaSoundAudioClip::meta($MetaMessage* message) {
	$synchronized(this) {
		if ($nc(message)->getType() == 47) {
			if (this->sequencerloop) {
				$nc(this->sequencer)->setMicrosecondPosition(0);
				loop();
			} else {
				stop();
			}
		}
	}
}

$String* JavaSoundAudioClip::toString() {
	return $of(this)->getClass()->toString();
}

void JavaSoundAudioClip::finalize() {
	if (this->clip != nullptr) {
		$nc(this->clip)->close();
	}
	if (this->datapusher != nullptr) {
		$nc(this->datapusher)->close();
	}
	if (this->sequencer != nullptr) {
		$nc(this->sequencer)->close();
	}
}

bool JavaSoundAudioClip::loadAudioData($AudioInputStream* as$renamed) {
	$var($AudioInputStream, as, as$renamed);
	$assign(as, $Toolkit::getPCMConvertedAudioInputStream(as));
	if (as == nullptr) {
		return false;
	}
	$set(this, loadedAudioFormat, $nc(as)->getFormat());
	int64_t frameLen = as->getFrameLength();
	int32_t frameSize = $nc(this->loadedAudioFormat)->getFrameSize();
	int64_t byteLen = $AudioSystem::NOT_SPECIFIED;
	if (frameLen != $AudioSystem::NOT_SPECIFIED && frameLen > 0 && frameSize != $AudioSystem::NOT_SPECIFIED && frameSize > 0) {
		byteLen = frameLen * frameSize;
	}
	if (byteLen != $AudioSystem::NOT_SPECIFIED) {
		readStream(as, byteLen);
	} else {
		readStream(as);
	}
	return true;
}

void JavaSoundAudioClip::readStream($AudioInputStream* as, int64_t byteLen) {
	int32_t intLen = 0;
	if (byteLen > 0x7FFFFFFF) {
		intLen = 0x7FFFFFFF;
	} else {
		intLen = (int32_t)byteLen;
	}
	$set(this, loadedAudio, $new($bytes, intLen));
	this->loadedAudioByteLength = 0;
	while (true) {
		int32_t bytesRead = $nc(as)->read(this->loadedAudio, this->loadedAudioByteLength, intLen - this->loadedAudioByteLength);
		if (bytesRead <= 0) {
			as->close();
			break;
		}
		this->loadedAudioByteLength += bytesRead;
	}
}

void JavaSoundAudioClip::readStream($AudioInputStream* as) {
	$useLocalCurrentObjectStackCache();
	$var($JavaSoundAudioClip$DirectBAOS, baos, $new($JavaSoundAudioClip$DirectBAOS));
	int32_t totalBytesRead = 0;
	{
		$var($AudioInputStream, twrVar0$, as);
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					totalBytesRead = (int32_t)$nc(as)->transferTo(baos);
				} catch ($Throwable& t$) {
					if (twrVar0$ != nullptr) {
						try {
							twrVar0$->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (twrVar0$ != nullptr) {
					twrVar0$->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$set(this, loadedAudio, baos->getInternalBuffer());
	this->loadedAudioByteLength = totalBytesRead;
}

bool JavaSoundAudioClip::createClip() {
	$useLocalCurrentObjectStackCache();
	try {
		$load($Clip);
		$var($DataLine$Info, info, $new($DataLine$Info, $Clip::class$, this->loadedAudioFormat));
		if (!($AudioSystem::isLineSupported(info))) {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"Clip not supported: "_s, this->loadedAudioFormat}));
			}
			return false;
		}
		$var($Object, line, $AudioSystem::getLine(info));
		if (!($instanceOf($AutoClosingClip, line))) {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"Clip is not auto closing!"_s, this->clip}));
			}
			return false;
		}
		$set(this, clip, $cast($AutoClosingClip, line));
		$nc(this->clip)->setAutoClosing(true);
	} catch ($Exception& e) {
		$init($Printer);
		if ($Printer::err$) {
			e->printStackTrace();
		}
		return false;
	}
	if (this->clip == nullptr) {
		return false;
	}
	return true;
}

bool JavaSoundAudioClip::createSourceDataLine() {
	$useLocalCurrentObjectStackCache();
	try {
		$load($SourceDataLine);
		$var($DataLine$Info, info, $new($DataLine$Info, $SourceDataLine::class$, this->loadedAudioFormat));
		if (!($AudioSystem::isLineSupported(info))) {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"Line not supported: "_s, this->loadedAudioFormat}));
			}
			return false;
		}
		$var($SourceDataLine, source, $cast($SourceDataLine, $AudioSystem::getLine(info)));
		$set(this, datapusher, $new($DataPusher, source, this->loadedAudioFormat, this->loadedAudio, this->loadedAudioByteLength));
	} catch ($Exception& e) {
		$init($Printer);
		if ($Printer::err$) {
			e->printStackTrace();
		}
		return false;
	}
	if (this->datapusher == nullptr) {
		return false;
	}
	return true;
}

bool JavaSoundAudioClip::createSequencer($BufferedInputStream* in) {
	try {
		$set(this, sequencer, $MidiSystem::getSequencer());
	} catch ($MidiUnavailableException& me) {
		$init($Printer);
		if ($Printer::err$) {
			me->printStackTrace();
		}
		return false;
	}
	if (this->sequencer == nullptr) {
		return false;
	}
	try {
		$set(this, sequence, $MidiSystem::getSequence(static_cast<$InputStream*>(in)));
		if (this->sequence == nullptr) {
			return false;
		}
	} catch ($InvalidMidiDataException& e) {
		$init($Printer);
		if ($Printer::err$) {
			e->printStackTrace();
		}
		return false;
	}
	return true;
}

JavaSoundAudioClip::JavaSoundAudioClip() {
}

$Class* JavaSoundAudioClip::load$($String* name, bool initialize) {
	$loadClass(JavaSoundAudioClip, name, initialize, &_JavaSoundAudioClip_ClassInfo_, allocate$JavaSoundAudioClip);
	return class$;
}

$Class* JavaSoundAudioClip::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com