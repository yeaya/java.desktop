#include <com/sun/media/sound/DLSSoundbank.h>

#include <com/sun/media/sound/DLSInfo.h>
#include <com/sun/media/sound/DLSInstrument.h>
#include <com/sun/media/sound/DLSModulator.h>
#include <com/sun/media/sound/DLSRegion.h>
#include <com/sun/media/sound/DLSSample.h>
#include <com/sun/media/sound/DLSSampleLoop.h>
#include <com/sun/media/sound/DLSSampleOptions.h>
#include <com/sun/media/sound/DLSSoundbank$DLSID.h>
#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelInstrumentComparator.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/RIFFInvalidDataException.h>
#include <com/sun/media/sound/RIFFInvalidFormatException.h>
#include <com/sun/media/sound/RIFFReader.h>
#include <com/sun/media/sound/RIFFWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef DLS_CDL_ADD
#undef DLS_CDL_AND
#undef DLS_CDL_CONST
#undef DLS_CDL_DIVIDE
#undef DLS_CDL_EQ
#undef DLS_CDL_GE
#undef DLS_CDL_GT
#undef DLS_CDL_LE
#undef DLS_CDL_LOGICAL_AND
#undef DLS_CDL_LOGICAL_OR
#undef DLS_CDL_LT
#undef DLS_CDL_MULTIPLY
#undef DLS_CDL_NOT
#undef DLS_CDL_OR
#undef DLS_CDL_QUERY
#undef DLS_CDL_QUERYSUPPORTED
#undef DLS_CDL_SUBTRACT
#undef DLS_CDL_XOR
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $DLSInstrumentArray = $Array<::com::sun::media::sound::DLSInstrument>;
using $DLSSampleArray = $Array<::com::sun::media::sound::DLSSample>;
using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $SoundbankResourceArray = $Array<::javax::sound::midi::SoundbankResource>;
using $DLSInfo = ::com::sun::media::sound::DLSInfo;
using $DLSInstrument = ::com::sun::media::sound::DLSInstrument;
using $DLSModulator = ::com::sun::media::sound::DLSModulator;
using $DLSRegion = ::com::sun::media::sound::DLSRegion;
using $DLSSample = ::com::sun::media::sound::DLSSample;
using $DLSSampleLoop = ::com::sun::media::sound::DLSSampleLoop;
using $DLSSampleOptions = ::com::sun::media::sound::DLSSampleOptions;
using $DLSSoundbank$DLSID = ::com::sun::media::sound::DLSSoundbank$DLSID;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelInstrumentComparator = ::com::sun::media::sound::ModelInstrumentComparator;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $RIFFInvalidDataException = ::com::sun::media::sound::RIFFInvalidDataException;
using $RIFFInvalidFormatException = ::com::sun::media::sound::RIFFInvalidFormatException;
using $RIFFReader = ::com::sun::media::sound::RIFFReader;
using $RIFFWriter = ::com::sun::media::sound::RIFFWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSSoundbank_FieldInfo_[] = {
	{"DLS_CDL_AND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_AND)},
	{"DLS_CDL_OR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_OR)},
	{"DLS_CDL_XOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_XOR)},
	{"DLS_CDL_ADD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_ADD)},
	{"DLS_CDL_SUBTRACT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_SUBTRACT)},
	{"DLS_CDL_MULTIPLY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_MULTIPLY)},
	{"DLS_CDL_DIVIDE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_DIVIDE)},
	{"DLS_CDL_LOGICAL_AND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_LOGICAL_AND)},
	{"DLS_CDL_LOGICAL_OR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_LOGICAL_OR)},
	{"DLS_CDL_LT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_LT)},
	{"DLS_CDL_LE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_LE)},
	{"DLS_CDL_GT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_GT)},
	{"DLS_CDL_GE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_GE)},
	{"DLS_CDL_EQ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_EQ)},
	{"DLS_CDL_NOT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_NOT)},
	{"DLS_CDL_CONST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_CONST)},
	{"DLS_CDL_QUERY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_QUERY)},
	{"DLS_CDL_QUERYSUPPORTED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DLSSoundbank, DLS_CDL_QUERYSUPPORTED)},
	{"DLSID_GMInHardware", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_GMInHardware)},
	{"DLSID_GSInHardware", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_GSInHardware)},
	{"DLSID_XGInHardware", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_XGInHardware)},
	{"DLSID_SupportsDLS1", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_SupportsDLS1)},
	{"DLSID_SupportsDLS2", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_SupportsDLS2)},
	{"DLSID_SampleMemorySize", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_SampleMemorySize)},
	{"DLSID_ManufacturersID", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_ManufacturersID)},
	{"DLSID_ProductID", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_ProductID)},
	{"DLSID_SamplePlaybackRate", "Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DLSSoundbank, DLSID_SamplePlaybackRate)},
	{"major", "J", nullptr, $PRIVATE, $field(DLSSoundbank, major)},
	{"minor", "J", nullptr, $PRIVATE, $field(DLSSoundbank, minor)},
	{"info", "Lcom/sun/media/sound/DLSInfo;", nullptr, $PRIVATE | $FINAL, $field(DLSSoundbank, info)},
	{"instruments", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/DLSInstrument;>;", $PRIVATE | $FINAL, $field(DLSSoundbank, instruments)},
	{"samples", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/DLSSample;>;", $PRIVATE | $FINAL, $field(DLSSoundbank, samples)},
	{"largeFormat", "Z", nullptr, $PRIVATE, $field(DLSSoundbank, largeFormat)},
	{"sampleFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(DLSSoundbank, sampleFile)},
	{"temp_rgnassign", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/media/sound/DLSRegion;Ljava/lang/Long;>;", $PRIVATE, $field(DLSSoundbank, temp_rgnassign)},
	{}
};

$MethodInfo _DLSSoundbank_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)()>(&DLSSoundbank::init$))},
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($URL*)>(&DLSSoundbank::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($File*)>(&DLSSoundbank::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($InputStream*)>(&DLSSoundbank::init$)), "java.io.IOException"},
	{"addInstrument", "(Lcom/sun/media/sound/DLSInstrument;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($DLSInstrument*)>(&DLSSoundbank::addInstrument))},
	{"addResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($SoundbankResource*)>(&DLSSoundbank::addResource))},
	{"cdlIsQuerySupported", "(Lcom/sun/media/sound/DLSSoundbank$DLSID;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DLSSoundbank::*)($DLSSoundbank$DLSID*)>(&DLSSoundbank::cdlIsQuerySupported))},
	{"cdlQuery", "(Lcom/sun/media/sound/DLSSoundbank$DLSID;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DLSSoundbank::*)($DLSSoundbank$DLSID*)>(&DLSSoundbank::cdlQuery))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInfo", "()Lcom/sun/media/sound/DLSInfo;", nullptr, $PUBLIC, $method(static_cast<$DLSInfo*(DLSSoundbank::*)()>(&DLSSoundbank::getInfo))},
	{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getInstruments", "()[Lcom/sun/media/sound/DLSInstrument;", nullptr, $PUBLIC},
	{"getMajor", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSSoundbank::*)()>(&DLSSoundbank::getMajor))},
	{"getMinor", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSSoundbank::*)()>(&DLSSoundbank::getMinor))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC},
	{"getSamples", "()[Lcom/sun/media/sound/DLSSample;", nullptr, $PUBLIC, $method(static_cast<$DLSSampleArray*(DLSSoundbank::*)()>(&DLSSoundbank::getSamples))},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readArt1Chunk", "(Ljava/util/List;Lcom/sun/media/sound/RIFFReader;)V", "(Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;Lcom/sun/media/sound/RIFFReader;)V", $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($List*,$RIFFReader*)>(&DLSSoundbank::readArt1Chunk)), "java.io.IOException"},
	{"readArt2Chunk", "(Ljava/util/List;Lcom/sun/media/sound/RIFFReader;)V", "(Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;Lcom/sun/media/sound/RIFFReader;)V", $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($List*,$RIFFReader*)>(&DLSSoundbank::readArt2Chunk)), "java.io.IOException"},
	{"readCdlChunk", "(Lcom/sun/media/sound/RIFFReader;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DLSSoundbank::*)($RIFFReader*)>(&DLSSoundbank::readCdlChunk)), "java.io.IOException"},
	{"readInfoChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFReader*)>(&DLSSoundbank::readInfoChunk)), "java.io.IOException"},
	{"readInsChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFReader*)>(&DLSSoundbank::readInsChunk)), "java.io.IOException"},
	{"readInsInfoChunk", "(Lcom/sun/media/sound/DLSInstrument;Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($DLSInstrument*,$RIFFReader*)>(&DLSSoundbank::readInsInfoChunk)), "java.io.IOException"},
	{"readLinsChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFReader*)>(&DLSSoundbank::readLinsChunk)), "java.io.IOException"},
	{"readRgnChunk", "(Lcom/sun/media/sound/DLSRegion;Lcom/sun/media/sound/RIFFReader;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DLSSoundbank::*)($DLSRegion*,$RIFFReader*)>(&DLSSoundbank::readRgnChunk)), "java.io.IOException"},
	{"readSoundbank", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($InputStream*)>(&DLSSoundbank::readSoundbank)), "java.io.IOException"},
	{"readWaveChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFReader*)>(&DLSSoundbank::readWaveChunk)), "java.io.IOException"},
	{"readWaveInfoChunk", "(Lcom/sun/media/sound/DLSSample;Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($DLSSample*,$RIFFReader*)>(&DLSSoundbank::readWaveInfoChunk)), "java.io.IOException"},
	{"readWsmpChunk", "(Lcom/sun/media/sound/DLSSampleOptions;Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($DLSSampleOptions*,$RIFFReader*)>(&DLSSoundbank::readWsmpChunk)), "java.io.IOException"},
	{"readWvplChunk", "(Lcom/sun/media/sound/RIFFReader;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFReader*)>(&DLSSoundbank::readWvplChunk)), "java.io.IOException"},
	{"removeInstrument", "(Lcom/sun/media/sound/DLSInstrument;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($DLSInstrument*)>(&DLSSoundbank::removeInstrument))},
	{"removeResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($SoundbankResource*)>(&DLSSoundbank::removeResource))},
	{"save", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($String*)>(&DLSSoundbank::save)), "java.io.IOException"},
	{"save", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($File*)>(&DLSSoundbank::save)), "java.io.IOException"},
	{"save", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($OutputStream*)>(&DLSSoundbank::save)), "java.io.IOException"},
	{"setDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($String*)>(&DLSSoundbank::setDescription))},
	{"setMajor", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)(int64_t)>(&DLSSoundbank::setMajor))},
	{"setMinor", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)(int64_t)>(&DLSSoundbank::setMinor))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($String*)>(&DLSSoundbank::setName))},
	{"setVendor", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSoundbank::*)($String*)>(&DLSSoundbank::setVendor))},
	{"writeArticulators", "(Lcom/sun/media/sound/RIFFWriter;Ljava/util/List;)V", "(Lcom/sun/media/sound/RIFFWriter;Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;)V", $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$List*)>(&DLSSoundbank::writeArticulators)), "java.io.IOException"},
	{"writeInfo", "(Lcom/sun/media/sound/RIFFWriter;Lcom/sun/media/sound/DLSInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$DLSInfo*)>(&DLSSoundbank::writeInfo)), "java.io.IOException"},
	{"writeInfoStringChunk", "(Lcom/sun/media/sound/RIFFWriter;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$String*,$String*)>(&DLSSoundbank::writeInfoStringChunk)), "java.io.IOException"},
	{"writeInstrument", "(Lcom/sun/media/sound/RIFFWriter;Lcom/sun/media/sound/DLSInstrument;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$DLSInstrument*)>(&DLSSoundbank::writeInstrument)), "java.io.IOException"},
	{"writeInstruments", "(Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*)>(&DLSSoundbank::writeInstruments)), "java.io.IOException"},
	{"writeRegion", "(Lcom/sun/media/sound/RIFFWriter;Lcom/sun/media/sound/DLSRegion;I)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$DLSRegion*,int32_t)>(&DLSSoundbank::writeRegion)), "java.io.IOException"},
	{"writeSample", "(Lcom/sun/media/sound/RIFFWriter;Lcom/sun/media/sound/DLSSample;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$DLSSample*)>(&DLSSoundbank::writeSample)), "java.io.IOException"},
	{"writeSampleOptions", "(Lcom/sun/media/sound/RIFFWriter;Lcom/sun/media/sound/DLSSampleOptions;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*,$DLSSampleOptions*)>(&DLSSoundbank::writeSampleOptions)), "java.io.IOException"},
	{"writeSoundbank", "(Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank::*)($RIFFWriter*)>(&DLSSoundbank::writeSoundbank)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DLSSoundbank_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DLSSoundbank$DLSID", "com.sun.media.sound.DLSSoundbank", "DLSID", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DLSSoundbank_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSSoundbank",
	"java.lang.Object",
	"javax.sound.midi.Soundbank",
	_DLSSoundbank_FieldInfo_,
	_DLSSoundbank_MethodInfo_,
	nullptr,
	nullptr,
	_DLSSoundbank_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.DLSSoundbank$DLSID"
};

$Object* allocate$DLSSoundbank($Class* clazz) {
	return $of($alloc(DLSSoundbank));
}

$DLSSoundbank$DLSID* DLSSoundbank::DLSID_GMInHardware = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_GSInHardware = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_XGInHardware = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_SupportsDLS1 = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_SupportsDLS2 = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_SampleMemorySize = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_ManufacturersID = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_ProductID = nullptr;
$DLSSoundbank$DLSID* DLSSoundbank::DLSID_SamplePlaybackRate = nullptr;

void DLSSoundbank::init$() {
	this->major = -1;
	this->minor = -1;
	$set(this, info, $new($DLSInfo));
	$set(this, instruments, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	this->largeFormat = false;
	$set(this, temp_rgnassign, $new($HashMap));
}

void DLSSoundbank::init$($URL* url) {
	this->major = -1;
	this->minor = -1;
	$set(this, info, $new($DLSInfo));
	$set(this, instruments, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	this->largeFormat = false;
	$set(this, temp_rgnassign, $new($HashMap));
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

void DLSSoundbank::init$($File* file) {
	this->major = -1;
	this->minor = -1;
	$set(this, info, $new($DLSInfo));
	$set(this, instruments, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	this->largeFormat = false;
	$set(this, temp_rgnassign, $new($HashMap));
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

void DLSSoundbank::init$($InputStream* inputstream) {
	this->major = -1;
	this->minor = -1;
	$set(this, info, $new($DLSInfo));
	$set(this, instruments, $new($ArrayList));
	$set(this, samples, $new($ArrayList));
	this->largeFormat = false;
	$set(this, temp_rgnassign, $new($HashMap));
	readSoundbank(inputstream);
}

void DLSSoundbank::readSoundbank($InputStream* inputstream) {
	$var($RIFFReader, riff, $new($RIFFReader, inputstream));
	if (!$nc($(riff->getFormat()))->equals("RIFF"_s)) {
		$throwNew($RIFFInvalidFormatException, "Input stream is not a valid RIFF stream!"_s);
	}
	if (!$nc($(riff->getType()))->equals("DLS "_s)) {
		$throwNew($RIFFInvalidFormatException, "Input stream is not a valid DLS soundbank!"_s);
	}
	while (riff->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("INFO"_s)) {
				readInfoChunk(chunk);
			}
			if ($nc($(chunk->getType()))->equals("lins"_s)) {
				readLinsChunk(chunk);
			}
			if ($nc($(chunk->getType()))->equals("wvpl"_s)) {
				readWvplChunk(chunk);
			}
		} else {
			if ($nc($(chunk->getFormat()))->equals("cdl "_s)) {
				if (!readCdlChunk(chunk)) {
					$throwNew($RIFFInvalidFormatException, "DLS file isn\'t supported!"_s);
				}
			}
			if ($nc($(chunk->getFormat()))->equals("colh"_s)) {
			}
			if ($nc($(chunk->getFormat()))->equals("ptbl"_s)) {
			}
			if ($nc($(chunk->getFormat()))->equals("vers"_s)) {
				this->major = chunk->readUnsignedInt();
				this->minor = chunk->readUnsignedInt();
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->temp_rgnassign)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$set($nc($cast($DLSRegion, $($nc(entry)->getKey()))), sample, $cast($DLSSample, $nc(this->samples)->get((int32_t)$nc(($cast($Long, $(entry->getValue()))))->longValue())));
			}
		}
	}
	$set(this, temp_rgnassign, nullptr);
}

bool DLSSoundbank::cdlIsQuerySupported($DLSSoundbank$DLSID* uuid) {
	bool var$7 = $nc(uuid)->equals(DLSSoundbank::DLSID_GMInHardware);
	bool var$6 = var$7 || $nc(uuid)->equals(DLSSoundbank::DLSID_GSInHardware);
	bool var$5 = var$6 || $nc(uuid)->equals(DLSSoundbank::DLSID_XGInHardware);
	bool var$4 = var$5 || $nc(uuid)->equals(DLSSoundbank::DLSID_SupportsDLS1);
	bool var$3 = var$4 || $nc(uuid)->equals(DLSSoundbank::DLSID_SupportsDLS2);
	bool var$2 = var$3 || $nc(uuid)->equals(DLSSoundbank::DLSID_SampleMemorySize);
	bool var$1 = var$2 || $nc(uuid)->equals(DLSSoundbank::DLSID_ManufacturersID);
	bool var$0 = var$1 || $nc(uuid)->equals(DLSSoundbank::DLSID_ProductID);
	return var$0 || $nc(uuid)->equals(DLSSoundbank::DLSID_SamplePlaybackRate);
}

int64_t DLSSoundbank::cdlQuery($DLSSoundbank$DLSID* uuid) {
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_GMInHardware)) {
		return 1;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_GSInHardware)) {
		return 0;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_XGInHardware)) {
		return 0;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_SupportsDLS1)) {
		return 1;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_SupportsDLS2)) {
		return 1;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_SampleMemorySize)) {
		return $nc($($Runtime::getRuntime()))->totalMemory();
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_ManufacturersID)) {
		return 0;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_ProductID)) {
		return 0;
	}
	if ($nc(uuid)->equals(DLSSoundbank::DLSID_SamplePlaybackRate)) {
		return 0x0000AC44;
	}
	return 0;
}

bool DLSSoundbank::readCdlChunk($RIFFReader* riff) {
	$var($DLSSoundbank$DLSID, uuid, nullptr);
	int64_t x = 0;
	int64_t y = 0;
	$var($Stack, stack, $new($Stack));
	while ($nc(riff)->available() != 0) {
		int32_t opcode = riff->readUnsignedShort();
		switch (opcode) {
		case DLSSoundbank::DLS_CDL_AND:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)(((x != 0) && (y != 0)) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_OR:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)(((x != 0) || (y != 0)) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_XOR:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)(((x != 0) ^ (y != 0)) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_ADD:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf(x + y)));
				break;
			}
		case DLSSoundbank::DLS_CDL_SUBTRACT:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf(x - y)));
				break;
			}
		case DLSSoundbank::DLS_CDL_MULTIPLY:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf(x * y)));
				break;
			}
		case DLSSoundbank::DLS_CDL_DIVIDE:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf($div(x, y))));
				break;
			}
		case DLSSoundbank::DLS_CDL_LOGICAL_AND:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)(((x != 0) && (y != 0)) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_LOGICAL_OR:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)(((x != 0) || (y != 0)) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_LT:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)((x < y) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_LE:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)((x <= y) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_GT:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)((x > y) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_GE:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)((x >= y) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_EQ:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)((x == y) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_NOT:
			{
				x = $nc(($cast($Long, $(stack->pop()))))->longValue();
				y = $nc(($cast($Long, $(stack->pop()))))->longValue();
				stack->push($($Long::valueOf((int64_t)((x == 0) ? 1 : 0))));
				break;
			}
		case DLSSoundbank::DLS_CDL_CONST:
			{
				stack->push($($Long::valueOf(riff->readUnsignedInt())));
				break;
			}
		case DLSSoundbank::DLS_CDL_QUERY:
			{
				$assign(uuid, $DLSSoundbank$DLSID::read(riff));
				stack->push($($Long::valueOf(cdlQuery(uuid))));
				break;
			}
		case DLSSoundbank::DLS_CDL_QUERYSUPPORTED:
			{
				$assign(uuid, $DLSSoundbank$DLSID::read(riff));
				stack->push($($Long::valueOf((int64_t)(cdlIsQuerySupported(uuid) ? 1 : 0))));
				break;
			}
		default:
			{
				break;
			}
		}
	}
	if (stack->isEmpty()) {
		return false;
	}
	return $nc(($cast($Long, $(stack->pop()))))->longValue() == 1;
}

