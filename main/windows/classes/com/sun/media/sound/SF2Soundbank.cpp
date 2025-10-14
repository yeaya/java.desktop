#include <com/sun/media/sound/SF2Soundbank.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelInstrumentComparator.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/RIFFInvalidDataException.h>
#include <com/sun/media/sound/RIFFInvalidFormatException.h>
#include <com/sun/media/sound/RIFFReader.h>
#include <com/sun/media/sound/RIFFWriter.h>
#include <com/sun/media/sound/SF2GlobalRegion.h>
#include <com/sun/media/sound/SF2Instrument.h>
#include <com/sun/media/sound/SF2InstrumentRegion.h>
#include <com/sun/media/sound/SF2Layer.h>
#include <com/sun/media/sound/SF2LayerRegion.h>
#include <com/sun/media/sound/SF2Modulator.h>
#include <com/sun/media/sound/SF2Region.h>
#include <com/sun/media/sound/SF2Sample.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

#undef GENERATOR_INSTRUMENT
#undef GENERATOR_KEYRANGE
#undef GENERATOR_SAMPLEID
#undef GENERATOR_VELRANGE

using $SF2InstrumentArray = $Array<::com::sun::media::sound::SF2Instrument>;
using $SF2LayerArray = $Array<::com::sun::media::sound::SF2Layer>;
using $SF2SampleArray = $Array<::com::sun::media::sound::SF2Sample>;
using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $SoundbankResourceArray = $Array<::javax::sound::midi::SoundbankResource>;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelInstrumentComparator = ::com::sun::media::sound::ModelInstrumentComparator;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $RIFFInvalidDataException = ::com::sun::media::sound::RIFFInvalidDataException;
using $RIFFInvalidFormatException = ::com::sun::media::sound::RIFFInvalidFormatException;
using $RIFFReader = ::com::sun::media::sound::RIFFReader;
using $RIFFWriter = ::com::sun::media::sound::RIFFWriter;
using $SF2GlobalRegion = ::com::sun::media::sound::SF2GlobalRegion;
using $SF2Instrument = ::com::sun::media::sound::SF2Instrument;
using $SF2InstrumentRegion = ::com::sun::media::sound::SF2InstrumentRegion;
using $SF2Layer = ::com::sun::media::sound::SF2Layer;
using $SF2LayerRegion = ::com::sun::media::sound::SF2LayerRegion;
using $SF2Modulator = ::com::sun::media::sound::SF2Modulator;
using $SF2Region = ::com::sun::media::sound::SF2Region;
using $SF2Sample = ::com::sun::media::sound::SF2Sample;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Soundbank_FieldInfo_[] = {
	{"major", "I", nullptr, 0, $field(SF2Soundbank, major)},
	{"minor", "I", nullptr, 0, $field(SF2Soundbank, minor)},
	{"targetEngine", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, targetEngine)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, name)},
	{"romName", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, romName)},
	{"romVersionMajor", "I", nullptr, 0, $field(SF2Soundbank, romVersionMajor)},
	{"romVersionMinor", "I", nullptr, 0, $field(SF2Soundbank, romVersionMinor)},
	{"creationDate", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, creationDate)},
	{"engineers", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, engineers)},
	{"product", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, product)},
	{"copyright", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, copyright)},
	{"comments", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, comments)},
	{"tools", "Ljava/lang/String;", nullptr, 0, $field(SF2Soundbank, tools)},
	{"sampleData", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PRIVATE, $field(SF2Soundbank, sampleData)},
	{"sampleData24", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PRIVATE, $field(SF2Soundbank, sampleData24)},
	{"sampleFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(SF2Soundbank, sampleFile)},
	{"largeFormat", "Z", nullptr, $PRIVATE, $field(SF2Soundbank, largeFormat)},
	{"instruments", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SF2Instrument;>;", $PRIVATE | $FINAL, $field(SF2Soundbank, instruments)},
	{"layers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SF2Layer;>;", $PRIVATE | $FINAL, $field(SF2Soundbank, layers)},
	{"samples", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SF2Sample;>;", $PRIVATE | $FINAL, $field(SF2Soundbank, samples)},
	{}
};

$MethodInfo _SF2Soundbank_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)()>(&SF2Soundbank::init$))},
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($URL*)>(&SF2Soundbank::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($File*)>(&SF2Soundbank::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($InputStream*)>(&SF2Soundbank::init$)), "java.io.IOException"},
	{"addInstrument", "(Lcom/sun/media/sound/SF2Instrument;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($SF2Instrument*)>(&SF2Soundbank::addInstrument))},
	{"addResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($SoundbankResource*)>(&SF2Soundbank::addResource))},
	{"getCreationDate", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SF2Soundbank::*)()>(&SF2Soundbank::getCreationDate))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getInstruments", "()[Lcom/sun/media/sound/SF2Instrument;", nullptr, $PUBLIC},
	{"getLayers", "()[Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC, $method(static_cast<$SF2LayerArray*(SF2Soundbank::*)()>(&SF2Soundbank::getLayers))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProduct", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SF2Soundbank::*)()>(&SF2Soundbank::getProduct))},
	{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC},
	{"getRomName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SF2Soundbank::*)()>(&SF2Soundbank::getRomName))},
	{"getRomVersionMajor", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Soundbank::*)()>(&SF2Soundbank::getRomVersionMajor))},
	{"getRomVersionMinor", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Soundbank::*)()>(&SF2Soundbank::getRomVersionMinor))},
	{"getSamples", "()[Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC, $method(static_cast<$SF2SampleArray*(SF2Soundbank::*)()>(&SF2Soundbank::getSamples))},
	{"getTargetEngine", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SF2Soundbank::*)()>(&SF2Soundbank::getTargetEngine))},
	{"getTools", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SF2Soundbank::*)()>(&SF2Soundbank::getTools))},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readInfoChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFReader*)>(&SF2Soundbank::readInfoChunk)), "java.io.IOException"},
	{"readPdtaChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFReader*)>(&SF2Soundbank::readPdtaChunk)), "java.io.IOException"},
	{"readSdtaChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFReader*)>(&SF2Soundbank::readSdtaChunk)), "java.io.IOException"},
	{"readSoundbank", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($InputStream*)>(&SF2Soundbank::readSoundbank)), "java.io.IOException"},
	{"removeInstrument", "(Lcom/sun/media/sound/SF2Instrument;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($SF2Instrument*)>(&SF2Soundbank::removeInstrument))},
	{"removeResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($SoundbankResource*)>(&SF2Soundbank::removeResource))},
	{"save", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::save)), "java.io.IOException"},
	{"save", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($File*)>(&SF2Soundbank::save)), "java.io.IOException"},
	{"save", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($OutputStream*)>(&SF2Soundbank::save)), "java.io.IOException"},
	{"setCreationDate", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setCreationDate))},
	{"setDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setDescription))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setName))},
	{"setProduct", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setProduct))},
	{"setRomName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setRomName))},
	{"setRomVersionMajor", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)(int32_t)>(&SF2Soundbank::setRomVersionMajor))},
	{"setRomVersionMinor", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)(int32_t)>(&SF2Soundbank::setRomVersionMinor))},
	{"setTargetEngine", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setTargetEngine))},
	{"setTools", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setTools))},
	{"setVendor", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Soundbank::*)($String*)>(&SF2Soundbank::setVendor))},
	{"writeGenerators", "(Lcom/sun/media/sound/RIFFWriter;Ljava/util/Map;)V", "(Lcom/sun/media/sound/RIFFWriter;Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Short;>;)V", $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*,$Map*)>(&SF2Soundbank::writeGenerators)), "java.io.IOException"},
	{"writeInfo", "(Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*)>(&SF2Soundbank::writeInfo)), "java.io.IOException"},
	{"writeInfoStringChunk", "(Lcom/sun/media/sound/RIFFWriter;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*,$String*,$String*)>(&SF2Soundbank::writeInfoStringChunk)), "java.io.IOException"},
	{"writeModulators", "(Lcom/sun/media/sound/RIFFWriter;Ljava/util/List;)V", "(Lcom/sun/media/sound/RIFFWriter;Ljava/util/List<Lcom/sun/media/sound/SF2Modulator;>;)V", $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*,$List*)>(&SF2Soundbank::writeModulators)), "java.io.IOException"},
	{"writePdtaChunk", "(Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*)>(&SF2Soundbank::writePdtaChunk)), "java.io.IOException"},
	{"writeSdtaChunk", "(Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*)>(&SF2Soundbank::writeSdtaChunk)), "java.io.IOException"},
	{"writeSoundbank", "(Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Soundbank::*)($RIFFWriter*)>(&SF2Soundbank::writeSoundbank)), "java.io.IOException"},
	{}
};

$ClassInfo _SF2Soundbank_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Soundbank",
	"java.lang.Object",
	"javax.sound.midi.Soundbank",
	_SF2Soundbank_FieldInfo_,
	_SF2Soundbank_MethodInfo_
};

$Object* allocate$SF2Soundbank($Class* clazz) {
	return $of($alloc(SF2Soundbank));
}

void SF2Soundbank::init$() {
	this->major = 2;
	this->minor = 1;
	$set(this, targetEngine, "EMU8000"_s);
	$set(this, name, "untitled"_s);
	$set(this, romName, nullptr);
	this->romVersionMajor = -1;
	this->romVersionMinor = -1;
	$set(this, creationDate, nullptr);
	$set(this, engineers, nullptr);
	$set(this, product, nullptr);
	$set(this, copyright, nullptr);
	$set(this, comments, nullptr);
	$set(this, tools, nullptr);
	$set(this, sampleData, nullptr);
	$set(this, sampleData24, nullptr);
	$set(this, sampleFile, nullptr);
	this->largeFormat = false;
	$set(this, instruments, $new($ArrayList));
	$set(this, layers, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
}

void SF2Soundbank::init$($URL* url) {
	this->major = 2;
	this->minor = 1;
	$set(this, targetEngine, "EMU8000"_s);
	$set(this, name, "untitled"_s);
	$set(this, romName, nullptr);
	this->romVersionMajor = -1;
	this->romVersionMinor = -1;
	$set(this, creationDate, nullptr);
	$set(this, engineers, nullptr);
	$set(this, product, nullptr);
	$set(this, copyright, nullptr);
	$set(this, comments, nullptr);
	$set(this, tools, nullptr);
	$set(this, sampleData, nullptr);
	$set(this, sampleData24, nullptr);
	$set(this, sampleFile, nullptr);
	this->largeFormat = false;
	$set(this, instruments, $new($ArrayList));
	$set(this, layers, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	$var($InputStream, is, $nc(url)->openStream());
	{
		$var($Throwable, var$0, nullptr);
		try {
			readSoundbank(is);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(is)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SF2Soundbank::init$($File* file) {
	this->major = 2;
	this->minor = 1;
	$set(this, targetEngine, "EMU8000"_s);
	$set(this, name, "untitled"_s);
	$set(this, romName, nullptr);
	this->romVersionMajor = -1;
	this->romVersionMinor = -1;
	$set(this, creationDate, nullptr);
	$set(this, engineers, nullptr);
	$set(this, product, nullptr);
	$set(this, copyright, nullptr);
	$set(this, comments, nullptr);
	$set(this, tools, nullptr);
	$set(this, sampleData, nullptr);
	$set(this, sampleData24, nullptr);
	$set(this, sampleFile, nullptr);
	this->largeFormat = false;
	$set(this, instruments, $new($ArrayList));
	$set(this, layers, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	this->largeFormat = true;
	$set(this, sampleFile, file);
	$var($InputStream, is, $new($FileInputStream, file));
	{
		$var($Throwable, var$0, nullptr);
		try {
			readSoundbank(is);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			is->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SF2Soundbank::init$($InputStream* inputstream) {
	this->major = 2;
	this->minor = 1;
	$set(this, targetEngine, "EMU8000"_s);
	$set(this, name, "untitled"_s);
	$set(this, romName, nullptr);
	this->romVersionMajor = -1;
	this->romVersionMinor = -1;
	$set(this, creationDate, nullptr);
	$set(this, engineers, nullptr);
	$set(this, product, nullptr);
	$set(this, copyright, nullptr);
	$set(this, comments, nullptr);
	$set(this, tools, nullptr);
	$set(this, sampleData, nullptr);
	$set(this, sampleData24, nullptr);
	$set(this, sampleFile, nullptr);
	this->largeFormat = false;
	$set(this, instruments, $new($ArrayList));
	$set(this, layers, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	readSoundbank(inputstream);
}

void SF2Soundbank::readSoundbank($InputStream* inputstream) {
	$var($RIFFReader, riff, $new($RIFFReader, inputstream));
	if (!$nc($(riff->getFormat()))->equals("RIFF"_s)) {
		$throwNew($RIFFInvalidFormatException, "Input stream is not a valid RIFF stream!"_s);
	}
	if (!$nc($(riff->getType()))->equals("sfbk"_s)) {
		$throwNew($RIFFInvalidFormatException, "Input stream is not a valid SoundFont!"_s);
	}
	while (riff->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("INFO"_s)) {
				readInfoChunk(chunk);
			}
			if ($nc($(chunk->getType()))->equals("sdta"_s)) {
				readSdtaChunk(chunk);
			}
			if ($nc($(chunk->getType()))->equals("pdta"_s)) {
				readPdtaChunk(chunk);
			}
		}
	}
}

void SF2Soundbank::readInfoChunk($RIFFReader* riff) {
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("ifil"_s)) {
			this->major = chunk->readUnsignedShort();
			this->minor = chunk->readUnsignedShort();
		} else if (format->equals("isng"_s)) {
			$set(this, targetEngine, chunk->readString(chunk->available()));
		} else if (format->equals("INAM"_s)) {
			$set(this, name, chunk->readString(chunk->available()));
		} else if (format->equals("irom"_s)) {
			$set(this, romName, chunk->readString(chunk->available()));
		} else if (format->equals("iver"_s)) {
			this->romVersionMajor = chunk->readUnsignedShort();
			this->romVersionMinor = chunk->readUnsignedShort();
		} else if (format->equals("ICRD"_s)) {
			$set(this, creationDate, chunk->readString(chunk->available()));
		} else if (format->equals("IENG"_s)) {
			$set(this, engineers, chunk->readString(chunk->available()));
		} else if (format->equals("IPRD"_s)) {
			$set(this, product, chunk->readString(chunk->available()));
		} else if (format->equals("ICOP"_s)) {
			$set(this, copyright, chunk->readString(chunk->available()));
		} else if (format->equals("ICMT"_s)) {
			$set(this, comments, chunk->readString(chunk->available()));
		} else if (format->equals("ISFT"_s)) {
			$set(this, tools, chunk->readString(chunk->available()));
		}
	}
}

void SF2Soundbank::readSdtaChunk($RIFFReader* riff) {
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("smpl"_s)) {
			if (!this->largeFormat) {
				$var($bytes, sampleData, $new($bytes, chunk->available()));
				int32_t read = 0;
				int32_t avail = chunk->available();
				while (read != avail) {
					if (avail - read > 0x00010000) {
						chunk->readFully(sampleData, read, 0x00010000);
						read += 0x00010000;
					} else {
						chunk->readFully(sampleData, read, avail - read);
						read = avail;
					}
				}
				$set(this, sampleData, $new($ModelByteBuffer, sampleData));
			} else {
				$var($File, var$0, this->sampleFile);
				int64_t var$1 = chunk->getFilePointer();
				$set(this, sampleData, $new($ModelByteBuffer, var$0, var$1, (int64_t)chunk->available()));
			}
		}
		if ($nc($($nc(chunk)->getFormat()))->equals("sm24"_s)) {
			if (!this->largeFormat) {
				$var($bytes, sampleData24, $new($bytes, chunk->available()));
				int32_t read = 0;
				int32_t avail = chunk->available();
				while (read != avail) {
					if (avail - read > 0x00010000) {
						chunk->readFully(sampleData24, read, 0x00010000);
						read += 0x00010000;
					} else {
						chunk->readFully(sampleData24, read, avail - read);
						read = avail;
					}
				}
				$set(this, sampleData24, $new($ModelByteBuffer, sampleData24));
			} else {
				$var($File, var$2, this->sampleFile);
				int64_t var$3 = chunk->getFilePointer();
				$set(this, sampleData24, $new($ModelByteBuffer, var$2, var$3, (int64_t)chunk->available()));
			}
		}
	}
}

void SF2Soundbank::readPdtaChunk($RIFFReader* riff) {
	$var($List, presets, $new($ArrayList));
	$var($List, presets_bagNdx, $new($ArrayList));
	$var($List, presets_splits_gen, $new($ArrayList));
	$var($List, presets_splits_mod, $new($ArrayList));
	$var($List, instruments, $new($ArrayList));
	$var($List, instruments_bagNdx, $new($ArrayList));
	$var($List, instruments_splits_gen, $new($ArrayList));
	$var($List, instruments_splits_mod, $new($ArrayList));
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if (format->equals("phdr"_s)) {
			if (chunk->available() % 38 != 0) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t count = chunk->available() / 38;
			for (int32_t i = 0; i < count; ++i) {
				$var($SF2Instrument, preset, $new($SF2Instrument, this));
				$set(preset, name, chunk->readString(20));
				preset->preset = chunk->readUnsignedShort();
				preset->bank = chunk->readUnsignedShort();
				presets_bagNdx->add($($Integer::valueOf(chunk->readUnsignedShort())));
				preset->library = chunk->readUnsignedInt();
				preset->genre = chunk->readUnsignedInt();
				preset->morphology = chunk->readUnsignedInt();
				presets->add(preset);
				if (i != count - 1) {
					$nc(this->instruments)->add(preset);
				}
			}
		} else if (format->equals("pbag"_s)) {
			if (chunk->available() % 4 != 0) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t count = chunk->available() / 4;
			{
				int32_t gencount = chunk->readUnsignedShort();
				int32_t modcount = chunk->readUnsignedShort();
				while (presets_splits_gen->size() < gencount) {
					presets_splits_gen->add(nullptr);
				}
				while (presets_splits_mod->size() < modcount) {
					presets_splits_mod->add(nullptr);
				}
				--count;
			}
			if (presets_bagNdx->isEmpty()) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t offset = $nc(($cast($Integer, $(presets_bagNdx->get(0)))))->intValue();
			for (int32_t i = 0; i < offset; ++i) {
				if (count == 0) {
					$throwNew($RIFFInvalidDataException);
				}
				int32_t gencount = chunk->readUnsignedShort();
				int32_t modcount = chunk->readUnsignedShort();
				while (presets_splits_gen->size() < gencount) {
					presets_splits_gen->add(nullptr);
				}
				while (presets_splits_mod->size() < modcount) {
					presets_splits_mod->add(nullptr);
				}
				--count;
			}
			for (int32_t i = 0; i < presets_bagNdx->size() - 1; ++i) {
				int32_t var$0 = $nc(($cast($Integer, $(presets_bagNdx->get(i + 1)))))->intValue();
				int32_t zone_count = var$0 - $nc(($cast($Integer, $(presets_bagNdx->get(i)))))->intValue();
				$var($SF2Instrument, preset, $cast($SF2Instrument, presets->get(i)));
				for (int32_t ii = 0; ii < zone_count; ++ii) {
					if (count == 0) {
						$throwNew($RIFFInvalidDataException);
					}
					int32_t gencount = chunk->readUnsignedShort();
					int32_t modcount = chunk->readUnsignedShort();
					$var($SF2InstrumentRegion, split, $new($SF2InstrumentRegion));
					$nc($nc(preset)->regions)->add(split);
					while (presets_splits_gen->size() < gencount) {
						presets_splits_gen->add(split);
					}
					while (presets_splits_mod->size() < modcount) {
						presets_splits_mod->add(split);
					}
					--count;
				}
			}
		} else if (format->equals("pmod"_s)) {
			for (int32_t i = 0; i < presets_splits_mod->size(); ++i) {
				$var($SF2Modulator, modulator, $new($SF2Modulator));
				modulator->sourceOperator = chunk->readUnsignedShort();
				modulator->destinationOperator = chunk->readUnsignedShort();
				modulator->amount = chunk->readShort();
				modulator->amountSourceOperator = chunk->readUnsignedShort();
				modulator->transportOperator = chunk->readUnsignedShort();
				$var($SF2InstrumentRegion, split, $cast($SF2InstrumentRegion, presets_splits_mod->get(i)));
				if (split != nullptr) {
					$nc(split->modulators)->add(modulator);
				}
			}
		} else if (format->equals("pgen"_s)) {
			for (int32_t i = 0; i < presets_splits_gen->size(); ++i) {
				int32_t operator$ = chunk->readUnsignedShort();
				int16_t amount = chunk->readShort();
				$var($SF2InstrumentRegion, split, $cast($SF2InstrumentRegion, presets_splits_gen->get(i)));
				if (split != nullptr) {
					$var($Object, var$1, $of($Integer::valueOf(operator$)));
					$nc(split->generators)->put(var$1, $($Short::valueOf(amount)));
				}
			}
		} else if (format->equals("inst"_s)) {
			if (chunk->available() % 22 != 0) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t count = chunk->available() / 22;
			for (int32_t i = 0; i < count; ++i) {
				$var($SF2Layer, layer, $new($SF2Layer, this));
				$set(layer, name, chunk->readString(20));
				instruments_bagNdx->add($($Integer::valueOf(chunk->readUnsignedShort())));
				instruments->add(layer);
				if (i != count - 1) {
					$nc(this->layers)->add(layer);
				}
			}
		} else if (format->equals("ibag"_s)) {
			if (chunk->available() % 4 != 0) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t count = chunk->available() / 4;
			{
				int32_t gencount = chunk->readUnsignedShort();
				int32_t modcount = chunk->readUnsignedShort();
				while (instruments_splits_gen->size() < gencount) {
					instruments_splits_gen->add(nullptr);
				}
				while (instruments_splits_mod->size() < modcount) {
					instruments_splits_mod->add(nullptr);
				}
				--count;
			}
			if (instruments_bagNdx->isEmpty()) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t offset = $nc(($cast($Integer, $(instruments_bagNdx->get(0)))))->intValue();
			for (int32_t i = 0; i < offset; ++i) {
				if (count == 0) {
					$throwNew($RIFFInvalidDataException);
				}
				int32_t gencount = chunk->readUnsignedShort();
				int32_t modcount = chunk->readUnsignedShort();
				while (instruments_splits_gen->size() < gencount) {
					instruments_splits_gen->add(nullptr);
				}
				while (instruments_splits_mod->size() < modcount) {
					instruments_splits_mod->add(nullptr);
				}
				--count;
			}
			for (int32_t i = 0; i < instruments_bagNdx->size() - 1; ++i) {
				int32_t var$2 = $nc(($cast($Integer, $(instruments_bagNdx->get(i + 1)))))->intValue();
				int32_t zone_count = var$2 - $nc(($cast($Integer, $(instruments_bagNdx->get(i)))))->intValue();
				$var($SF2Layer, layer, $cast($SF2Layer, $nc(this->layers)->get(i)));
				for (int32_t ii = 0; ii < zone_count; ++ii) {
					if (count == 0) {
						$throwNew($RIFFInvalidDataException);
					}
					int32_t gencount = chunk->readUnsignedShort();
					int32_t modcount = chunk->readUnsignedShort();
					$var($SF2LayerRegion, split, $new($SF2LayerRegion));
					$nc($nc(layer)->regions)->add(split);
					while (instruments_splits_gen->size() < gencount) {
						instruments_splits_gen->add(split);
					}
					while (instruments_splits_mod->size() < modcount) {
						instruments_splits_mod->add(split);
					}
					--count;
				}
			}
		} else if (format->equals("imod"_s)) {
			for (int32_t i = 0; i < instruments_splits_mod->size(); ++i) {
				$var($SF2Modulator, modulator, $new($SF2Modulator));
				modulator->sourceOperator = chunk->readUnsignedShort();
				modulator->destinationOperator = chunk->readUnsignedShort();
				modulator->amount = chunk->readShort();
				modulator->amountSourceOperator = chunk->readUnsignedShort();
				modulator->transportOperator = chunk->readUnsignedShort();
				if (i < 0 || i >= instruments_splits_gen->size()) {
					$throwNew($RIFFInvalidDataException);
				}
				$var($SF2LayerRegion, split, $cast($SF2LayerRegion, instruments_splits_gen->get(i)));
				if (split != nullptr) {
					$nc(split->modulators)->add(modulator);
				}
			}
		} else if (format->equals("igen"_s)) {
			for (int32_t i = 0; i < instruments_splits_gen->size(); ++i) {
				int32_t operator$ = chunk->readUnsignedShort();
				int16_t amount = chunk->readShort();
				$var($SF2LayerRegion, split, $cast($SF2LayerRegion, instruments_splits_gen->get(i)));
				if (split != nullptr) {
					$var($Object, var$3, $of($Integer::valueOf(operator$)));
					$nc(split->generators)->put(var$3, $($Short::valueOf(amount)));
				}
			}
		} else if (format->equals("shdr"_s)) {
			if (chunk->available() % 46 != 0) {
				$throwNew($RIFFInvalidDataException);
			}
			int32_t count = chunk->available() / 46;
			for (int32_t i = 0; i < count; ++i) {
				$var($SF2Sample, sample, $new($SF2Sample, this));
				$set(sample, name, chunk->readString(20));
				int64_t start = chunk->readUnsignedInt();
				int64_t end = chunk->readUnsignedInt();
				if (this->sampleData != nullptr) {
					$set(sample, data, $nc(this->sampleData)->subbuffer(start * 2, end * 2, true));
				}
				if (this->sampleData24 != nullptr) {
					$set(sample, data24, $nc(this->sampleData24)->subbuffer(start, end, true));
				}
				sample->startLoop = chunk->readUnsignedInt() - start;
				sample->endLoop = chunk->readUnsignedInt() - start;
				if (sample->startLoop < 0) {
					sample->startLoop = -1;
				}
				if (sample->endLoop < 0) {
					sample->endLoop = -1;
				}
				sample->sampleRate = chunk->readUnsignedInt();
				sample->originalPitch = chunk->readUnsignedByte();
				sample->pitchCorrection = chunk->readByte();
				sample->sampleLink = chunk->readUnsignedShort();
				sample->sampleType = chunk->readUnsignedShort();
				if (i != count - 1) {
					$nc(this->samples)->add(sample);
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->layers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Layer, layer, $cast($SF2Layer, i$->next()));
			{
				$var($Iterator, siter, $nc($nc(layer)->regions)->iterator());
				$var($SF2Region, globalsplit, nullptr);
				while ($nc(siter)->hasNext()) {
					$var($SF2LayerRegion, split, $cast($SF2LayerRegion, siter->next()));
					if ($nc($nc(split)->generators)->get($($Integer::valueOf($SF2LayerRegion::GENERATOR_SAMPLEID))) != nullptr) {
						int32_t sampleid = $nc(($cast($Short, $($nc(split->generators)->get($($Integer::valueOf($SF2LayerRegion::GENERATOR_SAMPLEID)))))))->shortValue();
						$nc(split->generators)->remove($($Integer::valueOf($SF2LayerRegion::GENERATOR_SAMPLEID)));
						if (sampleid < 0 || sampleid >= $nc(this->samples)->size()) {
							$throwNew($RIFFInvalidDataException);
						}
						$set(split, sample, $cast($SF2Sample, $nc(this->samples)->get(sampleid)));
					} else {
						$assign(globalsplit, split);
					}
				}
				if (globalsplit != nullptr) {
					$nc($(layer->getRegions()))->remove($of(globalsplit));
					$var($SF2GlobalRegion, gsplit, $new($SF2GlobalRegion));
					$set(gsplit, generators, globalsplit->generators);
					$set(gsplit, modulators, globalsplit->modulators);
					layer->setGlobalZone(gsplit);
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Instrument, instrument, $cast($SF2Instrument, i$->next()));
			{
				$var($Iterator, siter, $nc($nc(instrument)->regions)->iterator());
				$var($SF2Region, globalsplit, nullptr);
				while ($nc(siter)->hasNext()) {
					$var($SF2InstrumentRegion, split, $cast($SF2InstrumentRegion, siter->next()));
					if ($nc($nc(split)->generators)->get($($Integer::valueOf($SF2LayerRegion::GENERATOR_INSTRUMENT))) != nullptr) {
						int32_t instrumentid = $nc(($cast($Short, $($nc(split->generators)->get($($Integer::valueOf($SF2InstrumentRegion::GENERATOR_INSTRUMENT)))))))->shortValue();
						$nc(split->generators)->remove($($Integer::valueOf($SF2LayerRegion::GENERATOR_INSTRUMENT)));
						if (instrumentid < 0 || instrumentid >= $nc(this->layers)->size()) {
							$throwNew($RIFFInvalidDataException);
						}
						$set(split, layer, $cast($SF2Layer, $nc(this->layers)->get(instrumentid)));
					} else {
						$assign(globalsplit, split);
					}
				}
				if (globalsplit != nullptr) {
					$nc($(instrument->getRegions()))->remove($of(globalsplit));
					$var($SF2GlobalRegion, gsplit, $new($SF2GlobalRegion));
					$set(gsplit, generators, globalsplit->generators);
					$set(gsplit, modulators, globalsplit->modulators);
					instrument->setGlobalZone(gsplit);
				}
			}
		}
	}
}

void SF2Soundbank::save($String* name) {
	writeSoundbank($$new($RIFFWriter, name, "sfbk"_s));
}

void SF2Soundbank::save($File* file) {
	writeSoundbank($$new($RIFFWriter, file, "sfbk"_s));
}

void SF2Soundbank::save($OutputStream* out) {
	writeSoundbank($$new($RIFFWriter, out, "sfbk"_s));
}

void SF2Soundbank::writeSoundbank($RIFFWriter* writer) {
	writeInfo($($nc(writer)->writeList("INFO"_s)));
	writeSdtaChunk($($nc(writer)->writeList("sdta"_s)));
	writePdtaChunk($($nc(writer)->writeList("pdta"_s)));
	$nc(writer)->close();
}

void SF2Soundbank::writeInfoStringChunk($RIFFWriter* writer, $String* name, $String* value) {
	if (value == nullptr) {
		return;
	}
	$var($RIFFWriter, chunk, $nc(writer)->writeChunk(name));
	$nc(chunk)->writeString(value);
	int32_t len = $($nc(value)->getBytes("ascii"_s))->length;
	chunk->write(0);
	++len;
	if (len % 2 != 0) {
		chunk->write(0);
	}
}

void SF2Soundbank::writeInfo($RIFFWriter* writer) {
	if (this->targetEngine == nullptr) {
		$set(this, targetEngine, "EMU8000"_s);
	}
	if (this->name == nullptr) {
		$set(this, name, ""_s);
	}
	$var($RIFFWriter, ifil_chunk, $nc(writer)->writeChunk("ifil"_s));
	$nc(ifil_chunk)->writeUnsignedShort(this->major);
	ifil_chunk->writeUnsignedShort(this->minor);
	writeInfoStringChunk(writer, "isng"_s, this->targetEngine);
	writeInfoStringChunk(writer, "INAM"_s, this->name);
	writeInfoStringChunk(writer, "irom"_s, this->romName);
	if (this->romVersionMajor != -1) {
		$var($RIFFWriter, iver_chunk, writer->writeChunk("iver"_s));
		$nc(iver_chunk)->writeUnsignedShort(this->romVersionMajor);
		iver_chunk->writeUnsignedShort(this->romVersionMinor);
	}
	writeInfoStringChunk(writer, "ICRD"_s, this->creationDate);
	writeInfoStringChunk(writer, "IENG"_s, this->engineers);
	writeInfoStringChunk(writer, "IPRD"_s, this->product);
	writeInfoStringChunk(writer, "ICOP"_s, this->copyright);
	writeInfoStringChunk(writer, "ICMT"_s, this->comments);
	writeInfoStringChunk(writer, "ISFT"_s, this->tools);
	writer->close();
}

void SF2Soundbank::writeSdtaChunk($RIFFWriter* writer) {
	$var($bytes, pad, $new($bytes, 32));
	$var($RIFFWriter, smpl_chunk, $nc(writer)->writeChunk("smpl"_s));
	{
		$var($Iterator, i$, $nc(this->samples)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Sample, sample, $cast($SF2Sample, i$->next()));
			{
				$var($ModelByteBuffer, data, $nc(sample)->getDataBuffer());
				$nc(data)->writeTo(smpl_chunk);
				$nc(smpl_chunk)->write(pad);
				smpl_chunk->write(pad);
			}
		}
	}
	if (this->major < 2) {
		return;
	}
	if (this->major == 2 && this->minor < 4) {
		return;
	}
	{
		$var($Iterator, i$, $nc(this->samples)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Sample, sample, $cast($SF2Sample, i$->next()));
			{
				$var($ModelByteBuffer, data24, $nc(sample)->getData24Buffer());
				if (data24 == nullptr) {
					return;
				}
			}
		}
	}
	$var($RIFFWriter, sm24_chunk, writer->writeChunk("sm24"_s));
	{
		$var($Iterator, i$, $nc(this->samples)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Sample, sample, $cast($SF2Sample, i$->next()));
			{
				$var($ModelByteBuffer, data, $nc(sample)->getData24Buffer());
				$nc(data)->writeTo(sm24_chunk);
				$nc(smpl_chunk)->write(pad);
			}
		}
	}
}

void SF2Soundbank::writeModulators($RIFFWriter* writer, $List* modulators) {
	{
		$var($Iterator, i$, $nc(modulators)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Modulator, modulator, $cast($SF2Modulator, i$->next()));
			{
				$nc(writer)->writeUnsignedShort($nc(modulator)->sourceOperator);
				writer->writeUnsignedShort($nc(modulator)->destinationOperator);
				writer->writeShort($nc(modulator)->amount);
				writer->writeUnsignedShort($nc(modulator)->amountSourceOperator);
				writer->writeUnsignedShort($nc(modulator)->transportOperator);
			}
		}
	}
}

void SF2Soundbank::writeGenerators($RIFFWriter* writer, $Map* generators) {
	$var($Short, keyrange, $cast($Short, $nc(generators)->get($($Integer::valueOf($SF2Region::GENERATOR_KEYRANGE)))));
	$var($Short, velrange, $cast($Short, generators->get($($Integer::valueOf($SF2Region::GENERATOR_VELRANGE)))));
	if (keyrange != nullptr) {
		$nc(writer)->writeUnsignedShort($SF2Region::GENERATOR_KEYRANGE);
		writer->writeShort(keyrange->shortValue());
	}
	if (velrange != nullptr) {
		$nc(writer)->writeUnsignedShort($SF2Region::GENERATOR_VELRANGE);
		writer->writeShort(velrange->shortValue());
	}
	{
		$var($Iterator, i$, $nc($(generators->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, generator, $cast($Map$Entry, i$->next()));
			{
				if ($nc(($cast($Integer, $($nc(generator)->getKey()))))->intValue() == $SF2Region::GENERATOR_KEYRANGE) {
					continue;
				}
				if ($nc(($cast($Integer, $($nc(generator)->getKey()))))->intValue() == $SF2Region::GENERATOR_VELRANGE) {
					continue;
				}
				$nc(writer)->writeUnsignedShort($nc(($cast($Integer, $($nc(generator)->getKey()))))->intValue());
				writer->writeShort($nc(($cast($Short, $($nc(generator)->getValue()))))->shortValue());
			}
		}
	}
}

void SF2Soundbank::writePdtaChunk($RIFFWriter* writer) {
	$var($RIFFWriter, phdr_chunk, $nc(writer)->writeChunk("phdr"_s));
	int32_t phdr_zone_count = 0;
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Instrument, preset, $cast($SF2Instrument, i$->next()));
			{
				$nc(phdr_chunk)->writeString($nc(preset)->name, 20);
				phdr_chunk->writeUnsignedShort($nc(preset)->preset);
				phdr_chunk->writeUnsignedShort($nc(preset)->bank);
				phdr_chunk->writeUnsignedShort(phdr_zone_count);
				if ($nc(preset)->getGlobalRegion() != nullptr) {
					phdr_zone_count += 1;
				}
				phdr_zone_count += $nc($($nc(preset)->getRegions()))->size();
				phdr_chunk->writeUnsignedInt(preset->library);
				phdr_chunk->writeUnsignedInt(preset->genre);
				phdr_chunk->writeUnsignedInt(preset->morphology);
			}
		}
	}
	$nc(phdr_chunk)->writeString("EOP"_s, 20);
	phdr_chunk->writeUnsignedShort(0);
	phdr_chunk->writeUnsignedShort(0);
	phdr_chunk->writeUnsignedShort(phdr_zone_count);
	phdr_chunk->writeUnsignedInt(0);
	phdr_chunk->writeUnsignedInt(0);
	phdr_chunk->writeUnsignedInt(0);
	$var($RIFFWriter, pbag_chunk, writer->writeChunk("pbag"_s));
	int32_t pbag_gencount = 0;
	int32_t pbag_modcount = 0;
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Instrument, preset, $cast($SF2Instrument, i$->next()));
			{
				if ($nc(preset)->getGlobalRegion() != nullptr) {
					$nc(pbag_chunk)->writeUnsignedShort(pbag_gencount);
					pbag_chunk->writeUnsignedShort(pbag_modcount);
					pbag_gencount += $nc($($nc($(preset->getGlobalRegion()))->getGenerators()))->size();
					pbag_modcount += $nc($($nc($(preset->getGlobalRegion()))->getModulators()))->size();
				}
				{
					$var($Iterator, i$, $nc($($nc(preset)->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2InstrumentRegion, region, $cast($SF2InstrumentRegion, i$->next()));
						{
							$nc(pbag_chunk)->writeUnsignedShort(pbag_gencount);
							pbag_chunk->writeUnsignedShort(pbag_modcount);
							if ($nc(this->layers)->indexOf($nc(region)->layer) != -1) {
								pbag_gencount += 1;
							}
							pbag_gencount += $nc($($nc(region)->getGenerators()))->size();
							pbag_modcount += $nc($(region->getModulators()))->size();
						}
					}
				}
			}
		}
	}
	$nc(pbag_chunk)->writeUnsignedShort(pbag_gencount);
	pbag_chunk->writeUnsignedShort(pbag_modcount);
	$var($RIFFWriter, pmod_chunk, writer->writeChunk("pmod"_s));
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Instrument, preset, $cast($SF2Instrument, i$->next()));
			{
				if ($nc(preset)->getGlobalRegion() != nullptr) {
					writeModulators(pmod_chunk, $($nc($(preset->getGlobalRegion()))->getModulators()));
				}
				{
					$var($Iterator, i$, $nc($($nc(preset)->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2InstrumentRegion, region, $cast($SF2InstrumentRegion, i$->next()));
						writeModulators(pmod_chunk, $($nc(region)->getModulators()));
					}
				}
			}
		}
	}
	$nc(pmod_chunk)->write($$new($bytes, 10));
	$var($RIFFWriter, pgen_chunk, writer->writeChunk("pgen"_s));
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Instrument, preset, $cast($SF2Instrument, i$->next()));
			{
				if ($nc(preset)->getGlobalRegion() != nullptr) {
					writeGenerators(pgen_chunk, $($nc($(preset->getGlobalRegion()))->getGenerators()));
				}
				{
					$var($Iterator, i$, $nc($($nc(preset)->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2InstrumentRegion, region, $cast($SF2InstrumentRegion, i$->next()));
						{
							writeGenerators(pgen_chunk, $($nc(region)->getGenerators()));
							int32_t ix = $nc(this->layers)->indexOf($nc(region)->layer);
							if (ix != -1) {
								$nc(pgen_chunk)->writeUnsignedShort($SF2Region::GENERATOR_INSTRUMENT);
								pgen_chunk->writeShort((int16_t)ix);
							}
						}
					}
				}
			}
		}
	}
	$nc(pgen_chunk)->write($$new($bytes, 4));
	$var($RIFFWriter, inst_chunk, writer->writeChunk("inst"_s));
	int32_t inst_zone_count = 0;
	{
		$var($Iterator, i$, $nc(this->layers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Layer, instrument, $cast($SF2Layer, i$->next()));
			{
				$nc(inst_chunk)->writeString($nc(instrument)->name, 20);
				inst_chunk->writeUnsignedShort(inst_zone_count);
				if ($nc(instrument)->getGlobalRegion() != nullptr) {
					inst_zone_count += 1;
				}
				inst_zone_count += $nc($($nc(instrument)->getRegions()))->size();
			}
		}
	}
	$nc(inst_chunk)->writeString("EOI"_s, 20);
	inst_chunk->writeUnsignedShort(inst_zone_count);
	$var($RIFFWriter, ibag_chunk, writer->writeChunk("ibag"_s));
	int32_t ibag_gencount = 0;
	int32_t ibag_modcount = 0;
	{
		$var($Iterator, i$, $nc(this->layers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Layer, instrument, $cast($SF2Layer, i$->next()));
			{
				if ($nc(instrument)->getGlobalRegion() != nullptr) {
					$nc(ibag_chunk)->writeUnsignedShort(ibag_gencount);
					ibag_chunk->writeUnsignedShort(ibag_modcount);
					ibag_gencount += $nc($($nc($(instrument->getGlobalRegion()))->getGenerators()))->size();
					ibag_modcount += $nc($($nc($(instrument->getGlobalRegion()))->getModulators()))->size();
				}
				{
					$var($Iterator, i$, $nc($($nc(instrument)->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2LayerRegion, region, $cast($SF2LayerRegion, i$->next()));
						{
							$nc(ibag_chunk)->writeUnsignedShort(ibag_gencount);
							ibag_chunk->writeUnsignedShort(ibag_modcount);
							if ($nc(this->samples)->indexOf($nc(region)->sample) != -1) {
								ibag_gencount += 1;
							}
							ibag_gencount += $nc($($nc(region)->getGenerators()))->size();
							ibag_modcount += $nc($(region->getModulators()))->size();
						}
					}
				}
			}
		}
	}
	$nc(ibag_chunk)->writeUnsignedShort(ibag_gencount);
	ibag_chunk->writeUnsignedShort(ibag_modcount);
	$var($RIFFWriter, imod_chunk, writer->writeChunk("imod"_s));
	{
		$var($Iterator, i$, $nc(this->layers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Layer, instrument, $cast($SF2Layer, i$->next()));
			{
				if ($nc(instrument)->getGlobalRegion() != nullptr) {
					writeModulators(imod_chunk, $($nc($(instrument->getGlobalRegion()))->getModulators()));
				}
				{
					$var($Iterator, i$, $nc($($nc(instrument)->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2LayerRegion, region, $cast($SF2LayerRegion, i$->next()));
						writeModulators(imod_chunk, $($nc(region)->getModulators()));
					}
				}
			}
		}
	}
	$nc(imod_chunk)->write($$new($bytes, 10));
	$var($RIFFWriter, igen_chunk, writer->writeChunk("igen"_s));
	{
		$var($Iterator, i$, $nc(this->layers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Layer, instrument, $cast($SF2Layer, i$->next()));
			{
				if ($nc(instrument)->getGlobalRegion() != nullptr) {
					writeGenerators(igen_chunk, $($nc($(instrument->getGlobalRegion()))->getGenerators()));
				}
				{
					$var($Iterator, i$, $nc($($nc(instrument)->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2LayerRegion, region, $cast($SF2LayerRegion, i$->next()));
						{
							writeGenerators(igen_chunk, $($nc(region)->getGenerators()));
							int32_t ix = $nc(this->samples)->indexOf($nc(region)->sample);
							if (ix != -1) {
								$nc(igen_chunk)->writeUnsignedShort($SF2Region::GENERATOR_SAMPLEID);
								igen_chunk->writeShort((int16_t)ix);
							}
						}
					}
				}
			}
		}
	}
	$nc(igen_chunk)->write($$new($bytes, 4));
	$var($RIFFWriter, shdr_chunk, writer->writeChunk("shdr"_s));
	int64_t sample_pos = 0;
	{
		$var($Iterator, i$, $nc(this->samples)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2Sample, sample, $cast($SF2Sample, i$->next()));
			{
				$nc(shdr_chunk)->writeString($nc(sample)->name, 20);
				int64_t start = sample_pos;
				sample_pos += $nc($nc(sample)->data)->capacity() / 2;
				int64_t end = sample_pos;
				int64_t startLoop = sample->startLoop + start;
				int64_t endLoop = sample->endLoop + start;
				if (startLoop < start) {
					startLoop = start;
				}
				if (endLoop > end) {
					endLoop = end;
				}
				shdr_chunk->writeUnsignedInt(start);
				shdr_chunk->writeUnsignedInt(end);
				shdr_chunk->writeUnsignedInt(startLoop);
				shdr_chunk->writeUnsignedInt(endLoop);
				shdr_chunk->writeUnsignedInt(sample->sampleRate);
				shdr_chunk->writeUnsignedByte(sample->originalPitch);
				shdr_chunk->writeByte(sample->pitchCorrection);
				shdr_chunk->writeUnsignedShort(sample->sampleLink);
				shdr_chunk->writeUnsignedShort(sample->sampleType);
				sample_pos += 32;
			}
		}
	}
	$nc(shdr_chunk)->writeString("EOS"_s, 20);
	shdr_chunk->write($$new($bytes, 26));
}

$String* SF2Soundbank::getName() {
	return this->name;
}

$String* SF2Soundbank::getVersion() {
	return $str({$$str(this->major), "."_s, $$str(this->minor)});
}

$String* SF2Soundbank::getVendor() {
	return this->engineers;
}

$String* SF2Soundbank::getDescription() {
	return this->comments;
}

void SF2Soundbank::setName($String* s) {
	$set(this, name, s);
}

void SF2Soundbank::setVendor($String* s) {
	$set(this, engineers, s);
}

void SF2Soundbank::setDescription($String* s) {
	$set(this, comments, s);
}

$SoundbankResourceArray* SF2Soundbank::getResources() {
	int32_t var$0 = $nc(this->layers)->size();
	$var($SoundbankResourceArray, resources, $new($SoundbankResourceArray, var$0 + $nc(this->samples)->size()));
	int32_t j = 0;
	for (int32_t i = 0; i < $nc(this->layers)->size(); ++i) {
		resources->set(j++, $cast($SoundbankResource, $($nc(this->layers)->get(i))));
	}
	for (int32_t i = 0; i < $nc(this->samples)->size(); ++i) {
		resources->set(j++, $cast($SoundbankResource, $($nc(this->samples)->get(i))));
	}
	return resources;
}

$InstrumentArray* SF2Soundbank::getInstruments() {
	$var($SF2InstrumentArray, inslist_array, $fcast($SF2InstrumentArray, $nc(this->instruments)->toArray($$new($SF2InstrumentArray, $nc(this->instruments)->size()))));
	$Arrays::sort(inslist_array, $$new($ModelInstrumentComparator));
	return $fcast($InstrumentArray, inslist_array);
}

$SF2LayerArray* SF2Soundbank::getLayers() {
	return $fcast($SF2LayerArray, $nc(this->layers)->toArray($$new($SF2LayerArray, $nc(this->layers)->size())));
}

$SF2SampleArray* SF2Soundbank::getSamples() {
	return $fcast($SF2SampleArray, $nc(this->samples)->toArray($$new($SF2SampleArray, $nc(this->samples)->size())));
}

$Instrument* SF2Soundbank::getInstrument($Patch* patch) {
	int32_t program = $nc(patch)->getProgram();
	int32_t bank = patch->getBank();
	bool percussion = false;
	if ($instanceOf($ModelPatch, patch)) {
		percussion = $nc(($cast($ModelPatch, patch)))->isPercussion();
	}
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Instrument, instrument, $cast($Instrument, i$->next()));
			{
				$var($Patch, patch2, $nc(instrument)->getPatch());
				int32_t program2 = $nc(patch2)->getProgram();
				int32_t bank2 = patch2->getBank();
				if (program == program2 && bank == bank2) {
					bool percussion2 = false;
					if ($instanceOf($ModelPatch, patch2)) {
						percussion2 = $nc(($cast($ModelPatch, patch2)))->isPercussion();
					}
					if (percussion == percussion2) {
						return instrument;
					}
				}
			}
		}
	}
	return nullptr;
}

