#include <com/sun/media/sound/SMFParser.h>

#include <com/sun/media/sound/FastShortMessage.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Error.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/VirtualMachineError.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/SysexMessage.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef DEBUG
#undef STRICT_PARSER

using $FastShortMessage = ::com::sun::media::sound::FastShortMessage;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $VirtualMachineError = ::java::lang::VirtualMachineError;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $SysexMessage = ::javax::sound::midi::SysexMessage;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SMFParser_FieldInfo_[] = {
	{"MTrk_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SMFParser, MTrk_MAGIC)},
	{"STRICT_PARSER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SMFParser, STRICT_PARSER)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SMFParser, DEBUG)},
	{"tracks", "I", nullptr, 0, $field(SMFParser, tracks)},
	{"stream", "Ljava/io/DataInputStream;", nullptr, 0, $field(SMFParser, stream)},
	{"trackLength", "I", nullptr, $PRIVATE, $field(SMFParser, trackLength)},
	{"trackData", "[B", nullptr, $PRIVATE, $field(SMFParser, trackData)},
	{"pos", "I", nullptr, $PRIVATE, $field(SMFParser, pos)},
	{}
};

$MethodInfo _SMFParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SMFParser::*)()>(&SMFParser::init$))},
	{"nextTrack", "()Z", nullptr, 0, $method(static_cast<bool(SMFParser::*)()>(&SMFParser::nextTrack)), "java.io.IOException,javax.sound.midi.InvalidMidiDataException"},
	{"read", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(SMFParser::*)($bytes*)>(&SMFParser::read)), "java.io.IOException"},
	{"readIntFromStream", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SMFParser::*)()>(&SMFParser::readIntFromStream)), "java.io.IOException"},
	{"readTrack", "(Ljavax/sound/midi/Track;)V", nullptr, 0, $method(static_cast<void(SMFParser::*)($Track*)>(&SMFParser::readTrack)), "java.io.IOException,javax.sound.midi.InvalidMidiDataException"},
	{"readUnsigned", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SMFParser::*)()>(&SMFParser::readUnsigned)), "java.io.IOException"},
	{"readVarInt", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(SMFParser::*)()>(&SMFParser::readVarInt)), "java.io.IOException"},
	{"trackFinished", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SMFParser::*)()>(&SMFParser::trackFinished))},
	{}
};

$ClassInfo _SMFParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SMFParser",
	"java.lang.Object",
	nullptr,
	_SMFParser_FieldInfo_,
	_SMFParser_MethodInfo_
};

$Object* allocate$SMFParser($Class* clazz) {
	return $of($alloc(SMFParser));
}

void SMFParser::init$() {
	this->trackLength = 0;
	$set(this, trackData, nullptr);
	this->pos = 0;
}

int32_t SMFParser::readUnsigned() {
	return (int32_t)($nc(this->trackData)->get(this->pos++) & (uint32_t)255);
}

void SMFParser::read($bytes* data) {
	$System::arraycopy(this->trackData, this->pos, data, 0, $nc(data)->length);
	this->pos += $nc(data)->length;
}

int64_t SMFParser::readVarInt() {
	int64_t value = 0;
	int32_t currentByte = 0;
	do {
		currentByte = (int32_t)($nc(this->trackData)->get(this->pos++) & (uint32_t)255);
		value = (value << 7) + ((int32_t)(currentByte & (uint32_t)127));
	} while (((int32_t)(currentByte & (uint32_t)128)) != 0);
	return value;
}

int32_t SMFParser::readIntFromStream() {
	try {
		return $nc(this->stream)->readInt();
	} catch ($EOFException& eof) {
		$throwNew($EOFException, "invalid MIDI file"_s);
	}
	$shouldNotReachHere();
}