void DLSSoundbank::readInfoChunk($RIFFReader* riff) {
	$set($nc(this->info), name, nullptr);
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("INAM"_s)) {
			$set($nc(this->info), name, chunk->readString(chunk->available()));
		} else if (format->equals("ICRD"_s)) {
			$set($nc(this->info), creationDate, chunk->readString(chunk->available()));
		} else if (format->equals("IENG"_s)) {
			$set($nc(this->info), engineers, chunk->readString(chunk->available()));
		} else if (format->equals("IPRD"_s)) {
			$set($nc(this->info), product, chunk->readString(chunk->available()));
		} else if (format->equals("ICOP"_s)) {
			$set($nc(this->info), copyright, chunk->readString(chunk->available()));
		} else if (format->equals("ICMT"_s)) {
			$set($nc(this->info), comments, chunk->readString(chunk->available()));
		} else if (format->equals("ISFT"_s)) {
			$set($nc(this->info), tools, chunk->readString(chunk->available()));
		} else if (format->equals("IARL"_s)) {
			$set($nc(this->info), archival_location, chunk->readString(chunk->available()));
		} else if (format->equals("IART"_s)) {
			$set($nc(this->info), artist, chunk->readString(chunk->available()));
		} else if (format->equals("ICMS"_s)) {
			$set($nc(this->info), commissioned, chunk->readString(chunk->available()));
		} else if (format->equals("IGNR"_s)) {
			$set($nc(this->info), genre, chunk->readString(chunk->available()));
		} else if (format->equals("IKEY"_s)) {
			$set($nc(this->info), keywords, chunk->readString(chunk->available()));
		} else if (format->equals("IMED"_s)) {
			$set($nc(this->info), medium, chunk->readString(chunk->available()));
		} else if (format->equals("ISBJ"_s)) {
			$set($nc(this->info), subject, chunk->readString(chunk->available()));
		} else if (format->equals("ISRC"_s)) {
			$set($nc(this->info), source, chunk->readString(chunk->available()));
		} else if (format->equals("ISRF"_s)) {
			$set($nc(this->info), source_form, chunk->readString(chunk->available()));
		} else if (format->equals("ITCH"_s)) {
			$set($nc(this->info), technician, chunk->readString(chunk->available()));
		}
	}
}

