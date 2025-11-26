#include <com/sun/media/sound/SF2Layer.h>

#include <com/sun/media/sound/SF2GlobalRegion.h>
#include <com/sun/media/sound/SF2Soundbank.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $SF2GlobalRegion = ::com::sun::media::sound::SF2GlobalRegion;
using $SF2Soundbank = ::com::sun::media::sound::SF2Soundbank;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Layer_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SF2Layer, name)},
	{"globalregion", "Lcom/sun/media/sound/SF2GlobalRegion;", nullptr, 0, $field(SF2Layer, globalregion)},
	{"regions", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SF2LayerRegion;>;", 0, $field(SF2Layer, regions)},
	{}
};

$MethodInfo _SF2Layer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SF2Soundbank;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Layer::*)($SF2Soundbank*)>(&SF2Layer::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2Layer::*)()>(&SF2Layer::init$))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getGlobalRegion", "()Lcom/sun/media/sound/SF2GlobalRegion;", nullptr, $PUBLIC, $method(static_cast<$SF2GlobalRegion*(SF2Layer::*)()>(&SF2Layer::getGlobalRegion))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRegions", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/SF2LayerRegion;>;", $PUBLIC, $method(static_cast<$List*(SF2Layer::*)()>(&SF2Layer::getRegions))},
	{"setGlobalZone", "(Lcom/sun/media/sound/SF2GlobalRegion;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Layer::*)($SF2GlobalRegion*)>(&SF2Layer::setGlobalZone))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Layer::*)($String*)>(&SF2Layer::setName))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SF2Layer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Layer",
	"javax.sound.midi.SoundbankResource",
	nullptr,
	_SF2Layer_FieldInfo_,
	_SF2Layer_MethodInfo_
};

$Object* allocate$SF2Layer($Class* clazz) {
	return $of($alloc(SF2Layer));
}

void SF2Layer::init$($SF2Soundbank* soundBank) {
	$SoundbankResource::init$(soundBank, nullptr, nullptr);
	$set(this, name, ""_s);
	$set(this, globalregion, nullptr);
	$set(this, regions, $new($ArrayList));
}

void SF2Layer::init$() {
	$SoundbankResource::init$(nullptr, nullptr, nullptr);
	$set(this, name, ""_s);
	$set(this, globalregion, nullptr);
	$set(this, regions, $new($ArrayList));
}

$Object* SF2Layer::getData() {
	return $of(nullptr);
}

$String* SF2Layer::getName() {
	return this->name;
}

void SF2Layer::setName($String* name) {
	$set(this, name, name);
}

$List* SF2Layer::getRegions() {
	return this->regions;
}

$SF2GlobalRegion* SF2Layer::getGlobalRegion() {
	return this->globalregion;
}

void SF2Layer::setGlobalZone($SF2GlobalRegion* zone) {
	$set(this, globalregion, zone);
}

$String* SF2Layer::toString() {
	return $str({"Layer: "_s, this->name});
}

SF2Layer::SF2Layer() {
}

$Class* SF2Layer::load$($String* name, bool initialize) {
	$loadClass(SF2Layer, name, initialize, &_SF2Layer_ClassInfo_, allocate$SF2Layer);
	return class$;
}

$Class* SF2Layer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com