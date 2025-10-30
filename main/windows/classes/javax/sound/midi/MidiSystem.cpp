#include <javax/sound/midi/MidiSystem.h>

#include <com/sun/media/sound/AutoConnectSequencer.h>
#include <com/sun/media/sound/JDK13Services.h>
#include <com/sun/media/sound/MidiDeviceReceiverEnvelope.h>
#include <com/sun/media/sound/MidiDeviceTransmitterEnvelope.h>
#include <com/sun/media/sound/ReferenceCountingDevice.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiDeviceReceiver.h>
#include <javax/sound/midi/MidiDeviceTransmitter.h>
#include <javax/sound/midi/MidiFileFormat.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Sequencer.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/Synthesizer.h>
#include <javax/sound/midi/Transmitter.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <javax/sound/midi/spi/MidiFileReader.h>
#include <javax/sound/midi/spi/MidiFileWriter.h>
#include <javax/sound/midi/spi/SoundbankReader.h>
#include <jcpp.h>

using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $AutoConnectSequencer = ::com::sun::media::sound::AutoConnectSequencer;
using $JDK13Services = ::com::sun::media::sound::JDK13Services;
using $MidiDeviceReceiverEnvelope = ::com::sun::media::sound::MidiDeviceReceiverEnvelope;
using $MidiDeviceTransmitterEnvelope = ::com::sun::media::sound::MidiDeviceTransmitterEnvelope;
using $ReferenceCountingDevice = ::com::sun::media::sound::ReferenceCountingDevice;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceReceiver = ::javax::sound::midi::MidiDeviceReceiver;
using $MidiDeviceTransmitter = ::javax::sound::midi::MidiDeviceTransmitter;
using $MidiFileFormat = ::javax::sound::midi::MidiFileFormat;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Receiver = ::javax::sound::midi::Receiver;
using $Sequence = ::javax::sound::midi::Sequence;
using $Sequencer = ::javax::sound::midi::Sequencer;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $Synthesizer = ::javax::sound::midi::Synthesizer;
using $Transmitter = ::javax::sound::midi::Transmitter;
using $MidiDeviceProvider = ::javax::sound::midi::spi::MidiDeviceProvider;
using $MidiFileReader = ::javax::sound::midi::spi::MidiFileReader;
using $MidiFileWriter = ::javax::sound::midi::spi::MidiFileWriter;
using $SoundbankReader = ::javax::sound::midi::spi::SoundbankReader;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MidiSystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MidiSystem::*)()>(&MidiSystem::init$))},
	{"getDefaultDevice", "(Ljava/lang/Class;)Ljavax/sound/midi/MidiDevice;", "(Ljava/lang/Class<*>;)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($Class*)>(&MidiSystem::getDefaultDevice))},
	{"getDefaultDeviceWrapper", "(Ljava/lang/Class;)Ljavax/sound/midi/MidiDevice;", "(Ljava/lang/Class<*>;)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($Class*)>(&MidiSystem::getDefaultDeviceWrapper)), "javax.sound.midi.MidiUnavailableException"},
	{"getFirstDevice", "(Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class;)Ljavax/sound/midi/MidiDevice;", "(Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class<*>;)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($MidiDeviceProvider*,$Class*)>(&MidiSystem::getFirstDevice))},
	{"getFirstDevice", "(Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class;ZZ)Ljavax/sound/midi/MidiDevice;", "(Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class<*>;ZZ)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($MidiDeviceProvider*,$Class*,bool,bool)>(&MidiSystem::getFirstDevice))},
	{"getFirstDevice", "(Ljava/util/List;Ljava/lang/Class;)Ljavax/sound/midi/MidiDevice;", "(Ljava/util/List<Ljavax/sound/midi/spi/MidiDeviceProvider;>;Ljava/lang/Class<*>;)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($List*,$Class*)>(&MidiSystem::getFirstDevice))},
	{"getFirstDevice", "(Ljava/util/List;Ljava/lang/Class;ZZ)Ljavax/sound/midi/MidiDevice;", "(Ljava/util/List<Ljavax/sound/midi/spi/MidiDeviceProvider;>;Ljava/lang/Class<*>;ZZ)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($List*,$Class*,bool,bool)>(&MidiSystem::getFirstDevice))},
	{"getMidiDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MidiDevice*(*)($MidiDevice$Info*)>(&MidiSystem::getMidiDevice)), "javax.sound.midi.MidiUnavailableException"},
	{"getMidiDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MidiDevice$InfoArray*(*)()>(&MidiSystem::getMidiDeviceInfo))},
	{"getMidiDeviceProviders", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/spi/MidiDeviceProvider;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&MidiSystem::getMidiDeviceProviders))},
	{"getMidiFileFormat", "(Ljava/io/InputStream;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MidiFileFormat*(*)($InputStream*)>(&MidiSystem::getMidiFileFormat)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormat", "(Ljava/net/URL;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MidiFileFormat*(*)($URL*)>(&MidiSystem::getMidiFileFormat)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileFormat", "(Ljava/io/File;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MidiFileFormat*(*)($File*)>(&MidiSystem::getMidiFileFormat)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getMidiFileReaders", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/spi/MidiFileReader;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&MidiSystem::getMidiFileReaders))},
	{"getMidiFileTypes", "()[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)()>(&MidiSystem::getMidiFileTypes))},
	{"getMidiFileTypes", "(Ljavax/sound/midi/Sequence;)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($Sequence*)>(&MidiSystem::getMidiFileTypes))},
	{"getMidiFileWriters", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/spi/MidiFileWriter;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&MidiSystem::getMidiFileWriters))},
	{"getNamedDevice", "(Ljava/lang/String;Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class;)Ljavax/sound/midi/MidiDevice;", "(Ljava/lang/String;Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class<*>;)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($String*,$MidiDeviceProvider*,$Class*)>(&MidiSystem::getNamedDevice))},
	{"getNamedDevice", "(Ljava/lang/String;Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class;ZZ)Ljavax/sound/midi/MidiDevice;", "(Ljava/lang/String;Ljavax/sound/midi/spi/MidiDeviceProvider;Ljava/lang/Class<*>;ZZ)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($String*,$MidiDeviceProvider*,$Class*,bool,bool)>(&MidiSystem::getNamedDevice))},
	{"getNamedDevice", "(Ljava/lang/String;Ljava/util/List;Ljava/lang/Class;)Ljavax/sound/midi/MidiDevice;", "(Ljava/lang/String;Ljava/util/List<Ljavax/sound/midi/spi/MidiDeviceProvider;>;Ljava/lang/Class<*>;)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($String*,$List*,$Class*)>(&MidiSystem::getNamedDevice))},
	{"getNamedDevice", "(Ljava/lang/String;Ljava/util/List;Ljava/lang/Class;ZZ)Ljavax/sound/midi/MidiDevice;", "(Ljava/lang/String;Ljava/util/List<Ljavax/sound/midi/spi/MidiDeviceProvider;>;Ljava/lang/Class<*>;ZZ)Ljavax/sound/midi/MidiDevice;", $PRIVATE | $STATIC, $method(static_cast<$MidiDevice*(*)($String*,$List*,$Class*,bool,bool)>(&MidiSystem::getNamedDevice))},
	{"getNamedProvider", "(Ljava/lang/String;Ljava/util/List;)Ljavax/sound/midi/spi/MidiDeviceProvider;", "(Ljava/lang/String;Ljava/util/List<Ljavax/sound/midi/spi/MidiDeviceProvider;>;)Ljavax/sound/midi/spi/MidiDeviceProvider;", $PRIVATE | $STATIC, $method(static_cast<$MidiDeviceProvider*(*)($String*,$List*)>(&MidiSystem::getNamedProvider))},
	{"getProviders", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<*>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Class*)>(&MidiSystem::getProviders))},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Receiver*(*)()>(&MidiSystem::getReceiver)), "javax.sound.midi.MidiUnavailableException"},
	{"getSequence", "(Ljava/io/InputStream;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Sequence*(*)($InputStream*)>(&MidiSystem::getSequence)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/net/URL;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Sequence*(*)($URL*)>(&MidiSystem::getSequence)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequence", "(Ljava/io/File;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Sequence*(*)($File*)>(&MidiSystem::getSequence)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSequencer", "()Ljavax/sound/midi/Sequencer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Sequencer*(*)()>(&MidiSystem::getSequencer)), "javax.sound.midi.MidiUnavailableException"},
	{"getSequencer", "(Z)Ljavax/sound/midi/Sequencer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Sequencer*(*)(bool)>(&MidiSystem::getSequencer)), "javax.sound.midi.MidiUnavailableException"},
	{"getSoundbank", "(Ljava/io/InputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Soundbank*(*)($InputStream*)>(&MidiSystem::getSoundbank)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/net/URL;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Soundbank*(*)($URL*)>(&MidiSystem::getSoundbank)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/File;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Soundbank*(*)($File*)>(&MidiSystem::getSoundbank)), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbankReaders", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/spi/SoundbankReader;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&MidiSystem::getSoundbankReaders))},
	{"getSynthesizer", "()Ljavax/sound/midi/Synthesizer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Synthesizer*(*)()>(&MidiSystem::getSynthesizer)), "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Transmitter*(*)()>(&MidiSystem::getTransmitter)), "javax.sound.midi.MidiUnavailableException"},
	{"isAppropriateDevice", "(Ljavax/sound/midi/MidiDevice;Ljava/lang/Class;ZZ)Z", "(Ljavax/sound/midi/MidiDevice;Ljava/lang/Class<*>;ZZ)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($MidiDevice*,$Class*,bool,bool)>(&MidiSystem::isAppropriateDevice))},
	{"isFileTypeSupported", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&MidiSystem::isFileTypeSupported))},
	{"isFileTypeSupported", "(ILjavax/sound/midi/Sequence;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t,$Sequence*)>(&MidiSystem::isFileTypeSupported))},
	{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/OutputStream;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Sequence*,int32_t,$OutputStream*)>(&MidiSystem::write)), "java.io.IOException"},
	{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/File;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Sequence*,int32_t,$File*)>(&MidiSystem::write)), "java.io.IOException"},
	{}
};

