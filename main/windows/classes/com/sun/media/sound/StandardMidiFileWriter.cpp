#include <com/sun/media/sound/StandardMidiFileWriter.h>

#include <com/sun/media/sound/Printer.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/io/SequenceInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/SysexMessage.h>
#include <javax/sound/midi/Track.h>
#include <javax/sound/midi/spi/MidiFileWriter.h>
#include <jcpp.h>

#undef ERROR
#undef IGNORE
#undef META
#undef MIDI_TYPE_0
#undef MIDI_TYPE_1
#undef ONE_BYTE
#undef PPQ
#undef SMPTE_24
#undef SMPTE_25
#undef SMPTE_30
#undef SMPTE_30DROP
#undef SYSEX
#undef TWO_BYTE

using $InputStreamArray = $Array<::java::io::InputStream>;
using $TrackArray = $Array<::javax::sound::midi::Track>;
using $Printer = ::com::sun::media::sound::Printer;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Sequence = ::javax::sound::midi::Sequence;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $SysexMessage = ::javax::sound::midi::SysexMessage;
using $Track = ::javax::sound::midi::Track;
using $MidiFileWriter = ::javax::sound::midi::spi::MidiFileWriter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _StandardMidiFileWriter_FieldInfo_[] = {
	{"MThd_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, MThd_MAGIC)},
	{"MTrk_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, MTrk_MAGIC)},
	{"ONE_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, ONE_BYTE)},
	{"TWO_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, TWO_BYTE)},
	{"SYSEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, SYSEX)},
	{"META", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, META)},
	{"ERROR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, ERROR)},
	{"IGNORE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, IGNORE)},
	{"MIDI_TYPE_0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, MIDI_TYPE_0)},
	{"MIDI_TYPE_1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, MIDI_TYPE_1)},
	{"tddos", "Ljava/io/DataOutputStream;", nullptr, $PRIVATE, $field(StandardMidiFileWriter, tddos)},
	{"types", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StandardMidiFileWriter, types)},
	{"mask", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardMidiFileWriter, mask)},
	{}
};

$MethodInfo _StandardMidiFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StandardMidiFileWriter::*)()>(&StandardMidiFileWriter::init$))},
	{"getFileStream", "(ILjavax/sound/midi/Sequence;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(StandardMidiFileWriter::*)(int32_t,$Sequence*)>(&StandardMidiFileWriter::getFileStream)), "java.io.IOException"},
	{"getMidiFileTypes", "()[I", nullptr, $PUBLIC},
	{"getMidiFileTypes", "(Ljavax/sound/midi/Sequence;)[I", nullptr, $PUBLIC},
	{"getType", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StandardMidiFileWriter::*)(int32_t)>(&StandardMidiFileWriter::getType))},
	{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/OutputStream;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/File;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeTrack", "(Ljavax/sound/midi/Track;I)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(StandardMidiFileWriter::*)($Track*,int32_t)>(&StandardMidiFileWriter::writeTrack)), "java.io.IOException,javax.sound.midi.InvalidMidiDataException"},
	{"writeVarInt", "(J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StandardMidiFileWriter::*)(int64_t)>(&StandardMidiFileWriter::writeVarInt)), "java.io.IOException"},
	{}
};

$ClassInfo _StandardMidiFileWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.StandardMidiFileWriter",
	"javax.sound.midi.spi.MidiFileWriter",
	nullptr,
	_StandardMidiFileWriter_FieldInfo_,
	_StandardMidiFileWriter_MethodInfo_
};

$Object* allocate$StandardMidiFileWriter($Class* clazz) {
	return $of($alloc(StandardMidiFileWriter));
}


$ints* StandardMidiFileWriter::types = nullptr;

void StandardMidiFileWriter::init$() {
	$MidiFileWriter::init$();
}

$ints* StandardMidiFileWriter::getMidiFileTypes() {
	$var($ints, localArray, $new($ints, $nc(StandardMidiFileWriter::types)->length));
	$System::arraycopy(StandardMidiFileWriter::types, 0, localArray, 0, $nc(StandardMidiFileWriter::types)->length);
	return localArray;
}

