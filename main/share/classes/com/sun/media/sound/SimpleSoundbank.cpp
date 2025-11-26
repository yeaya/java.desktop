#include <com/sun/media/sound/SimpleSoundbank.h>

#include <com/sun/media/sound/ModelInstrumentComparator.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $SoundbankResourceArray = $Array<::javax::sound::midi::SoundbankResource>;
using $ModelInstrumentComparator = ::com::sun::media::sound::ModelInstrumentComparator;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SimpleSoundbank_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, name)},
	{"version", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, version)},
	{"vendor", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, vendor)},
	{"description", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, description)},
	{"resources", "Ljava/util/List;", "Ljava/util/List<Ljavax/sound/midi/SoundbankResource;>;", 0, $field(SimpleSoundbank, resources)},
	{"instruments", "Ljava/util/List;", "Ljava/util/List<Ljavax/sound/midi/Instrument;>;", 0, $field(SimpleSoundbank, instruments)},
	{}
};

$MethodInfo _SimpleSoundbank_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleSoundbank::*)()>(&SimpleSoundbank::init$))},
	{"addAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC},
	{"addInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC},
	{"addResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"removeAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC},
	{"removeInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC},
	{"removeResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC},
	{"setDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVendor", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleSoundbank_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.media.sound.SimpleSoundbank",
	"java.lang.Object",
	"javax.sound.midi.Soundbank",
	_SimpleSoundbank_FieldInfo_,
	_SimpleSoundbank_MethodInfo_
};

$Object* allocate$SimpleSoundbank($Class* clazz) {
	return $of($alloc(SimpleSoundbank));
}

void SimpleSoundbank::init$() {
	$set(this, name, ""_s);
	$set(this, version, ""_s);
	$set(this, vendor, ""_s);
	$set(this, description, ""_s);
	$set(this, resources, $new($ArrayList));
	$set(this, instruments, $new($ArrayList));
}

$String* SimpleSoundbank::getName() {
	return this->name;
}

$String* SimpleSoundbank::getVersion() {
	return this->version;
}

$String* SimpleSoundbank::getVendor() {
	return this->vendor;
}

$String* SimpleSoundbank::getDescription() {
	return this->description;
}

void SimpleSoundbank::setDescription($String* description) {
	$set(this, description, description);
}

void SimpleSoundbank::setName($String* name) {
	$set(this, name, name);
}

void SimpleSoundbank::setVendor($String* vendor) {
	$set(this, vendor, vendor);
}

void SimpleSoundbank::setVersion($String* version) {
	$set(this, version, version);
}

$SoundbankResourceArray* SimpleSoundbank::getResources() {
	return $fcast($SoundbankResourceArray, $nc(this->resources)->toArray($$new($SoundbankResourceArray, $nc(this->resources)->size())));
}

$InstrumentArray* SimpleSoundbank::getInstruments() {
	$useLocalCurrentObjectStackCache();
	$var($InstrumentArray, inslist_array, $fcast($InstrumentArray, $nc(this->instruments)->toArray($$new($InstrumentArray, $nc(this->resources)->size()))));
	$Arrays::sort(inslist_array, $$new($ModelInstrumentComparator));
	return inslist_array;
}

$Instrument* SimpleSoundbank::getInstrument($Patch* patch) {
	$useLocalCurrentObjectStackCache();
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

void SimpleSoundbank::addResource($SoundbankResource* resource) {
	if ($instanceOf($Instrument, resource)) {
		$nc(this->instruments)->add($cast($Instrument, resource));
	} else {
		$nc(this->resources)->add(resource);
	}
}

void SimpleSoundbank::removeResource($SoundbankResource* resource) {
	if ($instanceOf($Instrument, resource)) {
		$nc(this->instruments)->remove($of(resource));
	} else {
		$nc(this->resources)->remove($of(resource));
	}
}

void SimpleSoundbank::addInstrument($Instrument* resource) {
	$nc(this->instruments)->add(resource);
}

void SimpleSoundbank::removeInstrument($Instrument* resource) {
	$nc(this->instruments)->remove($of(resource));
}

void SimpleSoundbank::addAllInstruments($Soundbank* soundbank) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Instrument, ins, arr$->get(i$));
			addInstrument(ins);
		}
	}
}

void SimpleSoundbank::removeAllInstruments($Soundbank* soundbank) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Instrument, ins, arr$->get(i$));
			removeInstrument(ins);
		}
	}
}

SimpleSoundbank::SimpleSoundbank() {
}

$Class* SimpleSoundbank::load$($String* name, bool initialize) {
	$loadClass(SimpleSoundbank, name, initialize, &_SimpleSoundbank_ClassInfo_, allocate$SimpleSoundbank);
	return class$;
}

$Class* SimpleSoundbank::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com