void DLSSoundbank::readLinsChunk($RIFFReader* riff) {
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("ins "_s)) {
				readInsChunk(chunk);
			}
		}
	}
}

void DLSSoundbank::readInsChunk($RIFFReader* riff) {
	$var($DLSInstrument, instrument, $new($DLSInstrument, this));
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("INFO"_s)) {
				readInsInfoChunk(instrument, chunk);
			}
			if ($nc($(chunk->getType()))->equals("lrgn"_s)) {
				while (chunk->hasNextChunk()) {
					$var($RIFFReader, subchunk, chunk->nextChunk());
					if ($nc($($nc(subchunk)->getFormat()))->equals("LIST"_s)) {
						if ($nc($(subchunk->getType()))->equals("rgn "_s)) {
							$var($DLSRegion, split, $new($DLSRegion));
							if (readRgnChunk(split, subchunk)) {
								$nc($(instrument->getRegions()))->add(split);
							}
						}
						if ($nc($(subchunk->getType()))->equals("rgn2"_s)) {
							$var($DLSRegion, split, $new($DLSRegion));
							if (readRgnChunk(split, subchunk)) {
								$nc($(instrument->getRegions()))->add(split);
							}
						}
					}
				}
			}
			if ($nc($(chunk->getType()))->equals("lart"_s)) {
				$var($List, modlist, $new($ArrayList));
				while (chunk->hasNextChunk()) {
					$var($RIFFReader, subchunk, chunk->nextChunk());
					if ($nc($(chunk->getFormat()))->equals("cdl "_s)) {
						if (!readCdlChunk(chunk)) {
							modlist->clear();
							break;
						}
					}
					if ($nc($($nc(subchunk)->getFormat()))->equals("art1"_s)) {
						readArt1Chunk(modlist, subchunk);
					}
				}
				$nc($(instrument->getModulators()))->addAll(modlist);
			}
			if ($nc($(chunk->getType()))->equals("lar2"_s)) {
				$var($List, modlist, $new($ArrayList));
				while (chunk->hasNextChunk()) {
					$var($RIFFReader, subchunk, chunk->nextChunk());
					if ($nc($(chunk->getFormat()))->equals("cdl "_s)) {
						if (!readCdlChunk(chunk)) {
							modlist->clear();
							break;
						}
					}
					if ($nc($($nc(subchunk)->getFormat()))->equals("art2"_s)) {
						readArt2Chunk(modlist, subchunk);
					}
				}
				$nc($(instrument->getModulators()))->addAll(modlist);
			}
		} else {
			if (format->equals("dlid"_s)) {
				$set(instrument, guid, $new($bytes, 16));
				chunk->readFully(instrument->guid);
			}
			if (format->equals("insh"_s)) {
				chunk->readUnsignedInt();
				int32_t bank = chunk->read();
				bank += ((int32_t)(chunk->read() & (uint32_t)127)) << 7;
				chunk->read();
				int32_t drumins = chunk->read();
				int32_t id = (int32_t)(chunk->read() & (uint32_t)127);
				chunk->read();
				chunk->read();
				chunk->read();
				instrument->bank = bank;
				instrument->preset = id;
				instrument->druminstrument = ((int32_t)(drumins & (uint32_t)128)) > 0;
			}
		}
	}
	$nc(this->instruments)->add(instrument);
}