$String* SF2Soundbank::getCreationDate() {
	return this->creationDate;
}

void SF2Soundbank::setCreationDate($String* creationDate) {
	$set(this, creationDate, creationDate);
}

$String* SF2Soundbank::getProduct() {
	return this->product;
}

void SF2Soundbank::setProduct($String* product) {
	$set(this, product, product);
}

$String* SF2Soundbank::getRomName() {
	return this->romName;
}

void SF2Soundbank::setRomName($String* romName) {
	$set(this, romName, romName);
}

int32_t SF2Soundbank::getRomVersionMajor() {
	return this->romVersionMajor;
}

void SF2Soundbank::setRomVersionMajor(int32_t romVersionMajor) {
	this->romVersionMajor = romVersionMajor;
}

int32_t SF2Soundbank::getRomVersionMinor() {
	return this->romVersionMinor;
}

void SF2Soundbank::setRomVersionMinor(int32_t romVersionMinor) {
	this->romVersionMinor = romVersionMinor;
}

$String* SF2Soundbank::getTargetEngine() {
	return this->targetEngine;
}

void SF2Soundbank::setTargetEngine($String* targetEngine) {
	$set(this, targetEngine, targetEngine);
}

$String* SF2Soundbank::getTools() {
	return this->tools;
}

void SF2Soundbank::setTools($String* tools) {
	$set(this, tools, tools);
}

