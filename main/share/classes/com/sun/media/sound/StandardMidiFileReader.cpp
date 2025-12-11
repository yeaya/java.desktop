#include <com/sun/media/sound/StandardMidiFileReader.h>

#include <com/sun/media/sound/SMFParser.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiFileFormat.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Track.h>
#include <javax/sound/midi/spi/MidiFileReader.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef PPQ
#undef SMPTE_24
#undef SMPTE_25
#undef SMPTE_30
#undef SMPTE_30DROP
#undef UNKNOWN_LENGTH

using $SMFParser = ::com::sun::media::sound::SMFParser;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiFileFormat = ::javax::sound::midi::MidiFileFormat;
using $Sequence = ::javax::sound::midi::Sequence;
using $MidiFileReader = ::javax::sound::midi::spi::MidiFileReader;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _StandardMidiFileReader_FieldInfo_[] = {
	{"MThd_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileReader, MThd_MAGIC)},
	{"bisBufferSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileReader, bisBufferSize)},
	{}
};

$MethodInfo _StandardMidiFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StandardMidiFileReader::*)()>(&StandardMidiFileReader::init$))},
	{"getMidiFileFormat", "(Ljava/io/InputStream;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormat", "(Ljava/net/URL;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormat", "(Ljava/io/File;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormatFromStream", "(Ljava/io/InputStream;ILcom/sun/media/sound/SMFParser;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PRIVATE, $method(static_cast<$MidiFileFormat*(StandardMidiFileReader::*)($InputStream*,int32_t,$SMFParser*)>(&StandardMidiFileReader::getMidiFileFormatFromStream)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/io/InputStream;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/net/URL;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/io/File;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{}
};

$ClassInfo _StandardMidiFileReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.StandardMidiFileReader",
	"javax.sound.midi.spi.MidiFileReader",
	nullptr,
	_StandardMidiFileReader_FieldInfo_,
	_StandardMidiFileReader_MethodInfo_
};

$Object* allocate$StandardMidiFileReader($Class* clazz) {
	return $of($alloc(StandardMidiFileReader));
}

void StandardMidiFileReader::init$() {
	$MidiFileReader::init$();
}

$MidiFileFormat* StandardMidiFileReader::getMidiFileFormat($InputStream* stream) {
	return getMidiFileFormatFromStream(stream, $MidiFileFormat::UNKNOWN_LENGTH, nullptr);
}