void DLSSoundbank::readArt1Chunk($List* modulators, $RIFFReader* riff) {
	int64_t size = $nc(riff)->readUnsignedInt();
	int64_t count = riff->readUnsignedInt();
	if (size - 8 != 0) {
		riff->skip(size - 8);
	}
	for (int32_t i = 0; i < count; ++i) {
		$var($DLSModulator, modulator, $new($DLSModulator));
		modulator->version = 1;
		modulator->source = riff->readUnsignedShort();
		modulator->control = riff->readUnsignedShort();
		modulator->destination = riff->readUnsignedShort();
		modulator->transform = riff->readUnsignedShort();
		modulator->scale = riff->readInt();
		$nc(modulators)->add(modulator);
	}
}

void DLSSoundbank::readArt2Chunk($List* modulators, $RIFFReader* riff) {
	int64_t size = $nc(riff)->readUnsignedInt();
	int64_t count = riff->readUnsignedInt();
	if (size - 8 != 0) {
		riff->skip(size - 8);
	}
	for (int32_t i = 0; i < count; ++i) {
		$var($DLSModulator, modulator, $new($DLSModulator));
		modulator->version = 2;
		modulator->source = riff->readUnsignedShort();
		modulator->control = riff->readUnsignedShort();
		modulator->destination = riff->readUnsignedShort();
		modulator->transform = riff->readUnsignedShort();
		modulator->scale = riff->readInt();
		$nc(modulators)->add(modulator);
	}
}

bool DLSSoundbank::readRgnChunk($DLSRegion* split, $RIFFReader* riff) {
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("lart"_s)) {
				$var($List, modlist, $new($ArrayList));
				while (chunk->hasNextChunk()) {
					$var($RIFFReader, subchunk, chunk->nextChunk());
					if ($nc($(chunk->getFormat()))->equals("cdl "_s)) {
						if (!readCdlChunk(chunk)) {
							modlist->clear();
							break;
						}
					}
					if ($nc($($nc(subchunk)->getFormat()))->equals("art1"_s)) {
						readArt1Chunk(modlist, subchunk);
					}
				}
				$nc($($nc(split)->getModulators()))->addAll(modlist);
			}
			if ($nc($(chunk->getType()))->equals("lar2"_s)) {
				$var($List, modlist, $new($ArrayList));
				while (chunk->hasNextChunk()) {
					$var($RIFFReader, subchunk, chunk->nextChunk());
					if ($nc($(chunk->getFormat()))->equals("cdl "_s)) {
						if (!readCdlChunk(chunk)) {
							modlist->clear();
							break;
						}
					}
					if ($nc($($nc(subchunk)->getFormat()))->equals("art2"_s)) {
						readArt2Chunk(modlist, subchunk);
					}
				}
				$nc($($nc(split)->getModulators()))->addAll(modlist);
			}
		} else {
			if (format->equals("cdl "_s)) {
				if (!readCdlChunk(chunk)) {
					return false;
				}
			}
			if (format->equals("rgnh"_s)) {
				$nc(split)->keyfrom = chunk->readUnsignedShort();
				split->keyto = chunk->readUnsignedShort();
				split->velfrom = chunk->readUnsignedShort();
				split->velto = chunk->readUnsignedShort();
				split->options = chunk->readUnsignedShort();
				split->exclusiveClass = chunk->readUnsignedShort();
			}
			if (format->equals("wlnk"_s)) {
				$nc(split)->fusoptions = chunk->readUnsignedShort();
				split->phasegroup = chunk->readUnsignedShort();
				split->channel = chunk->readUnsignedInt();
				int64_t sampleid = chunk->readUnsignedInt();
				$nc(this->temp_rgnassign)->put(split, $($Long::valueOf(sampleid)));
			}
			if (format->equals("wsmp"_s)) {
				$set($nc(split), sampleoptions, $new($DLSSampleOptions));
				readWsmpChunk(split->sampleoptions, chunk);
			}
		}
	}
	return true;
}