$ClassInfo _MidiSystem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.MidiSystem",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MidiSystem_MethodInfo_
};

$Object* allocate$MidiSystem($Class* clazz) {
	return $of($alloc(MidiSystem));
}

void MidiSystem::init$() {
}

$MidiDevice$InfoArray* MidiSystem::getMidiDeviceInfo() {
	$useLocalCurrentObjectStackCache();
	$var($List, allInfos, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($(getMidiDeviceProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MidiDeviceProvider, provider, $cast($MidiDeviceProvider, i$->next()));
			{
				$Collections::addAll(allInfos, $($nc(provider)->getDeviceInfo()));
			}
		}
	}
	return $fcast($MidiDevice$InfoArray, allInfos->toArray($$new($MidiDevice$InfoArray, allInfos->size())));
}

$MidiDevice* MidiSystem::getMidiDevice($MidiDevice$Info* info) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(info);
	{
		$var($Iterator, i$, $nc($(getMidiDeviceProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MidiDeviceProvider, provider, $cast($MidiDeviceProvider, i$->next()));
			{
				if ($nc(provider)->isDeviceSupported(info)) {
					return provider->getDevice(info);
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $($String::format("Requested device not installed: %s"_s, $$new($ObjectArray, {$of(info)}))));
}

$Receiver* MidiSystem::getReceiver() {
	$useLocalCurrentObjectStackCache();
	$load($Receiver);
	$var($MidiDevice, device, getDefaultDeviceWrapper($Receiver::class$));
	$var($Receiver, receiver, nullptr);
	if ($instanceOf($ReferenceCountingDevice, device)) {
		$assign(receiver, $nc(($cast($ReferenceCountingDevice, device)))->getReceiverReferenceCounting());
	} else {
		$assign(receiver, $nc(device)->getReceiver());
	}
	if (!($instanceOf($MidiDeviceReceiver, receiver))) {
		$assign(receiver, $new($MidiDeviceReceiverEnvelope, device, receiver));
	}
	return receiver;
}

$Transmitter* MidiSystem::getTransmitter() {
	$useLocalCurrentObjectStackCache();
	$load($Transmitter);
	$var($MidiDevice, device, getDefaultDeviceWrapper($Transmitter::class$));
	$var($Transmitter, transmitter, nullptr);
	if ($instanceOf($ReferenceCountingDevice, device)) {
		$assign(transmitter, $nc(($cast($ReferenceCountingDevice, device)))->getTransmitterReferenceCounting());
	} else {
		$assign(transmitter, $nc(device)->getTransmitter());
	}
	if (!($instanceOf($MidiDeviceTransmitter, transmitter))) {
		$assign(transmitter, $new($MidiDeviceTransmitterEnvelope, device, transmitter));
	}
	return transmitter;
}

$Synthesizer* MidiSystem::getSynthesizer() {
	$load($Synthesizer);
	return $cast($Synthesizer, getDefaultDeviceWrapper($Synthesizer::class$));
}

$Sequencer* MidiSystem::getSequencer() {
	return getSequencer(true);
}

$Sequencer* MidiSystem::getSequencer(bool connected) {
	$useLocalCurrentObjectStackCache();
	$load($Sequencer);
	$var($Sequencer, seq, $cast($Sequencer, getDefaultDeviceWrapper($Sequencer::class$)));
	if (connected) {
		$var($Receiver, rec, nullptr);
		$var($MidiUnavailableException, mue, nullptr);
		try {
			$var($Synthesizer, synth, getSynthesizer());
			if ($instanceOf($ReferenceCountingDevice, synth)) {
				$assign(rec, $nc(($cast($ReferenceCountingDevice, synth)))->getReceiverReferenceCounting());
			} else {
				$nc(synth)->open();
				{
					$var($Throwable, var$0, nullptr);
					try {
						$assign(rec, synth->getReceiver());
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (rec == nullptr) {
							synth->close();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} catch ($MidiUnavailableException& e) {
			if ($instanceOf($MidiUnavailableException, e)) {
				$assign(mue, e);
			}
		}
		if (rec == nullptr) {
			try {
				$assign(rec, MidiSystem::getReceiver());
			} catch ($Exception& e) {
				if ($instanceOf($MidiUnavailableException, e)) {
					$assign(mue, $cast($MidiUnavailableException, e));
				}
			}
		}
		if (rec != nullptr) {
			$nc($($nc(seq)->getTransmitter()))->setReceiver(rec);
			if ($instanceOf($AutoConnectSequencer, seq)) {
				$nc(($cast($AutoConnectSequencer, seq)))->setAutoConnect(rec);
			}
		} else {
			if (mue != nullptr) {
				$throw(mue);
			}
			$throwNew($MidiUnavailableException, "no receiver available"_s);
		}
	}
	return seq;
}

$Soundbank* MidiSystem::getSoundbank($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$var($SoundbankReader, sp, nullptr);
	$var($Soundbank, s, nullptr);
	$var($List, providers, getSoundbankReaders());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$assign(sp, $cast($SoundbankReader, providers->get(i)));
		$assign(s, $nc(sp)->getSoundbank(stream));
		if (s != nullptr) {
			return s;
		}
	}
	$throwNew($InvalidMidiDataException, "cannot get soundbank from stream"_s);
}

$Soundbank* MidiSystem::getSoundbank($URL* url) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(url);
	$var($SoundbankReader, sp, nullptr);
	$var($Soundbank, s, nullptr);
	$var($List, providers, getSoundbankReaders());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$assign(sp, $cast($SoundbankReader, providers->get(i)));
		$assign(s, $nc(sp)->getSoundbank(url));
		if (s != nullptr) {
			return s;
		}
	}
	$throwNew($InvalidMidiDataException, "cannot get soundbank from stream"_s);
}

$Soundbank* MidiSystem::getSoundbank($File* file) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(file);
	$var($SoundbankReader, sp, nullptr);
	$var($Soundbank, s, nullptr);
	$var($List, providers, getSoundbankReaders());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$assign(sp, $cast($SoundbankReader, providers->get(i)));
		$assign(s, $nc(sp)->getSoundbank(file));
		if (s != nullptr) {
			return s;
		}
	}
	$throwNew($InvalidMidiDataException, "cannot get soundbank from stream"_s);
}

$MidiFileFormat* MidiSystem::getMidiFileFormat($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$var($List, providers, getMidiFileReaders());
	$var($MidiFileFormat, format, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileReader, reader, $cast($MidiFileReader, providers->get(i)));
		try {
			$assign(format, $nc(reader)->getMidiFileFormat(stream));
			break;
		} catch ($InvalidMidiDataException& e) {
			continue;
		}
	}
	if (format == nullptr) {
		$throwNew($InvalidMidiDataException, "input stream is not a supported file type"_s);
	} else {
		return format;
	}
}

$MidiFileFormat* MidiSystem::getMidiFileFormat($URL* url) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(url);
	$var($List, providers, getMidiFileReaders());
	$var($MidiFileFormat, format, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileReader, reader, $cast($MidiFileReader, providers->get(i)));
		try {
			$assign(format, $nc(reader)->getMidiFileFormat(url));
			break;
		} catch ($InvalidMidiDataException& e) {
			continue;
		}
	}
	if (format == nullptr) {
		$throwNew($InvalidMidiDataException, "url is not a supported file type"_s);
	} else {
		return format;
	}
}

