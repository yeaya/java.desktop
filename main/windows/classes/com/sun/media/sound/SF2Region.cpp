#include <com/sun/media/sound/SF2Region.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef GENERATOR_ATTACKMODENV
#undef GENERATOR_ATTACKVOLENV
#undef GENERATOR_CHORUSEFFECTSSEND
#undef GENERATOR_COARSETUNE
#undef GENERATOR_DECAYMODENV
#undef GENERATOR_DECAYVOLENV
#undef GENERATOR_DELAYMODENV
#undef GENERATOR_DELAYMODLFO
#undef GENERATOR_DELAYVIBLFO
#undef GENERATOR_DELAYVOLENV
#undef GENERATOR_ENDADDRSCOARSEOFFSET
#undef GENERATOR_ENDADDRSOFFSET
#undef GENERATOR_ENDLOOPADDRSCOARSEOFFSET
#undef GENERATOR_ENDLOOPADDRSOFFSET
#undef GENERATOR_ENDOPR
#undef GENERATOR_EXCLUSIVECLASS
#undef GENERATOR_FINETUNE
#undef GENERATOR_FREQMODLFO
#undef GENERATOR_FREQVIBLFO
#undef GENERATOR_HOLDMODENV
#undef GENERATOR_HOLDVOLENV
#undef GENERATOR_INITIALATTENUATION
#undef GENERATOR_INITIALFILTERFC
#undef GENERATOR_INITIALFILTERQ
#undef GENERATOR_INSTRUMENT
#undef GENERATOR_KEYNUM
#undef GENERATOR_KEYNUMTOMODENVDECAY
#undef GENERATOR_KEYNUMTOMODENVHOLD
#undef GENERATOR_KEYNUMTOVOLENVDECAY
#undef GENERATOR_KEYNUMTOVOLENVHOLD
#undef GENERATOR_KEYRANGE
#undef GENERATOR_MODENVTOFILTERFC
#undef GENERATOR_MODENVTOPITCH
#undef GENERATOR_MODLFOTOFILTERFC
#undef GENERATOR_MODLFOTOPITCH
#undef GENERATOR_MODLFOTOVOLUME
#undef GENERATOR_OVERRIDINGROOTKEY
#undef GENERATOR_PAN
#undef GENERATOR_RELEASEMODENV
#undef GENERATOR_RELEASEVOLENV
#undef GENERATOR_RESERVED1
#undef GENERATOR_RESERVED2
#undef GENERATOR_RESERVED3
#undef GENERATOR_REVERBEFFECTSSEND
#undef GENERATOR_SAMPLEID
#undef GENERATOR_SAMPLEMODES
#undef GENERATOR_SCALETUNING
#undef GENERATOR_STARTADDRSCOARSEOFFSET
#undef GENERATOR_STARTADDRSOFFSET
#undef GENERATOR_STARTLOOPADDRSCOARSEOFFSET
#undef GENERATOR_STARTLOOPADDRSOFFSET
#undef GENERATOR_SUSTAINMODENV
#undef GENERATOR_SUSTAINVOLENV
#undef GENERATOR_UNUSED1
#undef GENERATOR_UNUSED2
#undef GENERATOR_UNUSED3
#undef GENERATOR_UNUSED4
#undef GENERATOR_UNUSED5
#undef GENERATOR_VELOCITY
#undef GENERATOR_VELRANGE
#undef GENERATOR_VIBLFOTOPITCH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Region_FieldInfo_[] = {
	{"GENERATOR_STARTADDRSOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_STARTADDRSOFFSET)},
	{"GENERATOR_ENDADDRSOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ENDADDRSOFFSET)},
	{"GENERATOR_STARTLOOPADDRSOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_STARTLOOPADDRSOFFSET)},
	{"GENERATOR_ENDLOOPADDRSOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ENDLOOPADDRSOFFSET)},
	{"GENERATOR_STARTADDRSCOARSEOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_STARTADDRSCOARSEOFFSET)},
	{"GENERATOR_MODLFOTOPITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_MODLFOTOPITCH)},
	{"GENERATOR_VIBLFOTOPITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_VIBLFOTOPITCH)},
	{"GENERATOR_MODENVTOPITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_MODENVTOPITCH)},
	{"GENERATOR_INITIALFILTERFC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_INITIALFILTERFC)},
	{"GENERATOR_INITIALFILTERQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_INITIALFILTERQ)},
	{"GENERATOR_MODLFOTOFILTERFC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_MODLFOTOFILTERFC)},
	{"GENERATOR_MODENVTOFILTERFC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_MODENVTOFILTERFC)},
	{"GENERATOR_ENDADDRSCOARSEOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ENDADDRSCOARSEOFFSET)},
	{"GENERATOR_MODLFOTOVOLUME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_MODLFOTOVOLUME)},
	{"GENERATOR_UNUSED1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_UNUSED1)},
	{"GENERATOR_CHORUSEFFECTSSEND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_CHORUSEFFECTSSEND)},
	{"GENERATOR_REVERBEFFECTSSEND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_REVERBEFFECTSSEND)},
	{"GENERATOR_PAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_PAN)},
	{"GENERATOR_UNUSED2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_UNUSED2)},
	{"GENERATOR_UNUSED3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_UNUSED3)},
	{"GENERATOR_UNUSED4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_UNUSED4)},
	{"GENERATOR_DELAYMODLFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_DELAYMODLFO)},
	{"GENERATOR_FREQMODLFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_FREQMODLFO)},
	{"GENERATOR_DELAYVIBLFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_DELAYVIBLFO)},
	{"GENERATOR_FREQVIBLFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_FREQVIBLFO)},
	{"GENERATOR_DELAYMODENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_DELAYMODENV)},
	{"GENERATOR_ATTACKMODENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ATTACKMODENV)},
	{"GENERATOR_HOLDMODENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_HOLDMODENV)},
	{"GENERATOR_DECAYMODENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_DECAYMODENV)},
	{"GENERATOR_SUSTAINMODENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_SUSTAINMODENV)},
	{"GENERATOR_RELEASEMODENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_RELEASEMODENV)},
	{"GENERATOR_KEYNUMTOMODENVHOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_KEYNUMTOMODENVHOLD)},
	{"GENERATOR_KEYNUMTOMODENVDECAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_KEYNUMTOMODENVDECAY)},
	{"GENERATOR_DELAYVOLENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_DELAYVOLENV)},
	{"GENERATOR_ATTACKVOLENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ATTACKVOLENV)},
	{"GENERATOR_HOLDVOLENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_HOLDVOLENV)},
	{"GENERATOR_DECAYVOLENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_DECAYVOLENV)},
	{"GENERATOR_SUSTAINVOLENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_SUSTAINVOLENV)},
	{"GENERATOR_RELEASEVOLENV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_RELEASEVOLENV)},
	{"GENERATOR_KEYNUMTOVOLENVHOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_KEYNUMTOVOLENVHOLD)},
	{"GENERATOR_KEYNUMTOVOLENVDECAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_KEYNUMTOVOLENVDECAY)},
	{"GENERATOR_INSTRUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_INSTRUMENT)},
	{"GENERATOR_RESERVED1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_RESERVED1)},
	{"GENERATOR_KEYRANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_KEYRANGE)},
	{"GENERATOR_VELRANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_VELRANGE)},
	{"GENERATOR_STARTLOOPADDRSCOARSEOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_STARTLOOPADDRSCOARSEOFFSET)},
	{"GENERATOR_KEYNUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_KEYNUM)},
	{"GENERATOR_VELOCITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_VELOCITY)},
	{"GENERATOR_INITIALATTENUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_INITIALATTENUATION)},
	{"GENERATOR_RESERVED2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_RESERVED2)},
	{"GENERATOR_ENDLOOPADDRSCOARSEOFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ENDLOOPADDRSCOARSEOFFSET)},
	{"GENERATOR_COARSETUNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_COARSETUNE)},
	{"GENERATOR_FINETUNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_FINETUNE)},
	{"GENERATOR_SAMPLEID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_SAMPLEID)},
	{"GENERATOR_SAMPLEMODES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_SAMPLEMODES)},
	{"GENERATOR_RESERVED3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_RESERVED3)},
	{"GENERATOR_SCALETUNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_SCALETUNING)},
	{"GENERATOR_EXCLUSIVECLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_EXCLUSIVECLASS)},
	{"GENERATOR_OVERRIDINGROOTKEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_OVERRIDINGROOTKEY)},
	{"GENERATOR_UNUSED5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_UNUSED5)},
	{"GENERATOR_ENDOPR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Region, GENERATOR_ENDOPR)},
	{"generators", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Short;>;", $PROTECTED, $field(SF2Region, generators)},
	{"modulators", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SF2Modulator;>;", $PROTECTED, $field(SF2Region, modulators)},
	{}
};

$MethodInfo _SF2Region_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2Region::*)()>(&SF2Region::init$))},
	{"contains", "(I)Z", nullptr, $PUBLIC},
	{"getBytes", "(I)[B", nullptr, $PUBLIC},
	{"getDefaultValue", "(I)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int32_t)>(&SF2Region::getDefaultValue))},
	{"getGenerators", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Short;>;", $PUBLIC},
	{"getInteger", "(I)I", nullptr, $PUBLIC},
	{"getModulators", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/SF2Modulator;>;", $PUBLIC},
	{"getShort", "(I)S", nullptr, $PUBLIC},
	{"putBytes", "(I[B)V", nullptr, $PUBLIC},
	{"putInteger", "(II)V", nullptr, $PUBLIC},
	{"putShort", "(IS)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SF2Region_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.media.sound.SF2Region",
	"java.lang.Object",
	nullptr,
	_SF2Region_FieldInfo_,
	_SF2Region_MethodInfo_
};

$Object* allocate$SF2Region($Class* clazz) {
	return $of($alloc(SF2Region));
}

void SF2Region::init$() {
	$set(this, generators, $new($HashMap));
	$set(this, modulators, $new($ArrayList));
}

$Map* SF2Region::getGenerators() {
	return this->generators;
}

bool SF2Region::contains(int32_t generator) {
	return $nc(this->generators)->containsKey($($Integer::valueOf(generator)));
}

int16_t SF2Region::getDefaultValue(int32_t generator) {
	if (generator == 8) {
		return (int16_t)13500;
	}
	if (generator == 21) {
		return (int16_t)-12000;
	}
	if (generator == 23) {
		return (int16_t)-12000;
	}
	if (generator == 25) {
		return (int16_t)-12000;
	}
	if (generator == 26) {
		return (int16_t)-12000;
	}
	if (generator == 27) {
		return (int16_t)-12000;
	}
	if (generator == 28) {
		return (int16_t)-12000;
	}
	if (generator == 30) {
		return (int16_t)-12000;
	}
	if (generator == 33) {
		return (int16_t)-12000;
	}
	if (generator == 34) {
		return (int16_t)-12000;
	}
	if (generator == 35) {
		return (int16_t)-12000;
	}
	if (generator == 36) {
		return (int16_t)-12000;
	}
	if (generator == 38) {
		return (int16_t)-12000;
	}
	if (generator == 43) {
		return (int16_t)32512;
	}
	if (generator == 44) {
		return (int16_t)32512;
	}
	if (generator == 46) {
		return (int16_t)-1;
	}
	if (generator == 47) {
		return (int16_t)-1;
	}
	if (generator == 56) {
		return (int16_t)100;
	}
	if (generator == 58) {
		return (int16_t)-1;
	}
	return (int16_t)0;
}

int16_t SF2Region::getShort(int32_t generator) {
	$useLocalCurrentObjectStackCache();
	if (!contains(generator)) {
		return getDefaultValue(generator);
	}
	return $nc(($cast($Short, $($nc(this->generators)->get($($Integer::valueOf(generator)))))))->shortValue();
}

void SF2Region::putShort(int32_t generator, int16_t value) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($Integer::valueOf(generator)));
	$nc(this->generators)->put(var$0, $($Short::valueOf(value)));
}

$bytes* SF2Region::getBytes(int32_t generator) {
	int32_t val = getInteger(generator);
	$var($bytes, bytes, $new($bytes, 2));
	bytes->set(0, (int8_t)((int32_t)(255 & (uint32_t)val)));
	bytes->set(1, (int8_t)(((int32_t)(0x0000FF00 & (uint32_t)val)) >> 8));
	return bytes;
}

void SF2Region::putBytes(int32_t generator, $bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($Integer::valueOf(generator)));
	$nc(this->generators)->put(var$0, $($Short::valueOf((int16_t)($nc(bytes)->get(0) + (bytes->get(1) << 8)))));
}

int32_t SF2Region::getInteger(int32_t generator) {
	return (int32_t)(0x0000FFFF & (uint32_t)(int32_t)getShort(generator));
}

void SF2Region::putInteger(int32_t generator, int32_t value) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($Integer::valueOf(generator)));
	$nc(this->generators)->put(var$0, $($Short::valueOf((int16_t)value)));
}

$List* SF2Region::getModulators() {
	return this->modulators;
}

SF2Region::SF2Region() {
}

$Class* SF2Region::load$($String* name, bool initialize) {
	$loadClass(SF2Region, name, initialize, &_SF2Region_ClassInfo_, allocate$SF2Region);
	return class$;
}

$Class* SF2Region::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com