void DLSSoundbank::readWsmpChunk($DLSSampleOptions* sampleOptions, $RIFFReader* riff) {
	int64_t size = $nc(riff)->readUnsignedInt();
	$nc(sampleOptions)->unitynote = riff->readUnsignedShort();
	sampleOptions->finetune = riff->readShort();
	sampleOptions->attenuation = riff->readInt();
	sampleOptions->options = riff->readUnsignedInt();
	int64_t loops = riff->readInt();
	if (size > 20) {
		riff->skip(size - 20);
	}
	for (int32_t i = 0; i < loops; ++i) {
		$var($DLSSampleLoop, loop, $new($DLSSampleLoop));
		int64_t size2 = riff->readUnsignedInt();
		loop->type = riff->readUnsignedInt();
		loop->start = riff->readUnsignedInt();
		loop->length = riff->readUnsignedInt();
		$nc(sampleOptions->loops)->add(loop);
		if (size2 > 16) {
			riff->skip(size2 - 16);
		}
	}
}

void DLSSoundbank::readInsInfoChunk($DLSInstrument* dlsinstrument, $RIFFReader* riff) {
	$set($nc($nc(dlsinstrument)->info), name, nullptr);
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("INAM"_s)) {
			$set($nc(dlsinstrument->info), name, chunk->readString(chunk->available()));
		} else if (format->equals("ICRD"_s)) {
			$set($nc(dlsinstrument->info), creationDate, chunk->readString(chunk->available()));
		} else if (format->equals("IENG"_s)) {
			$set($nc(dlsinstrument->info), engineers, chunk->readString(chunk->available()));
		} else if (format->equals("IPRD"_s)) {
			$set($nc(dlsinstrument->info), product, chunk->readString(chunk->available()));
		} else if (format->equals("ICOP"_s)) {
			$set($nc(dlsinstrument->info), copyright, chunk->readString(chunk->available()));
		} else if (format->equals("ICMT"_s)) {
			$set($nc(dlsinstrument->info), comments, chunk->readString(chunk->available()));
		} else if (format->equals("ISFT"_s)) {
			$set($nc(dlsinstrument->info), tools, chunk->readString(chunk->available()));
		} else if (format->equals("IARL"_s)) {
			$set($nc(dlsinstrument->info), archival_location, chunk->readString(chunk->available()));
		} else if (format->equals("IART"_s)) {
			$set($nc(dlsinstrument->info), artist, chunk->readString(chunk->available()));
		} else if (format->equals("ICMS"_s)) {
			$set($nc(dlsinstrument->info), commissioned, chunk->readString(chunk->available()));
		} else if (format->equals("IGNR"_s)) {
			$set($nc(dlsinstrument->info), genre, chunk->readString(chunk->available()));
		} else if (format->equals("IKEY"_s)) {
			$set($nc(dlsinstrument->info), keywords, chunk->readString(chunk->available()));
		} else if (format->equals("IMED"_s)) {
			$set($nc(dlsinstrument->info), medium, chunk->readString(chunk->available()));
		} else if (format->equals("ISBJ"_s)) {
			$set($nc(dlsinstrument->info), subject, chunk->readString(chunk->available()));
		} else if (format->equals("ISRC"_s)) {
			$set($nc(dlsinstrument->info), source, chunk->readString(chunk->available()));
		} else if (format->equals("ISRF"_s)) {
			$set($nc(dlsinstrument->info), source_form, chunk->readString(chunk->available()));
		} else if (format->equals("ITCH"_s)) {
			$set($nc(dlsinstrument->info), technician, chunk->readString(chunk->available()));
		}
	}
}

void DLSSoundbank::readWvplChunk($RIFFReader* riff) {
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("wave"_s)) {
				readWaveChunk(chunk);
			}
		}
	}
}

void DLSSoundbank::readWaveChunk($RIFFReader* riff) {
	$var($DLSSample, sample, $new($DLSSample, this));
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("LIST"_s)) {
			if ($nc($(chunk->getType()))->equals("INFO"_s)) {
				readWaveInfoChunk(sample, chunk);
			}
		} else {
			if (format->equals("dlid"_s)) {
				$set(sample, guid, $new($bytes, 16));
				chunk->readFully(sample->guid);
			}
			if (format->equals("fmt "_s)) {
				int32_t sampleformat = chunk->readUnsignedShort();
				if (sampleformat != 1 && sampleformat != 3) {
					$throwNew($RIFFInvalidDataException, "Only PCM samples are supported!"_s);
				}
				int32_t channels = chunk->readUnsignedShort();
				int64_t samplerate = chunk->readUnsignedInt();
				chunk->readUnsignedInt();
				int32_t framesize = chunk->readUnsignedShort();
				int32_t bits = chunk->readUnsignedShort();
				$var($AudioFormat, audioformat, nullptr);
				if (sampleformat == 1) {
					if (bits == 8) {
						$init($AudioFormat$Encoding);
						$assign(audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)samplerate, bits, channels, framesize, (float)samplerate, false));
					} else {
						$init($AudioFormat$Encoding);
						$assign(audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)samplerate, bits, channels, framesize, (float)samplerate, false));
					}
				}
				if (sampleformat == 3) {
					$init($AudioFormat$Encoding);
					$assign(audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)samplerate, bits, channels, framesize, (float)samplerate, false));
				}
				$set(sample, format, audioformat);
			}
			if (format->equals("data"_s)) {
				if (this->largeFormat) {
					$var($File, var$0, this->sampleFile);
					int64_t var$1 = chunk->getFilePointer();
					sample->setData($$new($ModelByteBuffer, var$0, var$1, (int64_t)chunk->available()));
				} else {
					$var($bytes, buffer, $new($bytes, chunk->available()));
					sample->setData(buffer);
					int32_t read = 0;
					int32_t avail = chunk->available();
					while (read != avail) {
						if (avail - read > 0x00010000) {
							chunk->readFully(buffer, read, 0x00010000);
							read += 0x00010000;
						} else {
							chunk->readFully(buffer, read, avail - read);
							read = avail;
						}
					}
				}
			}
			if (format->equals("wsmp"_s)) {
				$set(sample, sampleoptions, $new($DLSSampleOptions));
				readWsmpChunk(sample->sampleoptions, chunk);
			}
		}
	}
	$nc(this->samples)->add(sample);
}

