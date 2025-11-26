#include <com/sun/media/sound/SF2SoundbankReader.h>

#include <com/sun/media/sound/RIFFInvalidFormatException.h>
#include <com/sun/media/sound/SF2Soundbank.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/spi/SoundbankReader.h>
#include <jcpp.h>

using $RIFFInvalidFormatException = ::com::sun::media::sound::RIFFInvalidFormatException;
using $SF2Soundbank = ::com::sun::media::sound::SF2Soundbank;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankReader = ::javax::sound::midi::spi::SoundbankReader;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SF2SoundbankReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2SoundbankReader::*)()>(&SF2SoundbankReader::init$))},
	{"getSoundbank", "(Ljava/net/URL;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/InputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/File;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{}
};

$ClassInfo _SF2SoundbankReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2SoundbankReader",
	"javax.sound.midi.spi.SoundbankReader",
	nullptr,
	nullptr,
	_SF2SoundbankReader_MethodInfo_
};

$Object* allocate$SF2SoundbankReader($Class* clazz) {
	return $of($alloc(SF2SoundbankReader));
}

void SF2SoundbankReader::init$() {
	$SoundbankReader::init$();
}

$Soundbank* SF2SoundbankReader::getSoundbank($URL* url) {
	try {
		return $new($SF2Soundbank, url);
	} catch ($RIFFInvalidFormatException& e) {
		return nullptr;
	} catch ($IOException& ioe) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Soundbank* SF2SoundbankReader::getSoundbank($InputStream* stream) {
	try {
		$nc(stream)->mark(512);
		return $new($SF2Soundbank, stream);
	} catch ($RIFFInvalidFormatException& e) {
		$nc(stream)->reset();
		return nullptr;
	}
	$shouldNotReachHere();
}

$Soundbank* SF2SoundbankReader::getSoundbank($File* file) {
	try {
		return $new($SF2Soundbank, file);
	} catch ($RIFFInvalidFormatException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

SF2SoundbankReader::SF2SoundbankReader() {
}

$Class* SF2SoundbankReader::load$($String* name, bool initialize) {
	$loadClass(SF2SoundbankReader, name, initialize, &_SF2SoundbankReader_ClassInfo_, allocate$SF2SoundbankReader);
	return class$;
}

$Class* SF2SoundbankReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com