bool SMFParser::nextTrack() {
	int32_t magic = 0;
	this->trackLength = 0;
	do {
		if ($nc(this->stream)->skipBytes(this->trackLength) != this->trackLength) {
			{
				return false;
			}
			$throwNew($EOFException, "invalid MIDI file"_s);
		}
		magic = readIntFromStream();
		this->trackLength = readIntFromStream();
	} while (magic != SMFParser::MTrk_MAGIC);
	{
		if (this->trackLength < 0) {
			return false;
		}
	}
	try {
		$set(this, trackData, $new($bytes, this->trackLength));
	} catch ($OutOfMemoryError& oom) {
		$throwNew($IOException, "Track length too big"_s, oom);
	}
	try {
		$nc(this->stream)->readFully(this->trackData);
	} catch ($EOFException& eof) {
		{
			return false;
		}
		$throwNew($EOFException, "invalid MIDI file"_s);
	}
	this->pos = 0;
	return true;
}

bool SMFParser::trackFinished() {
	return this->pos >= this->trackLength;
}

void SMFParser::readTrack($Track* track) {
	$useLocalCurrentObjectStackCache();
	try {
		int64_t tick = 0;
		int32_t status = 0;
		bool endOfTrackFound = false;
		while (!trackFinished() && !endOfTrackFound) {
			$var($MidiMessage, message, nullptr);
			int32_t data1 = -1;
			int32_t data2 = 0;
			tick += readVarInt();
			int32_t byteValue = readUnsigned();
			if (byteValue >= 128) {
				status = byteValue;
			} else {
				data1 = byteValue;
			}
			switch ((int32_t)(status & (uint32_t)240)) {
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
					if (data1 == -1) {
						data1 = readUnsigned();
					}
					data2 = readUnsigned();
					$assign(message, $new($FastShortMessage, (status | (data1 << 8)) | (data2 << 16)));
					break;
				}
			case 192:
				{}
			case 208:
				{
					if (data1 == -1) {
						data1 = readUnsigned();
					}
					$assign(message, $new($FastShortMessage, status | (data1 << 8)));
					break;
				}
			case 240:
				{
					{
						int32_t sysexLength = 0;
						$var($bytes, sysexData, nullptr)
						$var($SysexMessage, sysexMessage, nullptr)
						int32_t metaType = 0;
						int32_t metaLength = 0;
						$var($bytes, metaData, nullptr)
						$var($MetaMessage, metaMessage, nullptr)
						switch (status) {
						case 240:
							{}
						case 247:
							{
								sysexLength = (int32_t)readVarInt();
								$assign(sysexData, $new($bytes, sysexLength));
								read(sysexData);
								$assign(sysexMessage, $new($SysexMessage));
								$nc(sysexMessage)->setMessage(status, sysexData, sysexLength);
								$assign(message, sysexMessage);
								break;
							}
						case 255:
							{
								metaType = readUnsigned();
								metaLength = (int32_t)readVarInt();
								try {
									$assign(metaData, $new($bytes, metaLength));
								} catch ($OutOfMemoryError& oom) {
									$throwNew($IOException, "Meta length too big"_s, oom);
								}
								read(metaData);
								$assign(metaMessage, $new($MetaMessage));
								$nc(metaMessage)->setMessage(metaType, metaData, metaLength);
								$assign(message, metaMessage);
								if (metaType == 47) {
									endOfTrackFound = true;
								}
								break;
							}
						default:
							{
								$throwNew($InvalidMidiDataException, $$str({"Invalid status byte: "_s, $$str(status)}));
							}
						}
					}
					break;
				}
			default:
				{
					$throwNew($InvalidMidiDataException, $$str({"Invalid status byte: "_s, $$str(status)}));
				}
			}
			$nc(track)->add($$new($MidiEvent, message, tick));
		}
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EOFException, "invalid MIDI file"_s);
	}
}

SMFParser::SMFParser() {
}

$Class* SMFParser::load$($String* name, bool initialize) {
	$loadClass(SMFParser, name, initialize, &_SMFParser_ClassInfo_, allocate$SMFParser);
	return class$;
}

$Class* SMFParser::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com