void SF2Soundbank::addResource($SoundbankResource* resource) {
	if ($instanceOf($SF2Instrument, resource)) {
		$nc(this->instruments)->add($cast($SF2Instrument, resource));
	}
	if ($instanceOf($SF2Layer, resource)) {
		$nc(this->layers)->add($cast($SF2Layer, resource));
	}
	if ($instanceOf($SF2Sample, resource)) {
		$nc(this->samples)->add($cast($SF2Sample, resource));
	}
}

void SF2Soundbank::removeResource($SoundbankResource* resource) {
	if ($instanceOf($SF2Instrument, resource)) {
		$nc(this->instruments)->remove($of(resource));
	}
	if ($instanceOf($SF2Layer, resource)) {
		$nc(this->layers)->remove($of(resource));
	}
	if ($instanceOf($SF2Sample, resource)) {
		$nc(this->samples)->remove($of(resource));
	}
}

void SF2Soundbank::addInstrument($SF2Instrument* resource) {
	$nc(this->instruments)->add(resource);
}

void SF2Soundbank::removeInstrument($SF2Instrument* resource) {
	$nc(this->instruments)->remove($of(resource));
}

SF2Soundbank::SF2Soundbank() {
}

$Class* SF2Soundbank::load$($String* name, bool initialize) {
	$loadClass(SF2Soundbank, name, initialize, &_SF2Soundbank_ClassInfo_, allocate$SF2Soundbank);
	return class$;
}

$Class* SF2Soundbank::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com