void DLSSoundbank::readWaveInfoChunk($DLSSample* dlssample, $RIFFReader* riff) {
	$set($nc($nc(dlssample)->info), name, nullptr);
	while ($nc(riff)->hasNextChunk()) {
		$var($RIFFReader, chunk, riff->nextChunk());
		$var($String, format, $nc(chunk)->getFormat());
		if ($nc(format)->equals("INAM"_s)) {
			$set($nc(dlssample->info), name, chunk->readString(chunk->available()));
		} else if (format->equals("ICRD"_s)) {
			$set($nc(dlssample->info), creationDate, chunk->readString(chunk->available()));
		} else if (format->equals("IENG"_s)) {
			$set($nc(dlssample->info), engineers, chunk->readString(chunk->available()));
		} else if (format->equals("IPRD"_s)) {
			$set($nc(dlssample->info), product, chunk->readString(chunk->available()));
		} else if (format->equals("ICOP"_s)) {
			$set($nc(dlssample->info), copyright, chunk->readString(chunk->available()));
		} else if (format->equals("ICMT"_s)) {
			$set($nc(dlssample->info), comments, chunk->readString(chunk->available()));
		} else if (format->equals("ISFT"_s)) {
			$set($nc(dlssample->info), tools, chunk->readString(chunk->available()));
		} else if (format->equals("IARL"_s)) {
			$set($nc(dlssample->info), archival_location, chunk->readString(chunk->available()));
		} else if (format->equals("IART"_s)) {
			$set($nc(dlssample->info), artist, chunk->readString(chunk->available()));
		} else if (format->equals("ICMS"_s)) {
			$set($nc(dlssample->info), commissioned, chunk->readString(chunk->available()));
		} else if (format->equals("IGNR"_s)) {
			$set($nc(dlssample->info), genre, chunk->readString(chunk->available()));
		} else if (format->equals("IKEY"_s)) {
			$set($nc(dlssample->info), keywords, chunk->readString(chunk->available()));
		} else if (format->equals("IMED"_s)) {
			$set($nc(dlssample->info), medium, chunk->readString(chunk->available()));
		} else if (format->equals("ISBJ"_s)) {
			$set($nc(dlssample->info), subject, chunk->readString(chunk->available()));
		} else if (format->equals("ISRC"_s)) {
			$set($nc(dlssample->info), source, chunk->readString(chunk->available()));
		} else if (format->equals("ISRF"_s)) {
			$set($nc(dlssample->info), source_form, chunk->readString(chunk->available()));
		} else if (format->equals("ITCH"_s)) {
			$set($nc(dlssample->info), technician, chunk->readString(chunk->available()));
		}
	}
}

void DLSSoundbank::save($String* name) {
	writeSoundbank($$new($RIFFWriter, name, "DLS "_s));
}

void DLSSoundbank::save($File* file) {
	writeSoundbank($$new($RIFFWriter, file, "DLS "_s));
}

void DLSSoundbank::save($OutputStream* out) {
	writeSoundbank($$new($RIFFWriter, out, "DLS "_s));
}

void DLSSoundbank::writeSoundbank($RIFFWriter* writer) {
	$var($RIFFWriter, colh_chunk, $nc(writer)->writeChunk("colh"_s));
	$nc(colh_chunk)->writeUnsignedInt($nc(this->instruments)->size());
	if (this->major != -1 && this->minor != -1) {
		$var($RIFFWriter, vers_chunk, writer->writeChunk("vers"_s));
		$nc(vers_chunk)->writeUnsignedInt(this->major);
		vers_chunk->writeUnsignedInt(this->minor);
	}
	writeInstruments($(writer->writeList("lins"_s)));
	$var($RIFFWriter, ptbl, writer->writeChunk("ptbl"_s));
	$nc(ptbl)->writeUnsignedInt(8);
	ptbl->writeUnsignedInt($nc(this->samples)->size());
	int64_t ptbl_offset = writer->getFilePointer();
	for (int32_t i = 0; i < $nc(this->samples)->size(); ++i) {
		ptbl->writeUnsignedInt(0);
	}
	$var($RIFFWriter, wvpl, writer->writeList("wvpl"_s));
	int64_t off = $nc(wvpl)->getFilePointer();
	$var($List, offsettable, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(this->samples)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSSample, sample, $cast($DLSSample, i$->next()));
			{
				offsettable->add($($Long::valueOf(wvpl->getFilePointer() - off)));
				writeSample($(wvpl->writeList("wave"_s)), sample);
			}
		}
	}
	int64_t bak = writer->getFilePointer();
	writer->seek(ptbl_offset);
	writer->setWriteOverride(true);
	{
		$var($Iterator, i$, offsettable->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Long, offset, $cast($Long, i$->next()));
			writer->writeUnsignedInt($nc(offset)->longValue());
		}
	}
	writer->setWriteOverride(false);
	writer->seek(bak);
	writeInfo($(writer->writeList("INFO"_s)), this->info);
	writer->close();
}

void DLSSoundbank::writeSample($RIFFWriter* writer, $DLSSample* sample) {
	$var($AudioFormat, audioformat, $nc(sample)->getFormat());
	$var($AudioFormat$Encoding, encoding, $nc(audioformat)->getEncoding());
	float sampleRate = audioformat->getSampleRate();
	int32_t sampleSizeInBits = audioformat->getSampleSizeInBits();
	int32_t channels = audioformat->getChannels();
	int32_t frameSize = audioformat->getFrameSize();
	float frameRate = audioformat->getFrameRate();
	bool bigEndian = audioformat->isBigEndian();
	bool convert_needed = false;
	if (audioformat->getSampleSizeInBits() == 8) {
		$init($AudioFormat$Encoding);
		if (!$nc(encoding)->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			$assign(encoding, $AudioFormat$Encoding::PCM_UNSIGNED);
			convert_needed = true;
		}
	} else {
		$init($AudioFormat$Encoding);
		if (!$nc(encoding)->equals($AudioFormat$Encoding::PCM_SIGNED)) {
			$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
			convert_needed = true;
		}
		if (bigEndian) {
			bigEndian = false;
			convert_needed = true;
		}
	}
	if (convert_needed) {
		$assign(audioformat, $new($AudioFormat, encoding, sampleRate, sampleSizeInBits, channels, frameSize, frameRate, bigEndian));
	}
	$var($RIFFWriter, fmt_chunk, $nc(writer)->writeChunk("fmt "_s));
	int32_t sampleformat = 0;
	$init($AudioFormat$Encoding);
	if ($nc($(audioformat->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
		sampleformat = 1;
	} else {
		if ($nc($(audioformat->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED)) {
			sampleformat = 1;
		} else {
			if ($nc($(audioformat->getEncoding()))->equals($AudioFormat$Encoding::PCM_FLOAT)) {
				sampleformat = 3;
			}
		}
	}
	$nc(fmt_chunk)->writeUnsignedShort(sampleformat);
	fmt_chunk->writeUnsignedShort(audioformat->getChannels());
	fmt_chunk->writeUnsignedInt($cast(int64_t, audioformat->getSampleRate()));
	int64_t var$0 = ($cast(int64_t, audioformat->getFrameRate()));
	int64_t srate = var$0 * audioformat->getFrameSize();
	fmt_chunk->writeUnsignedInt(srate);
	fmt_chunk->writeUnsignedShort(audioformat->getFrameSize());
	fmt_chunk->writeUnsignedShort(audioformat->getSampleSizeInBits());
	fmt_chunk->write(0);
	fmt_chunk->write(0);
	writeSampleOptions($(writer->writeChunk("wsmp"_s)), sample->sampleoptions);
	if (convert_needed) {
		$var($RIFFWriter, data_chunk, writer->writeChunk("data"_s));
		$var($AudioInputStream, stream, $AudioSystem::getAudioInputStream(audioformat, $cast($AudioInputStream, $(sample->getData()))));
		$nc(stream)->transferTo(data_chunk);
	} else {
		$var($RIFFWriter, data_chunk, writer->writeChunk("data"_s));
		$var($ModelByteBuffer, databuff, sample->getDataBuffer());
		$nc(databuff)->writeTo(data_chunk);
	}
	writeInfo($(writer->writeList("INFO"_s)), sample->info);
}

void DLSSoundbank::writeInstruments($RIFFWriter* writer) {
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSInstrument, instrument, $cast($DLSInstrument, i$->next()));
			{
				writeInstrument($($nc(writer)->writeList("ins "_s)), instrument);
			}
		}
	}
}

