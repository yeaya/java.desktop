#include <com/sun/media/sound/DLSSoundbankReader.h>

#include <com/sun/media/sound/DLSSoundbank.h>
#include <com/sun/media/sound/RIFFInvalidFormatException.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/spi/SoundbankReader.h>
#include <jcpp.h>

using $DLSSoundbank = ::com::sun::media::sound::DLSSoundbank;
using $RIFFInvalidFormatException = ::com::sun::media::sound::RIFFInvalidFormatException;
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

$MethodInfo _DLSSoundbankReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbankReader::*)()>(&DLSSoundbankReader::init$))},
	{"getSoundbank", "(Ljava/net/URL;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/InputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/File;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{}
};

$ClassInfo _DLSSoundbankReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSSoundbankReader",
	"javax.sound.midi.spi.SoundbankReader",
	nullptr,
	nullptr,
	_DLSSoundbankReader_MethodInfo_
};

$Object* allocate$DLSSoundbankReader($Class* clazz) {
	return $of($alloc(DLSSoundbankReader));
}

void DLSSoundbankReader::init$() {
	$SoundbankReader::init$();
}

$Soundbank* DLSSoundbankReader::getSoundbank($URL* url) {
	$useLocalCurrentObjectStackCache();
	try {
		return $new($DLSSoundbank, url);
	} catch ($RIFFInvalidFormatException&) {
		$var($RIFFInvalidFormatException, e, $catch());
		return nullptr;
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$Soundbank* DLSSoundbankReader::getSoundbank($InputStream* stream) {
	try {
		$nc(stream)->mark(512);
		return $new($DLSSoundbank, stream);
	} catch ($RIFFInvalidFormatException&) {
		$var($RIFFInvalidFormatException, e, $catch());
		$nc(stream)->reset();
		return nullptr;
	}
	$shouldNotReachHere();
}

$Soundbank* DLSSoundbankReader::getSoundbank($File* file) {
	try {
		return $new($DLSSoundbank, file);
	} catch ($RIFFInvalidFormatException&) {
		$var($RIFFInvalidFormatException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

DLSSoundbankReader::DLSSoundbankReader() {
}

$Class* DLSSoundbankReader::load$($String* name, bool initialize) {
	$loadClass(DLSSoundbankReader, name, initialize, &_DLSSoundbankReader_ClassInfo_, allocate$DLSSoundbankReader);
	return class$;
}

$Class* DLSSoundbankReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com