$MidiFileFormat* MidiSystem::getMidiFileFormat($File* file) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(file);
	$var($List, providers, getMidiFileReaders());
	$var($MidiFileFormat, format, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileReader, reader, $cast($MidiFileReader, providers->get(i)));
		try {
			$assign(format, $nc(reader)->getMidiFileFormat(file));
			break;
		} catch ($InvalidMidiDataException& e) {
			continue;
		}
	}
	if (format == nullptr) {
		$throwNew($InvalidMidiDataException, "file is not a supported file type"_s);
	} else {
		return format;
	}
}

$Sequence* MidiSystem::getSequence($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$var($List, providers, getMidiFileReaders());
	$var($Sequence, sequence, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileReader, reader, $cast($MidiFileReader, providers->get(i)));
		try {
			$assign(sequence, $nc(reader)->getSequence(stream));
			break;
		} catch ($InvalidMidiDataException& e) {
			continue;
		}
	}
	if (sequence == nullptr) {
		$throwNew($InvalidMidiDataException, "could not get sequence from input stream"_s);
	} else {
		return sequence;
	}
}

$Sequence* MidiSystem::getSequence($URL* url) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(url);
	$var($List, providers, getMidiFileReaders());
	$var($Sequence, sequence, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileReader, reader, $cast($MidiFileReader, providers->get(i)));
		try {
			$assign(sequence, $nc(reader)->getSequence(url));
			break;
		} catch ($InvalidMidiDataException& e) {
			continue;
		}
	}
	if (sequence == nullptr) {
		$throwNew($InvalidMidiDataException, "could not get sequence from URL"_s);
	} else {
		return sequence;
	}
}

