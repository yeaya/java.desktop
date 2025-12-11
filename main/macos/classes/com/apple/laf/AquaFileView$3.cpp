#include <com/apple/laf/AquaFileView$3.h>

#include <com/apple/laf/AquaFileView.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AquaFileView = ::com::apple::laf::AquaFileView;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileView$3_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileView;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileView$3, this$0)},
	{}
};

$MethodInfo _AquaFileView$3_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileView;)V", nullptr, 0, $method(static_cast<void(AquaFileView$3::*)($AquaFileView*)>(&AquaFileView$3::init$))},
	{"removeEldestEntry", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<Ljava/io/File;Lcom/apple/laf/AquaFileView$FileInfo;>;)Z", $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaFileView$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileView",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFileView$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileView$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFileView$FileInfo", "com.apple.laf.AquaFileView", "FileInfo", $STATIC},
	{}
};

$ClassInfo _AquaFileView$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileView$3",
	"java.util.LinkedHashMap",
	nullptr,
	_AquaFileView$3_FieldInfo_,
	_AquaFileView$3_MethodInfo_,
	"Ljava/util/LinkedHashMap<Ljava/io/File;Lcom/apple/laf/AquaFileView$FileInfo;>;",
	&_AquaFileView$3_EnclosingMethodInfo_,
	_AquaFileView$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileView"
};

$Object* allocate$AquaFileView$3($Class* clazz) {
	return $of($alloc(AquaFileView$3));
}

void AquaFileView$3::init$($AquaFileView* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashMap::init$();
}

bool AquaFileView$3::removeEldestEntry($Map$Entry* eldest) {
	return size() > 256;
}

AquaFileView$3::AquaFileView$3() {
}

$Class* AquaFileView$3::load$($String* name, bool initialize) {
	$loadClass(AquaFileView$3, name, initialize, &_AquaFileView$3_ClassInfo_, allocate$AquaFileView$3);
	return class$;
}

$Class* AquaFileView$3::class$ = nullptr;

		} // laf
	} // apple
} // com