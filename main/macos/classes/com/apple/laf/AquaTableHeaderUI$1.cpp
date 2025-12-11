#include <com/apple/laf/AquaTableHeaderUI$1.h>

#include <com/apple/laf/AquaTableHeaderUI$1$1.h>
#include <com/apple/laf/AquaTableHeaderUI$1$2.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $AquaTableHeaderUI$1$1 = ::com::apple::laf::AquaTableHeaderUI$1$1;
using $AquaTableHeaderUI$1$2 = ::com::apple::laf::AquaTableHeaderUI$1$2;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaTableHeaderUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaTableHeaderUI$1::*)()>(&AquaTableHeaderUI$1::init$))},
	{"getInstance", "()Lcom/apple/laf/ClientPropertyApplicator;", "()Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/table/JTableHeader;Ljavax/swing/table/JTableHeader;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaTableHeaderUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTableHeaderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaTableHeaderUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableHeaderUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaTableHeaderUI$1$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTableHeaderUI$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTableHeaderUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTableHeaderUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaTableHeaderUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/table/JTableHeader;Ljavax/swing/table/JTableHeader;>;>;",
	&_AquaTableHeaderUI$1_EnclosingMethodInfo_,
	_AquaTableHeaderUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableHeaderUI"
};

$Object* allocate$AquaTableHeaderUI$1($Class* clazz) {
	return $of($alloc(AquaTableHeaderUI$1));
}

void AquaTableHeaderUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaTableHeaderUI$1::getInstance() {
	$useLocalCurrentObjectStackCache();
	return $of($new($ClientPropertyApplicator, $$new($ClientPropertyApplicator$PropertyArray, {
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaTableHeaderUI$1$1, this, "JTableHeader.selectedColumn"_s)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($AquaTableHeaderUI$1$2, this, "JTableHeader.sortDirection"_s))
	})));
}

AquaTableHeaderUI$1::AquaTableHeaderUI$1() {
}

$Class* AquaTableHeaderUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaTableHeaderUI$1, name, initialize, &_AquaTableHeaderUI$1_ClassInfo_, allocate$AquaTableHeaderUI$1);
	return class$;
}

$Class* AquaTableHeaderUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com