$Sequence* MidiSystem::getSequence($File* file) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(file);
	$var($List, providers, getMidiFileReaders());
	$var($Sequence, sequence, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileReader, reader, $cast($MidiFileReader, providers->get(i)));
		try {
			$assign(sequence, $nc(reader)->getSequence(file));
			break;
		} catch ($InvalidMidiDataException& e) {
			continue;
		}
	}
	if (sequence == nullptr) {
		$throwNew($InvalidMidiDataException, "could not get sequence from file"_s);
	} else {
		return sequence;
	}
}

$ints* MidiSystem::getMidiFileTypes() {
	$useLocalCurrentObjectStackCache();
	$var($List, providers, getMidiFileWriters());
	$var($Set, allTypes, $new($HashSet));
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileWriter, writer, $cast($MidiFileWriter, providers->get(i)));
		$var($ints, types, $nc(writer)->getMidiFileTypes());
		for (int32_t j = 0; j < $nc(types)->length; ++j) {
			allTypes->add($($Integer::valueOf(types->get(j))));
		}
	}
	$var($ints, resultTypes, $new($ints, allTypes->size()));
	int32_t index = 0;
	{
		$var($Iterator, i$, allTypes->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Integer, integer, $cast($Integer, i$->next()));
			{
				resultTypes->set(index++, $nc(integer)->intValue());
			}
		}
	}
	return resultTypes;
}

