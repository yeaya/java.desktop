#include <com/sun/media/sound/ModelConnectionBlock.h>

#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelSource.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ModelSourceArray = $Array<::com::sun::media::sound::ModelSource>;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelConnectionBlock_FieldInfo_[] = {
	{"no_sources", "[Lcom/sun/media/sound/ModelSource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelConnectionBlock, no_sources)},
	{"sources", "[Lcom/sun/media/sound/ModelSource;", nullptr, $PRIVATE, $field(ModelConnectionBlock, sources)},
	{"scale", "D", nullptr, $PRIVATE, $field(ModelConnectionBlock, scale)},
	{"destination", "Lcom/sun/media/sound/ModelDestination;", nullptr, $PRIVATE, $field(ModelConnectionBlock, destination)},
	{}
};

$MethodInfo _ModelConnectionBlock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)()>(&ModelConnectionBlock::init$))},
	{"<init>", "(DLcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)(double,$ModelDestination*)>(&ModelConnectionBlock::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelSource*,$ModelDestination*)>(&ModelConnectionBlock::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelSource;DLcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelSource*,double,$ModelDestination*)>(&ModelConnectionBlock::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelSource*,$ModelSource*,$ModelDestination*)>(&ModelConnectionBlock::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelSource;DLcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelSource*,$ModelSource*,double,$ModelDestination*)>(&ModelConnectionBlock::init$))},
	{"addSource", "(Lcom/sun/media/sound/ModelSource;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelSource*)>(&ModelConnectionBlock::addSource))},
	{"getDestination", "()Lcom/sun/media/sound/ModelDestination;", nullptr, $PUBLIC, $method(static_cast<$ModelDestination*(ModelConnectionBlock::*)()>(&ModelConnectionBlock::getDestination))},
	{"getScale", "()D", nullptr, $PUBLIC, $method(static_cast<double(ModelConnectionBlock::*)()>(&ModelConnectionBlock::getScale))},
	{"getSources", "()[Lcom/sun/media/sound/ModelSource;", nullptr, $PUBLIC, $method(static_cast<$ModelSourceArray*(ModelConnectionBlock::*)()>(&ModelConnectionBlock::getSources))},
	{"setDestination", "(Lcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelDestination*)>(&ModelConnectionBlock::setDestination))},
	{"setScale", "(D)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)(double)>(&ModelConnectionBlock::setScale))},
	{"setSources", "([Lcom/sun/media/sound/ModelSource;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelConnectionBlock::*)($ModelSourceArray*)>(&ModelConnectionBlock::setSources))},
	{}
};

$ClassInfo _ModelConnectionBlock_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelConnectionBlock",
	"java.lang.Object",
	nullptr,
	_ModelConnectionBlock_FieldInfo_,
	_ModelConnectionBlock_MethodInfo_
};

$Object* allocate$ModelConnectionBlock($Class* clazz) {
	return $of($alloc(ModelConnectionBlock));
}

$ModelSourceArray* ModelConnectionBlock::no_sources = nullptr;

void ModelConnectionBlock::init$() {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = (double)1;
}

void ModelConnectionBlock::init$(double scale, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = (double)1;
	this->scale = scale;
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = (double)1;
	if (source != nullptr) {
		$set(this, sources, $new($ModelSourceArray, 1));
		$nc(this->sources)->set(0, source);
	}
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, double scale, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = (double)1;
	if (source != nullptr) {
		$set(this, sources, $new($ModelSourceArray, 1));
		$nc(this->sources)->set(0, source);
	}
	this->scale = scale;
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, $ModelSource* control, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = (double)1;
	if (source != nullptr) {
		if (control == nullptr) {
			$set(this, sources, $new($ModelSourceArray, 1));
			$nc(this->sources)->set(0, source);
		} else {
			$set(this, sources, $new($ModelSourceArray, 2));
			$nc(this->sources)->set(0, source);
			$nc(this->sources)->set(1, control);
		}
	}
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, $ModelSource* control, double scale, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = (double)1;
	if (source != nullptr) {
		if (control == nullptr) {
			$set(this, sources, $new($ModelSourceArray, 1));
			$nc(this->sources)->set(0, source);
		} else {
			$set(this, sources, $new($ModelSourceArray, 2));
			$nc(this->sources)->set(0, source);
			$nc(this->sources)->set(1, control);
		}
	}
	this->scale = scale;
	$set(this, destination, destination);
}

$ModelDestination* ModelConnectionBlock::getDestination() {
	return this->destination;
}

void ModelConnectionBlock::setDestination($ModelDestination* destination) {
	$set(this, destination, destination);
}

double ModelConnectionBlock::getScale() {
	return this->scale;
}

void ModelConnectionBlock::setScale(double scale) {
	this->scale = scale;
}

$ModelSourceArray* ModelConnectionBlock::getSources() {
	return $fcast($ModelSourceArray, $Arrays::copyOf(this->sources, $nc(this->sources)->length));
}

void ModelConnectionBlock::setSources($ModelSourceArray* source) {
	$set(this, sources, source == nullptr ? ModelConnectionBlock::no_sources : $fcast($ModelSourceArray, $Arrays::copyOf(source, $nc(source)->length)));
}

void ModelConnectionBlock::addSource($ModelSource* source) {
	$var($ModelSourceArray, oldsources, this->sources);
	$set(this, sources, $new($ModelSourceArray, $nc(oldsources)->length + 1));
	$System::arraycopy(oldsources, 0, this->sources, 0, oldsources->length);
	$nc(this->sources)->set($nc(this->sources)->length - 1, source);
}

void clinit$ModelConnectionBlock($Class* class$) {
	$assignStatic(ModelConnectionBlock::no_sources, $new($ModelSourceArray, 0));
}

ModelConnectionBlock::ModelConnectionBlock() {
}

$Class* ModelConnectionBlock::load$($String* name, bool initialize) {
	$loadClass(ModelConnectionBlock, name, initialize, &_ModelConnectionBlock_ClassInfo_, clinit$ModelConnectionBlock, allocate$ModelConnectionBlock);
	return class$;
}

$Class* ModelConnectionBlock::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com