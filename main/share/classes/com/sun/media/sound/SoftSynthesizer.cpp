#include <com/sun/media/sound/SoftSynthesizer.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/AudioSynthesizer.h>
#include <com/sun/media/sound/AudioSynthesizerPropertyInfo.h>
#include <com/sun/media/sound/EmergencySoundbank.h>
#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelByteBufferWavetable.h>
#include <com/sun/media/sound/ModelDirector.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelInstrumentComparator.h>
#include <com/sun/media/sound/ModelMappedInstrument.h>
#include <com/sun/media/sound/ModelOscillator.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SF2Soundbank.h>
#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <com/sun/media/sound/SoftAudioPusher.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <com/sun/media/sound/SoftChannelProxy.h>
#include <com/sun/media/sound/SoftCubicResampler.h>
#include <com/sun/media/sound/SoftInstrument.h>
#include <com/sun/media/sound/SoftJitterCorrector.h>
#include <com/sun/media/sound/SoftLanczosResampler.h>
#include <com/sun/media/sound/SoftLinearResampler.h>
#include <com/sun/media/sound/SoftLinearResampler2.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/SoftPointResampler.h>
#include <com/sun/media/sound/SoftReceiver.h>
#include <com/sun/media/sound/SoftResampler.h>
#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <com/sun/media/sound/SoftSincResampler.h>
#include <com/sun/media/sound/SoftSynthesizer$1.h>
#include <com/sun/media/sound/SoftSynthesizer$2.h>
#include <com/sun/media/sound/SoftSynthesizer$3.h>
#include <com/sun/media/sound/SoftSynthesizer$4.h>
#include <com/sun/media/sound/SoftSynthesizer$Info.h>
#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream.h>
#include <com/sun/media/sound/SoftTuning.h>
#include <com/sun/media/sound/SoftVoice.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeMap.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Preferences.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDeviceReceiver.h>
#include <javax/sound/midi/MidiSystem.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/Transmitter.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

#undef FALSE
#undef INFO_DESCRIPTION
#undef INFO_NAME
#undef INFO_VENDOR
#undef INFO_VERSION
#undef TRUE

using $AudioSynthesizerPropertyInfoArray = $Array<::com::sun::media::sound::AudioSynthesizerPropertyInfo>;
using $ModelInstrumentArray = $Array<::com::sun::media::sound::ModelInstrument>;
using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $SoftChannelArray = $Array<::com::sun::media::sound::SoftChannel>;
using $SoftChannelProxyArray = $Array<::com::sun::media::sound::SoftChannelProxy>;
using $SoftVoiceArray = $Array<::com::sun::media::sound::SoftVoice>;
using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $MidiChannelArray = $Array<::javax::sound::midi::MidiChannel>;
using $PatchArray = $Array<::javax::sound::midi::Patch>;
using $VoiceStatusArray = $Array<::javax::sound::midi::VoiceStatus>;
using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $AudioSynthesizer = ::com::sun::media::sound::AudioSynthesizer;
using $AudioSynthesizerPropertyInfo = ::com::sun::media::sound::AudioSynthesizerPropertyInfo;
using $EmergencySoundbank = ::com::sun::media::sound::EmergencySoundbank;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelByteBufferWavetable = ::com::sun::media::sound::ModelByteBufferWavetable;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelInstrumentComparator = ::com::sun::media::sound::ModelInstrumentComparator;
using $ModelMappedInstrument = ::com::sun::media::sound::ModelMappedInstrument;
using $ModelOscillator = ::com::sun::media::sound::ModelOscillator;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ReferenceCountingDevice = ::com::sun::media::sound::ReferenceCountingDevice;
using $SF2Soundbank = ::com::sun::media::sound::SF2Soundbank;
using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $SoftAudioPusher = ::com::sun::media::sound::SoftAudioPusher;
using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $SoftChannelProxy = ::com::sun::media::sound::SoftChannelProxy;
using $SoftCubicResampler = ::com::sun::media::sound::SoftCubicResampler;
using $SoftInstrument = ::com::sun::media::sound::SoftInstrument;
using $SoftJitterCorrector = ::com::sun::media::sound::SoftJitterCorrector;
using $SoftLanczosResampler = ::com::sun::media::sound::SoftLanczosResampler;
using $SoftLinearResampler = ::com::sun::media::sound::SoftLinearResampler;
using $SoftLinearResampler2 = ::com::sun::media::sound::SoftLinearResampler2;
using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $SoftPointResampler = ::com::sun::media::sound::SoftPointResampler;
using $SoftReceiver = ::com::sun::media::sound::SoftReceiver;
using $SoftResampler = ::com::sun::media::sound::SoftResampler;
using $SoftResamplerStreamer = ::com::sun::media::sound::SoftResamplerStreamer;
using $SoftSincResampler = ::com::sun::media::sound::SoftSincResampler;
using $SoftSynthesizer$1 = ::com::sun::media::sound::SoftSynthesizer$1;
using $SoftSynthesizer$2 = ::com::sun::media::sound::SoftSynthesizer$2;
using $SoftSynthesizer$3 = ::com::sun::media::sound::SoftSynthesizer$3;
using $SoftSynthesizer$4 = ::com::sun::media::sound::SoftSynthesizer$4;
using $SoftSynthesizer$Info = ::com::sun::media::sound::SoftSynthesizer$Info;
using $SoftSynthesizer$WeakAudioStream = ::com::sun::media::sound::SoftSynthesizer$WeakAudioStream;
using $SoftTuning = ::com::sun::media::sound::SoftTuning;
using $SoftVoice = ::com::sun::media::sound::SoftVoice;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecurityException = ::java::lang::SecurityException;
using $Short = ::java::lang::Short;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
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
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeMap = ::java::util::TreeMap;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Preferences = ::java::util::prefs::Preferences;
using $Instrument = ::javax::sound::midi::Instrument;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceReceiver = ::javax::sound::midi::MidiDeviceReceiver;
using $MidiSystem = ::javax::sound::midi::MidiSystem;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Patch = ::javax::sound::midi::Patch;
using $Receiver = ::javax::sound::midi::Receiver;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $Transmitter = ::javax::sound::midi::Transmitter;
using $VoiceStatus = ::javax::sound::midi::VoiceStatus;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $DataLine = ::javax::sound::sampled::DataLine;
using $Line = ::javax::sound::sampled::Line;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0 : public $PrivilegedAction {
	$class(SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SoftSynthesizer::lambda$getDefaultSoundbank$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::*)()>(&SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.media.sound.SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::class$ = nullptr;

class SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1 : public $PrivilegedAction {
	$class(SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SoftSynthesizer::lambda$getStoredProperties$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::*)()>(&SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.media.sound.SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::class$ = nullptr;

$FieldInfo _SoftSynthesizer_FieldInfo_[] = {
	{"INFO_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftSynthesizer, INFO_NAME)},
	{"INFO_VENDOR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftSynthesizer, INFO_VENDOR)},
	{"INFO_DESCRIPTION", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftSynthesizer, INFO_DESCRIPTION)},
	{"INFO_VERSION", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SoftSynthesizer, INFO_VERSION)},
	{"info", "Ljavax/sound/midi/MidiDevice$Info;", nullptr, $STATIC | $FINAL, $staticField(SoftSynthesizer, info)},
	{"testline", "Ljavax/sound/sampled/SourceDataLine;", nullptr, $PRIVATE | $STATIC, $staticField(SoftSynthesizer, testline)},
	{"defaultSoundBank", "Ljavax/sound/midi/Soundbank;", nullptr, $PRIVATE | $STATIC, $staticField(SoftSynthesizer, defaultSoundBank)},
	{"weakstream", "Lcom/sun/media/sound/SoftSynthesizer$WeakAudioStream;", nullptr, 0, $field(SoftSynthesizer, weakstream)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $FINAL, $field(SoftSynthesizer, control_mutex)},
	{"voiceIDCounter", "I", nullptr, 0, $field(SoftSynthesizer, voiceIDCounter)},
	{"voice_allocation_mode", "I", nullptr, 0, $field(SoftSynthesizer, voice_allocation_mode)},
	{"load_default_soundbank", "Z", nullptr, 0, $field(SoftSynthesizer, load_default_soundbank)},
	{"reverb_light", "Z", nullptr, 0, $field(SoftSynthesizer, reverb_light)},
	{"reverb_on", "Z", nullptr, 0, $field(SoftSynthesizer, reverb_on)},
	{"chorus_on", "Z", nullptr, 0, $field(SoftSynthesizer, chorus_on)},
	{"agc_on", "Z", nullptr, 0, $field(SoftSynthesizer, agc_on)},
	{"channels", "[Lcom/sun/media/sound/SoftChannel;", nullptr, 0, $field(SoftSynthesizer, channels)},
	{"external_channels", "[Lcom/sun/media/sound/SoftChannelProxy;", nullptr, 0, $field(SoftSynthesizer, external_channels)},
	{"largemode", "Z", nullptr, $PRIVATE, $field(SoftSynthesizer, largemode)},
	{"gmmode", "I", nullptr, $PRIVATE, $field(SoftSynthesizer, gmmode)},
	{"deviceid", "I", nullptr, $PRIVATE, $field(SoftSynthesizer, deviceid)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftSynthesizer, format)},
	{"sourceDataLine", "Ljavax/sound/sampled/SourceDataLine;", nullptr, $PRIVATE, $field(SoftSynthesizer, sourceDataLine)},
	{"pusher", "Lcom/sun/media/sound/SoftAudioPusher;", nullptr, $PRIVATE, $field(SoftSynthesizer, pusher)},
	{"pusher_stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $field(SoftSynthesizer, pusher_stream)},
	{"controlrate", "F", nullptr, $PRIVATE, $field(SoftSynthesizer, controlrate)},
	{"open", "Z", nullptr, $PRIVATE, $field(SoftSynthesizer, open$)},
	{"implicitOpen", "Z", nullptr, $PRIVATE, $field(SoftSynthesizer, implicitOpen)},
	{"resamplerType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SoftSynthesizer, resamplerType)},
	{"resampler", "Lcom/sun/media/sound/SoftResampler;", nullptr, $PRIVATE, $field(SoftSynthesizer, resampler)},
	{"number_of_midi_channels", "I", nullptr, $PRIVATE, $field(SoftSynthesizer, number_of_midi_channels)},
	{"maxpoly", "I", nullptr, $PRIVATE, $field(SoftSynthesizer, maxpoly)},
	{"latency", "J", nullptr, $PRIVATE, $field(SoftSynthesizer, latency)},
	{"jitter_correction", "Z", nullptr, $PRIVATE, $field(SoftSynthesizer, jitter_correction)},
	{"mainmixer", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $PRIVATE, $field(SoftSynthesizer, mainmixer)},
	{"voices", "[Lcom/sun/media/sound/SoftVoice;", nullptr, $PRIVATE, $field(SoftSynthesizer, voices)},
	{"tunings", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/media/sound/SoftTuning;>;", $PRIVATE | $FINAL, $field(SoftSynthesizer, tunings)},
	{"inslist", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/media/sound/SoftInstrument;>;", $PRIVATE | $FINAL, $field(SoftSynthesizer, inslist)},
	{"loadedlist", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/media/sound/ModelInstrument;>;", $PRIVATE | $FINAL, $field(SoftSynthesizer, loadedlist)},
	{"recvslist", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/sound/midi/Receiver;>;", $PRIVATE | $FINAL, $field(SoftSynthesizer, recvslist)},
	{}
};

$MethodInfo _SoftSynthesizer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftSynthesizer::*)()>(&SoftSynthesizer::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"findInstrument", "(III)Lcom/sun/media/sound/SoftInstrument;", nullptr, 0, $method(static_cast<$SoftInstrument*(SoftSynthesizer::*)(int32_t,int32_t,int32_t)>(&SoftSynthesizer::findInstrument))},
	{"getAvailableInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getBuffers", "(Lcom/sun/media/sound/ModelInstrument;Ljava/util/List;)V", "(Lcom/sun/media/sound/ModelInstrument;Ljava/util/List<Lcom/sun/media/sound/ModelByteBuffer;>;)V", $PRIVATE, $method(static_cast<void(SoftSynthesizer::*)($ModelInstrument*,$List*)>(&SoftSynthesizer::getBuffers))},
	{"getChannels", "()[Ljavax/sound/midi/MidiChannel;", nullptr, $PUBLIC},
	{"getControlRate", "()F", nullptr, 0, $method(static_cast<float(SoftSynthesizer::*)()>(&SoftSynthesizer::getControlRate))},
	{"getDefaultSoundbank", "()Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC},
	{"getDeviceID", "()I", nullptr, 0, $method(static_cast<int32_t(SoftSynthesizer::*)()>(&SoftSynthesizer::getDeviceID))},
	{"getDeviceInfo", "()Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getGeneralMidiMode", "()I", nullptr, 0, $method(static_cast<int32_t(SoftSynthesizer::*)()>(&SoftSynthesizer::getGeneralMidiMode))},
	{"getLatency", "()J", nullptr, $PUBLIC},
	{"getLoadedInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getMainMixer", "()Lcom/sun/media/sound/SoftMainMixer;", nullptr, 0, $method(static_cast<$SoftMainMixer*(SoftSynthesizer::*)()>(&SoftSynthesizer::getMainMixer))},
	{"getMaxPolyphony", "()I", nullptr, $PUBLIC},
	{"getMaxReceivers", "()I", nullptr, $PUBLIC},
	{"getMaxTransmitters", "()I", nullptr, $PUBLIC},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"getPropertyInfo", "(Ljava/util/Map;)[Lcom/sun/media/sound/AudioSynthesizerPropertyInfo;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)[Lcom/sun/media/sound/AudioSynthesizerPropertyInfo;", $PUBLIC},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getReceiverReferenceCounting", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getReceivers", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Receiver;>;", $PUBLIC},
	{"getStoredProperties", "()Ljava/util/Properties;", nullptr, $PRIVATE, $method(static_cast<$Properties*(SoftSynthesizer::*)()>(&SoftSynthesizer::getStoredProperties))},
	{"getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitterReferenceCounting", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitters", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Transmitter;>;", $PUBLIC},
	{"getTuning", "(Ljavax/sound/midi/Patch;)Lcom/sun/media/sound/SoftTuning;", nullptr, 0, $method(static_cast<$SoftTuning*(SoftSynthesizer::*)($Patch*)>(&SoftSynthesizer::getTuning))},
	{"getVoiceAllocationMode", "()I", nullptr, 0, $method(static_cast<int32_t(SoftSynthesizer::*)()>(&SoftSynthesizer::getVoiceAllocationMode))},
	{"getVoiceStatus", "()[Ljavax/sound/midi/VoiceStatus;", nullptr, $PUBLIC},
	{"getVoices", "()[Lcom/sun/media/sound/SoftVoice;", nullptr, 0, $method(static_cast<$SoftVoiceArray*(SoftSynthesizer::*)()>(&SoftSynthesizer::getVoices))},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isSoundbankSupported", "(Ljavax/sound/midi/Soundbank;)Z", nullptr, $PUBLIC},
	{"lambda$getDefaultSoundbank$0", "()Ljava/io/OutputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OutputStream*(*)()>(&SoftSynthesizer::lambda$getDefaultSoundbank$0))},
	{"lambda$getStoredProperties$1", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Properties*(*)()>(&SoftSynthesizer::lambda$getStoredProperties$1))},
	{"loadAllInstruments", "(Ljavax/sound/midi/Soundbank;)Z", nullptr, $PUBLIC},
	{"loadInstrument", "(Ljavax/sound/midi/Instrument;)Z", nullptr, $PUBLIC},
	{"loadInstruments", "(Ljava/util/List;)Z", "(Ljava/util/List<Lcom/sun/media/sound/ModelInstrument;>;)Z", $PRIVATE, $method(static_cast<bool(SoftSynthesizer::*)($List*)>(&SoftSynthesizer::loadInstruments))},
	{"loadInstruments", "(Ljavax/sound/midi/Soundbank;[Ljavax/sound/midi/Patch;)Z", nullptr, $PUBLIC},
	{"loadSamples", "(Ljava/util/List;)Z", "(Ljava/util/List<Lcom/sun/media/sound/ModelInstrument;>;)Z", $PRIVATE, $method(static_cast<bool(SoftSynthesizer::*)($List*)>(&SoftSynthesizer::loadSamples))},
	{"open", "()V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"open", "(Ljavax/sound/sampled/SourceDataLine;Ljava/util/Map;)V", "(Ljavax/sound/sampled/SourceDataLine;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"openStream", "(Ljavax/sound/sampled/AudioFormat;Ljava/util/Map;)Ljavax/sound/sampled/AudioInputStream;", "(Ljavax/sound/sampled/AudioFormat;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)Ljavax/sound/sampled/AudioInputStream;", $PUBLIC, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"patchToString", "(Ljavax/sound/midi/Patch;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SoftSynthesizer::*)($Patch*)>(&SoftSynthesizer::patchToString))},
	{"processPropertyInfo", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PRIVATE, $method(static_cast<void(SoftSynthesizer::*)($Map*)>(&SoftSynthesizer::processPropertyInfo))},
	{"remapInstrument", "(Ljavax/sound/midi/Instrument;Ljavax/sound/midi/Instrument;)Z", nullptr, $PUBLIC},
	{"removeReceiver", "(Ljavax/sound/midi/Receiver;)V", nullptr, 0, $method(static_cast<void(SoftSynthesizer::*)($Receiver*)>(&SoftSynthesizer::removeReceiver))},
	{"setFormat", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftSynthesizer::*)($AudioFormat*)>(&SoftSynthesizer::setFormat))},
	{"setGeneralMidiMode", "(I)V", nullptr, 0, $method(static_cast<void(SoftSynthesizer::*)(int32_t)>(&SoftSynthesizer::setGeneralMidiMode))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unloadAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC},
	{"unloadInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC},
	{"unloadInstruments", "(Ljavax/sound/midi/Soundbank;[Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftSynthesizer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$Info", "com.sun.media.sound.SoftSynthesizer", "Info", $PRIVATE | $STATIC},
	{"com.sun.media.sound.SoftSynthesizer$WeakAudioStream", "com.sun.media.sound.SoftSynthesizer", "WeakAudioStream", $PROTECTED | $STATIC | $FINAL},
	{"com.sun.media.sound.SoftSynthesizer$4", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftSynthesizer$3", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftSynthesizer$2", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftSynthesizer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftSynthesizer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer",
	"java.lang.Object",
	"com.sun.media.sound.AudioSynthesizer,com.sun.media.sound.ReferenceCountingDevice",
	_SoftSynthesizer_FieldInfo_,
	_SoftSynthesizer_MethodInfo_,
	nullptr,
	nullptr,
	_SoftSynthesizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer$Info,com.sun.media.sound.SoftSynthesizer$WeakAudioStream,com.sun.media.sound.SoftSynthesizer$WeakAudioStream$1,com.sun.media.sound.SoftSynthesizer$4,com.sun.media.sound.SoftSynthesizer$3,com.sun.media.sound.SoftSynthesizer$2,com.sun.media.sound.SoftSynthesizer$1"
};

$Object* allocate$SoftSynthesizer($Class* clazz) {
	return $of($alloc(SoftSynthesizer));
}

int32_t SoftSynthesizer::hashCode() {
	 return this->$AudioSynthesizer::hashCode();
}

bool SoftSynthesizer::equals(Object$* arg0) {
	 return this->$AudioSynthesizer::equals(arg0);
}

$Object* SoftSynthesizer::clone() {
	 return this->$AudioSynthesizer::clone();
}

$String* SoftSynthesizer::toString() {
	 return this->$AudioSynthesizer::toString();
}

void SoftSynthesizer::finalize() {
	this->$AudioSynthesizer::finalize();
}

$String* SoftSynthesizer::INFO_NAME = nullptr;
$String* SoftSynthesizer::INFO_VENDOR = nullptr;
$String* SoftSynthesizer::INFO_DESCRIPTION = nullptr;
$String* SoftSynthesizer::INFO_VERSION = nullptr;
$MidiDevice$Info* SoftSynthesizer::info = nullptr;
$SourceDataLine* SoftSynthesizer::testline = nullptr;
$Soundbank* SoftSynthesizer::defaultSoundBank = nullptr;

void SoftSynthesizer::init$() {
	$set(this, weakstream, nullptr);
	$set(this, control_mutex, this);
	this->voiceIDCounter = 0;
	this->voice_allocation_mode = 0;
	this->load_default_soundbank = false;
	this->reverb_light = true;
	this->reverb_on = true;
	this->chorus_on = true;
	this->agc_on = true;
	$set(this, external_channels, nullptr);
	this->largemode = false;
	this->gmmode = 0;
	this->deviceid = 0;
	$set(this, format, $new($AudioFormat, (float)0x0000AC44, 16, 2, true, false));
	$set(this, sourceDataLine, nullptr);
	$set(this, pusher, nullptr);
	$set(this, pusher_stream, nullptr);
	this->controlrate = 147.0f;
	this->open$ = false;
	this->implicitOpen = false;
	$set(this, resamplerType, "linear"_s);
	$set(this, resampler, $new($SoftLinearResampler));
	this->number_of_midi_channels = 16;
	this->maxpoly = 64;
	this->latency = 0x00030D40;
	this->jitter_correction = false;
	$set(this, tunings, $new($HashMap));
	$set(this, inslist, $new($HashMap));
	$set(this, loadedlist, $new($HashMap));
	$set(this, recvslist, $new($ArrayList));
}

void SoftSynthesizer::getBuffers($ModelInstrument* instrument, $List* buffers) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ModelPerformerArray, arr$, $nc(instrument)->getPerformers());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModelPerformer, performer, arr$->get(i$));
			{
				if ($nc(performer)->getOscillators() != nullptr) {
					{
						$var($Iterator, i$, $nc($(performer->getOscillators()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ModelOscillator, osc, $cast($ModelOscillator, i$->next()));
							{
								if ($instanceOf($ModelByteBufferWavetable, osc)) {
									$var($ModelByteBufferWavetable, w, $cast($ModelByteBufferWavetable, osc));
									$var($ModelByteBuffer, buff, $nc(w)->getBuffer());
									if (buff != nullptr) {
										$nc(buffers)->add(buff);
									}
									$assign(buff, w->get8BitExtensionBuffer());
									if (buff != nullptr) {
										$nc(buffers)->add(buff);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool SoftSynthesizer::loadSamples($List* instruments) {
	$useLocalCurrentObjectStackCache();
	if (this->largemode) {
		return true;
	}
	$var($List, buffers, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModelInstrument, instrument, $cast($ModelInstrument, i$->next()));
			getBuffers(instrument, buffers);
		}
	}
	try {
		$ModelByteBuffer::loadAll(buffers);
	} catch ($IOException& e) {
		return false;
	}
	return true;
}

bool SoftSynthesizer::loadInstruments($List* instruments) {
	$useLocalCurrentObjectStackCache();
	if (!isOpen()) {
		return false;
	}
	if (!loadSamples(instruments)) {
		return false;
	}
	$synchronized(this->control_mutex) {
		if (this->channels != nullptr) {
			{
				$var($SoftChannelArray, arr$, this->channels);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($SoftChannel, c, arr$->get(i$));
					{
						$set($nc(c), current_instrument, nullptr);
						$set(c, current_director, nullptr);
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc(instruments)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Instrument, instrument, $cast($Instrument, i$->next()));
				{
					$var($String, pat, patchToString($($nc(instrument)->getPatch())));
					$var($SoftInstrument, softins, $new($SoftInstrument, $cast($ModelInstrument, instrument)));
					$nc(this->inslist)->put(pat, softins);
					$nc(this->loadedlist)->put(pat, $cast($ModelInstrument, instrument));
				}
			}
		}
	}
	return true;
}

void SoftSynthesizer::processPropertyInfo($Map* info) {
	$useLocalCurrentObjectStackCache();
	$var($AudioSynthesizerPropertyInfoArray, items, getPropertyInfo(info));
	$var($String, resamplerType, $cast($String, $nc($nc(items)->get(0))->value));
	if ($nc(resamplerType)->equalsIgnoreCase("point"_s)) {
		$set(this, resampler, $new($SoftPointResampler));
		$set(this, resamplerType, "point"_s);
	} else if (resamplerType->equalsIgnoreCase("linear"_s)) {
		$set(this, resampler, $new($SoftLinearResampler2));
		$set(this, resamplerType, "linear"_s);
	} else if (resamplerType->equalsIgnoreCase("linear1"_s)) {
		$set(this, resampler, $new($SoftLinearResampler));
		$set(this, resamplerType, "linear1"_s);
	} else if (resamplerType->equalsIgnoreCase("linear2"_s)) {
		$set(this, resampler, $new($SoftLinearResampler2));
		$set(this, resamplerType, "linear2"_s);
	} else if (resamplerType->equalsIgnoreCase("cubic"_s)) {
		$set(this, resampler, $new($SoftCubicResampler));
		$set(this, resamplerType, "cubic"_s);
	} else if (resamplerType->equalsIgnoreCase("lanczos"_s)) {
		$set(this, resampler, $new($SoftLanczosResampler));
		$set(this, resamplerType, "lanczos"_s);
	} else if (resamplerType->equalsIgnoreCase("sinc"_s)) {
		$set(this, resampler, $new($SoftSincResampler));
		$set(this, resamplerType, "sinc"_s);
	}
	setFormat($cast($AudioFormat, $nc(items->get(2))->value));
	this->controlrate = $nc(($cast($Float, $nc(items->get(1))->value)))->floatValue();
	this->latency = $nc(($cast($Long, $nc(items->get(3))->value)))->longValue();
	this->deviceid = $nc(($cast($Integer, $nc(items->get(4))->value)))->intValue();
	this->maxpoly = $nc(($cast($Integer, $nc(items->get(5))->value)))->intValue();
	this->reverb_on = $nc(($cast($Boolean, $nc(items->get(6))->value)))->booleanValue();
	this->chorus_on = $nc(($cast($Boolean, $nc(items->get(7))->value)))->booleanValue();
	this->agc_on = $nc(($cast($Boolean, $nc(items->get(8))->value)))->booleanValue();
	this->largemode = $nc(($cast($Boolean, $nc(items->get(9))->value)))->booleanValue();
	this->number_of_midi_channels = $nc(($cast($Integer, $nc(items->get(10))->value)))->intValue();
	this->jitter_correction = $nc(($cast($Boolean, $nc(items->get(11))->value)))->booleanValue();
	this->reverb_light = $nc(($cast($Boolean, $nc(items->get(12))->value)))->booleanValue();
	this->load_default_soundbank = $nc(($cast($Boolean, $nc(items->get(13))->value)))->booleanValue();
}

$String* SoftSynthesizer::patchToString($Patch* patch) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ModelPatch, patch) && $nc(($cast($ModelPatch, patch)))->isPercussion()) {
		$var($String, var$0, $$str({"p."_s, $$str($nc(patch)->getProgram()), "."_s}));
		return $concat(var$0, $$str(patch->getBank()));
	} else {
		$var($String, var$1, $$str({$$str($nc(patch)->getProgram()), "."_s}));
		return $concat(var$1, $$str(patch->getBank()));
	}
}

void SoftSynthesizer::setFormat($AudioFormat* format) {
	if ($nc(format)->getChannels() > 2) {
		$throwNew($IllegalArgumentException, "Only mono and stereo audio supported."_s);
	}
	if ($AudioFloatConverter::getConverter(format) == nullptr) {
		$throwNew($IllegalArgumentException, "Audio format not supported."_s);
	}
	$set(this, format, format);
}

void SoftSynthesizer::removeReceiver($Receiver* recv) {
	bool perform_close = false;
	$synchronized(this->control_mutex) {
		if ($nc(this->recvslist)->remove($of(recv))) {
			if (this->implicitOpen && $nc(this->recvslist)->isEmpty()) {
				perform_close = true;
			}
		}
	}
	if (perform_close) {
		close();
	}
}

$SoftMainMixer* SoftSynthesizer::getMainMixer() {
	if (!isOpen()) {
		return nullptr;
	}
	return this->mainmixer;
}

$SoftInstrument* SoftSynthesizer::findInstrument(int32_t program, int32_t bank, int32_t channel) {
	$useLocalCurrentObjectStackCache();
	if (bank >> 7 == 120 || bank >> 7 == 121) {
		$var($SoftInstrument, current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({$$str(program), "."_s, $$str(bank)}))));
		if (current_instrument != nullptr) {
			return current_instrument;
		}
		$var($String, p_plaf, nullptr);
		if (bank >> 7 == 120) {
			$assign(p_plaf, "p."_s);
		} else {
			$assign(p_plaf, ""_s);
		}
		$assign(current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, $$str(program), "."_s, $$str((((int32_t)(bank & (uint32_t)128)) << 7))}))));
		if (current_instrument != nullptr) {
			return current_instrument;
		}
		$assign(current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, $$str(program), "."_s, $$str(((int32_t)(bank & (uint32_t)128)))}))));
		if (current_instrument != nullptr) {
			return current_instrument;
		}
		$assign(current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, $$str(program), ".0"_s}))));
		if (current_instrument != nullptr) {
			return current_instrument;
		}
		$assign(current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, $$str(program), "0.0"_s}))));
		if (current_instrument != nullptr) {
			return current_instrument;
		}
		return nullptr;
	}
	$var($String, p_plaf, nullptr);
	if (channel == 9) {
		$assign(p_plaf, "p."_s);
	} else {
		$assign(p_plaf, ""_s);
	}
	$var($SoftInstrument, current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, $$str(program), "."_s, $$str(bank)}))));
	if (current_instrument != nullptr) {
		return current_instrument;
	}
	$assign(current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, $$str(program), ".0"_s}))));
	if (current_instrument != nullptr) {
		return current_instrument;
	}
	$assign(current_instrument, $cast($SoftInstrument, $nc(this->inslist)->get($$str({p_plaf, "0.0"_s}))));
	if (current_instrument != nullptr) {
		return current_instrument;
	}
	return nullptr;
}

int32_t SoftSynthesizer::getVoiceAllocationMode() {
	return this->voice_allocation_mode;
}

int32_t SoftSynthesizer::getGeneralMidiMode() {
	return this->gmmode;
}

void SoftSynthesizer::setGeneralMidiMode(int32_t gmmode) {
	this->gmmode = gmmode;
}

int32_t SoftSynthesizer::getDeviceID() {
	return this->deviceid;
}

float SoftSynthesizer::getControlRate() {
	return this->controlrate;
}

$SoftVoiceArray* SoftSynthesizer::getVoices() {
	return this->voices;
}

$SoftTuning* SoftSynthesizer::getTuning($Patch* patch) {
	$useLocalCurrentObjectStackCache();
	$var($String, t_id, patchToString(patch));
	$var($SoftTuning, tuning, $cast($SoftTuning, $nc(this->tunings)->get(t_id)));
	if (tuning == nullptr) {
		$assign(tuning, $new($SoftTuning, patch));
		$nc(this->tunings)->put(t_id, tuning);
	}
	return tuning;
}

int64_t SoftSynthesizer::getLatency() {
	$synchronized(this->control_mutex) {
		return this->latency;
	}
}

$AudioFormat* SoftSynthesizer::getFormat() {
	$synchronized(this->control_mutex) {
		return this->format;
	}
}

int32_t SoftSynthesizer::getMaxPolyphony() {
	$synchronized(this->control_mutex) {
		return this->maxpoly;
	}
}

$MidiChannelArray* SoftSynthesizer::getChannels() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->control_mutex) {
		if (this->external_channels == nullptr) {
			$set(this, external_channels, $new($SoftChannelProxyArray, 16));
			for (int32_t i = 0; i < $nc(this->external_channels)->length; ++i) {
				$nc(this->external_channels)->set(i, $$new($SoftChannelProxy));
			}
		}
		$var($MidiChannelArray, ret, nullptr);
		if (isOpen()) {
			$assign(ret, $new($MidiChannelArray, $nc(this->channels)->length));
		} else {
			$assign(ret, $new($MidiChannelArray, 16));
		}
		for (int32_t i = 0; i < $nc(ret)->length; ++i) {
			ret->set(i, $nc(this->external_channels)->get(i));
		}
		return ret;
	}
}

$VoiceStatusArray* SoftSynthesizer::getVoiceStatus() {
	$useLocalCurrentObjectStackCache();
	if (!isOpen()) {
		$var($VoiceStatusArray, tempVoiceStatusArray, $new($VoiceStatusArray, getMaxPolyphony()));
		for (int32_t i = 0; i < tempVoiceStatusArray->length; ++i) {
			$var($VoiceStatus, b, $new($VoiceStatus));
			b->active = false;
			b->bank = 0;
			b->channel = 0;
			b->note = 0;
			b->program = 0;
			b->volume = 0;
			tempVoiceStatusArray->set(i, b);
		}
		return tempVoiceStatusArray;
	}
	$synchronized(this->control_mutex) {
		$var($VoiceStatusArray, tempVoiceStatusArray, $new($VoiceStatusArray, $nc(this->voices)->length));
		for (int32_t i = 0; i < $nc(this->voices)->length; ++i) {
			$var($VoiceStatus, a, $nc(this->voices)->get(i));
			$var($VoiceStatus, b, $new($VoiceStatus));
			b->active = $nc(a)->active;
			b->bank = a->bank;
			b->channel = a->channel;
			b->note = a->note;
			b->program = a->program;
			b->volume = a->volume;
			tempVoiceStatusArray->set(i, b);
		}
		return tempVoiceStatusArray;
	}
}

bool SoftSynthesizer::isSoundbankSupported($Soundbank* soundbank) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Instrument, ins, arr$->get(i$));
			if (!($instanceOf($ModelInstrument, ins))) {
				return false;
			}
		}
	}
	return true;
}

bool SoftSynthesizer::loadInstrument($Instrument* instrument) {
	$useLocalCurrentObjectStackCache();
	if (instrument == nullptr || (!($instanceOf($ModelInstrument, instrument)))) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported instrument: "_s, instrument}));
	}
	$var($List, instruments, $new($ArrayList));
	instruments->add($cast($ModelInstrument, instrument));
	return loadInstruments(instruments);
}

void SoftSynthesizer::unloadInstrument($Instrument* instrument) {
	$useLocalCurrentObjectStackCache();
	if (instrument == nullptr || (!($instanceOf($ModelInstrument, instrument)))) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported instrument: "_s, instrument}));
	}
	if (!isOpen()) {
		return;
	}
	$var($String, pat, patchToString($($nc(instrument)->getPatch())));
	$synchronized(this->control_mutex) {
		{
			$var($SoftChannelArray, arr$, this->channels);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($SoftChannel, c, arr$->get(i$));
				$set($nc(c), current_instrument, nullptr);
			}
		}
		$nc(this->inslist)->remove(pat);
		$nc(this->loadedlist)->remove(pat);
		for (int32_t i = 0; i < $nc(this->channels)->length; ++i) {
			$nc($nc(this->channels)->get(i))->allSoundOff();
		}
	}
}

bool SoftSynthesizer::remapInstrument($Instrument* from, $Instrument* to) {
	$useLocalCurrentObjectStackCache();
	if (from == nullptr) {
		$throwNew($NullPointerException);
	}
	if (to == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ModelInstrument, from))) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported instrument: "_s, $($nc($of(from))->toString())}));
	}
	if (!($instanceOf($ModelInstrument, to))) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported instrument: "_s, $($nc($of(to))->toString())}));
	}
	if (!isOpen()) {
		return false;
	}
	$synchronized(this->control_mutex) {
		if (!$nc(this->loadedlist)->containsValue(to)) {
			$throwNew($IllegalArgumentException, "Instrument to is not loaded."_s);
		}
		unloadInstrument(from);
		$var($ModelMappedInstrument, mfrom, $new($ModelMappedInstrument, $cast($ModelInstrument, to), $($nc(from)->getPatch())));
		return loadInstrument(mfrom);
	}
}

$Soundbank* SoftSynthesizer::getDefaultSoundbank() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(SoftSynthesizer::class$) {
		if (SoftSynthesizer::defaultSoundBank != nullptr) {
			return SoftSynthesizer::defaultSoundBank;
		}
		$var($List, actions, $new($ArrayList));
		actions->add($$new($SoftSynthesizer$1, this));
		actions->add($$new($SoftSynthesizer$2, this));
		actions->add($$new($SoftSynthesizer$3, this));
		actions->add($$new($SoftSynthesizer$4, this));
		{
			$var($Iterator, i$, actions->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($PrivilegedAction, action, $cast($PrivilegedAction, i$->next()));
				{
					try {
						$var($InputStream, is, $cast($InputStream, $AccessController::doPrivileged(action)));
						if (is == nullptr) {
							continue;
						}
						$var($Soundbank, sbk, nullptr);
						{
							$var($Throwable, var$0, nullptr);
							try {
								$assign(sbk, $MidiSystem::getSoundbank(static_cast<$InputStream*>($$new($BufferedInputStream, is))));
							} catch ($Throwable& var$1) {
								$assign(var$0, var$1);
							} /*finally*/ {
								$nc(is)->close();
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
						if (sbk != nullptr) {
							$assignStatic(SoftSynthesizer::defaultSoundBank, sbk);
							return SoftSynthesizer::defaultSoundBank;
						}
					} catch ($Exception& e) {
					}
				}
			}
		}
		try {
			$assignStatic(SoftSynthesizer::defaultSoundBank, $EmergencySoundbank::createSoundbank());
		} catch ($Exception& e) {
		}
		if (SoftSynthesizer::defaultSoundBank != nullptr) {
			$var($OutputStream, out, $cast($OutputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0)))));
			if (out != nullptr) {
				try {
					$nc(($cast($SF2Soundbank, SoftSynthesizer::defaultSoundBank)))->save(out);
					out->close();
				} catch ($IOException& ignored) {
				}
			}
		}
	}
	return SoftSynthesizer::defaultSoundBank;
}

$InstrumentArray* SoftSynthesizer::getAvailableInstruments() {
	$useLocalCurrentObjectStackCache();
	$var($Soundbank, defsbk, getDefaultSoundbank());
	if (defsbk == nullptr) {
		return $new($InstrumentArray, 0);
	}
	$var($InstrumentArray, inslist_array, $nc(defsbk)->getInstruments());
	$Arrays::sort(inslist_array, $$new($ModelInstrumentComparator));
	return inslist_array;
}

$InstrumentArray* SoftSynthesizer::getLoadedInstruments() {
	$useLocalCurrentObjectStackCache();
	if (!isOpen()) {
		return $new($InstrumentArray, 0);
	}
	$synchronized(this->control_mutex) {
		$var($ModelInstrumentArray, inslist_array, $new($ModelInstrumentArray, $nc($($nc(this->loadedlist)->values()))->size()));
		$nc($($nc(this->loadedlist)->values()))->toArray(inslist_array);
		$Arrays::sort(inslist_array, $$new($ModelInstrumentComparator));
		return $fcast($InstrumentArray, inslist_array);
	}
}

bool SoftSynthesizer::loadAllInstruments($Soundbank* soundbank) {
	$useLocalCurrentObjectStackCache();
	$var($List, instruments, $new($ArrayList));
	{
		$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Instrument, ins, arr$->get(i$));
			{
				if (ins == nullptr || !($instanceOf($ModelInstrument, ins))) {
					$throwNew($IllegalArgumentException, $$str({"Unsupported instrument: "_s, ins}));
				}
				instruments->add($cast($ModelInstrument, ins));
			}
		}
	}
	return loadInstruments(instruments);
}

void SoftSynthesizer::unloadAllInstruments($Soundbank* soundbank) {
	$useLocalCurrentObjectStackCache();
	if (soundbank == nullptr || !isSoundbankSupported(soundbank)) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported soundbank: "_s, soundbank}));
	}
	if (!isOpen()) {
		return;
	}
	{
		$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Instrument, ins, arr$->get(i$));
			{
				if ($instanceOf($ModelInstrument, ins)) {
					unloadInstrument(ins);
				}
			}
		}
	}
}

bool SoftSynthesizer::loadInstruments($Soundbank* soundbank, $PatchArray* patchList) {
	$useLocalCurrentObjectStackCache();
	$var($List, instruments, $new($ArrayList));
	{
		$var($PatchArray, arr$, patchList);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Patch, patch, arr$->get(i$));
			{
				$var($Instrument, ins, $nc(soundbank)->getInstrument(patch));
				if (ins == nullptr || !($instanceOf($ModelInstrument, ins))) {
					$throwNew($IllegalArgumentException, $$str({"Unsupported instrument: "_s, ins}));
				}
				instruments->add($cast($ModelInstrument, ins));
			}
		}
	}
	return loadInstruments(instruments);
}

void SoftSynthesizer::unloadInstruments($Soundbank* soundbank, $PatchArray* patchList) {
	$useLocalCurrentObjectStackCache();
	if (soundbank == nullptr || !isSoundbankSupported(soundbank)) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported soundbank: "_s, soundbank}));
	}
	if (!isOpen()) {
		return;
	}
	{
		$var($PatchArray, arr$, patchList);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Patch, pat, arr$->get(i$));
			{
				$var($Instrument, ins, $nc(soundbank)->getInstrument(pat));
				if ($instanceOf($ModelInstrument, ins)) {
					unloadInstrument(ins);
				}
			}
		}
	}
}

$MidiDevice$Info* SoftSynthesizer::getDeviceInfo() {
	return SoftSynthesizer::info;
}

$Properties* SoftSynthesizer::getStoredProperties() {
	$beforeCallerSensitive();
	return $cast($Properties, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1))));
}

$AudioSynthesizerPropertyInfoArray* SoftSynthesizer::getPropertyInfo($Map* info) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $new($ArrayList));
	$var($AudioSynthesizerPropertyInfo, item, nullptr);
	bool o = info == nullptr && this->open$;
	$assign(item, $new($AudioSynthesizerPropertyInfo, "interpolation"_s, o ? $of(this->resamplerType) : $of("linear"_s)));
	$set(item, choices, $new($StringArray, {
		"linear"_s,
		"linear1"_s,
		"linear2"_s,
		"cubic"_s,
		"lanczos"_s,
		"sinc"_s,
		"point"_s
	}));
	$set(item, description, "Interpolation method"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "control rate"_s, $($Float::valueOf(o ? this->controlrate : 147.0f))));
	$set(item, description, "Control rate"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "format"_s, o ? $of(this->format) : $of($$new($AudioFormat, (float)0x0000AC44, 16, 2, true, false))));
	$set(item, description, "Default audio format"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "latency"_s, $($Long::valueOf(o ? this->latency : (int64_t)120000))));
	$set(item, description, "Default latency"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "device id"_s, $($Integer::valueOf(o ? this->deviceid : 0))));
	$set(item, description, "Device ID for SysEx Messages"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "max polyphony"_s, $($Integer::valueOf(o ? this->maxpoly : 64))));
	$set(item, description, "Maximum polyphony"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "reverb"_s, $($Boolean::valueOf(o ? this->reverb_on : true))));
	$set(item, description, "Turn reverb effect on or off"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "chorus"_s, $($Boolean::valueOf(o ? this->chorus_on : true))));
	$set(item, description, "Turn chorus effect on or off"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "auto gain control"_s, $($Boolean::valueOf(o ? this->agc_on : true))));
	$set(item, description, "Turn auto gain control on or off"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "large mode"_s, $($Boolean::valueOf(o ? this->largemode : false))));
	$set(item, description, "Turn large mode on or off."_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "midi channels"_s, $($Integer::valueOf(o ? $nc(this->channels)->length : 16))));
	$set(item, description, "Number of midi channels."_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "jitter correction"_s, $($Boolean::valueOf(o ? this->jitter_correction : true))));
	$set(item, description, "Turn jitter correction on or off."_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "light reverb"_s, $($Boolean::valueOf(o ? this->reverb_light : true))));
	$set(item, description, "Turn light reverb mode on or off"_s);
	list->add(item);
	$assign(item, $new($AudioSynthesizerPropertyInfo, "load default soundbank"_s, $($Boolean::valueOf(o ? this->load_default_soundbank : true))));
	$set(item, description, "Enabled/disable loading default soundbank"_s);
	list->add(item);
	$var($AudioSynthesizerPropertyInfoArray, items, nullptr);
	$assign(items, $fcast($AudioSynthesizerPropertyInfoArray, list->toArray($$new($AudioSynthesizerPropertyInfoArray, list->size()))));
	$var($Properties, storedProperties, getStoredProperties());
	{
		$var($AudioSynthesizerPropertyInfoArray, arr$, items);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AudioSynthesizerPropertyInfo, item2, arr$->get(i$));
			{
				$var($Object, v, (info == nullptr) ? ($Object*)nullptr : $nc(info)->get($nc(item2)->name));
				$assign(v, (v != nullptr) ? v : $of($nc(storedProperties)->getProperty($nc(item2)->name)));
				if (v != nullptr) {
					$Class* c = ($nc(item2)->valueClass);
					if ($nc(c)->isInstance(v)) {
						$set(item2, value, v);
					} else if ($instanceOf($String, v)) {
						$var($String, s, $cast($String, v));
						if (c == $Boolean::class$) {
							if (s->equalsIgnoreCase("true"_s)) {
								$set(item2, value, $Boolean::TRUE);
							}
							if (s->equalsIgnoreCase("false"_s)) {
								$set(item2, value, $Boolean::FALSE);
							}
						} else {
							$load($AudioFormat);
							if (c == $AudioFormat::class$) {
								int32_t channels = 2;
								bool signed$ = true;
								bool bigendian = false;
								int32_t bits = 16;
								float sampleRate = 44100.0f;
								try {
									$var($StringTokenizer, st, $new($StringTokenizer, s, ", "_s));
									$var($String, prevToken, ""_s);
									while (st->hasMoreTokens()) {
										$var($String, token, $nc($(st->nextToken()))->toLowerCase());
										if (token->equals("mono"_s)) {
											channels = 1;
										}
										if (token->startsWith("channel"_s)) {
											channels = $Integer::parseInt(prevToken);
										}
										if (token->contains("unsigned"_s)) {
											signed$ = false;
										}
										if (token->equals("big-endian"_s)) {
											bigendian = true;
										}
										if (token->equals("bit"_s)) {
											bits = $Integer::parseInt(prevToken);
										}
										if (token->equals("hz"_s)) {
											sampleRate = $Float::parseFloat(prevToken);
										}
										$assign(prevToken, token);
									}
									$set(item2, value, $new($AudioFormat, sampleRate, bits, channels, signed$, bigendian));
								} catch ($NumberFormatException& e) {
								}
							} else {
								try {
									$load($Byte);
									if (c == $Byte::class$) {
										$set(item2, value, $Byte::valueOf(s));
									} else {
										$load($Short);
										if (c == $Short::class$) {
											$set(item2, value, $Short::valueOf(s));
										} else {
											if (c == $Integer::class$) {
												$set(item2, value, $Integer::valueOf(s));
											} else {
												if (c == $Long::class$) {
													$set(item2, value, $Long::valueOf(s));
												} else {
													if (c == $Float::class$) {
														$set(item2, value, $Float::valueOf(s));
													} else {
														$load($Double);
														if (c == $Double::class$) {
															$set(item2, value, $Double::valueOf(s));
														}
													}
												}
											}
										}
									}
								} catch ($NumberFormatException& e) {
								}
							}
						}
					} else if ($instanceOf($Number, v)) {
						$var($Number, n, $cast($Number, v));
						$load($Byte);
						if (c == $Byte::class$) {
							$set(item2, value, $Byte::valueOf(n->byteValue()));
						}
						$load($Short);
						if (c == $Short::class$) {
							$set(item2, value, $Short::valueOf(n->shortValue()));
						}
						if (c == $Integer::class$) {
							$set(item2, value, $Integer::valueOf(n->intValue()));
						}
						if (c == $Long::class$) {
							$set(item2, value, $Long::valueOf(n->longValue()));
						}
						if (c == $Float::class$) {
							$set(item2, value, $Float::valueOf(n->floatValue()));
						}
						$load($Double);
						if (c == $Double::class$) {
							$set(item2, value, $Double::valueOf(n->doubleValue()));
						}
					}
				}
			}
		}
	}
	return items;
}

void SoftSynthesizer::open() {
	if (isOpen()) {
		$synchronized(this->control_mutex) {
			this->implicitOpen = false;
		}
		return;
	}
	open(nullptr, nullptr);
}

void SoftSynthesizer::open($SourceDataLine* line$renamed, $Map* info) {
	$useLocalCurrentObjectStackCache();
	$var($SourceDataLine, line, line$renamed);
	if (isOpen()) {
		$synchronized(this->control_mutex) {
			this->implicitOpen = false;
		}
		return;
	}
	$synchronized(this->control_mutex) {
		try {
			if (line != nullptr) {
				setFormat($(line->getFormat()));
			}
			$var($AudioInputStream, ais, openStream($(getFormat()), info));
			$set(this, weakstream, $new($SoftSynthesizer$WeakAudioStream, ais));
			$assign(ais, $nc(this->weakstream)->getAudioInputStream());
			if (line == nullptr) {
				if (SoftSynthesizer::testline != nullptr) {
					$assign(line, SoftSynthesizer::testline);
				} else {
					$assign(line, $AudioSystem::getSourceDataLine($(getFormat())));
				}
			}
			double latency = (double)this->latency;
			if (!$nc(line)->isOpen()) {
				int32_t var$0 = $nc($(getFormat()))->getFrameSize();
				int32_t bufferSize = var$0 * $cast(int32_t, ($nc($(getFormat()))->getFrameRate() * (latency / 1000000.0f)));
				line->open($(getFormat()), bufferSize);
				$set(this, sourceDataLine, line);
			}
			if (!$nc(line)->isActive()) {
				line->start();
			}
			int32_t controlbuffersize = 512;
			try {
				controlbuffersize = $nc(ais)->available();
			} catch ($IOException& e) {
			}
			int32_t buffersize = $nc(line)->getBufferSize();
			buffersize -= $mod(buffersize, controlbuffersize);
			if (buffersize < 3 * controlbuffersize) {
				buffersize = 3 * controlbuffersize;
			}
			if (this->jitter_correction) {
				$assign(ais, $new($SoftJitterCorrector, ais, buffersize, controlbuffersize));
				if (this->weakstream != nullptr) {
					$set($nc(this->weakstream), jitter_stream, ais);
				}
			}
			$set(this, pusher, $new($SoftAudioPusher, line, ais, controlbuffersize));
			$set(this, pusher_stream, ais);
			$nc(this->pusher)->start();
			if (this->weakstream != nullptr) {
				$set($nc(this->weakstream), pusher, this->pusher);
				$set($nc(this->weakstream), sourceDataLine, this->sourceDataLine);
			}
		} catch ($LineUnavailableException& e) {
			if (isOpen()) {
				close();
			}
			$var($MidiUnavailableException, ex, $new($MidiUnavailableException, "Can not open line"_s));
			ex->initCause(e);
			$throw(ex);
		} catch ($SecurityException& e) {
			if (isOpen()) {
				close();
			}
			$var($MidiUnavailableException, ex, $new($MidiUnavailableException, "Can not open line"_s));
			ex->initCause(e);
			$throw(ex);
		} catch ($IllegalArgumentException& e) {
			if (isOpen()) {
				close();
			}
			$var($MidiUnavailableException, ex, $new($MidiUnavailableException, "Can not open line"_s));
			ex->initCause(e);
			$throw(ex);
		}
	}
}

$AudioInputStream* SoftSynthesizer::openStream($AudioFormat* targetFormat, $Map* info) {
	$useLocalCurrentObjectStackCache();
	if (isOpen()) {
		$throwNew($MidiUnavailableException, "Synthesizer is already open"_s);
	}
	$synchronized(this->control_mutex) {
		this->gmmode = 0;
		this->voice_allocation_mode = 0;
		processPropertyInfo(info);
		this->open$ = true;
		this->implicitOpen = false;
		if (targetFormat != nullptr) {
			setFormat(targetFormat);
		}
		if (this->load_default_soundbank) {
			$var($Soundbank, defbank, getDefaultSoundbank());
			if (defbank != nullptr) {
				loadAllInstruments(defbank);
			}
		}
		$set(this, voices, $new($SoftVoiceArray, this->maxpoly));
		for (int32_t i = 0; i < this->maxpoly; ++i) {
			$nc(this->voices)->set(i, $$new($SoftVoice, this));
		}
		$set(this, mainmixer, $new($SoftMainMixer, this));
		$set(this, channels, $new($SoftChannelArray, this->number_of_midi_channels));
		for (int32_t i = 0; i < $nc(this->channels)->length; ++i) {
			$nc(this->channels)->set(i, $$new($SoftChannel, this, i));
		}
		if (this->external_channels == nullptr) {
			if ($nc(this->channels)->length < 16) {
				$set(this, external_channels, $new($SoftChannelProxyArray, 16));
			} else {
				$set(this, external_channels, $new($SoftChannelProxyArray, $nc(this->channels)->length));
			}
			for (int32_t i = 0; i < $nc(this->external_channels)->length; ++i) {
				$nc(this->external_channels)->set(i, $$new($SoftChannelProxy));
			}
		} else if ($nc(this->channels)->length > $nc(this->external_channels)->length) {
			$var($SoftChannelProxyArray, new_external_channels, $new($SoftChannelProxyArray, $nc(this->channels)->length));
			for (int32_t i = 0; i < $nc(this->external_channels)->length; ++i) {
				new_external_channels->set(i, $nc(this->external_channels)->get(i));
			}
			for (int32_t i = $nc(this->external_channels)->length; i < new_external_channels->length; ++i) {
				new_external_channels->set(i, $$new($SoftChannelProxy));
			}
		}
		for (int32_t i = 0; i < $nc(this->channels)->length; ++i) {
			$nc($nc(this->external_channels)->get(i))->setChannel($nc(this->channels)->get(i));
		}
		{
			$var($SoftVoiceArray, arr$, getVoices());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($SoftVoice, voice, arr$->get(i$));
				$set($nc(voice), resampler, $nc(this->resampler)->openStreamer());
			}
		}
		{
			$var($Iterator, i$, $nc($(getReceivers()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Receiver, recv, $cast($Receiver, i$->next()));
				{
					$var($SoftReceiver, srecv, $cast($SoftReceiver, recv));
					$nc(srecv)->open = this->open$;
					$set(srecv, mainmixer, this->mainmixer);
					$set(srecv, midimessages, $nc(this->mainmixer)->midimessages);
				}
			}
		}
		return $nc(this->mainmixer)->getInputStream();
	}
}

void SoftSynthesizer::close() {
	$useLocalCurrentObjectStackCache();
	if (!isOpen()) {
		return;
	}
	$var($SoftAudioPusher, pusher_to_be_closed, nullptr);
	$var($AudioInputStream, pusher_stream_to_be_closed, nullptr);
	$synchronized(this->control_mutex) {
		if (this->pusher != nullptr) {
			$assign(pusher_to_be_closed, this->pusher);
			$assign(pusher_stream_to_be_closed, this->pusher_stream);
			$set(this, pusher, nullptr);
			$set(this, pusher_stream, nullptr);
		}
	}
	if (pusher_to_be_closed != nullptr) {
		pusher_to_be_closed->stop();
		try {
			$nc(pusher_stream_to_be_closed)->close();
		} catch ($IOException& e) {
		}
	}
	$synchronized(this->control_mutex) {
		if (this->mainmixer != nullptr) {
			$nc(this->mainmixer)->close();
		}
		this->open$ = false;
		this->implicitOpen = false;
		$set(this, mainmixer, nullptr);
		$set(this, voices, nullptr);
		$set(this, channels, nullptr);
		if (this->external_channels != nullptr) {
			for (int32_t i = 0; i < $nc(this->external_channels)->length; ++i) {
				$nc($nc(this->external_channels)->get(i))->setChannel(nullptr);
			}
		}
		if (this->sourceDataLine != nullptr) {
			$nc(this->sourceDataLine)->close();
			$set(this, sourceDataLine, nullptr);
		}
		$nc(this->inslist)->clear();
		$nc(this->loadedlist)->clear();
		$nc(this->tunings)->clear();
		while ($nc(this->recvslist)->size() != 0) {
			$nc(($cast($Receiver, $($nc(this->recvslist)->get($nc(this->recvslist)->size() - 1)))))->close();
		}
	}
}

bool SoftSynthesizer::isOpen() {
	$synchronized(this->control_mutex) {
		return this->open$;
	}
}

int64_t SoftSynthesizer::getMicrosecondPosition() {
	if (!isOpen()) {
		return 0;
	}
	$synchronized(this->control_mutex) {
		return $nc(this->mainmixer)->getMicrosecondPosition();
	}
}

int32_t SoftSynthesizer::getMaxReceivers() {
	return -1;
}

int32_t SoftSynthesizer::getMaxTransmitters() {
	return 0;
}

$Receiver* SoftSynthesizer::getReceiver() {
	$synchronized(this->control_mutex) {
		$var($SoftReceiver, receiver, $new($SoftReceiver, this));
		receiver->open = this->open$;
		$nc(this->recvslist)->add(receiver);
		return receiver;
	}
}

$List* SoftSynthesizer::getReceivers() {
	$synchronized(this->control_mutex) {
		$var($ArrayList, recvs, $new($ArrayList));
		recvs->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->recvslist))));
		return recvs;
	}
}

$Transmitter* SoftSynthesizer::getTransmitter() {
	$throwNew($MidiUnavailableException, "No transmitter available"_s);
	$shouldNotReachHere();
}

$List* SoftSynthesizer::getTransmitters() {
	return $new($ArrayList);
}

$Receiver* SoftSynthesizer::getReceiverReferenceCounting() {
	if (!isOpen()) {
		open();
		$synchronized(this->control_mutex) {
			this->implicitOpen = true;
		}
	}
	return getReceiver();
}

$Transmitter* SoftSynthesizer::getTransmitterReferenceCounting() {
	$throwNew($MidiUnavailableException, "No transmitter available"_s);
	$shouldNotReachHere();
}

$Properties* SoftSynthesizer::lambda$getStoredProperties$1() {
	$init(SoftSynthesizer);
	$useLocalCurrentObjectStackCache();
	$var($Properties, p, $new($Properties));
	$var($String, notePath, "/com/sun/media/sound/softsynthesizer"_s);
	try {
		$var($Preferences, prefroot, $Preferences::userRoot());
		if ($nc(prefroot)->nodeExists(notePath)) {
			$var($Preferences, prefs, prefroot->node(notePath));
			$var($StringArray, prefs_keys, $nc(prefs)->keys());
			{
				$var($StringArray, arr$, prefs_keys);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, prefs_key, arr$->get(i$));
					{
						$var($String, val, prefs->get(prefs_key, nullptr));
						if (val != nullptr) {
							p->setProperty(prefs_key, val);
						}
					}
				}
			}
		}
	} catch ($BackingStoreException& ignored) {
	}
	return p;
}

$OutputStream* SoftSynthesizer::lambda$getDefaultSoundbank$0() {
	$init(SoftSynthesizer);
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, userhome, $new($File, $($System::getProperty("user.home"_s)), ".gervill"_s));
		if (!userhome->isDirectory()) {
			if (!userhome->mkdirs()) {
				return nullptr;
			}
		}
		$var($File, emg_soundbank_file, $new($File, userhome, "soundbank-emg.sf2"_s));
		if (emg_soundbank_file->isFile()) {
			return nullptr;
		}
		return $new($FileOutputStream, emg_soundbank_file);
	} catch ($FileNotFoundException& ignored) {
	}
	return nullptr;
}

void clinit$SoftSynthesizer($Class* class$) {
	$assignStatic(SoftSynthesizer::INFO_NAME, "Gervill"_s);
	$assignStatic(SoftSynthesizer::INFO_VENDOR, "OpenJDK"_s);
	$assignStatic(SoftSynthesizer::INFO_DESCRIPTION, "Software MIDI Synthesizer"_s);
	$assignStatic(SoftSynthesizer::INFO_VERSION, "1.0"_s);
	$assignStatic(SoftSynthesizer::info, $new($SoftSynthesizer$Info));
	$assignStatic(SoftSynthesizer::testline, nullptr);
	$assignStatic(SoftSynthesizer::defaultSoundBank, nullptr);
}

SoftSynthesizer::SoftSynthesizer() {
}

$Class* SoftSynthesizer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::classInfo$.name)) {
			return SoftSynthesizer$$Lambda$lambda$getDefaultSoundbank$0::load$(name, initialize);
		}
		if (name->equals(SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::classInfo$.name)) {
			return SoftSynthesizer$$Lambda$lambda$getStoredProperties$1$1::load$(name, initialize);
		}
	}
	$loadClass(SoftSynthesizer, name, initialize, &_SoftSynthesizer_ClassInfo_, clinit$SoftSynthesizer, allocate$SoftSynthesizer);
	return class$;
}

$Class* SoftSynthesizer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com