bool MidiSystem::isFileTypeSupported(int32_t fileType) {
	$useLocalCurrentObjectStackCache();
	$var($List, providers, getMidiFileWriters());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileWriter, writer, $cast($MidiFileWriter, providers->get(i)));
		if ($nc(writer)->isFileTypeSupported(fileType)) {
			return true;
		}
	}
	return false;
}

$ints* MidiSystem::getMidiFileTypes($Sequence* sequence) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(sequence);
	$var($List, providers, getMidiFileWriters());
	$var($Set, allTypes, $new($HashSet));
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileWriter, writer, $cast($MidiFileWriter, providers->get(i)));
		$var($ints, types, $nc(writer)->getMidiFileTypes(sequence));
		for (int32_t j = 0; j < $nc(types)->length; ++j) {
			allTypes->add($($Integer::valueOf(types->get(j))));
		}
	}
	$var($ints, resultTypes, $new($ints, allTypes->size()));
	int32_t index = 0;
	{
		$var($Iterator, i$, allTypes->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Integer, integer, $cast($Integer, i$->next()));
			{
				resultTypes->set(index++, $nc(integer)->intValue());
			}
		}
	}
	return resultTypes;
}

bool MidiSystem::isFileTypeSupported(int32_t fileType, $Sequence* sequence) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(sequence);
	$var($List, providers, getMidiFileWriters());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileWriter, writer, $cast($MidiFileWriter, providers->get(i)));
		if ($nc(writer)->isFileTypeSupported(fileType, sequence)) {
			return true;
		}
	}
	return false;
}

