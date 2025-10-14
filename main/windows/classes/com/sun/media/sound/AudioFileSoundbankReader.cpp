#include <com/sun/media/sound/AudioFileSoundbankReader.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelByteBufferWavetable.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SimpleInstrument.h>
#include <com/sun/media/sound/SimpleSoundbank.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/List.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/spi/SoundbankReader.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelByteBufferWavetable = ::com::sun::media::sound::ModelByteBufferWavetable;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $SimpleInstrument = ::com::sun::media::sound::SimpleInstrument;
using $SimpleSoundbank = ::com::sun::media::sound::SimpleSoundbank;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $List = ::java::util::List;
using $Instrument = ::javax::sound::midi::Instrument;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankReader = ::javax::sound::midi::spi::SoundbankReader;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _AudioFileSoundbankReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AudioFileSoundbankReader::*)()>(&AudioFileSoundbankReader::init$))},
	{"getSoundbank", "(Ljava/net/URL;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/InputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, $method(static_cast<$Soundbank*(AudioFileSoundbankReader::*)($AudioInputStream*)>(&AudioFileSoundbankReader::getSoundbank)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/File;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{}
};

$ClassInfo _AudioFileSoundbankReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AudioFileSoundbankReader",
	"javax.sound.midi.spi.SoundbankReader",
	nullptr,
	nullptr,
	_AudioFileSoundbankReader_MethodInfo_
};

$Object* allocate$AudioFileSoundbankReader($Class* clazz) {
	return $of($alloc(AudioFileSoundbankReader));
}

void AudioFileSoundbankReader::init$() {
	$SoundbankReader::init$();
}

$Soundbank* AudioFileSoundbankReader::getSoundbank($URL* url) {
	try {
		$var($AudioInputStream, ais, $AudioSystem::getAudioInputStream(url));
		$var($Soundbank, sbk, getSoundbank(ais));
		$nc(ais)->close();
		return sbk;
	} catch ($UnsupportedAudioFileException&) {
		$var($UnsupportedAudioFileException, e, $catch());
		return nullptr;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$Soundbank* AudioFileSoundbankReader::getSoundbank($InputStream* stream) {
	$nc(stream)->mark(512);
	try {
		$var($AudioInputStream, ais, $AudioSystem::getAudioInputStream(stream));
		$var($Soundbank, sbk, getSoundbank(ais));
		if (sbk != nullptr) {
			return sbk;
		}
	} catch ($UnsupportedAudioFileException&) {
		$catch();
	} catch ($IOException&) {
		$catch();
	}
	stream->reset();
	return nullptr;
}

$Soundbank* AudioFileSoundbankReader::getSoundbank($AudioInputStream* ais) {
	try {
		$var($bytes, buffer, nullptr);
		if ($nc(ais)->getFrameLength() == -1) {
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			$var($bytes, buff, $new($bytes, 1024 - ($mod(1024, $nc($(ais->getFormat()))->getFrameSize()))));
			int32_t ret = 0;
			while ((ret = ais->read(buff)) != -1) {
				baos->write(buff, 0, ret);
			}
			ais->close();
			$assign(buffer, baos->toByteArray());
		} else {
			int64_t var$0 = ais->getFrameLength();
			$assign(buffer, $new($bytes, (int32_t)(var$0 * $nc($(ais->getFormat()))->getFrameSize())));
			$$new($DataInputStream, ais)->readFully(buffer);
		}
		$var($ModelByteBuffer, var$1, $new($ModelByteBuffer, buffer));
		$var($ModelByteBufferWavetable, osc, $new($ModelByteBufferWavetable, var$1, $($nc(ais)->getFormat()), (float)-4800));
		$var($ModelPerformer, performer, $new($ModelPerformer));
		$nc($(performer->getOscillators()))->add(osc);
		$var($SimpleSoundbank, sbk, $new($SimpleSoundbank));
		$var($SimpleInstrument, ins, $new($SimpleInstrument));
		ins->add(performer);
		sbk->addInstrument(ins);
		return sbk;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$Soundbank* AudioFileSoundbankReader::getSoundbank($File* file) {
	try {
		$var($AudioInputStream, ais, $AudioSystem::getAudioInputStream(file));
		$nc(ais)->close();
		$var($ModelByteBufferWavetable, osc, $new($ModelByteBufferWavetable, $$new($ModelByteBuffer, file, (int64_t)0, $nc(file)->length()), (float)-4800));
		$var($ModelPerformer, performer, $new($ModelPerformer));
		$nc($(performer->getOscillators()))->add(osc);
		$var($SimpleSoundbank, sbk, $new($SimpleSoundbank));
		$var($SimpleInstrument, ins, $new($SimpleInstrument));
		ins->add(performer);
		sbk->addInstrument(ins);
		return sbk;
	} catch ($UnsupportedAudioFileException&) {
		$var($UnsupportedAudioFileException, e1, $catch());
		return nullptr;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

AudioFileSoundbankReader::AudioFileSoundbankReader() {
}

$Class* AudioFileSoundbankReader::load$($String* name, bool initialize) {
	$loadClass(AudioFileSoundbankReader, name, initialize, &_AudioFileSoundbankReader_ClassInfo_, allocate$AudioFileSoundbankReader);
	return class$;
}

$Class* AudioFileSoundbankReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com