$ints* StandardMidiFileWriter::getMidiFileTypes($Sequence* sequence) {
	$useLocalCurrentObjectStackCache();
	$var($ints, typesArray, nullptr);
	$var($TrackArray, tracks, $nc(sequence)->getTracks());
	if ($nc(tracks)->length == 1) {
		$assign(typesArray, $new($ints, 2));
		typesArray->set(0, StandardMidiFileWriter::MIDI_TYPE_0);
		typesArray->set(1, StandardMidiFileWriter::MIDI_TYPE_1);
	} else {
		$assign(typesArray, $new($ints, 1));
		typesArray->set(0, StandardMidiFileWriter::MIDI_TYPE_1);
	}
	return typesArray;
}

int32_t StandardMidiFileWriter::write($Sequence* in, int32_t type, $OutputStream* out) {
	$Objects::requireNonNull(out);
	if (!isFileTypeSupported(type, in)) {
		$throwNew($IllegalArgumentException, "Could not write MIDI file"_s);
	}
	$var($InputStream, fileStream, getFileStream(type, in));
	if (fileStream == nullptr) {
		$throwNew($IllegalArgumentException, "Could not write MIDI file"_s);
	}
	int64_t bytesWritten = $nc(fileStream)->transferTo(out);
	return (int32_t)bytesWritten;
}

int32_t StandardMidiFileWriter::write($Sequence* in, int32_t type, $File* out) {
	$Objects::requireNonNull(in);
	$var($FileOutputStream, fos, $new($FileOutputStream, out));
	int32_t bytesWritten = write(in, type, static_cast<$OutputStream*>(fos));
	fos->close();
	return bytesWritten;
}

$InputStream* StandardMidiFileWriter::getFileStream(int32_t type, $Sequence* sequence) {
	$useLocalCurrentObjectStackCache();
	$var($TrackArray, tracks, $nc(sequence)->getTracks());
	int32_t bytesBuilt = 0;
	int32_t headerLength = 14;
	int32_t length = 0;
	int32_t timeFormat = 0;
	float divtype = 0.0;
	$var($PipedOutputStream, hpos, nullptr);
	$var($DataOutputStream, hdos, nullptr);
	$var($PipedInputStream, headerStream, nullptr);
	$var($InputStreamArray, trackStreams, nullptr);
	$var($InputStream, trackStream, nullptr);
	$var($InputStream, fStream, nullptr);
	if (type == StandardMidiFileWriter::MIDI_TYPE_0) {
		if ($nc(tracks)->length != 1) {
			return nullptr;
		}
	} else if (type == StandardMidiFileWriter::MIDI_TYPE_1) {
		if ($nc(tracks)->length < 1) {
			return nullptr;
		}
	} else if ($nc(tracks)->length == 1) {
		type = StandardMidiFileWriter::MIDI_TYPE_0;
	} else if (tracks->length > 1) {
		type = StandardMidiFileWriter::MIDI_TYPE_1;
	} else {
		return nullptr;
	}
	$assign(trackStreams, $new($InputStreamArray, $nc(tracks)->length));
	int32_t trackCount = 0;
	for (int32_t i = 0; i < tracks->length; ++i) {
		try {
			trackStreams->set(trackCount, $(writeTrack(tracks->get(i), type)));
			++trackCount;
		} catch ($InvalidMidiDataException&) {
			$var($InvalidMidiDataException, e, $catch());
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"Exception in write: "_s, $(e->getMessage())}));
			}
		}
	}
	if (trackCount == 1) {
		$assign(trackStream, trackStreams->get(0));
	} else if (trackCount > 1) {
		$assign(trackStream, trackStreams->get(0));
		for (int32_t i = 1; i < tracks->length; ++i) {
			if (trackStreams->get(i) != nullptr) {
				$assign(trackStream, $new($SequenceInputStream, trackStream, trackStreams->get(i)));
			}
		}
	} else {
		$throwNew($IllegalArgumentException, "invalid MIDI data in sequence"_s);
	}
	$assign(hpos, $new($PipedOutputStream));
	$assign(hdos, $new($DataOutputStream, hpos));
	$assign(headerStream, $new($PipedInputStream, hpos));
	hdos->writeInt(StandardMidiFileWriter::MThd_MAGIC);
	hdos->writeInt(headerLength - 8);
	if (type == StandardMidiFileWriter::MIDI_TYPE_0) {
		hdos->writeShort(0);
	} else {
		hdos->writeShort(1);
	}
	hdos->writeShort((int16_t)trackCount);
	divtype = sequence->getDivisionType();
	if (divtype == $Sequence::PPQ) {
		timeFormat = sequence->getResolution();
	} else {
		if (divtype == $Sequence::SMPTE_24) {
			timeFormat = (24 << 8) * -1;
			timeFormat += ((int32_t)(sequence->getResolution() & (uint32_t)255));
		} else {
			if (divtype == $Sequence::SMPTE_25) {
				timeFormat = (25 << 8) * -1;
				timeFormat += ((int32_t)(sequence->getResolution() & (uint32_t)255));
			} else {
				if (divtype == $Sequence::SMPTE_30DROP) {
					timeFormat = (29 << 8) * -1;
					timeFormat += ((int32_t)(sequence->getResolution() & (uint32_t)255));
				} else {
					if (divtype == $Sequence::SMPTE_30) {
						timeFormat = (30 << 8) * -1;
						timeFormat += ((int32_t)(sequence->getResolution() & (uint32_t)255));
					} else {
						return nullptr;
					}
				}
			}
		}
	}
	hdos->writeShort(timeFormat);
	$assign(fStream, $new($SequenceInputStream, headerStream, trackStream));
	hdos->close();
	length = bytesBuilt + headerLength;
	return fStream;
}