int32_t MidiSystem::write($Sequence* in, int32_t fileType, $OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(in);
	$Objects::requireNonNull(out);
	$var($List, providers, getMidiFileWriters());
	int32_t bytesWritten = -2;
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileWriter, writer, $cast($MidiFileWriter, providers->get(i)));
		if ($nc(writer)->isFileTypeSupported(fileType, in)) {
			bytesWritten = writer->write(in, fileType, out);
			break;
		}
	}
	if (bytesWritten == -2) {
		$throwNew($IllegalArgumentException, "MIDI file type is not supported"_s);
	}
	return bytesWritten;
}

int32_t MidiSystem::write($Sequence* in, int32_t type, $File* out) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(in);
	$Objects::requireNonNull(out);
	$var($List, providers, getMidiFileWriters());
	int32_t bytesWritten = -2;
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiFileWriter, writer, $cast($MidiFileWriter, providers->get(i)));
		if ($nc(writer)->isFileTypeSupported(type, in)) {
			bytesWritten = writer->write(in, type, out);
			break;
		}
	}
	if (bytesWritten == -2) {
		$throwNew($IllegalArgumentException, "MIDI file type is not supported"_s);
	}
	return bytesWritten;
}

$List* MidiSystem::getMidiDeviceProviders() {
	$load($MidiDeviceProvider);
	return getProviders($MidiDeviceProvider::class$);
}

