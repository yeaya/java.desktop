#include <com/sun/media/sound/SimpleInstrument.h>

#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SimpleInstrument$SimpleInstrumentPart.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <jcpp.h>

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $SimpleInstrument$SimpleInstrumentPart = ::com::sun::media::sound::SimpleInstrument$SimpleInstrumentPart;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SimpleInstrument_FieldInfo_[] = {
	{"preset", "I", nullptr, $PROTECTED, $field(SimpleInstrument, preset)},
	{"bank", "I", nullptr, $PROTECTED, $field(SimpleInstrument, bank)},
	{"percussion", "Z", nullptr, $PROTECTED, $field(SimpleInstrument, percussion)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SimpleInstrument, name)},
	{"parts", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SimpleInstrument$SimpleInstrumentPart;>;", $PROTECTED, $field(SimpleInstrument, parts)},
	{}
};

$MethodInfo _SimpleInstrument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleInstrument::*)()>(&SimpleInstrument::init$))},
	{"add", "([Lcom/sun/media/sound/ModelPerformer;IIIII)V", nullptr, $PUBLIC},
	{"add", "([Lcom/sun/media/sound/ModelPerformer;IIII)V", nullptr, $PUBLIC},
	{"add", "([Lcom/sun/media/sound/ModelPerformer;II)V", nullptr, $PUBLIC},
	{"add", "([Lcom/sun/media/sound/ModelPerformer;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelPerformer;IIIII)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelPerformer;IIII)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelPerformer;II)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelPerformer;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelInstrument;IIIII)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelInstrument;IIII)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelInstrument;II)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/media/sound/ModelInstrument;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPatch", "()Lcom/sun/media/sound/ModelPatch;", nullptr, $PUBLIC},
	{"getPerformers", "()[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPatch", "(Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SimpleInstrument_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart", "com.sun.media.sound.SimpleInstrument", "SimpleInstrumentPart", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SimpleInstrument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.media.sound.SimpleInstrument",
	"com.sun.media.sound.ModelInstrument",
	nullptr,
	_SimpleInstrument_FieldInfo_,
	_SimpleInstrument_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleInstrument_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart"
};

$Object* allocate$SimpleInstrument($Class* clazz) {
	return $of($alloc(SimpleInstrument));
}

void SimpleInstrument::init$() {
	$ModelInstrument::init$(nullptr, nullptr, nullptr, nullptr);
	this->preset = 0;
	this->bank = 0;
	this->percussion = false;
	$set(this, name, ""_s);
	$set(this, parts, $new($ArrayList));
}

void SimpleInstrument::clear() {
	$nc(this->parts)->clear();
}

void SimpleInstrument::add($ModelPerformerArray* performers, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo, int32_t exclusiveClass) {
	$var($SimpleInstrument$SimpleInstrumentPart, part, $new($SimpleInstrument$SimpleInstrumentPart));
	$set(part, performers, performers);
	part->keyFrom = keyFrom;
	part->keyTo = keyTo;
	part->velFrom = velFrom;
	part->velTo = velTo;
	part->exclusiveClass = exclusiveClass;
	$nc(this->parts)->add(part);
}

void SimpleInstrument::add($ModelPerformerArray* performers, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo) {
	add(performers, keyFrom, keyTo, velFrom, velTo, -1);
}

void SimpleInstrument::add($ModelPerformerArray* performers, int32_t keyFrom, int32_t keyTo) {
	add(performers, keyFrom, keyTo, 0, 127, -1);
}

void SimpleInstrument::add($ModelPerformerArray* performers) {
	add(performers, 0, 127, 0, 127, -1);
}

void SimpleInstrument::add($ModelPerformer* performer, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo, int32_t exclusiveClass) {
	add($$new($ModelPerformerArray, {performer}), keyFrom, keyTo, velFrom, velTo, exclusiveClass);
}

void SimpleInstrument::add($ModelPerformer* performer, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo) {
	add($$new($ModelPerformerArray, {performer}), keyFrom, keyTo, velFrom, velTo);
}

void SimpleInstrument::add($ModelPerformer* performer, int32_t keyFrom, int32_t keyTo) {
	add($$new($ModelPerformerArray, {performer}), keyFrom, keyTo);
}

void SimpleInstrument::add($ModelPerformer* performer) {
	add($$new($ModelPerformerArray, {performer}));
}

void SimpleInstrument::add($ModelInstrument* ins, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo, int32_t exclusiveClass) {
	add($($nc(ins)->getPerformers()), keyFrom, keyTo, velFrom, velTo, exclusiveClass);
}

void SimpleInstrument::add($ModelInstrument* ins, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo) {
	add($($nc(ins)->getPerformers()), keyFrom, keyTo, velFrom, velTo);
}

void SimpleInstrument::add($ModelInstrument* ins, int32_t keyFrom, int32_t keyTo) {
	add($($nc(ins)->getPerformers()), keyFrom, keyTo);
}

void SimpleInstrument::add($ModelInstrument* ins) {
	add($($nc(ins)->getPerformers()));
}

$ModelPerformerArray* SimpleInstrument::getPerformers() {
	int32_t percount = 0;
	{
		$var($Iterator, i$, $nc(this->parts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SimpleInstrument$SimpleInstrumentPart, part, $cast($SimpleInstrument$SimpleInstrumentPart, i$->next()));
			if ($nc(part)->performers != nullptr) {
				percount += $nc(part->performers)->length;
			}
		}
	}
	$var($ModelPerformerArray, performers, $new($ModelPerformerArray, percount));
	int32_t px = 0;
	{
		$var($Iterator, i$, $nc(this->parts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SimpleInstrument$SimpleInstrumentPart, part, $cast($SimpleInstrument$SimpleInstrumentPart, i$->next()));
			{
				if ($nc(part)->performers != nullptr) {
					{
						$var($ModelPerformerArray, arr$, part->performers);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($ModelPerformer, mperfm, arr$->get(i$));
							{
								$var($ModelPerformer, performer, $new($ModelPerformer));
								performer->setName($(getName()));
								performers->set(px++, performer);
								performer->setDefaultConnectionsEnabled($nc(mperfm)->isDefaultConnectionsEnabled());
								performer->setKeyFrom($nc(mperfm)->getKeyFrom());
								performer->setKeyTo($nc(mperfm)->getKeyTo());
								performer->setVelFrom($nc(mperfm)->getVelFrom());
								performer->setVelTo($nc(mperfm)->getVelTo());
								performer->setExclusiveClass($nc(mperfm)->getExclusiveClass());
								performer->setSelfNonExclusive($nc(mperfm)->isSelfNonExclusive());
								performer->setReleaseTriggered($nc(mperfm)->isReleaseTriggered());
								if (part->exclusiveClass != -1) {
									performer->setExclusiveClass(part->exclusiveClass);
								}
								if (part->keyFrom > performer->getKeyFrom()) {
									performer->setKeyFrom(part->keyFrom);
								}
								if (part->keyTo < performer->getKeyTo()) {
									performer->setKeyTo(part->keyTo);
								}
								if (part->velFrom > performer->getVelFrom()) {
									performer->setVelFrom(part->velFrom);
								}
								if (part->velTo < performer->getVelTo()) {
									performer->setVelTo(part->velTo);
								}
								$nc($(performer->getOscillators()))->addAll($($nc(mperfm)->getOscillators()));
								$nc($(performer->getConnectionBlocks()))->addAll($($nc(mperfm)->getConnectionBlocks()));
							}
						}
					}
				}
			}
		}
	}
	return performers;
}

$Object* SimpleInstrument::getData() {
	return $of(nullptr);
}

$String* SimpleInstrument::getName() {
	return this->name;
}

void SimpleInstrument::setName($String* name) {
	$set(this, name, name);
}

$Patch* SimpleInstrument::getPatch() {
	return $new($ModelPatch, this->bank, this->preset, this->percussion);
}

void SimpleInstrument::setPatch($Patch* patch) {
	if ($instanceOf($ModelPatch, patch) && $nc(($cast($ModelPatch, patch)))->isPercussion()) {
		this->percussion = true;
		this->bank = $nc(patch)->getBank();
		this->preset = patch->getProgram();
	} else {
		this->percussion = false;
		this->bank = $nc(patch)->getBank();
		this->preset = patch->getProgram();
	}
}

SimpleInstrument::SimpleInstrument() {
}

$Class* SimpleInstrument::load$($String* name, bool initialize) {
	$loadClass(SimpleInstrument, name, initialize, &_SimpleInstrument_ClassInfo_, allocate$SimpleInstrument);
	return class$;
}

$Class* SimpleInstrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com