int32_t StandardMidiFileWriter::getType(int32_t byteValue) {
	if (((int32_t)(byteValue & (uint32_t)240)) == 240) {
		switch (byteValue) {
		case 240:
			{}
		case 247:
			{
				return StandardMidiFileWriter::SYSEX;
			}
		case 255:
			{
				return StandardMidiFileWriter::META;
			}
		}
		return StandardMidiFileWriter::IGNORE;
	}
	switch ((int32_t)(byteValue & (uint32_t)240)) {
	case 128:
		{}
	case 144:
		{}
	case 160:
		{}
	case 176:
		{}
	case 224:
		{
			return StandardMidiFileWriter::TWO_BYTE;
		}
	case 192:
		{}
	case 208:
		{
			return StandardMidiFileWriter::ONE_BYTE;
		}
	}
	return StandardMidiFileWriter::ERROR;
}

int32_t StandardMidiFileWriter::writeVarInt(int64_t value) {
	int32_t len = 1;
	int32_t shift = 63;
	while ((shift > 0) && (((int64_t)(value & (uint64_t)($sl(StandardMidiFileWriter::mask, shift)))) == 0)) {
		shift -= 7;
	}
	while (shift > 0) {
		$nc(this->tddos)->writeByte((int32_t)(($sr((int64_t)(value & (uint64_t)($sl(StandardMidiFileWriter::mask, shift))), shift)) | 128));
		shift -= 7;
		++len;
	}
	$nc(this->tddos)->writeByte((int32_t)((int64_t)(value & (uint64_t)StandardMidiFileWriter::mask)));
	return len;
}