$List* MidiSystem::getSoundbankReaders() {
	$load($SoundbankReader);
	return getProviders($SoundbankReader::class$);
}

$List* MidiSystem::getMidiFileWriters() {
	$load($MidiFileWriter);
	return getProviders($MidiFileWriter::class$);
}

$List* MidiSystem::getMidiFileReaders() {
	$load($MidiFileReader);
	return getProviders($MidiFileReader::class$);
}

$MidiDevice* MidiSystem::getDefaultDeviceWrapper($Class* deviceClass) {
	try {
		return getDefaultDevice(deviceClass);
	} catch ($IllegalArgumentException& iae) {
		$var($MidiUnavailableException, mae, $new($MidiUnavailableException));
		mae->initCause(iae);
		$throw(mae);
	}
	$shouldNotReachHere();
}

$MidiDevice* MidiSystem::getDefaultDevice($Class* deviceClass) {
	$useLocalCurrentObjectStackCache();
	$var($List, providers, getMidiDeviceProviders());
	$var($String, providerClassName, $JDK13Services::getDefaultProviderClassName(deviceClass));
	$var($String, instanceName, $JDK13Services::getDefaultInstanceName(deviceClass));
	$var($MidiDevice, device, nullptr);
	if (providerClassName != nullptr) {
		$var($MidiDeviceProvider, defaultProvider, getNamedProvider(providerClassName, providers));
		if (defaultProvider != nullptr) {
			if (instanceName != nullptr) {
				$assign(device, getNamedDevice(instanceName, defaultProvider, deviceClass));
				if (device != nullptr) {
					return device;
				}
			}
			$assign(device, getFirstDevice(defaultProvider, deviceClass));
			if (device != nullptr) {
				return device;
			}
		}
	}
	if (instanceName != nullptr) {
		$assign(device, getNamedDevice(instanceName, providers, deviceClass));
		if (device != nullptr) {
			return device;
		}
	}
	$assign(device, getFirstDevice(providers, deviceClass));
	if (device != nullptr) {
		return device;
	}
	$throwNew($IllegalArgumentException, "Requested device not installed"_s);
}

