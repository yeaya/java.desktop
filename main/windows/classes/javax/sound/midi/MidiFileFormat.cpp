#include <javax/sound/midi/MidiFileFormat.h>

#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef UNKNOWN_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _MidiFileFormat_FieldInfo_[] = {
	{"UNKNOWN_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MidiFileFormat, UNKNOWN_LENGTH)},
	{"type", "I", nullptr, $PROTECTED, $field(MidiFileFormat, type)},
	{"divisionType", "F", nullptr, $PROTECTED, $field(MidiFileFormat, divisionType)},
	{"resolution", "I", nullptr, $PROTECTED, $field(MidiFileFormat, resolution)},
	{"byteLength", "I", nullptr, $PROTECTED, $field(MidiFileFormat, byteLength)},
	{"microsecondLength", "J", nullptr, $PROTECTED, $field(MidiFileFormat, microsecondLength)},
	{"properties", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(MidiFileFormat, properties$)},
	{}
};

$MethodInfo _MidiFileFormat_MethodInfo_[] = {
	{"<init>", "(IFIIJ)V", nullptr, $PUBLIC, $method(static_cast<void(MidiFileFormat::*)(int32_t,float,int32_t,int32_t,int64_t)>(&MidiFileFormat::init$))},
	{"<init>", "(IFIIJLjava/util/Map;)V", "(IFIIJLjava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(MidiFileFormat::*)(int32_t,float,int32_t,int32_t,int64_t,$Map*)>(&MidiFileFormat::init$))},
	{"getByteLength", "()I", nullptr, $PUBLIC},
	{"getDivisionType", "()F", nullptr, $PUBLIC},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getResolution", "()I", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"properties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{}
};

$ClassInfo _MidiFileFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.MidiFileFormat",
	"java.lang.Object",
	nullptr,
	_MidiFileFormat_FieldInfo_,
	_MidiFileFormat_MethodInfo_
};

$Object* allocate$MidiFileFormat($Class* clazz) {
	return $of($alloc(MidiFileFormat));
}

void MidiFileFormat::init$(int32_t type, float divisionType, int32_t resolution, int32_t bytes, int64_t microseconds) {
	this->type = type;
	this->divisionType = divisionType;
	this->resolution = resolution;
	this->byteLength = bytes;
	this->microsecondLength = microseconds;
	$set(this, properties$, nullptr);
}

void MidiFileFormat::init$(int32_t type, float divisionType, int32_t resolution, int32_t bytes, int64_t microseconds, $Map* properties) {
	MidiFileFormat::init$(type, divisionType, resolution, bytes, microseconds);
	$set(this, properties$, $new($HashMap, properties));
}

int32_t MidiFileFormat::getType() {
	return this->type;
}

float MidiFileFormat::getDivisionType() {
	return this->divisionType;
}

int32_t MidiFileFormat::getResolution() {
	return this->resolution;
}

int32_t MidiFileFormat::getByteLength() {
	return this->byteLength;
}

int64_t MidiFileFormat::getMicrosecondLength() {
	return this->microsecondLength;
}

$Map* MidiFileFormat::properties() {
	$var($Map, ret, nullptr);
	if (this->properties$ == nullptr) {
		$assign(ret, $new($HashMap, 0));
	} else {
		$assign(ret, ($cast($Map, $nc(this->properties$)->clone())));
	}
	return $Collections::unmodifiableMap(ret);
}

$Object* MidiFileFormat::getProperty($String* key) {
	if (this->properties$ == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->properties$)->get(key));
}

MidiFileFormat::MidiFileFormat() {
}

$Class* MidiFileFormat::load$($String* name, bool initialize) {
	$loadClass(MidiFileFormat, name, initialize, &_MidiFileFormat_ClassInfo_, allocate$MidiFileFormat);
	return class$;
}

$Class* MidiFileFormat::class$ = nullptr;

		} // midi
	} // sound
} // javax