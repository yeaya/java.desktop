#include <com/sun/media/sound/SoftPerformer$KeySortComparator.h>

#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <jcpp.h>

using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftPerformer$KeySortComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer$KeySortComparator::*)()>(&SoftPerformer$KeySortComparator::init$))},
	{"compare", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelSource;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _SoftPerformer$KeySortComparator_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftPerformer$KeySortComparator", "com.sun.media.sound.SoftPerformer", "KeySortComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftPerformer$KeySortComparator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftPerformer$KeySortComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_SoftPerformer$KeySortComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lcom/sun/media/sound/ModelSource;>;",
	nullptr,
	_SoftPerformer$KeySortComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftPerformer"
};

$Object* allocate$SoftPerformer$KeySortComparator($Class* clazz) {
	return $of($alloc(SoftPerformer$KeySortComparator));
}

void SoftPerformer$KeySortComparator::init$() {
}

int32_t SoftPerformer$KeySortComparator::compare($ModelSource* o1, $ModelSource* o2) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(o1)->getIdentifier()))->toString()))->compareTo($($nc($($nc(o2)->getIdentifier()))->toString()));
}

int32_t SoftPerformer$KeySortComparator::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($ModelSource, o1), $cast($ModelSource, o2));
}

SoftPerformer$KeySortComparator::SoftPerformer$KeySortComparator() {
}

$Class* SoftPerformer$KeySortComparator::load$($String* name, bool initialize) {
	$loadClass(SoftPerformer$KeySortComparator, name, initialize, &_SoftPerformer$KeySortComparator_ClassInfo_, allocate$SoftPerformer$KeySortComparator);
	return class$;
}

$Class* SoftPerformer$KeySortComparator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com