$MidiDeviceProvider* MidiSystem::getNamedProvider($String* providerClassName, $List* providers) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiDeviceProvider, provider, $cast($MidiDeviceProvider, providers->get(i)));
		if ($nc($($nc($of(provider))->getClass()->getName()))->equals(providerClassName)) {
			return provider;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getNamedDevice($String* deviceName, $MidiDeviceProvider* provider, $Class* deviceClass) {
	$var($MidiDevice, device, nullptr);
	$assign(device, getNamedDevice(deviceName, provider, deviceClass, false, false));
	if (device != nullptr) {
		return device;
	}
	$load($Receiver);
	if (deviceClass == $Receiver::class$) {
		$assign(device, getNamedDevice(deviceName, provider, deviceClass, true, false));
		if (device != nullptr) {
			return device;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getNamedDevice($String* deviceName, $MidiDeviceProvider* provider, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer) {
	$useLocalCurrentObjectStackCache();
	$var($MidiDevice$InfoArray, infos, $nc(provider)->getDeviceInfo());
	for (int32_t i = 0; i < $nc(infos)->length; ++i) {
		if ($nc($($nc(infos->get(i))->getName()))->equals(deviceName)) {
			$var($MidiDevice, device, provider->getDevice(infos->get(i)));
			if (isAppropriateDevice(device, deviceClass, allowSynthesizer, allowSequencer)) {
				return device;
			}
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getNamedDevice($String* deviceName, $List* providers, $Class* deviceClass) {
	$var($MidiDevice, device, nullptr);
	$assign(device, getNamedDevice(deviceName, providers, deviceClass, false, false));
	if (device != nullptr) {
		return device;
	}
	$load($Receiver);
	if (deviceClass == $Receiver::class$) {
		$assign(device, getNamedDevice(deviceName, providers, deviceClass, true, false));
		if (device != nullptr) {
			return device;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getNamedDevice($String* deviceName, $List* providers, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiDeviceProvider, provider, $cast($MidiDeviceProvider, providers->get(i)));
		$var($MidiDevice, device, getNamedDevice(deviceName, provider, deviceClass, allowSynthesizer, allowSequencer));
		if (device != nullptr) {
			return device;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getFirstDevice($MidiDeviceProvider* provider, $Class* deviceClass) {
	$var($MidiDevice, device, nullptr);
	$assign(device, getFirstDevice(provider, deviceClass, false, false));
	if (device != nullptr) {
		return device;
	}
	$load($Receiver);
	if (deviceClass == $Receiver::class$) {
		$assign(device, getFirstDevice(provider, deviceClass, true, false));
		if (device != nullptr) {
			return device;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getFirstDevice($MidiDeviceProvider* provider, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer) {
	$useLocalCurrentObjectStackCache();
	$var($MidiDevice$InfoArray, infos, $nc(provider)->getDeviceInfo());
	for (int32_t j = 0; j < $nc(infos)->length; ++j) {
		$var($MidiDevice, device, provider->getDevice(infos->get(j)));
		if (isAppropriateDevice(device, deviceClass, allowSynthesizer, allowSequencer)) {
			return device;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getFirstDevice($List* providers, $Class* deviceClass) {
	$var($MidiDevice, device, nullptr);
	$assign(device, getFirstDevice(providers, deviceClass, false, false));
	if (device != nullptr) {
		return device;
	}
	$load($Receiver);
	if (deviceClass == $Receiver::class$) {
		$assign(device, getFirstDevice(providers, deviceClass, true, false));
		if (device != nullptr) {
			return device;
		}
	}
	return nullptr;
}

$MidiDevice* MidiSystem::getFirstDevice($List* providers, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MidiDeviceProvider, provider, $cast($MidiDeviceProvider, providers->get(i)));
		$var($MidiDevice, device, getFirstDevice(provider, deviceClass, allowSynthesizer, allowSequencer));
		if (device != nullptr) {
			return device;
		}
	}
	return nullptr;
}

bool MidiSystem::isAppropriateDevice($MidiDevice* device, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer) {
	if ($nc(deviceClass)->isInstance(device)) {
		return true;
	} else if ((!($instanceOf($Sequencer, device)) && !($instanceOf($Synthesizer, device))) || (($instanceOf($Sequencer, device)) && allowSequencer) || (($instanceOf($Synthesizer, device)) && allowSynthesizer)) {
		$load($Receiver);
		bool var$0 = (deviceClass == $Receiver::class$ && $nc(device)->getMaxReceivers() != 0);
		$load($Transmitter);
		if (var$0 || (deviceClass == $Transmitter::class$ && $nc(device)->getMaxTransmitters() != 0)) {
			return true;
		}
	}
	return false;
}

$List* MidiSystem::getProviders($Class* providerClass) {
	return $JDK13Services::getProviders(providerClass);
}

MidiSystem::MidiSystem() {
}

$Class* MidiSystem::load$($String* name, bool initialize) {
	$loadClass(MidiSystem, name, initialize, &_MidiSystem_ClassInfo_, allocate$MidiSystem);
	return class$;
}

$Class* MidiSystem::class$ = nullptr;

		} // midi
	} // sound
} // javax