void DLSSoundbank::writeInstrument($RIFFWriter* writer, $DLSInstrument* instrument) {
	int32_t art1_count = 0;
	int32_t art2_count = 0;
	{
		$var($Iterator, i$, $nc($($nc(instrument)->getModulators()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSModulator, modulator, $cast($DLSModulator, i$->next()));
			{
				if ($nc(modulator)->version == 1) {
					++art1_count;
				}
				if ($nc(modulator)->version == 2) {
					++art2_count;
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(instrument->regions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSRegion, region, $cast($DLSRegion, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc(region)->getModulators()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DLSModulator, modulator, $cast($DLSModulator, i$->next()));
						{
							if ($nc(modulator)->version == 1) {
								++art1_count;
							}
							if ($nc(modulator)->version == 2) {
								++art2_count;
							}
						}
					}
				}
			}
		}
	}
	int32_t version = 1;
	if (art2_count > 0) {
		version = 2;
	}
	$var($RIFFWriter, insh_chunk, $nc(writer)->writeChunk("insh"_s));
	$nc(insh_chunk)->writeUnsignedInt($nc($(instrument->getRegions()))->size());
	insh_chunk->writeUnsignedInt(instrument->bank + (instrument->druminstrument ? (int64_t)0x0000000080000000 : (int64_t)0));
	insh_chunk->writeUnsignedInt(instrument->preset);
	$var($RIFFWriter, lrgn, writer->writeList("lrgn"_s));
	{
		$var($Iterator, i$, $nc(instrument->regions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSRegion, region, $cast($DLSRegion, i$->next()));
			writeRegion(lrgn, region, version);
		}
	}
	writeArticulators(writer, $(instrument->getModulators()));
	writeInfo($(writer->writeList("INFO"_s)), instrument->info);
}

void DLSSoundbank::writeArticulators($RIFFWriter* writer, $List* modulators) {
	int32_t art1_count = 0;
	int32_t art2_count = 0;
	{
		$var($Iterator, i$, $nc(modulators)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSModulator, modulator, $cast($DLSModulator, i$->next()));
			{
				if ($nc(modulator)->version == 1) {
					++art1_count;
				}
				if ($nc(modulator)->version == 2) {
					++art2_count;
				}
			}
		}
	}
	if (art1_count > 0) {
		$var($RIFFWriter, lar1, $nc(writer)->writeList("lart"_s));
		$var($RIFFWriter, art1, $nc(lar1)->writeChunk("art1"_s));
		$nc(art1)->writeUnsignedInt(8);
		art1->writeUnsignedInt(art1_count);
		{
			$var($Iterator, i$, modulators->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DLSModulator, modulator, $cast($DLSModulator, i$->next()));
				{
					if ($nc(modulator)->version == 1) {
						art1->writeUnsignedShort(modulator->source);
						art1->writeUnsignedShort(modulator->control);
						art1->writeUnsignedShort(modulator->destination);
						art1->writeUnsignedShort(modulator->transform);
						art1->writeInt(modulator->scale);
					}
				}
			}
		}
	}
	if (art2_count > 0) {
		$var($RIFFWriter, lar2, $nc(writer)->writeList("lar2"_s));
		$var($RIFFWriter, art2, $nc(lar2)->writeChunk("art2"_s));
		$nc(art2)->writeUnsignedInt(8);
		art2->writeUnsignedInt(art2_count);
		{
			$var($Iterator, i$, modulators->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DLSModulator, modulator, $cast($DLSModulator, i$->next()));
				{
					if ($nc(modulator)->version == 2) {
						art2->writeUnsignedShort(modulator->source);
						art2->writeUnsignedShort(modulator->control);
						art2->writeUnsignedShort(modulator->destination);
						art2->writeUnsignedShort(modulator->transform);
						art2->writeInt(modulator->scale);
					}
				}
			}
		}
	}
}

void DLSSoundbank::writeRegion($RIFFWriter* writer, $DLSRegion* region, int32_t version) {
	$var($RIFFWriter, rgns, nullptr);
	if (version == 1) {
		$assign(rgns, $nc(writer)->writeList("rgn "_s));
	}
	if (version == 2) {
		$assign(rgns, $nc(writer)->writeList("rgn2"_s));
	}
	if (rgns == nullptr) {
		return;
	}
	$var($RIFFWriter, rgnh, $nc(rgns)->writeChunk("rgnh"_s));
	$nc(rgnh)->writeUnsignedShort($nc(region)->keyfrom);
	rgnh->writeUnsignedShort($nc(region)->keyto);
	rgnh->writeUnsignedShort($nc(region)->velfrom);
	rgnh->writeUnsignedShort($nc(region)->velto);
	rgnh->writeUnsignedShort($nc(region)->options);
	rgnh->writeUnsignedShort($nc(region)->exclusiveClass);
	if ($nc(region)->sampleoptions != nullptr) {
		writeSampleOptions($(rgns->writeChunk("wsmp"_s)), region->sampleoptions);
	}
	if ($nc(region)->sample != nullptr) {
		if ($nc(this->samples)->indexOf(region->sample) != -1) {
			$var($RIFFWriter, wlnk, rgns->writeChunk("wlnk"_s));
			$nc(wlnk)->writeUnsignedShort(region->fusoptions);
			wlnk->writeUnsignedShort(region->phasegroup);
			wlnk->writeUnsignedInt(region->channel);
			wlnk->writeUnsignedInt($nc(this->samples)->indexOf(region->sample));
		}
	}
	writeArticulators(rgns, $($nc(region)->getModulators()));
	rgns->close();
}

void DLSSoundbank::writeSampleOptions($RIFFWriter* wsmp, $DLSSampleOptions* sampleoptions) {
	$nc(wsmp)->writeUnsignedInt(20);
	wsmp->writeUnsignedShort($nc(sampleoptions)->unitynote);
	wsmp->writeShort($nc(sampleoptions)->finetune);
	wsmp->writeInt($nc(sampleoptions)->attenuation);
	wsmp->writeUnsignedInt($nc(sampleoptions)->options);
	wsmp->writeInt($nc($nc(sampleoptions)->loops)->size());
	{
		$var($Iterator, i$, $nc($nc(sampleoptions)->loops)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSSampleLoop, loop, $cast($DLSSampleLoop, i$->next()));
			{
				wsmp->writeUnsignedInt(16);
				wsmp->writeUnsignedInt($nc(loop)->type);
				wsmp->writeUnsignedInt($nc(loop)->start);
				wsmp->writeUnsignedInt($nc(loop)->length);
			}
		}
	}
}