$MidiFileFormat* StandardMidiFileReader::getMidiFileFormatFromStream($InputStream* stream, int32_t fileLength, $SMFParser* smfParser) {
	$useLocalCurrentObjectStackCache();
	int32_t maxReadLength = 16;
	int32_t duration = $MidiFileFormat::UNKNOWN_LENGTH;
	$var($DataInputStream, dis, nullptr);
	if ($instanceOf($DataInputStream, stream)) {
		$assign(dis, $cast($DataInputStream, stream));
	} else {
		$assign(dis, $new($DataInputStream, stream));
	}
	if (smfParser == nullptr) {
		$nc(dis)->mark(maxReadLength);
	} else {
		$set($nc(smfParser), stream, dis);
	}
	int32_t type = 0;
	int32_t numtracks = 0;
	float divisionType = 0.0;
	int32_t resolution = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t magic = $nc(dis)->readInt();
			if (!(magic == StandardMidiFileReader::MThd_MAGIC)) {
				$throwNew($InvalidMidiDataException, "not a valid MIDI file"_s);
			}
			int32_t bytesRemaining = dis->readInt() - 6;
			type = dis->readShort();
			numtracks = dis->readShort();
			int32_t timing = dis->readShort();
			if (timing > 0) {
				$init($Sequence);
				divisionType = $Sequence::PPQ;
				resolution = timing;
			} else {
				int32_t frameCode = -1 * (timing >> 8);
				switch (frameCode) {
				case 24:
					{
						$init($Sequence);
						divisionType = $Sequence::SMPTE_24;
						break;
					}
				case 25:
					{
						$init($Sequence);
						divisionType = $Sequence::SMPTE_25;
						break;
					}
				case 29:
					{
						$init($Sequence);
						divisionType = $Sequence::SMPTE_30DROP;
						break;
					}
				case 30:
					{
						$init($Sequence);
						divisionType = $Sequence::SMPTE_30;
						break;
					}
				default:
					{
						$throwNew($InvalidMidiDataException, $$str({"Unknown frame code: "_s, $$str(frameCode)}));
					}
				}
				resolution = (int32_t)(timing & (uint32_t)255);
			}
			if (smfParser != nullptr) {
				dis->skip(bytesRemaining);
				smfParser->tracks = numtracks;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (smfParser == nullptr) {
				$nc(dis)->reset();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($MidiFileFormat, format, $new($MidiFileFormat, type, divisionType, resolution, fileLength, duration));
	return format;
}

$MidiFileFormat* StandardMidiFileReader::getMidiFileFormat($URL* url) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, urlStream, $nc(url)->openStream());
	$var($BufferedInputStream, bis, $new($BufferedInputStream, urlStream, StandardMidiFileReader::bisBufferSize));
	$var($MidiFileFormat, fileFormat, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(fileFormat, getMidiFileFormat(static_cast<$InputStream*>(bis)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			bis->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return fileFormat;
}

$MidiFileFormat* StandardMidiFileReader::getMidiFileFormat($File* file) {
	$useLocalCurrentObjectStackCache();
	$var($FileInputStream, fis, $new($FileInputStream, file));
	$var($BufferedInputStream, bis, $new($BufferedInputStream, fis, StandardMidiFileReader::bisBufferSize));
	int64_t length = $nc(file)->length();
	if (length > $Integer::MAX_VALUE) {
		length = $MidiFileFormat::UNKNOWN_LENGTH;
	}
	$var($MidiFileFormat, fileFormat, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(fileFormat, getMidiFileFormatFromStream(bis, (int32_t)length, nullptr));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			bis->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return fileFormat;
}

$Sequence* StandardMidiFileReader::getSequence($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($SMFParser, smfParser, $new($SMFParser));
	$var($MidiFileFormat, format, getMidiFileFormatFromStream(stream, $MidiFileFormat::UNKNOWN_LENGTH, smfParser));
	bool var$0 = ($nc(format)->getType() != 0);
	if (var$0 && (format->getType() != 1)) {
		$throwNew($InvalidMidiDataException, $$str({"Invalid or unsupported file type: "_s, $$str(format->getType())}));
	}
	float var$1 = $nc(format)->getDivisionType();
	$var($Sequence, sequence, $new($Sequence, var$1, format->getResolution()));
	for (int32_t i = 0; i < smfParser->tracks; ++i) {
		if (smfParser->nextTrack()) {
			smfParser->readTrack($(sequence->createTrack()));
		} else {
			break;
		}
	}
	return sequence;
}

$Sequence* StandardMidiFileReader::getSequence($URL* url) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, is, $nc(url)->openStream());
	$assign(is, $new($BufferedInputStream, is, StandardMidiFileReader::bisBufferSize));
	$var($Sequence, seq, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(seq, getSequence(is));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			is->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return seq;
}

$Sequence* StandardMidiFileReader::getSequence($File* file) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, is, $new($FileInputStream, file));
	$assign(is, $new($BufferedInputStream, is, StandardMidiFileReader::bisBufferSize));
	$var($Sequence, seq, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(seq, getSequence(is));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			is->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return seq;
}

StandardMidiFileReader::StandardMidiFileReader() {
}

$Class* StandardMidiFileReader::load$($String* name, bool initialize) {
	$loadClass(StandardMidiFileReader, name, initialize, &_StandardMidiFileReader_ClassInfo_, allocate$StandardMidiFileReader);
	return class$;
}

$Class* StandardMidiFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com