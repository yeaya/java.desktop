#include <javax/sound/midi/spi/SoundbankReader.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <javax/sound/midi/Soundbank.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Soundbank = ::javax::sound::midi::Soundbank;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

$MethodInfo _SoundbankReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SoundbankReader::*)()>(&SoundbankReader::init$))},
	{"getSoundbank", "(Ljava/net/URL;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/InputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/File;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{}
};

$ClassInfo _SoundbankReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.spi.SoundbankReader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SoundbankReader_MethodInfo_
};

$Object* allocate$SoundbankReader($Class* clazz) {
	return $of($alloc(SoundbankReader));
}

void SoundbankReader::init$() {
}

SoundbankReader::SoundbankReader() {
}

$Class* SoundbankReader::load$($String* name, bool initialize) {
	$loadClass(SoundbankReader, name, initialize, &_SoundbankReader_ClassInfo_, allocate$SoundbankReader);
	return class$;
}

$Class* SoundbankReader::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax