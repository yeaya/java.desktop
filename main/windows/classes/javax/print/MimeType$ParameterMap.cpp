#include <javax/print/MimeType$ParameterMap.h>

#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Set.h>
#include <javax/print/MimeType$ParameterMapEntrySet.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Set = ::java::util::Set;
using $MimeType = ::javax::print::MimeType;
using $MimeType$ParameterMapEntrySet = ::javax::print::MimeType$ParameterMapEntrySet;

namespace javax {
	namespace print {

$FieldInfo _MimeType$ParameterMap_FieldInfo_[] = {
	{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMap, this$0)},
	{}
};

$MethodInfo _MimeType$ParameterMap_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/MimeType;)V", nullptr, $PRIVATE, $method(static_cast<void(MimeType$ParameterMap::*)($MimeType*)>(&MimeType$ParameterMap::init$))},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC},
	{}
};

$InnerClassInfo _MimeType$ParameterMap_InnerClassesInfo_[] = {
	{"javax.print.MimeType$ParameterMap", "javax.print.MimeType", "ParameterMap", $PRIVATE},
	{}
};

$ClassInfo _MimeType$ParameterMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.MimeType$ParameterMap",
	"java.util.AbstractMap",
	nullptr,
	_MimeType$ParameterMap_FieldInfo_,
	_MimeType$ParameterMap_MethodInfo_,
	"Ljava/util/AbstractMap<Ljava/lang/String;Ljava/lang/String;>;",
	nullptr,
	_MimeType$ParameterMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.MimeType"
};

$Object* allocate$MimeType$ParameterMap($Class* clazz) {
	return $of($alloc(MimeType$ParameterMap));
}

void MimeType$ParameterMap::init$($MimeType* this$0) {
	$set(this, this$0, this$0);
	$AbstractMap::init$();
}

$Set* MimeType$ParameterMap::entrySet() {
	if (this->this$0->myEntrySet == nullptr) {
		$set(this->this$0, myEntrySet, $new($MimeType$ParameterMapEntrySet, this->this$0));
	}
	return this->this$0->myEntrySet;
}

MimeType$ParameterMap::MimeType$ParameterMap() {
}

$Class* MimeType$ParameterMap::load$($String* name, bool initialize) {
	$loadClass(MimeType$ParameterMap, name, initialize, &_MimeType$ParameterMap_ClassInfo_, allocate$MimeType$ParameterMap);
	return class$;
}

$Class* MimeType$ParameterMap::class$ = nullptr;

	} // print
} // javax