void DLSSoundbank::writeInfoStringChunk($RIFFWriter* writer, $String* name, $String* value) {
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

void DLSSoundbank::writeInfo($RIFFWriter* writer, $DLSInfo* info) {
	writeInfoStringChunk(writer, "INAM"_s, $nc(info)->name);
	writeInfoStringChunk(writer, "ICRD"_s, $nc(info)->creationDate);
	writeInfoStringChunk(writer, "IENG"_s, $nc(info)->engineers);
	writeInfoStringChunk(writer, "IPRD"_s, $nc(info)->product);
	writeInfoStringChunk(writer, "ICOP"_s, $nc(info)->copyright);
	writeInfoStringChunk(writer, "ICMT"_s, $nc(info)->comments);
	writeInfoStringChunk(writer, "ISFT"_s, $nc(info)->tools);
	writeInfoStringChunk(writer, "IARL"_s, $nc(info)->archival_location);
	writeInfoStringChunk(writer, "IART"_s, $nc(info)->artist);
	writeInfoStringChunk(writer, "ICMS"_s, $nc(info)->commissioned);
	writeInfoStringChunk(writer, "IGNR"_s, $nc(info)->genre);
	writeInfoStringChunk(writer, "IKEY"_s, $nc(info)->keywords);
	writeInfoStringChunk(writer, "IMED"_s, $nc(info)->medium);
	writeInfoStringChunk(writer, "ISBJ"_s, $nc(info)->subject);
	writeInfoStringChunk(writer, "ISRC"_s, $nc(info)->source);
	writeInfoStringChunk(writer, "ISRF"_s, $nc(info)->source_form);
	writeInfoStringChunk(writer, "ITCH"_s, $nc(info)->technician);
}

$DLSInfo* DLSSoundbank::getInfo() {
	return this->info;
}

$String* DLSSoundbank::getName() {
	return $nc(this->info)->name;
}

$String* DLSSoundbank::getVersion() {
	return $str({$$str(this->major), "."_s, $$str(this->minor)});
}

$String* DLSSoundbank::getVendor() {
	return $nc(this->info)->engineers;
}

$String* DLSSoundbank::getDescription() {
	return $nc(this->info)->comments;
}

void DLSSoundbank::setName($String* s) {
	$set($nc(this->info), name, s);
}

void DLSSoundbank::setVendor($String* s) {
	$set($nc(this->info), engineers, s);
}

void DLSSoundbank::setDescription($String* s) {
	$set($nc(this->info), comments, s);
}

$SoundbankResourceArray* DLSSoundbank::getResources() {
	$var($SoundbankResourceArray, resources, $new($SoundbankResourceArray, $nc(this->samples)->size()));
	int32_t j = 0;
	for (int32_t i = 0; i < $nc(this->samples)->size(); ++i) {
		resources->set(j++, $cast($SoundbankResource, $($nc(this->samples)->get(i))));
	}
	return resources;
}

$InstrumentArray* DLSSoundbank::getInstruments() {
	$var($DLSInstrumentArray, inslist_array, $fcast($DLSInstrumentArray, $nc(this->instruments)->toArray($$new($DLSInstrumentArray, $nc(this->instruments)->size()))));
	$Arrays::sort(inslist_array, $$new($ModelInstrumentComparator));
	return $fcast($InstrumentArray, inslist_array);
}

$DLSSampleArray* DLSSoundbank::getSamples() {
	return $fcast($DLSSampleArray, $nc(this->samples)->toArray($$new($DLSSampleArray, $nc(this->samples)->size())));
}

$Instrument* DLSSoundbank::getInstrument($Patch* patch) {
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

void DLSSoundbank::addResource($SoundbankResource* resource) {
	if ($instanceOf($DLSInstrument, resource)) {
		$nc(this->instruments)->add($cast($DLSInstrument, resource));
	}
	if ($instanceOf($DLSSample, resource)) {
		$nc(this->samples)->add($cast($DLSSample, resource));
	}
}

void DLSSoundbank::removeResource($SoundbankResource* resource) {
	if ($instanceOf($DLSInstrument, resource)) {
		$nc(this->instruments)->remove($of(resource));
	}
	if ($instanceOf($DLSSample, resource)) {
		$nc(this->samples)->remove($of(resource));
	}
}

void DLSSoundbank::addInstrument($DLSInstrument* resource) {
	$nc(this->instruments)->add(resource);
}

void DLSSoundbank::removeInstrument($DLSInstrument* resource) {
	$nc(this->instruments)->remove($of(resource));
}

int64_t DLSSoundbank::getMajor() {
	return this->major;
}

void DLSSoundbank::setMajor(int64_t major) {
	this->major = major;
}

int64_t DLSSoundbank::getMinor() {
	return this->minor;
}

void DLSSoundbank::setMinor(int64_t minor) {
	this->minor = minor;
}

void clinit$DLSSoundbank($Class* class$) {
	$assignStatic(DLSSoundbank::DLSID_GMInHardware, $new($DLSSoundbank$DLSID, 0x178F2F24, 0x0000C364, 4561, 167, 96, 0, 0, 248, 117, 172, 18));
	$assignStatic(DLSSoundbank::DLSID_GSInHardware, $new($DLSSoundbank$DLSID, 0x178F2F25, 0x0000C364, 4561, 167, 96, 0, 0, 248, 117, 172, 18));
	$assignStatic(DLSSoundbank::DLSID_XGInHardware, $new($DLSSoundbank$DLSID, 0x178F2F26, 0x0000C364, 4561, 167, 96, 0, 0, 248, 117, 172, 18));
	$assignStatic(DLSSoundbank::DLSID_SupportsDLS1, $new($DLSSoundbank$DLSID, 0x178F2F27, 0x0000C364, 4561, 167, 96, 0, 0, 248, 117, 172, 18));
	$assignStatic(DLSSoundbank::DLSID_SupportsDLS2, $new($DLSSoundbank$DLSID, (int32_t)0xF14599E5, 18057, 4562, 175, 166, 0, 170, 0, 36, 216, 182));
	$assignStatic(DLSSoundbank::DLSID_SampleMemorySize, $new($DLSSoundbank$DLSID, 0x178F2F28, 0x0000C364, 4561, 167, 96, 0, 0, 248, 117, 172, 18));
	$assignStatic(DLSSoundbank::DLSID_ManufacturersID, $new($DLSSoundbank$DLSID, (int32_t)0xB03E1181, 0x00008095, 4562, 161, 239, 0, 96, 8, 51, 219, 216));
	$assignStatic(DLSSoundbank::DLSID_ProductID, $new($DLSSoundbank$DLSID, (int32_t)0xB03E1182, 0x00008095, 4562, 161, 239, 0, 96, 8, 51, 219, 216));
	$assignStatic(DLSSoundbank::DLSID_SamplePlaybackRate, $new($DLSSoundbank$DLSID, 0x2A91F713, 0x0000A4BF, 4562, 187, 223, 0, 96, 8, 51, 219, 216));
}

DLSSoundbank::DLSSoundbank() {
}

$Class* DLSSoundbank::load$($String* name, bool initialize) {
	$loadClass(DLSSoundbank, name, initialize, &_DLSSoundbank_ClassInfo_, clinit$DLSSoundbank, allocate$DLSSoundbank);
	return class$;
}

$Class* DLSSoundbank::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com