$InputStream* StandardMidiFileWriter::writeTrack($Track* track, int32_t type) {
	$useLocalCurrentObjectStackCache();
	int32_t bytesWritten = 0;
	int32_t lastBytesWritten = 0;
	int32_t size = $nc(track)->size();
	$var($PipedOutputStream, thpos, $new($PipedOutputStream));
	$var($DataOutputStream, thdos, $new($DataOutputStream, thpos));
	$var($PipedInputStream, thpis, $new($PipedInputStream, thpos));
	$var($ByteArrayOutputStream, tdbos, $new($ByteArrayOutputStream));
	$set(this, tddos, $new($DataOutputStream, tdbos));
	$var($ByteArrayInputStream, tdbis, nullptr);
	$var($SequenceInputStream, fStream, nullptr);
	int64_t currentTick = 0;
	int64_t deltaTick = 0;
	int64_t eventTick = 0;
	int32_t runningStatus = -1;
	for (int32_t i = 0; i < size; ++i) {
		$var($MidiEvent, event, track->get(i));
		int32_t status = 0;
		int32_t eventtype = 0;
		int32_t metatype = 0;
		int32_t data1 = 0;
		int32_t data2 = 0;
		int32_t length = 0;
		$var($bytes, data, nullptr);
		$var($ShortMessage, shortMessage, nullptr);
		$var($MetaMessage, metaMessage, nullptr);
		$var($SysexMessage, sysexMessage, nullptr);
		eventTick = $nc(event)->getTick();
		deltaTick = event->getTick() - currentTick;
		currentTick = event->getTick();
		status = $nc($(event->getMessage()))->getStatus();
		eventtype = getType(status);
		switch (eventtype) {
		case StandardMidiFileWriter::ONE_BYTE:
			{
				$assign(shortMessage, $cast($ShortMessage, event->getMessage()));
				data1 = $nc(shortMessage)->getData1();
				bytesWritten += writeVarInt(deltaTick);
				if (status != runningStatus) {
					runningStatus = status;
					$nc(this->tddos)->writeByte(status);
					bytesWritten += 1;
				}
				$nc(this->tddos)->writeByte(data1);
				bytesWritten += 1;
				break;
			}
		case StandardMidiFileWriter::TWO_BYTE:
			{
				$assign(shortMessage, $cast($ShortMessage, event->getMessage()));
				data1 = $nc(shortMessage)->getData1();
				data2 = $nc(shortMessage)->getData2();
				bytesWritten += writeVarInt(deltaTick);
				if (status != runningStatus) {
					runningStatus = status;
					$nc(this->tddos)->writeByte(status);
					bytesWritten += 1;
				}
				$nc(this->tddos)->writeByte(data1);
				bytesWritten += 1;
				$nc(this->tddos)->writeByte(data2);
				bytesWritten += 1;
				break;
			}
		case StandardMidiFileWriter::SYSEX:
			{
				$assign(sysexMessage, $cast($SysexMessage, event->getMessage()));
				length = $nc(sysexMessage)->getLength();
				$assign(data, $nc(sysexMessage)->getMessage());
				bytesWritten += writeVarInt(deltaTick);
				runningStatus = status;
				$nc(this->tddos)->writeByte($nc(data)->get(0));
				bytesWritten += 1;
				bytesWritten += writeVarInt(($nc(data)->length - 1));
				$nc(this->tddos)->write(data, 1, ($nc(data)->length - 1));
				bytesWritten += ($nc(data)->length - 1);
				break;
			}
		case StandardMidiFileWriter::META:
			{
				$assign(metaMessage, $cast($MetaMessage, event->getMessage()));
				length = $nc(metaMessage)->getLength();
				$assign(data, $nc(metaMessage)->getMessage());
				bytesWritten += writeVarInt(deltaTick);
				runningStatus = status;
				$nc(this->tddos)->write(data, 0, $nc(data)->length);
				bytesWritten += $nc(data)->length;
				break;
			}
		case StandardMidiFileWriter::IGNORE:
			{
				break;
			}
		case StandardMidiFileWriter::ERROR:
			{
				break;
			}
		default:
			{
				$throwNew($InvalidMidiDataException, "internal file writer error"_s);
			}
		}
	}
	thdos->writeInt(StandardMidiFileWriter::MTrk_MAGIC);
	thdos->writeInt(bytesWritten);
	bytesWritten += 8;
	$assign(tdbis, $new($ByteArrayInputStream, $(tdbos->toByteArray())));
	$assign(fStream, $new($SequenceInputStream, thpis, tdbis));
	thdos->close();
	$nc(this->tddos)->close();
	return fStream;
}

void clinit$StandardMidiFileWriter($Class* class$) {
	$assignStatic(StandardMidiFileWriter::types, $new($ints, {
		StandardMidiFileWriter::MIDI_TYPE_0,
		StandardMidiFileWriter::MIDI_TYPE_1
	}));
}

StandardMidiFileWriter::StandardMidiFileWriter() {
}

$Class* StandardMidiFileWriter::load$($String* name, bool initialize) {
	$loadClass(StandardMidiFileWriter, name, initialize, &_StandardMidiFileWriter_ClassInfo_, clinit$StandardMidiFileWriter, allocate$StandardMidiFileWriter);
	return class$;
}

$Class* StandardMidiFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com