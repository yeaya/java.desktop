#include <javax/sound/midi/spi/MidiFileReader.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/sound/midi/MidiFileFormat.h>
#include <javax/sound/midi/Sequence.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $MidiFileFormat = ::javax::sound::midi::MidiFileFormat;
using $Sequence = ::javax::sound::midi::Sequence;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

$MethodInfo _MidiFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MidiFileReader::*)()>(&MidiFileReader::init$))},
	{"getMidiFileFormat", "(Ljava/io/InputStream;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormat", "(Ljava/net/URL;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormat", "(Ljava/io/File;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/io/InputStream;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/net/URL;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/io/File;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{}
};

$ClassInfo _MidiFileReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.spi.MidiFileReader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MidiFileReader_MethodInfo_
};

$Object* allocate$MidiFileReader($Class* clazz) {
	return $of($alloc(MidiFileReader));
}

void MidiFileReader::init$() {
}

MidiFileReader::MidiFileReader() {
}

$Class* MidiFileReader::load$($String* name, bool initialize) {
	$loadClass(MidiFileReader, name, initialize, &_MidiFileReader_ClassInfo_, allocate$MidiFileReader);
	return class$;
}

$Class* MidiFileReader::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax