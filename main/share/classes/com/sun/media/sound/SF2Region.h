#ifndef _com_sun_media_sound_SF2Region_h_
#define _com_sun_media_sound_SF2Region_h_
//$ class com.sun.media.sound.SF2Region
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GENERATOR_ATTACKMODENV")
#undef GENERATOR_ATTACKMODENV
#pragma push_macro("GENERATOR_ATTACKVOLENV")
#undef GENERATOR_ATTACKVOLENV
#pragma push_macro("GENERATOR_CHORUSEFFECTSSEND")
#undef GENERATOR_CHORUSEFFECTSSEND
#pragma push_macro("GENERATOR_COARSETUNE")
#undef GENERATOR_COARSETUNE
#pragma push_macro("GENERATOR_DECAYMODENV")
#undef GENERATOR_DECAYMODENV
#pragma push_macro("GENERATOR_DECAYVOLENV")
#undef GENERATOR_DECAYVOLENV
#pragma push_macro("GENERATOR_DELAYMODENV")
#undef GENERATOR_DELAYMODENV
#pragma push_macro("GENERATOR_DELAYMODLFO")
#undef GENERATOR_DELAYMODLFO
#pragma push_macro("GENERATOR_DELAYVIBLFO")
#undef GENERATOR_DELAYVIBLFO
#pragma push_macro("GENERATOR_DELAYVOLENV")
#undef GENERATOR_DELAYVOLENV
#pragma push_macro("GENERATOR_ENDADDRSCOARSEOFFSET")
#undef GENERATOR_ENDADDRSCOARSEOFFSET
#pragma push_macro("GENERATOR_ENDADDRSOFFSET")
#undef GENERATOR_ENDADDRSOFFSET
#pragma push_macro("GENERATOR_ENDLOOPADDRSCOARSEOFFSET")
#undef GENERATOR_ENDLOOPADDRSCOARSEOFFSET
#pragma push_macro("GENERATOR_ENDLOOPADDRSOFFSET")
#undef GENERATOR_ENDLOOPADDRSOFFSET
#pragma push_macro("GENERATOR_ENDOPR")
#undef GENERATOR_ENDOPR
#pragma push_macro("GENERATOR_EXCLUSIVECLASS")
#undef GENERATOR_EXCLUSIVECLASS
#pragma push_macro("GENERATOR_FINETUNE")
#undef GENERATOR_FINETUNE
#pragma push_macro("GENERATOR_FREQMODLFO")
#undef GENERATOR_FREQMODLFO
#pragma push_macro("GENERATOR_FREQVIBLFO")
#undef GENERATOR_FREQVIBLFO
#pragma push_macro("GENERATOR_HOLDMODENV")
#undef GENERATOR_HOLDMODENV
#pragma push_macro("GENERATOR_HOLDVOLENV")
#undef GENERATOR_HOLDVOLENV
#pragma push_macro("GENERATOR_INITIALATTENUATION")
#undef GENERATOR_INITIALATTENUATION
#pragma push_macro("GENERATOR_INITIALFILTERFC")
#undef GENERATOR_INITIALFILTERFC
#pragma push_macro("GENERATOR_INITIALFILTERQ")
#undef GENERATOR_INITIALFILTERQ
#pragma push_macro("GENERATOR_INSTRUMENT")
#undef GENERATOR_INSTRUMENT
#pragma push_macro("GENERATOR_KEYNUM")
#undef GENERATOR_KEYNUM
#pragma push_macro("GENERATOR_KEYNUMTOMODENVDECAY")
#undef GENERATOR_KEYNUMTOMODENVDECAY
#pragma push_macro("GENERATOR_KEYNUMTOMODENVHOLD")
#undef GENERATOR_KEYNUMTOMODENVHOLD
#pragma push_macro("GENERATOR_KEYNUMTOVOLENVDECAY")
#undef GENERATOR_KEYNUMTOVOLENVDECAY
#pragma push_macro("GENERATOR_KEYNUMTOVOLENVHOLD")
#undef GENERATOR_KEYNUMTOVOLENVHOLD
#pragma push_macro("GENERATOR_KEYRANGE")
#undef GENERATOR_KEYRANGE
#pragma push_macro("GENERATOR_MODENVTOFILTERFC")
#undef GENERATOR_MODENVTOFILTERFC
#pragma push_macro("GENERATOR_MODENVTOPITCH")
#undef GENERATOR_MODENVTOPITCH
#pragma push_macro("GENERATOR_MODLFOTOFILTERFC")
#undef GENERATOR_MODLFOTOFILTERFC
#pragma push_macro("GENERATOR_MODLFOTOPITCH")
#undef GENERATOR_MODLFOTOPITCH
#pragma push_macro("GENERATOR_MODLFOTOVOLUME")
#undef GENERATOR_MODLFOTOVOLUME
#pragma push_macro("GENERATOR_OVERRIDINGROOTKEY")
#undef GENERATOR_OVERRIDINGROOTKEY
#pragma push_macro("GENERATOR_PAN")
#undef GENERATOR_PAN
#pragma push_macro("GENERATOR_RELEASEMODENV")
#undef GENERATOR_RELEASEMODENV
#pragma push_macro("GENERATOR_RELEASEVOLENV")
#undef GENERATOR_RELEASEVOLENV
#pragma push_macro("GENERATOR_RESERVED1")
#undef GENERATOR_RESERVED1
#pragma push_macro("GENERATOR_RESERVED2")
#undef GENERATOR_RESERVED2
#pragma push_macro("GENERATOR_RESERVED3")
#undef GENERATOR_RESERVED3
#pragma push_macro("GENERATOR_REVERBEFFECTSSEND")
#undef GENERATOR_REVERBEFFECTSSEND
#pragma push_macro("GENERATOR_SAMPLEID")
#undef GENERATOR_SAMPLEID
#pragma push_macro("GENERATOR_SAMPLEMODES")
#undef GENERATOR_SAMPLEMODES
#pragma push_macro("GENERATOR_SCALETUNING")
#undef GENERATOR_SCALETUNING
#pragma push_macro("GENERATOR_STARTADDRSCOARSEOFFSET")
#undef GENERATOR_STARTADDRSCOARSEOFFSET
#pragma push_macro("GENERATOR_STARTADDRSOFFSET")
#undef GENERATOR_STARTADDRSOFFSET
#pragma push_macro("GENERATOR_STARTLOOPADDRSCOARSEOFFSET")
#undef GENERATOR_STARTLOOPADDRSCOARSEOFFSET
#pragma push_macro("GENERATOR_STARTLOOPADDRSOFFSET")
#undef GENERATOR_STARTLOOPADDRSOFFSET
#pragma push_macro("GENERATOR_SUSTAINMODENV")
#undef GENERATOR_SUSTAINMODENV
#pragma push_macro("GENERATOR_SUSTAINVOLENV")
#undef GENERATOR_SUSTAINVOLENV
#pragma push_macro("GENERATOR_UNUSED1")
#undef GENERATOR_UNUSED1
#pragma push_macro("GENERATOR_UNUSED2")
#undef GENERATOR_UNUSED2
#pragma push_macro("GENERATOR_UNUSED3")
#undef GENERATOR_UNUSED3
#pragma push_macro("GENERATOR_UNUSED4")
#undef GENERATOR_UNUSED4
#pragma push_macro("GENERATOR_UNUSED5")
#undef GENERATOR_UNUSED5
#pragma push_macro("GENERATOR_VELOCITY")
#undef GENERATOR_VELOCITY
#pragma push_macro("GENERATOR_VELRANGE")
#undef GENERATOR_VELRANGE
#pragma push_macro("GENERATOR_VIBLFOTOPITCH")
#undef GENERATOR_VIBLFOTOPITCH

namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2Region : public ::java::lang::Object {
	$class(SF2Region, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SF2Region();
	void init$();
	virtual bool contains(int32_t generator);
	virtual $bytes* getBytes(int32_t generator);
	static int16_t getDefaultValue(int32_t generator);
	virtual ::java::util::Map* getGenerators();
	virtual int32_t getInteger(int32_t generator);
	virtual ::java::util::List* getModulators();
	virtual int16_t getShort(int32_t generator);
	virtual void putBytes(int32_t generator, $bytes* bytes);
	virtual void putInteger(int32_t generator, int32_t value);
	virtual void putShort(int32_t generator, int16_t value);
	static const int32_t GENERATOR_STARTADDRSOFFSET = 0;
	static const int32_t GENERATOR_ENDADDRSOFFSET = 1;
	static const int32_t GENERATOR_STARTLOOPADDRSOFFSET = 2;
	static const int32_t GENERATOR_ENDLOOPADDRSOFFSET = 3;
	static const int32_t GENERATOR_STARTADDRSCOARSEOFFSET = 4;
	static const int32_t GENERATOR_MODLFOTOPITCH = 5;
	static const int32_t GENERATOR_VIBLFOTOPITCH = 6;
	static const int32_t GENERATOR_MODENVTOPITCH = 7;
	static const int32_t GENERATOR_INITIALFILTERFC = 8;
	static const int32_t GENERATOR_INITIALFILTERQ = 9;
	static const int32_t GENERATOR_MODLFOTOFILTERFC = 10;
	static const int32_t GENERATOR_MODENVTOFILTERFC = 11;
	static const int32_t GENERATOR_ENDADDRSCOARSEOFFSET = 12;
	static const int32_t GENERATOR_MODLFOTOVOLUME = 13;
	static const int32_t GENERATOR_UNUSED1 = 14;
	static const int32_t GENERATOR_CHORUSEFFECTSSEND = 15;
	static const int32_t GENERATOR_REVERBEFFECTSSEND = 16;
	static const int32_t GENERATOR_PAN = 17;
	static const int32_t GENERATOR_UNUSED2 = 18;
	static const int32_t GENERATOR_UNUSED3 = 19;
	static const int32_t GENERATOR_UNUSED4 = 20;
	static const int32_t GENERATOR_DELAYMODLFO = 21;
	static const int32_t GENERATOR_FREQMODLFO = 22;
	static const int32_t GENERATOR_DELAYVIBLFO = 23;
	static const int32_t GENERATOR_FREQVIBLFO = 24;
	static const int32_t GENERATOR_DELAYMODENV = 25;
	static const int32_t GENERATOR_ATTACKMODENV = 26;
	static const int32_t GENERATOR_HOLDMODENV = 27;
	static const int32_t GENERATOR_DECAYMODENV = 28;
	static const int32_t GENERATOR_SUSTAINMODENV = 29;
	static const int32_t GENERATOR_RELEASEMODENV = 30;
	static const int32_t GENERATOR_KEYNUMTOMODENVHOLD = 31;
	static const int32_t GENERATOR_KEYNUMTOMODENVDECAY = 32;
	static const int32_t GENERATOR_DELAYVOLENV = 33;
	static const int32_t GENERATOR_ATTACKVOLENV = 34;
	static const int32_t GENERATOR_HOLDVOLENV = 35;
	static const int32_t GENERATOR_DECAYVOLENV = 36;
	static const int32_t GENERATOR_SUSTAINVOLENV = 37;
	static const int32_t GENERATOR_RELEASEVOLENV = 38;
	static const int32_t GENERATOR_KEYNUMTOVOLENVHOLD = 39;
	static const int32_t GENERATOR_KEYNUMTOVOLENVDECAY = 40;
	static const int32_t GENERATOR_INSTRUMENT = 41;
	static const int32_t GENERATOR_RESERVED1 = 42;
	static const int32_t GENERATOR_KEYRANGE = 43;
	static const int32_t GENERATOR_VELRANGE = 44;
	static const int32_t GENERATOR_STARTLOOPADDRSCOARSEOFFSET = 45;
	static const int32_t GENERATOR_KEYNUM = 46;
	static const int32_t GENERATOR_VELOCITY = 47;
	static const int32_t GENERATOR_INITIALATTENUATION = 48;
	static const int32_t GENERATOR_RESERVED2 = 49;
	static const int32_t GENERATOR_ENDLOOPADDRSCOARSEOFFSET = 50;
	static const int32_t GENERATOR_COARSETUNE = 51;
	static const int32_t GENERATOR_FINETUNE = 52;
	static const int32_t GENERATOR_SAMPLEID = 53;
	static const int32_t GENERATOR_SAMPLEMODES = 54;
	static const int32_t GENERATOR_RESERVED3 = 55;
	static const int32_t GENERATOR_SCALETUNING = 56;
	static const int32_t GENERATOR_EXCLUSIVECLASS = 57;
	static const int32_t GENERATOR_OVERRIDINGROOTKEY = 58;
	static const int32_t GENERATOR_UNUSED5 = 59;
	static const int32_t GENERATOR_ENDOPR = 60;
	::java::util::Map* generators = nullptr;
	::java::util::List* modulators = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("GENERATOR_ATTACKMODENV")
#pragma pop_macro("GENERATOR_ATTACKVOLENV")
#pragma pop_macro("GENERATOR_CHORUSEFFECTSSEND")
#pragma pop_macro("GENERATOR_COARSETUNE")
#pragma pop_macro("GENERATOR_DECAYMODENV")
#pragma pop_macro("GENERATOR_DECAYVOLENV")
#pragma pop_macro("GENERATOR_DELAYMODENV")
#pragma pop_macro("GENERATOR_DELAYMODLFO")
#pragma pop_macro("GENERATOR_DELAYVIBLFO")
#pragma pop_macro("GENERATOR_DELAYVOLENV")
#pragma pop_macro("GENERATOR_ENDADDRSCOARSEOFFSET")
#pragma pop_macro("GENERATOR_ENDADDRSOFFSET")
#pragma pop_macro("GENERATOR_ENDLOOPADDRSCOARSEOFFSET")
#pragma pop_macro("GENERATOR_ENDLOOPADDRSOFFSET")
#pragma pop_macro("GENERATOR_ENDOPR")
#pragma pop_macro("GENERATOR_EXCLUSIVECLASS")
#pragma pop_macro("GENERATOR_FINETUNE")
#pragma pop_macro("GENERATOR_FREQMODLFO")
#pragma pop_macro("GENERATOR_FREQVIBLFO")
#pragma pop_macro("GENERATOR_HOLDMODENV")
#pragma pop_macro("GENERATOR_HOLDVOLENV")
#pragma pop_macro("GENERATOR_INITIALATTENUATION")
#pragma pop_macro("GENERATOR_INITIALFILTERFC")
#pragma pop_macro("GENERATOR_INITIALFILTERQ")
#pragma pop_macro("GENERATOR_INSTRUMENT")
#pragma pop_macro("GENERATOR_KEYNUM")
#pragma pop_macro("GENERATOR_KEYNUMTOMODENVDECAY")
#pragma pop_macro("GENERATOR_KEYNUMTOMODENVHOLD")
#pragma pop_macro("GENERATOR_KEYNUMTOVOLENVDECAY")
#pragma pop_macro("GENERATOR_KEYNUMTOVOLENVHOLD")
#pragma pop_macro("GENERATOR_KEYRANGE")
#pragma pop_macro("GENERATOR_MODENVTOFILTERFC")
#pragma pop_macro("GENERATOR_MODENVTOPITCH")
#pragma pop_macro("GENERATOR_MODLFOTOFILTERFC")
#pragma pop_macro("GENERATOR_MODLFOTOPITCH")
#pragma pop_macro("GENERATOR_MODLFOTOVOLUME")
#pragma pop_macro("GENERATOR_OVERRIDINGROOTKEY")
#pragma pop_macro("GENERATOR_PAN")
#pragma pop_macro("GENERATOR_RELEASEMODENV")
#pragma pop_macro("GENERATOR_RELEASEVOLENV")
#pragma pop_macro("GENERATOR_RESERVED1")
#pragma pop_macro("GENERATOR_RESERVED2")
#pragma pop_macro("GENERATOR_RESERVED3")
#pragma pop_macro("GENERATOR_REVERBEFFECTSSEND")
#pragma pop_macro("GENERATOR_SAMPLEID")
#pragma pop_macro("GENERATOR_SAMPLEMODES")
#pragma pop_macro("GENERATOR_SCALETUNING")
#pragma pop_macro("GENERATOR_STARTADDRSCOARSEOFFSET")
#pragma pop_macro("GENERATOR_STARTADDRSOFFSET")
#pragma pop_macro("GENERATOR_STARTLOOPADDRSCOARSEOFFSET")
#pragma pop_macro("GENERATOR_STARTLOOPADDRSOFFSET")
#pragma pop_macro("GENERATOR_SUSTAINMODENV")
#pragma pop_macro("GENERATOR_SUSTAINVOLENV")
#pragma pop_macro("GENERATOR_UNUSED1")
#pragma pop_macro("GENERATOR_UNUSED2")
#pragma pop_macro("GENERATOR_UNUSED3")
#pragma pop_macro("GENERATOR_UNUSED4")
#pragma pop_macro("GENERATOR_UNUSED5")
#pragma pop_macro("GENERATOR_VELOCITY")
#pragma pop_macro("GENERATOR_VELRANGE")
#pragma pop_macro("GENERATOR_VIBLFOTOPITCH")

#endif // _com_sun_media_sound_SF2Region_h_